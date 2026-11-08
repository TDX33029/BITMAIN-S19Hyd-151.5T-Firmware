// FUN_01539850 @ 01539850 size=620 calls_out=10 calls_in=0
// strings: 

undefined4
FUN_01539850(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 local_60 [3];
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  undefined8 local_48;
  int local_40;
  int *local_3c;
  int local_38;
  int local_30;
  int *piStack_2c;
  int iStack_28;
  
  iVar10 = *(int *)(param_1 + 8);
  iVar12 = *(int *)(param_1 + 4);
  iVar8 = iVar10 * 0x14;
  iVar6 = iVar12;
  while (iVar8 != 0) {
    iVar3 = FUN_01577618(iVar6,param_2,param_5);
    iVar8 = iVar8 + -0x14;
    iVar6 = iVar6 + 0x14;
    if (iVar3 != 0) {
      return 0;
    }
  }
  piVar7 = *(int **)(param_1 + 0xc);
  do {
    iVar8 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar8 + 1;
  if (iVar8 < 0) {
LAB_01539ab8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1539ab8);
    (*pcVar1)();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  if (param_4 == 0) {
    local_60[0] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar11 = *(int **)(param_4 + 0xc);
    do {
      iVar8 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_01539ab8;
    uVar5 = 0;
    uVar14 = *(uint *)(param_1 + 0x10);
    uVar9 = (*(int **)(param_4 + 4))[1];
    iVar8 = *(int *)(param_1 + 0xc) + 8;
    uVar13 = *(undefined4 *)(param_4 + 0x10);
    if (uVar9 <= uVar14) {
      iVar6 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar8,uVar9);
      uVar5 = uVar9;
      if (iVar6 != 0) {
        uVar5 = 0;
      }
    }
    local_48 = FUN_016bc0ec(iVar8 + uVar5,uVar14 - uVar5);
    local_54 = 3;
    local_60[0] = 2;
    local_50 = piVar11;
    local_4c = uVar13;
  }
  uVar15 = FUN_01531840(param_3);
  if (iVar10 == 0) {
    iVar10 = 0;
    local_3c = (int *)&SUB_00000004;
    local_40 = 0;
  }
  else {
    local_3c = (int *)FUN_01298504(iVar10 * 0xc,4);
    if (local_3c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,iVar10 * 0xc);
    }
    iVar8 = 0;
    local_38 = 0;
    piVar11 = local_3c;
    local_40 = iVar10;
    do {
      uVar16 = FUN_01576990(iVar12,param_2,param_3,param_4,param_5);
      FUN_014ff278(&local_30,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
      iVar8 = iVar8 + 1;
      iVar12 = iVar12 + 0x14;
      *piVar11 = local_30;
      piVar11[1] = (int)piStack_2c;
      piVar11[2] = iStack_28;
      piVar11 = piVar11 + 3;
    } while (iVar10 != iVar8);
  }
  local_30 = local_40;
  piStack_2c = local_3c;
  local_38 = iVar10;
  iStack_28 = iVar10;
  uVar4 = FUN_01595c64(piVar7,uVar4,local_60,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20),param_2,
                       &local_30);
  return uVar4;
}

