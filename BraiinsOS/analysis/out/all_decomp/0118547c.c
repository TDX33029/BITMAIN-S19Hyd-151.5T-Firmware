// FUN_0118547c @ 0118547c size=1044 calls_out=12 calls_in=0
// strings: 

undefined8 FUN_0118547c(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined1 *local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  
  if (*param_2 != '\x05') {
    return 0x188a36400000001;
  }
  local_a0 = *(uint *)(param_2 + 4);
  local_9c = *(uint *)(param_2 + 8);
  iVar7 = 0;
  local_88 = *(undefined1 **)(param_2 + 0xc);
  iVar11 = 4;
  piVar8 = *(int **)(param_1 + 4);
  if (local_a0 == 0) {
    local_88 = (undefined1 *)0x0;
  }
  local_a8 = (uint)(local_a0 != 0);
  local_dc = 0;
  local_e0 = 4;
  local_e4 = 0;
  local_d0 = 0;
  local_d4 = 4;
  local_d8 = 0;
  local_94 = 0;
  local_a4 = 0;
  local_98 = local_a8;
  local_90._0_4_ = local_a0;
  local_90._4_4_ = local_9c;
  if (*(int *)(param_1 + 8) == 0) {
    iVar9 = 0;
    while( true ) {
      iVar7 = local_d0;
      iVar3 = FUN_00f45584(&local_a8);
      if (iVar3 == 0) break;
      iVar15 = *(int *)(iVar3 + 8);
      uVar14 = *(undefined4 *)(iVar3 + 4);
      if (iVar15 == 0) {
        iVar3 = 1;
      }
      else {
        iVar3 = thunk_FUN_016d4a50(iVar15);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar15);
        }
      }
      FUN_016dd1aa(iVar3,uVar14,iVar15);
      if (iVar7 == local_d8) {
        FUN_015f37b0(&local_d8);
        iVar11 = local_d4;
      }
      local_d0 = iVar7 + 1;
      piVar8 = (int *)(iVar11 + iVar9);
      *piVar8 = iVar15;
      iVar9 = iVar9 + 0xc;
      piVar8[1] = iVar3;
      piVar8[2] = iVar15;
    }
  }
  else {
    iVar11 = FUN_00f45584(&local_a8);
    if (iVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0118559c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (*(code *)(&DAT_011855a0 + *(int *)(&DAT_011855a0 + *piVar8 * 4)))();
      return uVar18;
    }
  }
  if (iVar7 != 0) {
    piVar8 = *(int **)(param_1 + 0xc);
    do {
      iVar11 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar11 + 1;
    if (iVar11 < 0) {
LAB_01185bdc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1185bdc);
      (*pcVar1)();
    }
    uVar14 = *(undefined4 *)(param_1 + 0x10);
    if (param_4 == 0) {
      local_c8 = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar4 = *(int **)(param_4 + 0xc);
      do {
        iVar11 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar11 + 1;
      if (iVar11 < 0) goto LAB_01185bdc;
      uVar16 = *(uint *)(param_4 + 0xc);
      uVar17 = *(undefined4 *)(param_4 + 0x10);
      uVar12 = (*(int **)(param_4 + 4))[1];
      uVar10 = *(uint *)(param_1 + 0x10);
      uVar6 = 0;
      if (uVar12 <= uVar10) {
        iVar11 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar8 + 2,uVar12);
        uVar6 = uVar12;
        if (iVar11 != 0) {
          uVar6 = 0;
        }
      }
      local_b0 = FUN_011e1508((int)(piVar8 + 2) + uVar6,uVar10 - uVar6);
      local_bc = 3;
      local_c8 = 2;
      local_b8 = uVar16;
      local_b4 = uVar17;
    }
    local_38 = FUN_01238114(param_3);
    local_88 = &DAT_8000000b;
    local_84 = local_d8;
    iStack_80 = local_d4;
    iStack_7c = local_d0;
    local_50 = 6;
    local_a8 = local_c8;
    local_a4 = uStack_c4;
    local_a0 = uStack_c0;
    local_9c = local_bc;
    local_98 = local_b8;
    local_94 = local_b4;
    local_4c = param_2;
    local_30 = piVar8;
    local_2c = uVar14;
    local_90 = local_b0;
    iVar11 = thunk_FUN_016d4a50(0x80);
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar11,&local_a8,0x80);
    uVar6 = local_dc;
    if (local_dc == local_e4) {
      FUN_011c4424(&local_e4);
    }
    local_dc = uVar6 + 1;
    *(int *)(local_e0 + uVar6 * 4) = iVar11;
  }
  local_9c = local_e0 + local_dc * 4;
  local_a0 = local_e4;
  local_a8 = local_e0;
  local_a4 = local_e0;
  puVar5 = (uint *)thunk_FUN_016d4a50(0x10);
  iVar11 = local_d4;
  if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar5 = local_a8;
  puVar5[1] = local_a4;
  puVar5[2] = local_a0;
  puVar5[3] = local_9c;
  if (iVar7 == 0) {
    puVar13 = (undefined4 *)(local_d4 + 4);
    for (iVar7 = local_d0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (puVar13[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar13);
      }
      puVar13 = puVar13 + 3;
    }
    if (local_d8 != 0) {
      thunk_FUN_016d3fb4(iVar11);
    }
  }
  return CONCAT44(&PTR_LAB_01889064,puVar5);
}

