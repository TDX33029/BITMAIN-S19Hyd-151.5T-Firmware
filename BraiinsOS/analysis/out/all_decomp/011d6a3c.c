// FUN_011d6a3c @ 011d6a3c size=604 calls_out=8 calls_in=2
// strings: 

int FUN_011d6a3c(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
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
  
  uVar15 = CONCAT44(local_ac,local_b0);
  if (*param_2 != '\x03') {
    return 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    uVar12 = *(undefined4 *)(param_2 + 8);
    iVar14 = *(int *)(param_2 + 0xc);
    puVar13 = (undefined4 *)(*(int *)(param_1 + 4) + 4);
    iVar9 = *(int *)(param_1 + 8) * 0xc;
    do {
      if ((puVar13[1] == iVar14) && (iVar3 = thunk_FUN_016dd50a(*puVar13,uVar12,iVar14), iVar3 == 0)
         ) {
        return 0;
      }
      puVar13 = puVar13 + 3;
      iVar9 = iVar9 + -0xc;
    } while (iVar9 != 0);
  }
  piVar7 = *(int **)(param_1 + 0x18);
  do {
    iVar9 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar9 + 1;
  if (iVar9 < 0) {
LAB_011d6c98:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11d6c98);
    (*pcVar1)();
  }
  uVar12 = *(undefined4 *)(param_1 + 0x1c);
  if (param_4 == 0) {
    uVar6 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar4 = *(int **)(param_4 + 0xc);
    do {
      iVar9 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_011d6c98;
    local_b8 = *(undefined4 *)(param_4 + 0xc);
    uVar5 = 0;
    local_b4 = *(undefined4 *)(param_4 + 0x10);
    uVar8 = *(uint *)(param_1 + 0x1c);
    uVar10 = (*(int **)(param_4 + 4))[1];
    if (uVar10 <= uVar8) {
      iVar9 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar7 + 2,uVar10,0,uVar12);
      uVar5 = uVar10;
      if (iVar9 != 0) {
        uVar5 = 0;
      }
    }
    uVar15 = FUN_011e1508((int)(piVar7 + 2) + uVar5,uVar8 - uVar5);
    uVar6 = 2;
    local_bc = 3;
  }
  uVar16 = FUN_01238114(param_3);
  local_84 = *(int *)(param_1 + 0x14);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  if (local_84 == 0) {
    iVar9 = 1;
  }
  else {
    iVar9 = thunk_FUN_016d4a50(local_84);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_84);
    }
  }
  FUN_016dd1aa(iVar9,uVar11,local_84);
  local_50 = 6;
  local_88 = 0x80000025;
  uStack_9c = local_bc;
  local_98 = local_b8;
  uStack_94 = local_b4;
  local_a8[0] = uVar6;
  local_80 = iVar9;
  local_7c = local_84;
  local_4c = param_2;
  local_30 = piVar7;
  local_2c = uVar12;
  uStack_90 = uVar15;
  local_38 = uVar16;
  iVar9 = thunk_FUN_016d4a50(0x80);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar9,local_a8,0x80);
  return iVar9;
}

