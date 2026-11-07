// FUN_01210270 @ 01210270 size=792 calls_out=9 calls_in=0
// strings: 

undefined4
FUN_01210270(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 local_60 [3];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  int local_40;
  int *local_3c;
  int local_30;
  int *piStack_2c;
  int iStack_28;
  
  piVar15 = *(int **)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  piVar9 = piVar15;
  while (piVar9 != piVar15 + iVar3 * 5) {
    piVar5 = piVar9 + 5;
    iVar4 = *piVar9;
    uVar6 = 1;
    if ((int)*(uint *)(iVar4 + 8) < 0) {
      uVar6 = *(uint *)(iVar4 + 8) ^ 0x80000000;
    }
    piVar9 = piVar5;
    if (uVar6 == 0) {
      if (*(int *)(iVar4 + 0xc) == 0) {
        return 0;
      }
    }
    else if (uVar6 == 1) {
      iVar7 = *(int *)(iVar4 + 0x10);
      puVar12 = *(undefined4 **)(iVar4 + 0xc);
      if (iVar7 == 1) {
        iVar4 = (**(code **)(puVar12[1] + 0x10))(*puVar12,param_2,param_5);
        if (iVar4 != 0) {
          return 0;
        }
      }
      else {
        if (iVar7 == 0) {
          return 0;
        }
        puVar10 = puVar12 + iVar7 * 8;
        while (iVar4 = (**(code **)(puVar12[1] + 0x10))(*puVar12,param_2,param_5), iVar4 != 0) {
          puVar12 = puVar12 + 8;
          if (puVar12 == puVar10) {
            return 0;
          }
        }
      }
    }
    else {
      puVar12 = *(undefined4 **)(iVar4 + 0x10);
      iVar4 = *(int *)(iVar4 + 0x14) << 5;
      do {
        if (iVar4 == 0) {
          return 0;
        }
        iVar7 = (**(code **)(puVar12[1] + 0x10))(*puVar12,param_2,param_5);
        iVar4 = iVar4 + -0x20;
        puVar12 = puVar12 + 8;
      } while (iVar7 != 0);
    }
  }
  piVar9 = *(int **)(param_1 + 0xc);
  do {
    iVar4 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar4 + 1;
  if (iVar4 < 0) {
LAB_01210584:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1210584);
    (*pcVar1)();
  }
  uVar13 = *(undefined4 *)(param_1 + 0x10);
  if (param_4 == 0) {
    local_60[0] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar5 = *(int **)(param_4 + 0xc);
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_01210584;
    uVar8 = *(undefined4 *)(param_4 + 0x10);
    uVar14 = *(undefined4 *)(param_4 + 0xc);
    uVar16 = *(uint *)(param_1 + 0x10);
    uVar11 = (*(int **)(param_4 + 4))[1];
    uVar6 = 0;
    if (uVar11 <= uVar16) {
      iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar9 + 2,uVar11);
      uVar6 = uVar11;
      if (iVar4 != 0) {
        uVar6 = 0;
      }
    }
    local_48 = FUN_011e1508((int)(piVar9 + 2) + uVar6,uVar16 - uVar6);
    local_54 = 3;
    local_60[0] = 2;
    local_50 = uVar14;
    local_4c = uVar8;
  }
  uVar17 = FUN_01238114(param_3);
  if (iVar3 == 0) {
    iVar3 = 0;
    local_3c = (int *)&DAT_00000004;
    local_40 = 0;
  }
  else {
    piVar5 = (int *)thunk_FUN_016d4a50(iVar3 * 0xc);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar3 * 0xc);
    }
    iVar4 = 0;
    local_40 = iVar3;
    local_3c = piVar5;
    do {
      uVar18 = FUN_011cf8a8(piVar15,param_2,param_3,param_4,param_5);
      FUN_01158f58(&local_30,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
      piVar15 = piVar15 + 5;
      iVar4 = iVar4 + 1;
      *piVar5 = local_30;
      piVar5[1] = (int)piStack_2c;
      piVar5[2] = iStack_28;
      piVar5 = piVar5 + 3;
    } while (iVar3 != iVar4);
  }
  local_30 = local_40;
  piStack_2c = local_3c;
  iStack_28 = iVar3;
  uVar13 = FUN_011f1680(piVar9,uVar13,local_60,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20),param_2,
                        &local_30);
  return uVar13;
}

