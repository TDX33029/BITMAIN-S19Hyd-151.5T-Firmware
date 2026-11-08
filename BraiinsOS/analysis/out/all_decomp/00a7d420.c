// FUN_00a7d420 @ 00a7d420 size=1552 calls_out=10 calls_in=1
// strings: 

void FUN_00a7d420(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *extraout_r1;
  int *extraout_r1_00;
  int iVar16;
  int *piVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  undefined8 in_d16;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  int *piStack_f4;
  uint uStack_f0;
  int *piStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int local_d0;
  int local_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  uint local_b8;
  int *piStack_b4;
  uint local_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint local_a0;
  int *piStack_9c;
  uint uStack_98;
  int *piStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_60;
  int *local_5c;
  uint local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  int *piStack_30;
  uint uStack_2c;
  int *piStack_28;
  
  uVar23 = *(uint *)(param_2 + 8);
  puVar25 = param_1 + 2;
  if (uVar23 == 0) {
LAB_00a7d87c:
    *puVar25 = 0;
    param_1[3] = 0;
    *param_1 = 0;
    return;
  }
  iVar18 = *(int *)(param_2 + 4);
  iVar16 = uVar23 << 3;
  uVar22 = 0;
  while ((puVar3 = (undefined4 *)(iVar18 + uVar22 * 8), puVar3[1] != param_4 ||
         (iVar4 = thunk_FUN_016dd50a(*puVar3,param_3,param_4), iVar4 != 0))) {
    uVar22 = uVar22 + 1;
    iVar16 = iVar16 + -8;
    if (iVar16 == 0) goto LAB_00a7d87c;
  }
  if (uVar23 <= uVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_00602938(uVar22,uVar23,&DAT_01880804);
  }
  puVar3 = (undefined4 *)(iVar18 + uVar22 * 8);
  uVar5 = *puVar3;
  uVar8 = puVar3[1];
  FUN_016dd52c(puVar3,puVar3 + 2,(uVar23 + ~uVar22) * 8);
  uVar20 = *(uint *)(param_2 + 0x14);
  *(uint *)(param_2 + 8) = uVar23 - 1;
  if (uVar20 <= uVar22) {
LAB_00a7d898:
                    /* WARNING: Subroutine does not return */
    FUN_00602938(uVar22,uVar20,&DAT_01880814);
  }
  puVar6 = (uint *)(*(int *)(param_2 + 0x10) + uVar22 * 0x3c);
  uVar24 = *puVar6;
  local_60 = puVar6[0xb];
  local_5c = (int *)puVar6[0xc];
  local_58 = puVar6[0xd];
  local_54 = (int *)puVar6[0xe];
  uVar21 = puVar6[1];
  uVar19 = puVar6[9];
  uVar23 = puVar6[2];
  uVar9 = puVar6[3];
  uVar10 = puVar6[4];
  uVar11 = puVar6[5];
  uVar12 = puVar6[6];
  uVar13 = puVar6[7];
  uVar14 = puVar6[8];
  uVar15 = puVar6[10];
  FUN_016dd52c(puVar6,puVar6 + 0xf,(uVar20 + ~uVar22) * 0x3c);
  uVar20 = uVar20 - 1;
  *(uint *)(param_2 + 0x14) = uVar20;
  if (uVar24 == 2) goto LAB_00a7d898;
  local_b8 = local_60;
  piStack_b4 = local_5c;
  local_b0 = local_58;
  piStack_ac = local_54;
  if ((uVar24 & 1) == 0) {
    if (uVar15 != 0) {
      uVar22 = uVar19;
      do {
        if (*(int *)(uVar22 + 8) != 0) {
          puVar6 = (uint *)(*(int *)(uVar22 + 4) + 8);
          iVar16 = *(int *)(uVar22 + 8) * 0x18;
          do {
            uVar20 = *puVar6;
            uVar26 = puVar6[1];
            uVar1 = puVar6[3];
            uVar2 = puVar6[2];
            if ((uVar20 != 0x84adcb7c || puVar6[2] != 0xe577a84e) ||
                (uVar26 != 0xb073a66 || puVar6[3] != 0xc45c25bf)) goto LAB_00a7d5fc;
            puVar6 = puVar6 + 6;
            iVar16 = iVar16 + -0x18;
          } while (iVar16 != 0);
        }
        uVar22 = uVar22 + 0xc;
      } while (uVar22 != uVar19 + uVar15 * 0xc);
      if (uVar24 == 2) goto LAB_00a7d87c;
      if (uVar24 == 3) goto LAB_00a7d6a4;
    }
  }
  else if ((uVar21 != 0x84adcb7c || uVar9 != 0xe577a84e) ||
           (uVar23 != 0xb073a66 || uVar10 != 0xc45c25bf)) {
    uVar20 = uVar21;
    uVar1 = uVar10;
    uVar2 = uVar9;
    uVar26 = uVar23;
LAB_00a7d5fc:
    uVar10 = uVar2;
    uVar11 = uVar1;
    uVar14 = 0xe577a84e;
    local_34 = (int *)local_60;
    piStack_30 = local_5c;
    uStack_2c = local_58;
    piStack_28 = local_54;
    local_60 = uVar24;
    local_5c = (int *)uVar21;
    local_58 = uVar23;
    local_54 = (int *)uVar9;
    local_3c = (int *)uVar19;
    local_38 = uVar15;
    FUN_00a7dac0(&local_a0,param_2,uVar5,uVar8,&local_60);
    if (local_a0 != 2) {
      FUN_0074c680(&local_a0);
    }
    uVar21 = 0;
    uVar13 = 0xb073a66;
    uVar12 = 0x84adcb7c;
    uVar23 = uVar20;
    uVar19 = 0xc45c25bf;
    uVar9 = uVar26;
LAB_00a7d6a4:
    *param_1 = 1;
    param_1[1] = uVar21;
    *puVar25 = uVar23;
    param_1[3] = uVar9;
    param_1[4] = uVar10;
    param_1[5] = uVar11;
    param_1[6] = uVar12;
    param_1[7] = uVar13;
    param_1[8] = uVar14;
    param_1[9] = uVar19;
    return;
  }
  local_f8 = local_60;
  piStack_f4 = local_5c;
  uStack_f0 = local_58;
  piStack_ec = local_54;
  local_124 = uVar24;
  local_120 = uVar21;
  local_fc = uVar15;
  local_11c = uVar23;
  local_118 = uVar9;
  local_114 = uVar10;
  local_110 = uVar11;
  local_10c = uVar12;
  local_108 = uVar13;
  local_104 = uVar14;
  local_100 = uVar19;
  FUN_00f9c61c(&local_60,&local_124);
  piVar7 = extraout_r1;
  if (local_50 == (int *)0x0) goto LAB_00a7d8e4;
  if (local_4c != local_44) goto LAB_00a7d8c0;
  while( true ) {
    FUN_00a864b0(&local_50);
    local_50 = (int *)0x0;
    piVar7 = extraout_r1_00;
LAB_00a7d8e4:
    piVar17 = (int *)0x0;
    if (local_60 != 0) {
      piVar7 = local_54;
      piVar17 = local_5c;
    }
    if (local_60 == 0 || piVar17 == piVar7) break;
    local_5c = piVar17 + 3;
    iVar16 = *piVar17;
    if (iVar16 == -0x80000000) break;
    local_4c = (int *)piVar17[1];
    local_44 = local_4c + piVar17[2] * 6;
    local_50 = local_4c;
    local_48 = iVar16;
    if (local_4c != local_44) {
LAB_00a7d8c0:
      piVar17 = local_4c + 6;
      iVar16 = *local_4c;
      piVar7 = local_4c;
      local_4c = piVar17;
      if (iVar16 != 0) {
LAB_00a7d92c:
        local_e8 = piVar7[1];
        iStack_e4 = piVar7[2];
        iStack_e0 = piVar7[3];
        iStack_dc = piVar7[4];
        iStack_d8 = piVar7[5];
        local_d0 = iVar16;
        local_cc = local_e8;
        iStack_c8 = iStack_e4;
        iStack_c4 = iStack_e0;
        iStack_c0 = iStack_dc;
        iStack_bc = iStack_d8;
        FUN_00a96e50(&local_b8);
        if (local_b8 != 0) {
          local_a0 = local_b8;
          piStack_9c = piStack_b4;
          uStack_98 = local_b0;
          piStack_94 = piStack_ac;
          uStack_90 = uStack_a8;
          uStack_8c = uStack_a4;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_0035e2fc,99,&local_a0,&DAT_0186d7b8,&DAT_018a7188);
        }
        in_d16 = CONCAT44(piStack_ac,local_b0);
        uVar23 = 1;
LAB_00a7d9d8:
        *puVar25 = uVar23;
        param_1[3] = 0;
        *(undefined8 *)(param_1 + 4) = in_d16;
        *param_1 = 0;
        FUN_00a7dd14(&local_60);
        return;
      }
    }
  }
  if (local_40 != 0) {
    if (local_3c != local_34) {
      piVar17 = local_3c + 6;
      iVar16 = *local_3c;
      piVar7 = local_3c;
      local_3c = piVar17;
      if (iVar16 != 0) goto LAB_00a7d92c;
    }
    FUN_00a864b0(&local_40);
    local_40 = 0;
  }
  uVar23 = 0;
  goto LAB_00a7d9d8;
}

