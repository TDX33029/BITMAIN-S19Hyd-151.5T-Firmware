// FUN_000346ac @ 000346ac  size=836  callers=2
// program: cgminer


void FUN_000346ac(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *__format;
  int iVar7;
  int param3;
  int iVar8;
  bool bVar9;
  undefined4 uVar10;
  int local_824;
  char acStack_820 [2052];
  
  iVar1 = pthread_mutex_lock(DAT_00068b30);
  if (iVar1 != 0) {
    piVar4 = __errno_location();
    iVar1 = *piVar4;
    __format = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
    uVar10 = 0x1545;
    goto LAB_00034994;
  }
  local_824 = DAT_00068c14;
  if (DAT_00068c14 != 0) {
    iVar7 = *(int *)(DAT_00068c14 + 0x160);
    iVar2 = FUN_00033d64(DAT_00068c14,0);
    param3 = 0;
    iVar1 = DAT_00068c14;
    do {
      DAT_00068c14 = iVar1;
      if (iVar2 != 0) {
        iVar2 = *(int *)(local_824 + 0x15c);
        puVar3 = *(undefined4 **)(iVar1 + 0x158);
        if (iVar2 == 0) {
          iVar8 = *(int *)(local_824 + 0x160);
          if (iVar8 != 0) {
            iVar5 = puVar3[5];
            if (local_824 == puVar3[4] - iVar5) goto LAB_0003483c;
LAB_00034830:
            iVar1 = iVar8;
            iVar2 = iVar1;
            DAT_00068c14 = iVar1;
            goto LAB_00034738;
          }
          free((void *)*puVar3);
          free(*(void **)(DAT_00068c14 + 0x158));
          DAT_00068c14 = iVar8;
        }
        else {
          iVar5 = puVar3[5];
          if (local_824 == puVar3[4] - iVar5) {
LAB_0003483c:
            puVar3[4] = iVar2 + iVar5;
            iVar2 = *(int *)(local_824 + 0x15c);
            if (iVar2 == 0) {
              iVar8 = *(int *)(local_824 + 0x160);
              goto LAB_00034830;
            }
            iVar5 = *(int *)(*(int *)(iVar1 + 0x158) + 0x14);
          }
          *(undefined4 *)(iVar2 + iVar5 + 8) = *(undefined4 *)(local_824 + 0x160);
          iVar2 = *(int *)(local_824 + 0x160);
LAB_00034738:
          piVar4 = *(int **)(iVar1 + 0x158);
          if (iVar2 != 0) {
            *(undefined4 *)(iVar2 + piVar4[5] + 4) = *(undefined4 *)(local_824 + 0x15c);
            piVar4 = *(int **)(iVar1 + 0x158);
          }
          uVar6 = piVar4[1] - 1U & *(uint *)(local_824 + 0x174);
          iVar2 = *piVar4 + uVar6 * 0xc;
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
          puVar3 = (undefined4 *)(iVar1 + 0x158);
          bVar9 = *(int *)(*(int *)*puVar3 + uVar6 * 0xc) == local_824 + 0x158;
          if (bVar9) {
            iVar1 = *(int *)(local_824 + 0x168);
            *(int *)(*(int *)*puVar3 + uVar6 * 0xc) = iVar1;
          }
          iVar2 = *(int *)(local_824 + 0x168);
          if (bVar9) {
            iVar1 = DAT_00068c14;
          }
          if (*(int *)(local_824 + 0x164) != 0) {
            *(int *)(*(int *)(local_824 + 0x164) + 0x10) = iVar2;
            iVar2 = *(int *)(local_824 + 0x168);
          }
          if (iVar2 != 0) {
            *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(local_824 + 0x164);
          }
          *(int *)(*(int *)(iVar1 + 0x158) + 0xc) = *(int *)(*(int *)(iVar1 + 0x158) + 0xc) + -1;
        }
        param3 = param3 + 1;
        FUN_0002aa68(&local_824,"cgminer.c","discard_stale",0x154c);
      }
      local_824 = iVar7;
      if (iVar7 == 0) goto LAB_0003485c;
      iVar1 = *(int *)(iVar7 + 0x160);
      iVar2 = FUN_00033d64(iVar7,0);
      iVar7 = iVar1;
      iVar1 = DAT_00068c14;
    } while( true );
  }
  pthread_cond_signal((pthread_cond_t *)&DAT_00072e78);
  iVar1 = pthread_mutex_unlock(DAT_00068b30);
  if (iVar1 == 0) {
    (*DAT_0006796c)();
    return;
  }
  goto LAB_000349c0;
LAB_0003485c:
  pthread_cond_signal((pthread_cond_t *)&DAT_00072e78);
  iVar1 = pthread_mutex_unlock(DAT_00068b30);
  if (iVar1 == 0) {
    (*DAT_0006796c)();
    if (((param3 != 0) && (DAT_000686f1 != '\0')) &&
       ((DAT_00072da0 != '\0' || ((DAT_000686f0 != '\0' || (6 < DAT_00067848)))))) {
      snprintf(acStack_820,0x800,"Discarded %d stales that didn\'t match current hash",param3);
      FUN_0001dd98(7,acStack_820,0);
    }
    return;
  }
LAB_000349c0:
  piVar4 = __errno_location();
  iVar1 = *piVar4;
  __format = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
  uVar10 = 0x1552;
LAB_00034994:
  snprintf(acStack_820,0x800,__format,iVar1,"cgminer.c","discard_stale",uVar10);
  FUN_0001dd98(3,acStack_820,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

