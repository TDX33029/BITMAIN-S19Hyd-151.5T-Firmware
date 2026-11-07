// FUN_0003d1e8 @ 0003d1e8  size=424  callers=1
// program: bmminer


undefined4 FUN_0003d1e8(void)

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
  char local_2020 [20];
  undefined4 local_200c;
  char acStack_2008 [8168];
  
  iVar1 = FUN_0002a504();
  iVar2 = FUN_0002a574();
  iVar2 = iVar2 * iVar1;
  __ptr = malloc(iVar2 * 4);
  if (__ptr == (uint *)0x0) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2020,"failed alloc memory!",0x14);
      local_200c = CONCAT22(local_200c._2_2_,10);
      FUN_0004948c(3,local_2020,0);
    }
  }
  else {
    iVar1 = 0;
    do {
      iVar3 = FUN_0002a6f0(iVar1);
      if ((iVar3 != 0) && (iVar2 != 0)) {
        puVar5 = __ptr + -1;
        uVar6 = 0;
        iVar7 = 0;
        iVar3 = 0;
        do {
          uVar4 = FUN_000473b4(iVar1,iVar3);
          iVar3 = iVar3 + 1;
          bVar8 = CARRY4(uVar6,uVar4);
          uVar6 = uVar6 + uVar4;
          iVar7 = iVar7 + (uint)bVar8;
          puVar5 = puVar5 + 1;
          *puVar5 = uVar4;
        } while (iVar2 != iVar3);
        uVar9 = FUN_00098f3c(uVar6,iVar7,iVar2,0);
        uVar6 = (uint)((ulonglong)uVar9 >> 0x20);
        if (uVar6 != 0 || 4999 < (uint)uVar9) {
          uVar6 = uVar6 >> 1;
          uVar4 = (uint)((byte)((ulonglong)uVar9 >> 0x20) & 1) << 0x1f | (uint)uVar9 >> 1;
          bVar8 = uVar6 == 0;
          if (uVar6 == 0) {
            bVar8 = uVar4 <= *__ptr;
          }
          if (!bVar8) {
LAB_0003d2ec:
            if (3 < DAT_000be63c) {
              builtin_strncpy(local_2020,"Domain unbalance hap",0x14);
              local_200c._0_1_ = 'p';
              local_200c._1_1_ = 'e';
              local_200c._2_1_ = 'n';
              local_200c._3_1_ = 'e';
              builtin_strncpy(acStack_2008,"d!\n",4);
              FUN_0004948c(3,local_2020,0);
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
            if (!bVar8) goto LAB_0003d2ec;
          }
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
    free(__ptr);
  }
  return 0;
}

