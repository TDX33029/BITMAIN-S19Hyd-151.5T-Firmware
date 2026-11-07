// FUN_0001e2b0 @ 0001e2b0  size=1020  callers=0
// program: cgminer


undefined4 FUN_0001e2b0(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  pthread_mutex_t *ppVar8;
  int iVar9;
  uint in_fpscr;
  undefined4 uVar10;
  undefined4 extraout_s1;
  double dVar11;
  double dVar12;
  undefined4 local_830;
  undefined4 uStack_82c;
  char acStack_828 [2052];
  
  puVar7 = *(undefined4 **)(param_1 + 0x18);
  if (puVar7 == (undefined4 *)0x0) {
    uVar10 = 0;
  }
  else {
    FUN_000206d8(&local_830);
    uVar6 = puVar7[4];
    puVar7[4] = uVar6 + 1;
    puVar7[5] = puVar7[5] + (uint)(0xfffffffe < uVar6);
    ppVar8 = *(pthread_mutex_t **)(puVar7[1] + 8);
    iVar4 = pthread_mutex_lock(ppVar8);
    if (iVar4 != 0) {
      piVar5 = __errno_location();
      snprintf(acStack_828,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar5,
               "noncedup.c","isdupnonce",0x46);
      FUN_0001dd98(3,acStack_828,1);
      FUN_0003c34c(1);
    }
    iVar4 = pthread_rwlock_wrlock((pthread_rwlock_t *)(ppVar8 + 1));
    if (iVar4 != 0) {
      piVar5 = __errno_location();
      snprintf(acStack_828,0x800,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar5,
               "noncedup.c","isdupnonce",0x46);
      FUN_0001dd98(3,acStack_828,1);
      FUN_0003c34c(1);
    }
    iVar4 = *(int *)(puVar7[2] + 0x10);
    bVar3 = true;
    while( true ) {
      bVar2 = bVar3;
      if (iVar4 == 0) {
        bVar2 = false;
      }
      if (!bVar2) break;
      if ((**(int **)(iVar4 + 0xc) == *(int *)(param_2 + 0x154)) &&
         ((*(int **)(iVar4 + 0xc))[1] == param_3)) {
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (bVar3 = false, 3 < DAT_00067848))
        {
          bVar3 = false;
          snprintf(acStack_828,0x800,"%s%d: Duplicate nonce %08x",
                   *(char **)(*(int *)(param_1 + 4) + 8),*(int *)(param_1 + 8),param_3);
          FUN_0001dd98(4,acStack_828,0);
        }
      }
      else {
        iVar4 = *(int *)(iVar4 + 4);
        bVar3 = bVar2;
      }
    }
    if (bVar3) {
      iVar4 = FUN_0001d1e8(puVar7[1],"noncedup.c","isdupnonce",0x51);
      **(undefined4 **)(iVar4 + 0xc) = *(undefined4 *)(param_2 + 0x154);
      *(uint *)(*(int *)(iVar4 + 0xc) + 4) = param_3;
      iVar9 = *(int *)(iVar4 + 0xc);
      *(undefined4 *)(iVar9 + 0xc) = uStack_82c;
      *(undefined4 *)(iVar9 + 8) = local_830;
      FUN_0001d364(puVar7[2],iVar4,"noncedup.c","isdupnonce",0x55);
    }
    iVar4 = *(int *)(puVar7[2] + 0x10);
    while (iVar4 != 0) {
      uVar10 = FUN_00020a04(*(int *)(iVar4 + 0xc) + 8,&local_830);
      dVar11 = (double)CONCAT44(extraout_s1,uVar10);
      dVar12 = (double)VectorSignedToFloat(*puVar7,(byte)(in_fpscr >> 0x16) & 3);
      uVar6 = in_fpscr & 0xfffffff | (uint)(dVar11 < dVar12) << 0x1f |
              (uint)(dVar11 == dVar12) << 0x1e;
      in_fpscr = uVar6 | (uint)(NAN(dVar11) || NAN(dVar12)) << 0x1c;
      bVar1 = (byte)(uVar6 >> 0x18);
      if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) break;
      uVar10 = FUN_0001d29c(puVar7[2],"noncedup.c","isdupnonce",0x59);
      FUN_0001d364(puVar7[1],uVar10,"noncedup.c","isdupnonce",0x5a);
      iVar4 = *(int *)(puVar7[2] + 0x10);
    }
    ppVar8 = *(pthread_mutex_t **)(puVar7[1] + 8);
    iVar4 = pthread_rwlock_unlock((pthread_rwlock_t *)(ppVar8 + 1));
    if (iVar4 != 0) {
      piVar5 = __errno_location();
      snprintf(acStack_828,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar5,
               "noncedup.c","isdupnonce",0x5d);
      FUN_0001dd98(3,acStack_828,1);
      FUN_0003c34c(1);
    }
    iVar4 = pthread_mutex_unlock(ppVar8);
    if (iVar4 != 0) {
      piVar5 = __errno_location();
      snprintf(acStack_828,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar5,
               "noncedup.c","isdupnonce",0x5d);
      FUN_0001dd98(3,acStack_828,1);
      FUN_0003c34c(1);
    }
    (*DAT_0006796c)();
    uVar10 = 0;
    if (!bVar3) {
      uVar6 = puVar7[6];
      uVar10 = 1;
      puVar7[6] = uVar6 + 1;
      puVar7[7] = puVar7[7] + (uint)(0xfffffffe < uVar6);
    }
  }
  return uVar10;
}

