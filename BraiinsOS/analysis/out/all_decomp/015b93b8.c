// FUN_015b93b8 @ 015b93b8 size=1424 calls_out=4 calls_in=1
// strings: 

void FUN_015b93b8(uint *param_1,byte *param_2,uint param_3)

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
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint local_128;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  byte local_a8 [64];
  byte local_68 [68];
  
  uVar38 = param_1[0xc];
  uVar1 = param_1[0x20];
  uVar2 = (uint)(byte)uVar1;
  uVar26 = ~uVar38;
  if (uVar2 == 0) {
    if (uVar26 < param_3 + 0x3f >> 6) goto LAB_015b9920;
  }
  else {
    uVar36 = 0x40 - uVar2;
    if ((uVar36 < param_3) && (uVar26 < (param_3 - uVar36) + 0x3f >> 6)) {
LAB_015b9920:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,local_68,&DAT_018aa4b4,&DAT_018aa528);
    }
    if (param_3 < uVar36) {
      if (param_3 != 0) {
        pbVar15 = (byte *)((int)param_1 + uVar2 + 0x40);
        uVar38 = param_3;
        do {
          uVar38 = uVar38 - 1;
          *param_2 = *pbVar15 ^ *param_2;
          param_2 = param_2 + 1;
          pbVar15 = pbVar15 + 1;
        } while (uVar38 != 0);
      }
      *(byte *)(param_1 + 0x20) = (byte)uVar1 + (char)param_3;
      return;
    }
    pbVar15 = param_2;
    do {
      iVar14 = uVar2 + 0x40;
      uVar2 = uVar2 + 1;
      *pbVar15 = *(byte *)((int)param_1 + iVar14) ^ *pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (uVar2 != 0x40);
    param_3 = param_3 - uVar36;
    param_2 = param_2 + uVar36;
  }
  uVar1 = param_3 & 0x3f;
  if (param_3 >> 6 != 0) {
    uVar2 = param_1[4];
    uVar26 = param_1[5];
    uVar36 = param_1[6];
    uVar3 = param_1[7];
    uVar4 = param_1[8];
    uVar5 = param_1[9];
    uVar6 = param_1[10];
    uVar7 = param_1[0xb];
    uVar32 = *param_1;
    uVar30 = param_1[1];
    uVar27 = param_1[2];
    uVar34 = param_1[3];
    uVar8 = param_1[0xd];
    uVar23 = param_1[0xf];
    uVar18 = param_1[0xc];
    uVar9 = param_1[0xe];
    local_128 = 0;
    do {
      FUN_016dd606(&local_e8,0,0x40);
      iVar14 = 10;
      uVar10 = uVar30;
      uVar11 = uVar6;
      uVar28 = uVar27;
      uVar39 = uVar23;
      uVar25 = uVar9;
      uVar16 = uVar36;
      uVar31 = uVar7;
      uVar12 = uVar26;
      uVar13 = uVar32;
      local_104 = uVar4;
      local_100 = uVar8;
      local_fc = uVar18;
      local_f8 = uVar5;
      local_f4 = uVar3;
      local_f0 = uVar2;
      local_ec = uVar34;
      do {
        local_100 = local_100 ^ uVar12 + uVar10;
        local_f8 = local_f8 + (local_100 >> 0x10 | local_100 << 0x10);
        uVar24 = local_f8 ^ uVar12;
        uVar10 = uVar12 + uVar10 + (uVar24 >> 0x14 | uVar24 << 0xc);
        uVar33 = uVar10 ^ (local_100 >> 0x10 | local_100 << 0x10);
        uVar22 = local_f8 + (uVar33 >> 0x18 | uVar33 << 8);
        uVar25 = uVar25 ^ uVar16 + uVar28;
        uVar11 = uVar11 + (uVar25 >> 0x10 | uVar25 << 0x10);
        uVar12 = uVar11 ^ uVar16;
        uVar28 = uVar16 + uVar28 + (uVar12 >> 0x14 | uVar12 << 0xc);
        uVar35 = uVar28 ^ (uVar25 >> 0x10 | uVar25 << 0x10);
        local_fc = local_fc ^ local_f0 + uVar13;
        local_104 = local_104 + (local_fc >> 0x10 | local_fc << 0x10);
        uVar25 = local_104 ^ local_f0;
        uVar13 = local_f0 + uVar13 + (uVar25 >> 0x14 | uVar25 << 0xc);
        uVar29 = uVar13 ^ (local_fc >> 0x10 | local_fc << 0x10);
        local_104 = local_104 + (uVar29 >> 0x18 | uVar29 << 8);
        uVar16 = local_104 ^ (uVar25 >> 0x14 | uVar25 << 0xc);
        uVar39 = uVar39 ^ local_f4 + local_ec;
        uVar31 = uVar31 + (uVar39 >> 0x10 | uVar39 << 0x10);
        uVar37 = uVar31 ^ local_f4;
        uVar19 = local_f4 + local_ec + (uVar37 >> 0x14 | uVar37 << 0xc);
        local_ec = uVar19 + (uVar16 >> 0x19 | uVar16 << 7);
        uVar25 = local_ec ^ (uVar35 >> 0x18 | uVar35 << 8);
        local_f8 = uVar22 + (uVar25 >> 0x10 | uVar25 << 0x10);
        uVar17 = local_f8 ^ (uVar16 >> 0x19 | uVar16 << 7);
        local_ec = local_ec + (uVar17 >> 0x14 | uVar17 << 0xc);
        uVar16 = local_ec ^ (uVar25 >> 0x10 | uVar25 << 0x10);
        uVar25 = uVar16 >> 0x18 | uVar16 << 8;
        local_f8 = local_f8 + (uVar16 >> 0x18 | uVar16 << 8);
        uVar16 = local_f8 ^ (uVar17 >> 0x14 | uVar17 << 0xc);
        uVar19 = uVar19 ^ (uVar39 >> 0x10 | uVar39 << 0x10);
        local_f0 = uVar16 >> 0x19 | uVar16 << 7;
        uVar31 = uVar31 + (uVar19 >> 0x18 | uVar19 << 8);
        uVar16 = uVar31 ^ (uVar37 >> 0x14 | uVar37 << 0xc);
        uVar28 = uVar28 + (uVar16 >> 0x19 | uVar16 << 7);
        uVar39 = uVar28 ^ (uVar33 >> 0x18 | uVar33 << 8);
        local_104 = local_104 + (uVar39 >> 0x10 | uVar39 << 0x10);
        uVar16 = local_104 ^ (uVar16 >> 0x19 | uVar16 << 7);
        uVar28 = uVar28 + (uVar16 >> 0x14 | uVar16 << 0xc);
        uVar39 = uVar28 ^ (uVar39 >> 0x10 | uVar39 << 0x10);
        local_100 = uVar39 >> 0x18 | uVar39 << 8;
        local_104 = local_104 + (uVar39 >> 0x18 | uVar39 << 8);
        uVar16 = local_104 ^ (uVar16 >> 0x14 | uVar16 << 0xc);
        local_f4 = uVar16 >> 0x19 | uVar16 << 7;
        uVar11 = uVar11 + (uVar35 >> 0x18 | uVar35 << 8);
        uVar16 = uVar11 ^ (uVar12 >> 0x14 | uVar12 << 0xc);
        uVar10 = uVar10 + (uVar16 >> 0x19 | uVar16 << 7);
        uVar39 = uVar10 ^ (uVar29 >> 0x18 | uVar29 << 8);
        uVar31 = uVar31 + (uVar39 >> 0x10 | uVar39 << 0x10);
        uVar16 = uVar31 ^ (uVar16 >> 0x19 | uVar16 << 7);
        uVar10 = uVar10 + (uVar16 >> 0x14 | uVar16 << 0xc);
        uVar39 = uVar10 ^ (uVar39 >> 0x10 | uVar39 << 0x10);
        uVar31 = uVar31 + (uVar39 >> 0x18 | uVar39 << 8);
        local_fc = uVar39 >> 0x18 | uVar39 << 8;
        uVar16 = uVar31 ^ (uVar16 >> 0x14 | uVar16 << 0xc);
        uVar16 = uVar16 >> 0x19 | uVar16 << 7;
        uVar22 = uVar22 ^ (uVar24 >> 0x14 | uVar24 << 0xc);
        uVar13 = uVar13 + (uVar22 >> 0x19 | uVar22 << 7);
        uVar39 = uVar13 ^ (uVar19 >> 0x18 | uVar19 << 8);
        uVar11 = uVar11 + (uVar39 >> 0x10 | uVar39 << 0x10);
        uVar19 = uVar11 ^ (uVar22 >> 0x19 | uVar22 << 7);
        uVar13 = uVar13 + (uVar19 >> 0x14 | uVar19 << 0xc);
        uVar12 = uVar13 ^ (uVar39 >> 0x10 | uVar39 << 0x10);
        uVar39 = uVar12 >> 0x18 | uVar12 << 8;
        uVar11 = uVar11 + (uVar12 >> 0x18 | uVar12 << 8);
        uVar12 = uVar11 ^ (uVar19 >> 0x14 | uVar19 << 0xc);
        uVar12 = uVar12 >> 0x19 | uVar12 << 7;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      local_ac = uVar23 + uVar39;
      local_b0 = uVar9 + uVar25;
      local_b4 = uVar8 + local_100;
      local_b8 = uVar18 + local_fc;
      local_bc = uVar7 + uVar31;
      local_c0 = uVar6 + uVar11;
      local_e4 = uVar30 + uVar10;
      local_e8 = uVar32 + uVar13;
      local_c4 = uVar5 + local_f8;
      local_c8 = uVar4 + local_104;
      local_cc = uVar3 + local_f4;
      local_d0 = uVar36 + uVar16;
      local_d4 = uVar26 + uVar12;
      iVar14 = local_128 * 0x40;
      local_d8 = uVar2 + local_f0;
      local_dc = uVar34 + local_ec;
      local_e0 = uVar27 + uVar28;
      FUN_016dd1aa(local_a8,param_2 + iVar14,0x40);
      iVar20 = 0;
      FUN_016dd606(local_68,0,0x40);
      local_128 = local_128 + 1;
      uVar18 = uVar38 + 1;
      do {
        local_68[iVar20] = local_a8[iVar20 + -0x40] ^ local_a8[iVar20];
        iVar20 = iVar20 + 1;
      } while (iVar20 != 0x40);
      FUN_016dd1aa(param_2 + iVar14,local_68,0x40);
      uVar38 = uVar18;
    } while (param_3 >> 6 != local_128);
    param_1[0xc] = uVar18;
  }
  if (uVar1 != 0) {
    FUN_015bb554(param_1,param_1 + 0x10);
    uVar38 = uVar1;
    puVar21 = param_1 + 0x10;
    pbVar15 = param_2 + (param_3 & 0x7fffffc0);
    do {
      uVar38 = uVar38 - 1;
      *pbVar15 = (byte)*puVar21 ^ *pbVar15;
      puVar21 = (uint *)((int)puVar21 + 1);
      pbVar15 = pbVar15 + 1;
    } while (uVar38 != 0);
  }
  *(char *)(param_1 + 0x20) = (char)uVar1;
  return;
}

