// FUN_000281e8 @ 000281e8  size=424  callers=1
// program: bmminer


undefined4 FUN_000281e8(void)

{
  int iVar1;
  int iVar2;
  uint *__ptr;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;
  char local_820 [20];
  undefined4 local_80c;
  char acStack_808 [2024];
  
  iVar1 = FUN_0002001c();
  iVar2 = FUN_0002008c();
  iVar2 = iVar2 * iVar1;
  __ptr = malloc(iVar2 * 4);
  if (__ptr == (uint *)0x0) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_820,"failed alloc memory!",0x14);
      local_80c = CONCAT22(local_80c._2_2_,10);
      FUN_00032218(3,local_820,0);
    }
  }
  else {
    iVar1 = 0;
    do {
      iVar3 = FUN_000201d8(iVar1);
      if ((iVar3 != 0) && (iVar2 != 0)) {
        puVar5 = __ptr + -1;
        uVar6 = 0;
        iVar7 = 0;
        iVar3 = 0;
        do {
          uVar4 = FUN_0003080c(iVar1,iVar3);
          iVar3 = iVar3 + 1;
          bVar8 = CARRY4(uVar6,uVar4);
          uVar6 = uVar6 + uVar4;
          iVar7 = iVar7 + (uint)bVar8;
          puVar5 = puVar5 + 1;
          *puVar5 = uVar4;
        } while (iVar2 != iVar3);
        uVar9 = FUN_00067ad0(uVar6,iVar7,iVar2,0);
        uVar6 = (uint)((ulonglong)uVar9 >> 0x20);
        if (uVar6 != 0 || 4999 < (uint)uVar9) {
          uVar6 = uVar6 >> 1;
          uVar4 = (uint)((byte)((ulonglong)uVar9 >> 0x20) & 1) << 0x1f | (uint)uVar9 >> 1;
          bVar8 = uVar6 == 0;
          if (uVar6 == 0) {
            bVar8 = uVar4 <= *__ptr;
          }
          if (!bVar8) {
LAB_000282ec:
            if (3 < DAT_00087bbc) {
              builtin_strncpy(local_820,"Domain unbalance hap",0x14);
              local_80c._0_1_ = 'p';
              local_80c._1_1_ = 'e';
              local_80c._2_1_ = 'n';
              local_80c._3_1_ = 'e';
              builtin_strncpy(acStack_808,"d!\n",4);
              FUN_00032218(3,local_820,0);
            }
            free(__ptr);
            return 1;
          }
          iVar7 = 0;
          puVar5 = __ptr;
          while (iVar7 = iVar7 + 1, iVar7 != iVar3) {
            puVar5 = puVar5 + 1;
            bVar8 = uVar6 == 0;
            if (uVar6 == 0) {
              bVar8 = uVar4 <= *puVar5;
            }
            if (!bVar8) goto LAB_000282ec;
          }
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
    free(__ptr);
  }
  return 0;
}

