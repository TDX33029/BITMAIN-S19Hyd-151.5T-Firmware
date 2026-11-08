// FUN_01184be8 @ 01184be8 size=1412 calls_out=16 calls_in=0
// strings: 

undefined8 FUN_01184be8(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  int local_fc;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  uint local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
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
  local_88 = *(undefined1 **)(param_2 + 0xc);
  puVar14 = *(uint **)(param_1 + 4);
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
  local_fc = 0;
  local_a4 = 0;
  local_98 = local_a8;
  local_90._0_4_ = local_a0;
  local_90._4_4_ = local_9c;
  if (*(int *)(param_1 + 8) == 0) {
    iVar3 = 4;
    iVar9 = 0;
    while( true ) {
      local_fc = local_d0;
      iVar5 = FUN_00f45584(&local_a8);
      if (iVar5 == 0) break;
      iVar13 = *(int *)(iVar5 + 8);
      uVar12 = *(undefined4 *)(iVar5 + 4);
      if (iVar13 == 0) {
        iVar5 = 1;
      }
      else {
        iVar5 = thunk_FUN_016d4a50(iVar13);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar13);
        }
      }
      FUN_016dd1aa(iVar5,uVar12,iVar13);
      if (local_fc == local_d8) {
        FUN_015f37b0(&local_d8);
        iVar3 = local_d4;
      }
      piVar7 = (int *)(iVar3 + iVar9);
      *piVar7 = iVar13;
      iVar9 = iVar9 + 0xc;
      piVar7[1] = iVar5;
      piVar7[2] = iVar13;
      local_d0 = local_fc + 1;
    }
  }
  else {
    iVar3 = FUN_00f45584(&local_a8);
    if (iVar3 != 0) {
      iVar3 = 4;
      if (2 < *puVar14) {
        iVar3 = *puVar14 - 3;
      }
                    /* WARNING: Could not recover jumptable at 0x01184d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar17 = (*(code *)(&DAT_01184d10 + *(int *)(&DAT_01184d10 + iVar3 * 4)))();
      return uVar17;
    }
  }
  if (local_fc != 0) {
    piVar7 = *(int **)(param_1 + 0xc);
    do {
      iVar3 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar3 + 1;
    if (iVar3 < 0) {
LAB_0118534c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x118534c);
      (*pcVar1)();
    }
    uVar12 = *(undefined4 *)(param_1 + 0x10);
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
        iVar3 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_0118534c;
      uVar15 = *(uint *)(param_4 + 0xc);
      uVar16 = *(undefined4 *)(param_4 + 0x10);
      uVar10 = (*(int **)(param_4 + 4))[1];
      uVar8 = *(uint *)(param_1 + 0x10);
      uVar6 = 0;
      if (uVar10 <= uVar8) {
        iVar3 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar7 + 2,uVar10);
        uVar6 = uVar10;
        if (iVar3 != 0) {
          uVar6 = 0;
        }
      }
      local_b0 = FUN_011e1508((int)(piVar7 + 2) + uVar6,uVar8 - uVar6);
      local_bc = 3;
      local_c8 = 2;
      local_b8 = uVar15;
      local_b4 = uVar16;
    }
    local_38 = FUN_01238114(param_3);
    local_88 = &DAT_8000000b;
    local_84 = local_d8;
    iStack_80 = local_d4;
    iStack_7c = local_d0;
    local_50 = 6;
    local_a8 = local_c8;
    local_a4 = local_c4;
    local_a0 = local_c0;
    local_9c = local_bc;
    local_98 = local_b8;
    local_94 = local_b4;
    local_4c = param_2;
    local_30 = piVar7;
    local_2c = uVar12;
    local_90 = local_b0;
    iVar3 = thunk_FUN_016d4a50(0x80);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar3,&local_a8,0x80);
    uVar6 = local_dc;
    if (local_dc == local_e4) {
      FUN_011c4424(&local_e4);
    }
    local_dc = uVar6 + 1;
    *(int *)(local_e0 + uVar6 * 4) = iVar3;
  }
  local_9c = local_e0 + local_dc * 4;
  local_a0 = local_e4;
  local_a8 = local_e0;
  local_a4 = local_e0;
  puVar14 = (uint *)thunk_FUN_016d4a50(0x10);
  iVar3 = local_d4;
  if (puVar14 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar14 = local_a8;
  puVar14[1] = local_a4;
  puVar14[2] = local_a0;
  puVar14[3] = local_9c;
  if (local_fc == 0) {
    puVar11 = (undefined4 *)(local_d4 + 4);
    for (iVar9 = local_d0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (puVar11[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar11);
      }
      puVar11 = puVar11 + 3;
    }
    if (local_d8 != 0) {
      thunk_FUN_016d3fb4(iVar3);
    }
  }
  return CONCAT44(&PTR_LAB_01889064,puVar14);
}

