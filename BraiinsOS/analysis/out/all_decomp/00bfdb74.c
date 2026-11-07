// FUN_00bfdb74 @ 00bfdb74 size=756 calls_out=5 calls_in=1
// strings: 

void FUN_00bfdb74(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint extraout_r3;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 uVar14;
  uint extraout_r12;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint local_f4;
  uint local_c8;
  int local_c4;
  uint local_c0;
  uint local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  uint local_90 [3];
  undefined4 uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  iVar4 = param_2[0x11];
  uVar2 = 0;
  uVar5 = param_2[0x12];
  uVar12 = param_2[0x13];
  if (iVar4 == 0) {
    uVar12 = 0;
  }
  uVar15 = (uint)(iVar4 != 0);
  iVar1 = uVar12 * 0x48;
  if (0x1c71c71 < uVar12) {
LAB_00bfdbd4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar2,iVar1);
  }
  if (iVar1 == 0) {
    local_c4 = 8;
    local_c8 = 0;
  }
  else {
    local_c4 = thunk_FUN_016d4a50(iVar1);
    local_c8 = uVar12;
    if (local_c4 == 0) {
      uVar2 = 8;
      goto LAB_00bfdbd4;
    }
  }
  local_c0 = 0;
  uStack_b4 = 0;
  uStack_a4 = 0;
  local_b8 = uVar15;
  iStack_b0 = iVar4;
  uStack_ac = uVar5;
  local_a8 = uVar15;
  iStack_a0 = iVar4;
  uStack_9c = uVar5;
  local_98 = uVar12;
  if (local_c8 < uVar12) {
    FUN_00d653ec(&local_c8,0,uVar12,8,0x48);
  }
  local_90[1] = 0;
  uStack_7c = 0;
  uVar10 = local_c0;
  puVar13 = (uint *)(local_c4 + local_c0 * 0x48);
  local_f4 = local_c0;
  local_90[0] = uVar15;
  local_90[2] = iVar4;
  uStack_84 = uVar5;
  local_80 = uVar15;
  iStack_78 = iVar4;
  uStack_74 = uVar5;
  uStack_70 = uVar12;
  while( true ) {
    FUN_00c3b3e0(&local_50,local_90);
    uVar12 = extraout_r3;
    uVar15 = extraout_r12;
    puVar3 = local_50;
    if (local_50 != (uint *)0x0) {
      puVar3 = local_50 + local_48 * 0x12;
      uVar10 = *puVar3;
      uVar15 = puVar3[1];
      uVar12 = uVar10 ^ 5;
    }
    if (local_50 == (uint *)0x0 || uVar12 == 0 && uVar15 == 0) break;
    local_68 = puVar3[0xc];
    uStack_64 = puVar3[0xd];
    uStack_60 = puVar3[0xe];
    uStack_5c = puVar3[0xf];
    uStack_58 = puVar3[0x10];
    uStack_54 = puVar3[0x11];
    local_50 = (uint *)puVar3[6];
    uStack_4c = puVar3[7];
    local_48 = puVar3[8];
    uStack_44 = puVar3[9];
    uStack_40 = puVar3[10];
    uStack_3c = puVar3[0xb];
    local_38 = puVar3[2];
    local_34 = puVar3[3];
    local_30 = puVar3[4];
    local_2c = puVar3[5];
    *puVar13 = uVar10;
    puVar13[1] = uVar15;
    puVar13[2] = local_38;
    puVar13[4] = local_30;
    puVar13[3] = local_34;
    puVar13[5] = local_2c;
    puVar13[6] = (uint)local_50;
    puVar13[7] = uStack_4c;
    puVar13[8] = local_48;
    puVar13[9] = uStack_44;
    puVar13[10] = uStack_40;
    puVar13[0xb] = uStack_3c;
    puVar13[0xc] = local_68;
    puVar13[0xd] = uStack_64;
    puVar13[0xe] = uStack_60;
    puVar13[0xf] = uStack_5c;
    puVar13[0x10] = uStack_58;
    puVar13[0x11] = uStack_54;
    local_f4 = local_f4 + 1;
    puVar13 = puVar13 + 0x12;
  }
  local_c0 = local_f4;
  while (FUN_00c3b3e0(&local_50,local_90), uVar12 = local_48, puVar13 = local_50,
        local_50 != (uint *)0x0) {
    puVar3 = local_50 + local_48 * 0x12 + 0xe;
    puVar7 = (undefined4 *)(local_50[local_48 * 0x12 + 0xf] + 0x10);
    for (uVar15 = local_50[local_48 * 0x12 + 0x10]; uVar15 != 0; uVar15 = uVar15 - 1) {
      if (puVar7[-4] != 0) {
        thunk_FUN_016d3fb4(puVar7[-3]);
      }
      if (puVar7[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar7);
      }
      puVar7 = puVar7 + 6;
    }
    if (*puVar3 != 0) {
      thunk_FUN_016d3fb4(puVar13[uVar12 * 0x12 + 0xf]);
    }
  }
  uVar18 = *(undefined8 *)(param_2 + 10);
  param_1[0x11] = local_c8;
  param_1[0x12] = local_c4;
  param_1[0x13] = local_c0;
  uVar2 = param_2[0xf];
  uVar5 = param_2[0x10];
  uVar19 = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar5;
  uVar16 = param_2[6];
  uVar11 = param_2[7];
  uVar17 = param_2[8];
  uVar14 = param_2[0x14];
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  param_1[4] = uVar8;
  param_1[5] = uVar9;
  *(undefined8 *)(param_1 + 10) = uVar18;
  *(undefined8 *)(param_1 + 0xc) = uVar19;
  param_1[0x14] = uVar14;
  param_1[6] = uVar16;
  param_1[7] = uVar11;
  param_1[8] = uVar17;
  return;
}

