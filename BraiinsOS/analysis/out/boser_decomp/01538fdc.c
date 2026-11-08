// FUN_01538fdc @ 01538fdc size=648 calls_out=11 calls_in=0
// strings: 

undefined8
FUN_01538fdc(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
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
  iVar13 = *(int *)(param_1 + 4);
  iVar11 = iVar10 * 0x14;
  iVar8 = iVar13;
  while (iVar11 != 0) {
    iVar3 = FUN_01577618(iVar8,param_2,param_5);
    iVar11 = iVar11 + -0x14;
    iVar8 = iVar8 + 0x14;
    if (iVar3 != 0) {
      return 0x1cfc1a400000001;
    }
  }
  piVar7 = *(int **)(param_1 + 0xc);
  do {
    iVar11 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar11 + 1;
  if (iVar11 < 0) {
LAB_01539260:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1539260);
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
    piVar12 = *(int **)(param_4 + 0xc);
    do {
      iVar11 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar11 + 1;
    if (iVar11 < 0) goto LAB_01539260;
    uVar5 = *(undefined4 *)(param_4 + 0x10);
    uVar14 = *(uint *)(param_1 + 0x10);
    iVar11 = *(int *)(param_1 + 0xc) + 8;
    uVar9 = (*(int **)(param_4 + 4))[1];
    uVar6 = 0;
    if (uVar9 <= uVar14) {
      iVar8 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar11,uVar9);
      uVar6 = uVar9;
      if (iVar8 != 0) {
        uVar6 = 0;
      }
    }
    local_48 = FUN_016bc0ec(iVar11 + uVar6,uVar14 - uVar6);
    local_54 = 3;
    local_60[0] = 2;
    local_50 = piVar12;
    local_4c = uVar5;
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
    iVar11 = 0;
    local_38 = 0;
    piVar12 = local_3c;
    local_40 = iVar10;
    do {
      uVar16 = FUN_01576990(iVar13,param_2,param_3,param_4,param_5);
      FUN_014ff278(&local_30,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
      iVar11 = iVar11 + 1;
      iVar13 = iVar13 + 0x14;
      *piVar12 = local_30;
      piVar12[1] = (int)piStack_2c;
      piVar12[2] = iStack_28;
      piVar12 = piVar12 + 3;
    } while (iVar10 != iVar11);
  }
  local_30 = local_40;
  piStack_2c = local_3c;
  local_38 = iVar10;
  iStack_28 = iVar10;
  FUN_01595c64(piVar7,uVar4,local_60,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20),param_2,&local_30)
  ;
  uVar15 = FUN_01596948();
  return uVar15;
}

