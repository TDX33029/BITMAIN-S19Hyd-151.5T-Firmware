// FUN_01b71940 @ 01b71940 size=960 calls_out=0 calls_in=1
// strings: 

void FUN_01b71940(uint *param_1,uint *param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  bool bVar19;
  bool bVar20;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint *local_2c;
  uint local_28;
  
  local_28 = param_3;
  local_2c = param_2;
  local_30 = param_1;
  local_74 = param_5[3];
  local_78 = param_5[2];
  local_7c = param_5[1];
  local_80 = *param_5;
  local_48 = param_4[6];
  local_44 = param_4[7];
  uStack_84 = local_44;
  uStack_88 = local_48;
  uStack_8c = param_4[5];
  local_90 = param_4[4];
  uStack_94 = param_4[3];
  uStack_98 = param_4[2];
  uStack_9c = param_4[1];
  local_a0 = *param_4;
  local_a4 = 0x6b206574;
  local_a8 = 0x79622d32;
  local_ac = 0x3320646e;
  local_b0 = 0x61707865;
  while( true ) {
    uVar1 = local_28;
    local_34 = local_74;
    iVar13 = 10;
    uVar2 = local_b0;
    uVar3 = local_ac;
    uVar4 = local_a8;
    uVar5 = local_a4;
    uVar6 = local_a0;
    uVar7 = uStack_9c;
    uVar8 = uStack_98;
    uVar9 = uStack_94;
    local_50 = local_90;
    local_4c = uStack_8c;
    local_3c = local_7c;
    local_40 = local_80;
    local_38 = local_78;
    do {
      iVar13 = iVar13 + -1;
      uVar2 = uVar2 + uVar6;
      uVar3 = uVar3 + uVar7;
      uVar14 = (local_40 >> 0x10 | local_40 << 0x10) ^ (uVar2 >> 0x10 | uVar2 * 0x10000);
      uVar11 = (local_3c >> 0x10 | local_3c << 0x10) ^ (uVar3 >> 0x10 | uVar3 * 0x10000);
      local_50 = local_50 + uVar14;
      local_4c = local_4c + uVar11;
      uVar6 = (uVar6 >> 0x14 | uVar6 << 0xc) ^ (local_50 >> 0x14 | local_50 * 0x1000);
      uVar7 = (uVar7 >> 0x14 | uVar7 << 0xc) ^ (local_4c >> 0x14 | local_4c * 0x1000);
      uVar2 = uVar2 + uVar6;
      uVar3 = uVar3 + uVar7;
      uVar15 = (uVar14 >> 0x18 | uVar14 << 8) ^ (uVar2 >> 0x18 | uVar2 * 0x100);
      uVar14 = (uVar11 >> 0x18 | uVar11 << 8) ^ (uVar3 >> 0x18 | uVar3 * 0x100);
      local_50 = local_50 + uVar15;
      local_4c = local_4c + uVar14;
      uVar6 = (uVar6 >> 0x19 | uVar6 << 7) ^ (local_50 >> 0x19 | local_50 * 0x80);
      uVar7 = (uVar7 >> 0x19 | uVar7 << 7) ^ (local_4c >> 0x19 | local_4c * 0x80);
      uVar4 = uVar4 + uVar8;
      uVar5 = uVar5 + uVar9;
      uVar17 = (local_38 >> 0x10 | local_38 << 0x10) ^ (uVar4 >> 0x10 | uVar4 * 0x10000);
      uVar12 = (local_34 >> 0x10 | local_34 << 0x10) ^ (uVar5 >> 0x10 | uVar5 * 0x10000);
      local_48 = local_48 + uVar17;
      local_44 = local_44 + uVar12;
      uVar8 = (uVar8 >> 0x14 | uVar8 << 0xc) ^ (local_48 >> 0x14 | local_48 * 0x1000);
      uVar11 = (uVar9 >> 0x14 | uVar9 << 0xc) ^ (local_44 >> 0x14 | local_44 * 0x1000);
      uVar4 = uVar4 + uVar8;
      uVar5 = uVar5 + uVar11;
      uVar17 = (uVar17 >> 0x18 | uVar17 << 8) ^ (uVar4 >> 0x18 | uVar4 * 0x100);
      uVar12 = (uVar12 >> 0x18 | uVar12 << 8) ^ (uVar5 >> 0x18 | uVar5 * 0x100);
      local_48 = local_48 + uVar17;
      local_44 = local_44 + uVar12;
      uVar9 = (uVar8 >> 0x19 | uVar8 << 7) ^ (local_48 >> 0x19 | local_48 * 0x80);
      uVar11 = (uVar11 >> 0x19 | uVar11 << 7) ^ (local_44 >> 0x19 | local_44 * 0x80);
      uVar2 = uVar2 + uVar7;
      uVar3 = uVar3 + uVar9;
      uVar12 = (uVar12 >> 0x10 | uVar12 << 0x10) ^ (uVar2 >> 0x10 | uVar2 * 0x10000);
      uVar15 = (uVar15 >> 0x10 | uVar15 << 0x10) ^ (uVar3 >> 0x10 | uVar3 * 0x10000);
      local_48 = local_48 + uVar12;
      local_44 = local_44 + uVar15;
      uVar8 = (uVar7 >> 0x14 | uVar7 << 0xc) ^ (local_48 >> 0x14 | local_48 * 0x1000);
      uVar9 = (uVar9 >> 0x14 | uVar9 << 0xc) ^ (local_44 >> 0x14 | local_44 * 0x1000);
      uVar2 = uVar2 + uVar8;
      uVar3 = uVar3 + uVar9;
      local_34 = (uVar12 >> 0x18 | uVar12 << 8) ^ (uVar2 >> 0x18 | uVar2 * 0x100);
      local_40 = (uVar15 >> 0x18 | uVar15 << 8) ^ (uVar3 >> 0x18 | uVar3 * 0x100);
      local_48 = local_48 + local_34;
      local_44 = local_44 + local_40;
      uVar7 = (uVar8 >> 0x19 | uVar8 << 7) ^ (local_48 >> 0x19 | local_48 * 0x80);
      uVar8 = (uVar9 >> 0x19 | uVar9 << 7) ^ (local_44 >> 0x19 | local_44 * 0x80);
      uVar4 = uVar4 + uVar11;
      uVar5 = uVar5 + uVar6;
      uVar14 = (uVar14 >> 0x10 | uVar14 << 0x10) ^ (uVar4 >> 0x10 | uVar4 * 0x10000);
      uVar12 = (uVar17 >> 0x10 | uVar17 << 0x10) ^ (uVar5 >> 0x10 | uVar5 * 0x10000);
      local_50 = local_50 + uVar14;
      local_4c = local_4c + uVar12;
      uVar9 = (uVar11 >> 0x14 | uVar11 << 0xc) ^ (local_50 >> 0x14 | local_50 * 0x1000);
      uVar6 = (uVar6 >> 0x14 | uVar6 << 0xc) ^ (local_4c >> 0x14 | local_4c * 0x1000);
      uVar4 = uVar4 + uVar9;
      uVar5 = uVar5 + uVar6;
      local_3c = (uVar14 >> 0x18 | uVar14 << 8) ^ (uVar4 >> 0x18 | uVar4 * 0x100);
      local_38 = (uVar12 >> 0x18 | uVar12 << 8) ^ (uVar5 >> 0x18 | uVar5 * 0x100);
      local_50 = local_50 + local_3c;
      local_4c = local_4c + local_38;
      uVar9 = (uVar9 >> 0x19 | uVar9 << 7) ^ (local_50 >> 0x19 | local_50 * 0x80);
      uVar6 = (uVar6 >> 0x19 | uVar6 << 7) ^ (local_4c >> 0x19 | local_4c * 0x80);
    } while (iVar13 != 0);
    bVar20 = 0x3f < local_28;
    bVar19 = local_28 != 0x40;
    puVar18 = &local_b0;
    puVar10 = &local_b0;
    if (bVar20) {
      puVar18 = local_30;
      puVar10 = local_2c;
    }
    uVar2 = uVar2 + local_b0;
    uVar3 = uVar3 + local_ac;
    uVar14 = local_ac;
    uVar11 = local_b0;
    puVar16 = puVar10;
    if (bVar20) {
      puVar16 = puVar10 + 4;
      uVar11 = *puVar10;
      uVar14 = puVar10[1];
    }
    uVar4 = uVar4 + local_a8;
    uVar5 = uVar5 + local_a4;
    uVar12 = local_a4;
    uVar15 = local_a8;
    if (bVar20) {
      uVar15 = puVar16[-2];
      uVar12 = puVar16[-1];
      uVar2 = uVar2 ^ uVar11;
      uVar3 = uVar3 ^ uVar14;
    }
    *puVar18 = uVar2;
    uVar11 = uStack_94;
    uVar14 = uStack_98;
    uVar17 = uStack_9c;
    uVar2 = local_a0;
    if (bVar20) {
      uVar4 = uVar4 ^ uVar15;
      uVar5 = uVar5 ^ uVar12;
    }
    puVar18[1] = uVar3;
    puVar18[2] = uVar4;
    puVar18[3] = uVar5;
    uVar6 = uVar6 + uVar2;
    uVar7 = uVar7 + uVar17;
    puVar10 = puVar16;
    if (bVar20) {
      puVar10 = puVar16 + 4;
      uVar2 = *puVar16;
      uVar17 = puVar16[1];
    }
    uVar8 = uVar8 + uVar14;
    uVar9 = uVar9 + uVar11;
    if (bVar20) {
      uVar14 = puVar10[-2];
      uVar11 = puVar10[-1];
      uVar6 = uVar6 ^ uVar2;
      uVar7 = uVar7 ^ uVar17;
    }
    puVar18[4] = uVar6;
    if (bVar20) {
      uVar8 = uVar8 ^ uVar14;
      uVar9 = uVar9 ^ uVar11;
    }
    puVar18[5] = uVar7;
    uVar4 = uStack_84;
    uVar6 = uStack_88;
    uVar3 = uStack_8c;
    uVar2 = local_90;
    puVar18[6] = uVar8;
    puVar18[7] = uVar9;
    uVar5 = local_44;
    uVar8 = local_48;
    local_50 = local_50 + uVar2;
    local_4c = local_4c + uVar3;
    puVar16 = puVar10;
    if (bVar20) {
      puVar16 = puVar10 + 4;
      uVar2 = *puVar10;
      uVar3 = puVar10[1];
    }
    if (0x40 < uVar1) {
      local_48 = uVar6;
      local_44 = uVar4;
    }
    uVar8 = uVar8 + uVar6;
    uVar5 = uVar5 + uVar4;
    if (bVar20) {
      uVar6 = puVar16[-2];
      uVar4 = puVar16[-1];
      local_50 = local_50 ^ uVar2;
      local_4c = local_4c ^ uVar3;
    }
    puVar18[8] = local_50;
    if (bVar20) {
      uVar8 = uVar8 ^ uVar6;
      uVar5 = uVar5 ^ uVar4;
    }
    puVar18[9] = local_4c;
    uVar4 = local_74;
    uVar6 = local_78;
    uVar3 = local_7c;
    uVar2 = local_80;
    puVar18[10] = uVar8;
    puVar18[0xb] = uVar5;
    local_40 = local_40 + uVar2;
    local_3c = local_3c + uVar3;
    if (0x40 < uVar1) {
      uVar2 = uVar2 + 1;
      local_80 = uVar2;
    }
    puVar10 = puVar16;
    if (bVar20) {
      puVar10 = puVar16 + 4;
      uVar2 = *puVar16;
      uVar3 = puVar16[1];
    }
    uVar8 = local_38 + uVar6;
    uVar5 = local_34 + uVar4;
    if (bVar20) {
      uVar6 = puVar10[-2];
      uVar4 = puVar10[-1];
      local_40 = local_40 ^ uVar2;
      local_3c = local_3c ^ uVar3;
    }
    if (bVar19) {
      uVar2 = local_28;
    }
    if (bVar20) {
      uVar8 = uVar8 ^ uVar6;
      uVar5 = uVar5 ^ uVar4;
    }
    puVar18[0xc] = local_40;
    puVar18[0xd] = local_3c;
    if (bVar20) {
      uVar4 = uVar2 - 0x40;
    }
    puVar18[0xe] = uVar8;
    puVar18[0xf] = uVar5;
    if (uVar1 < 0x41) break;
    local_28 = uVar4;
    local_2c = puVar10;
    local_30 = puVar18 + 0x10;
  }
  if (bVar19) {
    puVar10 = &local_b0;
    do {
      uVar2 = uVar2 - 1;
      *(byte *)local_30 = (byte)*local_2c ^ *(byte *)puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
      local_2c = (uint *)((int)local_2c + 1);
      local_30 = (uint *)((int)local_30 + 1);
    } while (uVar2 != 0);
  }
  return;
}

