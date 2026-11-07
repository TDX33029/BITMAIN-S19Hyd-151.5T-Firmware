// FUN_00f9b93c @ 00f9b93c size=1480 calls_out=12 calls_in=2
// strings: 

void FUN_00f9b93c(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  uint local_13c;
  uint local_128;
  uint local_11c;
  uint local_10c;
  uint local_108;
  uint local_100 [5];
  uint local_ec;
  uint local_e8;
  uint local_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int local_d4;
  int iStack_d0;
  int iStack_cc;
  undefined1 local_c8;
  undefined1 local_c7;
  int local_c0;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  uint local_80;
  uint local_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  if (param_3 == 0) {
LAB_00f9bbf8:
    piVar15 = *(int **)(param_1 + 0x38);
    if (piVar15 != (int *)0x0) {
      local_60 = piVar15[3];
      local_5c = piVar15[4];
      local_58 = piVar15[5];
      local_54 = piVar15[6];
      local_50 = piVar15[7];
      local_4c = piVar15[8];
      local_48 = piVar15[9];
      piVar15[3] = 0;
      piVar15[5] = 0;
      piVar15[6] = 0;
      piVar15[8] = 0;
      piVar15[9] = 0;
      piVar15[4] = 4;
      piVar15[7] = 4;
      local_80 = 2;
      FUN_00f9b93c(&local_80,param_2,param_3,param_4);
      iVar4 = piVar15[3];
      iVar17 = piVar15[4];
      piVar15[3] = local_60;
      piVar15[4] = local_5c;
      iVar11 = piVar15[7];
      piVar15[7] = local_50;
      iVar9 = piVar15[8];
      iVar10 = piVar15[9];
      piVar15[8] = local_4c;
      iVar20 = piVar15[5];
      iVar5 = piVar15[6];
      piVar15[5] = local_58;
      piVar15[6] = local_54;
      piVar15[9] = local_48;
      local_60 = iVar4;
      local_5c = iVar17;
      local_58 = iVar20;
      local_54 = iVar5;
      local_50 = iVar11;
      local_4c = iVar9;
      local_48 = iVar10;
      FUN_00f9c1cc(&local_80);
    }
    if (*(int *)(param_4 + 8) != 0) {
      puVar16 = *(undefined4 **)(param_4 + 4);
      piVar14 = *(int **)(param_4 + 0x10);
      puVar12 = puVar16 + *(int *)(param_4 + 8) * 2;
      piVar8 = (int *)((uint)&local_80 | 4);
      piVar6 = piVar14 + 1;
      iVar9 = *(int *)(param_4 + 0x14) * 0x3c;
      do {
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018807c4);
        }
        uVar2 = piVar14[7];
        uVar7 = 0;
        bVar22 = 0x3ffffffe < uVar2;
        bVar21 = uVar2 == 0x3fffffff;
        if (uVar2 < 0x40000000) {
          piVar15 = (int *)(uVar2 << 2);
          bVar22 = (int *)0x7ffffffb < piVar15;
          bVar21 = piVar15 == (int *)0x7ffffffc;
        }
        if (bVar22 && !bVar21) {
LAB_00f9beec:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar7,local_10c);
        }
        uVar18 = puVar16[1];
        iVar10 = piVar14[6];
        uVar1 = *(undefined1 *)((int)piVar14 + 0x39);
        uVar7 = *puVar16;
        if (piVar15 == (int *)0x0) {
          local_10c = 4;
          local_11c = 0;
        }
        else {
          local_10c = thunk_FUN_016d4a50(piVar15);
          if (local_10c == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(4,piVar15);
          }
          local_11c = uVar2;
        }
        FUN_016dd1aa(local_10c,iVar10,piVar15);
        if (*piVar14 == 1) {
          local_c0 = *piVar6;
          local_bc = piVar6[1];
          iStack_b8 = piVar6[2];
          iStack_b4 = piVar6[3];
        }
        local_108 = (uint)(*piVar14 == 1);
        FUN_00f72988(&local_40,piVar14[9],piVar14[10]);
        FUN_00f72c08(&local_30,piVar14[0xc],piVar14[0xd]);
        *piVar8 = local_c0;
        piVar8[1] = local_bc;
        piVar8[2] = iStack_b8;
        piVar8[3] = iStack_b4;
        local_60 = local_40;
        local_5c = local_3c;
        local_58 = local_38;
        piVar15 = &local_c0;
        local_80 = local_108;
        local_54 = local_30;
        local_50 = iStack_2c;
        local_4c = iStack_28;
        local_6c = local_11c;
        local_48 = CONCAT31(CONCAT21(local_48._2_2_,uVar1),(char)piVar14[0xe]);
        local_68 = local_10c;
        local_64 = uVar2;
        FUN_00f9bf78(piVar15,param_1 + 0x20,uVar7,uVar18,&local_80);
        if (local_c0 != 2) {
          FUN_00f9b780(piVar15);
        }
        piVar14 = piVar14 + 0xf;
        puVar16 = puVar16 + 2;
        iVar9 = iVar9 + -0x3c;
        piVar6 = piVar6 + 0xf;
      } while (puVar16 != puVar12);
    }
    return;
  }
  iVar9 = *(int *)(param_1 + 0x30);
  iVar10 = *(int *)(param_1 + 0x24);
  iVar11 = *(int *)(param_1 + 0x28);
  uVar2 = *(uint *)(param_1 + 0x34);
  puVar3 = (uint *)((uint)local_100 | 4);
  puVar12 = param_2;
