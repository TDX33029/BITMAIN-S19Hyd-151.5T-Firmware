// FUN_0120f6f0 @ 0120f6f0 size=868 calls_out=10 calls_in=0
// strings: 

undefined8
FUN_0120f6f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
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
  
  piVar14 = *(int **)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  piVar10 = piVar14;
  while (piVar10 != piVar14 + iVar3 * 5) {
    piVar6 = piVar10 + 5;
    iVar4 = *piVar10;
    uVar7 = 1;
    if ((int)*(uint *)(iVar4 + 8) < 0) {
      uVar7 = *(uint *)(iVar4 + 8) ^ 0x80000000;
    }
    piVar10 = piVar6;
    if (uVar7 == 0) {
      if (*(int *)(iVar4 + 0xc) == 0) {
        return 0x188a36400000001;
      }
    }
    else if (uVar7 == 1) {
      puVar9 = *(undefined4 **)(iVar4 + 0xc);
      iVar4 = *(int *)(iVar4 + 0x10);
      if (iVar4 == 1) {
        iVar4 = (**(code **)(puVar9[1] + 0x10))(*puVar9,param_2,param_5);
        if (iVar4 != 0) {
          return 0x188a36400000001;
        }
      }
      else {
        if (iVar4 == 0) {
          return 0x188a36400000001;
        }
        puVar11 = puVar9 + iVar4 * 8;
        while (iVar4 = (**(code **)(puVar9[1] + 0x10))(*puVar9,param_2,param_5), iVar4 != 0) {
          puVar9 = puVar9 + 8;
          if (puVar9 == puVar11) {
            return 0x188a36400000001;
          }
        }
      }
    }
    else {
      puVar9 = *(undefined4 **)(iVar4 + 0x10);
      iVar4 = *(int *)(iVar4 + 0x14) << 5;
      do {
        if (iVar4 == 0) {
          return 0x188a36400000001;
        }
        iVar5 = (**(code **)(puVar9[1] + 0x10))(*puVar9,param_2,param_5);
        iVar4 = iVar4 + -0x20;
        puVar9 = puVar9 + 8;
      } while (iVar5 != 0);
    }
  }
  piVar10 = *(int **)(param_1 + 0xc);
  do {
    iVar4 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar4 + 1;
  if (iVar4 < 0) {
LAB_0120fa54:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x120fa54);
    (*pcVar1)();
  }
  uVar15 = *(undefined4 *)(param_1 + 0x10);
  if (param_4 == 0) {
    local_60[0] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar6 = *(int **)(param_4 + 0xc);
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_0120fa54;
    uVar8 = *(undefined4 *)(param_4 + 0x10);
    uVar13 = *(undefined4 *)(param_4 + 0xc);
    uVar16 = *(uint *)(param_1 + 0x10);
    uVar7 = 0;
    uVar12 = (*(int **)(param_4 + 4))[1];
    if (uVar12 <= uVar16) {
      iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar10 + 2,uVar12);
      uVar7 = uVar12;
      if (iVar4 != 0) {
        uVar7 = 0;
      }
    }
    local_48 = FUN_011e1508((int)(piVar10 + 2) + uVar7,uVar16 - uVar7);
    local_54 = 3;
    local_60[0] = 2;
    local_50 = uVar13;
    local_4c = uVar8;
  }
  uVar17 = FUN_01238114(param_3);
  if (iVar3 == 0) {
    iVar3 = 0;
    local_3c = (int *)&DAT_00000004;
    local_40 = 0;
  }
  else {
    piVar6 = (int *)thunk_FUN_016d4a50(iVar3 * 0xc);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar3 * 0xc);
    }
    iVar4 = 0;
    local_40 = iVar3;
    local_3c = piVar6;
    do {
      uVar18 = FUN_011cf8a8(piVar14,param_2,param_3,param_4,param_5);
      FUN_01158f58(&local_30,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
      piVar14 = piVar14 + 5;
      iVar4 = iVar4 + 1;
      *piVar6 = local_30;
      piVar6[1] = (int)piStack_2c;
      piVar6[2] = iStack_28;
      piVar6 = piVar6 + 3;
    } while (iVar3 != iVar4);
  }
  local_30 = local_40;
  piStack_2c = local_3c;
  iStack_28 = iVar3;
  uVar15 = FUN_011f1680(piVar10,uVar15,local_60,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20),param_2
                        ,&local_30);
  local_60[0] = uVar15;
  puVar9 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *puVar9 = uVar15;
  return CONCAT44(&DAT_0188a348,puVar9);
}

