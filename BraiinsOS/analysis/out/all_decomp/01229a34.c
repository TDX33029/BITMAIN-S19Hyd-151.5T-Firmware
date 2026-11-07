// FUN_01229a34 @ 01229a34 size=564 calls_out=8 calls_in=2
// strings: 

int FUN_01229a34(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  
  uVar13 = CONCAT44(local_ac,local_b0);
  iVar7 = 0;
  if ((*param_2 == '\x03') &&
     (iVar3 = (**(code **)(*(int *)(param_1 + 0x1c) + 0xc))
                        (*(int *)(param_1 + 0x18) +
                         (*(int *)(*(int *)(param_1 + 0x1c) + 8) - 1U & 0xfffffff8) + 8,
                         *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc)), iVar3 == 0))
  {
    piVar8 = *(int **)(param_1 + 0xc);
    do {
      iVar7 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar7 + 1;
    if (iVar7 < 0) {
LAB_01229c68:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1229c68);
      (*pcVar1)();
    }
    uVar12 = *(undefined4 *)(param_1 + 0x10);
    if (param_4 == 0) {
      uVar5 = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar4 = *(int **)(param_4 + 0xc);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_01229c68;
      local_b8 = *(undefined4 *)(param_4 + 0xc);
      uVar10 = *(uint *)(param_1 + 0x10);
      uVar9 = (*(int **)(param_4 + 4))[1];
      local_b4 = *(undefined4 *)(param_4 + 0x10);
      uVar6 = 0;
      if (uVar9 <= uVar10) {
        iVar7 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar8 + 2,uVar9);
        uVar6 = uVar9;
        if (iVar7 != 0) {
          uVar6 = 0;
        }
      }
      uVar13 = FUN_011e1508((int)(piVar8 + 2) + uVar6,uVar10 - uVar6);
      local_bc = 3;
      uVar5 = 2;
    }
    uVar14 = FUN_01238114(param_3);
    uVar11 = *(undefined4 *)(param_1 + 4);
    local_84 = *(int *)(param_1 + 8);
    if (local_84 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = thunk_FUN_016d4a50(local_84);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_84);
      }
    }
    FUN_016dd1aa(iVar7,uVar11,local_84);
    uStack_9c = local_bc;
    local_98 = local_b8;
    uStack_94 = local_b4;
    local_50 = 6;
    local_88 = 0x80000017;
    local_a8[0] = uVar5;
    local_80 = iVar7;
    local_7c = local_84;
    local_4c = param_2;
    local_30 = piVar8;
    local_2c = uVar12;
    uStack_90 = uVar13;
    local_38 = uVar14;
    iVar7 = thunk_FUN_016d4a50(0x80);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar7,local_a8,0x80);
  }
  return iVar7;
}

