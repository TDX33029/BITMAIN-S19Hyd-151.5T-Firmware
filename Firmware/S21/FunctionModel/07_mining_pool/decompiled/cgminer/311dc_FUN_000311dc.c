// FUN_000311dc @ 000311dc  size=664  callers=1
// program: cgminer


undefined8 FUN_000311dc(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  char *__format;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  char acStack_820 [2048];
  
  dVar11 = (double)FUN_0004acbc(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc));
  dVar9 = (double)FUN_0004acbc(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4));
  dVar10 = (double)FUN_0004acbc(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
  dVar12 = (double)FUN_0004acbc(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4));
  dVar12 = dVar12 + dVar11 * 6.277101735386681e+57 + dVar9 * 3.402823669209385e+38 +
                    dVar10 * 1.8446744073709552e+19;
  if (dVar12 == 0.0) {
    dVar12 = 0.0;
  }
  dVar9 = round(2.695953529101131e+67 / dVar12);
  uVar13 = FUN_0004ad88(SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20));
  uVar4 = (uint)((ulonglong)uVar13 >> 0x20);
  uVar1 = (uint)uVar13;
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00076158);
  if (iVar2 == 0) {
    iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00076170);
    if (iVar2 == 0) {
      bVar7 = uVar4 <= DAT_00068b14;
      if (DAT_00068b14 == uVar4) {
        bVar7 = uVar1 <= DAT_00068b10;
      }
      if (!bVar7) {
        DAT_00068b10 = uVar1;
        DAT_00068b14 = uVar4;
        FUN_00028838(uVar1,uVar4,&DAT_000681d8,8,0);
      }
      puVar5 = (uint *)(*(int *)(param_1 + 0x104) + 0x170);
      uVar6 = *(uint *)(*(int *)(param_1 + 0x104) + 0x174);
      bVar8 = uVar4 <= uVar6;
      if (uVar6 == uVar4) {
        bVar8 = uVar1 <= *puVar5;
      }
      if (!bVar8) {
        *(undefined8 *)puVar5 = uVar13;
      }
      iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00076170);
      if (iVar2 == 0) {
        iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076158);
        if (iVar2 == 0) {
          (*DAT_0006796c)();
          if ((!bVar7) && (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)))
             ) {
            snprintf(acStack_820,0x800,"New best share: %s",(char *)&DAT_000681d8);
            FUN_0001dd98(6,acStack_820,0);
          }
          return uVar13;
        }
        piVar3 = __errno_location();
        iVar2 = *piVar3;
        __format = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
        uVar14 = 0x146f;
      }
      else {
        piVar3 = __errno_location();
        iVar2 = *piVar3;
        __format = "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d";
        uVar14 = 0x146f;
      }
    }
    else {
      piVar3 = __errno_location();
      iVar2 = *piVar3;
      __format = "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d";
      uVar14 = 0x1461;
    }
  }
  else {
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    __format = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
    uVar14 = 0x1461;
  }
  snprintf(acStack_820,0x800,__format,iVar2,"cgminer.c","share_diff",uVar14);
  FUN_0001dd98(3,acStack_820,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