LAB_00f9b9c0:
  uVar19 = 0;
  puVar16 = puVar12 + 2;
  for (iVar20 = iVar11 << 3; iVar20 != 0; iVar20 = iVar20 + -8) {
    iVar17 = *(int *)(iVar10 + uVar19 * 8 + 4);
    if (iVar17 == puVar12[1]) {
      uVar18 = *puVar12;
      iVar4 = thunk_FUN_016dd50a(*(undefined4 *)(iVar10 + uVar19 * 8),uVar18,iVar17);
      if (iVar4 == 0) {
        if (uVar2 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar19,uVar2,&DAT_01880824);
        }
        uVar13 = 0;
        iVar4 = *(int *)(param_4 + 4);
        piVar15 = (int *)(iVar9 + uVar19 * 0x3c);
        iVar20 = *(int *)(param_4 + 8) << 3;
        goto LAB_00f9ba48;
      }
    }
    uVar19 = uVar19 + 1;
  }
  goto LAB_00f9b9b4;
LAB_00f9ba48:
  piVar8 = piVar15;
  if (iVar20 == 0) goto LAB_00f9bab8;
  if ((*(int *)(iVar4 + uVar13 * 8 + 4) == iVar17) &&
     (iVar5 = thunk_FUN_016dd50a(*(undefined4 *)(iVar4 + uVar13 * 8),uVar18,iVar17), iVar5 == 0)) {
    if (*(uint *)(param_4 + 0x14) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar13,*(uint *)(param_4 + 0x14),&DAT_01880824);
    }
    piVar6 = (int *)(*(int *)(param_4 + 0x10) + uVar13 * 0x3c);
    if (*(byte *)((int)piVar6 + 0x39) != 3) {
      if (*(byte *)((int)piVar15 + 0x39) < *(byte *)((int)piVar6 + 0x39)) {
        piVar8 = piVar6;
      }
      if (*(byte *)((int)piVar15 + 0x39) == 3) {
        piVar8 = piVar6;
      }
    }
    goto LAB_00f9bab8;
  }
  uVar13 = uVar13 + 1;
  iVar20 = iVar20 + -8;
  goto LAB_00f9ba48;
LAB_00f9bab8:
  uVar19 = piVar8[7];
  uVar7 = 0;
  bVar22 = 0x3ffffffe < uVar19;
  bVar21 = uVar19 == 0x3fffffff;
  if (uVar19 < 0x40000000) {
    uVar13 = uVar19 << 2;
    bVar22 = 0x7ffffffb < uVar13;
    bVar21 = uVar13 == 0x7ffffffc;
  }
  if (bVar22 && !bVar21) goto LAB_00f9beec;
  iVar20 = piVar8[6];
  uVar1 = *(undefined1 *)((int)piVar8 + 0x39);
  if (uVar13 == 0) {
    local_10c = 4;
    local_13c = 0;
  }
  else {
    local_10c = thunk_FUN_016d4a50(uVar13);
    if (local_10c == 0) {
      uVar7 = 4;
      local_10c = uVar13;
      goto LAB_00f9beec;
    }
    local_13c = uVar19;
  }
  FUN_016dd1aa(local_10c,iVar20,uVar13);
  if (*piVar8 == 1) {
    local_80 = piVar8[1];
    local_7c = piVar8[2];
    uStack_78 = piVar8[3];
    uStack_74 = piVar8[4];
  }
  local_128 = (uint)(*piVar8 == 1);
  FUN_00f72988(&local_30,piVar8[9],piVar8[10]);
  FUN_00f72c08(&local_c0,piVar8[0xc],piVar8[0xd]);
  puVar3[1] = local_7c;
  puVar3[2] = uStack_78;
  puVar3[3] = uStack_74;
  *puVar3 = local_80;
  local_e0 = local_30;
  iStack_dc = iStack_2c;
  iStack_d8 = iStack_28;
  local_ec = local_13c;
  local_c8 = (undefined1)piVar8[0xe];
  local_100[0] = local_128;
  local_d4 = local_c0;
  iStack_d0 = local_bc;
  iStack_cc = iStack_b8;
  local_e8 = local_10c;
  local_e4 = uVar19;
  local_c7 = uVar1;
  FUN_00f9bf78(&local_80,param_4,uVar18,iVar17,local_100);
  if (local_80 != 2) {
    FUN_00f9b780(&local_80);
  }
LAB_00f9b9b4:
  puVar12 = puVar16;
  if (puVar16 == param_2 + param_3 * 2) goto LAB_00f9bbf8;
  goto LAB_00f9b9c0;
}

