// FUN_0196edfc @ 0196edfc size=38604 calls_out=1 calls_in=2
// strings: 

void FUN_0196edfc(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
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
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  bool bVar72;
  uint local_190;
  uint local_18c;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8 [33];
  
  FUN_01bed93e(local_a8,0,0x80);
  iVar1 = param_2 + param_3 * 0x80;
  local_ac = *param_1;
  local_b0 = param_1[1];
  local_b4 = param_1[5];
  local_b8 = param_1[2];
  uVar29 = param_1[4];
  local_18c = param_1[7];
  local_190 = param_1[6];
  local_bc = param_1[8];
  local_144 = param_1[10];
  local_14c = param_1[0xd];
  uVar48 = param_1[3];
  uVar54 = param_1[9];
  uVar8 = param_1[0xb];
  uVar23 = param_1[0xf];
  uVar35 = param_1[0xe];
  local_148 = param_1[0xc];
  do {
    iVar6 = 0;
    do {
      uVar7 = *(uint *)(param_2 + iVar6);
      uVar3 = ((uint *)(param_2 + iVar6))[1];
      *(uint *)((int)local_a8 + iVar6) =
           uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18
      ;
      iVar2 = iVar6 + 8;
      *(uint *)((int)local_a8 + iVar6 + 4) =
           uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
      ;
      iVar6 = iVar2;
    } while (iVar2 != 0x80);
    uVar3 = (uVar54 << 0x12 | local_bc >> 0xe) ^ (uVar54 << 0xe | local_bc >> 0x12) ^
            (local_bc << 0x17 | uVar54 >> 9);
    uVar7 = uVar35 + uVar3;
    uVar9 = local_144 & local_bc | local_148 & ~local_bc;
    uVar4 = uVar7 + uVar9;
    uVar5 = uVar4 + local_a8[0];
    uVar36 = uVar5 + 0xd728ae22;
    iVar6 = uVar23 + ((local_bc << 0x12 | uVar54 >> 0xe) ^ (local_bc << 0xe | uVar54 >> 0x12) ^
                     (uVar54 << 0x17 | local_bc >> 9)) + (uint)CARRY4(uVar35,uVar3) +
            (uVar8 & uVar54 | local_14c & ~uVar54) + (uint)CARRY4(uVar7,uVar9) + local_a8[1] +
            (uint)CARRY4(uVar4,local_a8[0]) + 0x428a2f98 + (uint)(0x28d751dd < uVar5);
    uVar7 = (uVar29 ^ local_b8) & local_ac ^ uVar29 & local_b8;
    uVar3 = (local_b0 << 4 | local_ac >> 0x1c) ^ (local_ac << 0x1e | local_b0 >> 2) ^
            (local_ac << 0x19 | local_b0 >> 7);
    uVar4 = uVar7 + uVar3;
    uVar43 = uVar4 + uVar36;
    uVar16 = ((local_b4 ^ uVar48) & local_b0 ^ local_b4 & uVar48) +
             ((local_ac << 4 | local_b0 >> 0x1c) ^ (local_b0 << 0x1e | local_ac >> 2) ^
             (local_b0 << 0x19 | local_ac >> 7)) + (uint)CARRY4(uVar7,uVar3) + iVar6 +
             (uint)CARRY4(uVar4,uVar36);
    uVar3 = (uVar16 * 0x10 | uVar43 >> 0x1c) ^ (uVar43 * 0x40000000 | uVar16 >> 2) ^
            (uVar43 * 0x2000000 | uVar16 >> 7);
    uVar17 = uVar43 & (local_b8 ^ local_ac) ^ local_b8 & local_ac;
    uVar61 = uVar3 + uVar17;
    uVar49 = uVar36 + local_190;
    uVar5 = iVar6 + local_18c + (uint)CARRY4(uVar36,local_190);
    uVar36 = local_bc & uVar49 | local_144 & ~uVar49;
    uVar18 = local_148 + local_a8[2] + uVar36;
    uVar7 = (uVar5 * 0x40000 | uVar49 >> 0xe) ^ (uVar5 * 0x4000 | uVar49 >> 0x12) ^
            (uVar49 * 0x800000 | uVar5 >> 9);
    uVar4 = uVar18 + uVar7;
    uVar9 = uVar4 + 0x23ef65cd;
    iVar6 = local_14c + local_a8[3] + (uint)CARRY4(local_148,local_a8[2]) +
            (uVar54 & uVar5 | uVar8 & ~uVar5) + (uint)CARRY4(local_148 + local_a8[2],uVar36) +
            ((uVar49 * 0x40000 | uVar5 >> 0xe) ^ (uVar49 * 0x4000 | uVar5 >> 0x12) ^
            (uVar5 * 0x800000 | uVar49 >> 9)) + (uint)CARRY4(uVar18,uVar7) + 0x71374491 +
            (uint)(0xdc109a32 < uVar4);
    uVar11 = uVar61 + uVar9;
    uVar19 = ((uVar43 * 0x10 | uVar16 >> 0x1c) ^ (uVar16 * 0x40000000 | uVar43 >> 2) ^
             (uVar16 * 0x2000000 | uVar43 >> 7)) +
             (uVar16 & (uVar48 ^ local_b0) ^ uVar48 & local_b0) + (uint)CARRY4(uVar3,uVar17) + iVar6
             + (uint)CARRY4(uVar61,uVar9);
    uVar4 = (uVar19 * 0x10 | uVar11 >> 0x1c) ^ (uVar11 * 0x40000000 | uVar19 >> 2) ^
            (uVar11 * 0x2000000 | uVar19 >> 7);
    uVar7 = uVar11 & (uVar43 ^ local_ac) ^ uVar43 & local_ac;
    uVar3 = uVar4 + uVar7;
    uVar44 = uVar9 + uVar29;
    uVar18 = iVar6 + local_b4 + (uint)CARRY4(uVar9,uVar29);
    uVar17 = uVar49 & uVar44 | local_bc & ~uVar44;
    uVar36 = local_144 + local_a8[4] + uVar17;
    uVar9 = (uVar18 * 0x40000 | uVar44 >> 0xe) ^ (uVar18 * 0x4000 | uVar44 >> 0x12) ^
            (uVar44 * 0x800000 | uVar18 >> 9);
    uVar61 = uVar36 + uVar9;
    uVar55 = uVar61 + 0xec4d3b2f;
    iVar6 = uVar8 + local_a8[5] + (uint)CARRY4(local_144,local_a8[4]) +
            (uVar5 & uVar18 | uVar54 & ~uVar18) + (uint)CARRY4(local_144 + local_a8[4],uVar17) +
            ((uVar44 * 0x40000 | uVar18 >> 0xe) ^ (uVar44 * 0x4000 | uVar18 >> 0x12) ^
            (uVar18 * 0x800000 | uVar44 >> 9)) + (uint)CARRY4(uVar36,uVar9) + -0x4a3f0431 +
            (uint)(0x13b2c4d0 < uVar61);
    uVar61 = uVar3 + uVar55;
    uVar9 = ((uVar11 * 0x10 | uVar19 >> 0x1c) ^ (uVar19 * 0x40000000 | uVar11 >> 2) ^
            (uVar19 * 0x2000000 | uVar11 >> 7)) + (uVar19 & (uVar16 ^ local_b0) ^ uVar16 & local_b0)
            + (uint)CARRY4(uVar4,uVar7) + iVar6 + (uint)CARRY4(uVar3,uVar55);
    uVar36 = (uVar9 * 0x10 | uVar61 >> 0x1c) ^ (uVar61 * 0x40000000 | uVar9 >> 2) ^
             (uVar61 * 0x2000000 | uVar9 >> 7);
    uVar24 = uVar61 & (uVar11 ^ uVar43) ^ uVar11 & uVar43;
    uVar3 = uVar36 + uVar24;
    uVar56 = uVar55 + local_b8;
    uVar62 = iVar6 + uVar48 + (uint)CARRY4(uVar55,local_b8);
    uVar17 = uVar44 & uVar56 | uVar49 & ~uVar56;
    uVar55 = local_bc + local_a8[6] + uVar17;
    uVar7 = (uVar62 * 0x40000 | uVar56 >> 0xe) ^ (uVar62 * 0x4000 | uVar56 >> 0x12) ^
            (uVar56 * 0x800000 | uVar62 >> 9);
    uVar4 = uVar55 + uVar7;
    uVar30 = uVar4 + 0x8189dbbc;
    iVar6 = uVar54 + local_a8[7] + (uint)CARRY4(local_bc,local_a8[6]) +
            (uVar18 & uVar62 | uVar5 & ~uVar62) + (uint)CARRY4(local_bc + local_a8[6],uVar17) +
            ((uVar56 * 0x40000 | uVar62 >> 0xe) ^ (uVar56 * 0x4000 | uVar62 >> 0x12) ^
            (uVar62 * 0x800000 | uVar56 >> 9)) + (uint)CARRY4(uVar55,uVar7) + -0x164a245b +
            (uint)(0x7e762443 < uVar4);
    uVar17 = uVar3 + uVar30;
    uVar13 = ((uVar61 * 0x10 | uVar9 >> 0x1c) ^ (uVar9 * 0x40000000 | uVar61 >> 2) ^
             (uVar9 * 0x2000000 | uVar61 >> 7)) + (uVar9 & (uVar19 ^ uVar16) ^ uVar19 & uVar16) +
             (uint)CARRY4(uVar36,uVar24) + iVar6 + (uint)CARRY4(uVar3,uVar30);
    uVar55 = (uVar13 * 0x10 | uVar17 >> 0x1c) ^ (uVar17 * 0x40000000 | uVar13 >> 2) ^
             (uVar17 * 0x2000000 | uVar13 >> 7);
    uVar36 = uVar17 & (uVar61 ^ uVar11) ^ uVar61 & uVar11;
    uVar3 = uVar55 + uVar36;
    uVar12 = uVar30 + local_ac;
    uVar14 = iVar6 + local_b0 + (uint)CARRY4(uVar30,local_ac);
    uVar24 = uVar56 & uVar12 | uVar44 & ~uVar12;
    uVar30 = uVar49 + local_a8[8] + uVar24;
    uVar7 = (uVar14 * 0x40000 | uVar12 >> 0xe) ^ (uVar14 * 0x4000 | uVar12 >> 0x12) ^
            (uVar12 * 0x800000 | uVar14 >> 9);
    uVar4 = uVar30 + uVar7;
    uVar37 = uVar4 + 0xf348b538;
    iVar6 = uVar5 + local_a8[9] + (uint)CARRY4(uVar49,local_a8[8]) +
            (uVar62 & uVar14 | uVar18 & ~uVar14) + (uint)CARRY4(uVar49 + local_a8[8],uVar24) +
            ((uVar12 * 0x40000 | uVar14 >> 0xe) ^ (uVar12 * 0x4000 | uVar14 >> 0x12) ^
            (uVar14 * 0x800000 | uVar12 >> 9)) + (uint)CARRY4(uVar30,uVar7) + 0x3956c25b +
            (uint)(0xcb74ac7 < uVar4);
    uVar24 = uVar3 + uVar37;
    uVar36 = ((uVar17 * 0x10 | uVar13 >> 0x1c) ^ (uVar13 * 0x40000000 | uVar17 >> 2) ^
             (uVar13 * 0x2000000 | uVar17 >> 7)) + (uVar13 & (uVar9 ^ uVar19) ^ uVar9 & uVar19) +
             (uint)CARRY4(uVar55,uVar36) + iVar6 + (uint)CARRY4(uVar3,uVar37);
    uVar49 = (uVar36 * 0x10 | uVar24 >> 0x1c) ^ (uVar24 * 0x40000000 | uVar36 >> 2) ^
             (uVar24 * 0x2000000 | uVar36 >> 7);
    uVar3 = uVar24 & (uVar17 ^ uVar61) ^ uVar17 & uVar61;
    uVar7 = uVar49 + uVar3;
    uVar50 = uVar37 + uVar43;
    uVar43 = iVar6 + uVar16 + (uint)CARRY4(uVar37,uVar43);
    uVar55 = uVar12 & uVar50 | uVar56 & ~uVar50;
    uVar4 = local_a8[10] + uVar44 + uVar55;
    uVar16 = (uVar43 * 0x40000 | uVar50 >> 0xe) ^ (uVar43 * 0x4000 | uVar50 >> 0x12) ^
             (uVar50 * 0x800000 | uVar43 >> 9);
    uVar5 = uVar4 + uVar16;
    uVar30 = uVar5 + 0xb605d019;
    iVar6 = local_a8[0xb] + uVar18 + (uint)CARRY4(local_a8[10],uVar44) +
            (uVar14 & uVar43 | uVar62 & ~uVar43) + (uint)CARRY4(local_a8[10] + uVar44,uVar55) +
            ((uVar50 * 0x40000 | uVar43 >> 0xe) ^ (uVar50 * 0x4000 | uVar43 >> 0x12) ^
            (uVar43 * 0x800000 | uVar50 >> 9)) + (uint)CARRY4(uVar4,uVar16) + 0x59f111f1 +
            (uint)(0x49fa2fe6 < uVar5);
    uVar55 = uVar7 + uVar30;
    uVar3 = ((uVar24 * 0x10 | uVar36 >> 0x1c) ^ (uVar36 * 0x40000000 | uVar24 >> 2) ^
            (uVar36 * 0x2000000 | uVar24 >> 7)) + (uVar36 & (uVar13 ^ uVar9) ^ uVar13 & uVar9) +
            (uint)CARRY4(uVar49,uVar3) + iVar6 + (uint)CARRY4(uVar7,uVar30);
    uVar5 = (uVar3 * 0x10 | uVar55 >> 0x1c) ^ (uVar55 * 0x40000000 | uVar3 >> 2) ^
            (uVar55 * 0x2000000 | uVar3 >> 7);
    uVar4 = uVar55 & (uVar24 ^ uVar17) ^ uVar24 & uVar17;
    uVar7 = uVar5 + uVar4;
    uVar16 = uVar30 + uVar11;
    uVar19 = iVar6 + uVar19 + (uint)CARRY4(uVar30,uVar11);
    uVar18 = uVar50 & uVar16 | uVar12 & ~uVar16;
    uVar37 = local_a8[0xc] + uVar56 + uVar18;
    uVar11 = (uVar19 * 0x40000 | uVar16 >> 0xe) ^ (uVar19 * 0x4000 | uVar16 >> 0x12) ^
             (uVar16 * 0x800000 | uVar19 >> 9);
    uVar30 = uVar37 + uVar11;
    uVar44 = uVar30 + 0xaf194f9b;
    iVar6 = local_a8[0xd] + uVar62 + (uint)CARRY4(local_a8[0xc],uVar56) +
            (uVar43 & uVar19 | uVar14 & ~uVar19) + (uint)CARRY4(local_a8[0xc] + uVar56,uVar18) +
            ((uVar16 * 0x40000 | uVar19 >> 0xe) ^ (uVar16 * 0x4000 | uVar19 >> 0x12) ^
            (uVar19 * 0x800000 | uVar16 >> 9)) + (uint)CARRY4(uVar37,uVar11) + -0x6dc07d5c +
            (uint)(0x50e6b064 < uVar30);
    uVar30 = uVar7 + uVar44;
    uVar18 = ((uVar55 * 0x10 | uVar3 >> 0x1c) ^ (uVar3 * 0x40000000 | uVar55 >> 2) ^
             (uVar3 * 0x2000000 | uVar55 >> 7)) + (uVar3 & (uVar36 ^ uVar13) ^ uVar36 & uVar13) +
             (uint)CARRY4(uVar5,uVar4) + iVar6 + (uint)CARRY4(uVar7,uVar44);
    uVar5 = (uVar18 * 0x10 | uVar30 >> 0x1c) ^ (uVar30 * 0x40000000 | uVar18 >> 2) ^
            (uVar30 * 0x2000000 | uVar18 >> 7);
    uVar7 = uVar30 & (uVar55 ^ uVar24) ^ uVar55 & uVar24;
    uVar37 = uVar5 + uVar7;
    uVar63 = uVar44 + uVar61;
    uVar61 = iVar6 + uVar9 + (uint)CARRY4(uVar44,uVar61);
    uVar44 = uVar16 & uVar63 | uVar50 & ~uVar63;
    uVar9 = local_a8[0xe] + uVar12 + uVar44;
    uVar4 = (uVar61 * 0x40000 | uVar63 >> 0xe) ^ (uVar61 * 0x4000 | uVar63 >> 0x12) ^
            (uVar63 * 0x800000 | uVar61 >> 9);
    uVar11 = uVar9 + uVar4;
    uVar49 = uVar11 + 0xda6d8118;
    iVar6 = local_a8[0xf] + uVar14 + (uint)CARRY4(local_a8[0xe],uVar12) +
            (uVar19 & uVar61 | uVar43 & ~uVar61) + (uint)CARRY4(local_a8[0xe] + uVar12,uVar44) +
            ((uVar63 * 0x40000 | uVar61 >> 0xe) ^ (uVar63 * 0x4000 | uVar61 >> 0x12) ^
            (uVar61 * 0x800000 | uVar63 >> 9)) + (uint)CARRY4(uVar9,uVar4) + -0x54e3a12b +
            (uint)(0x25927ee7 < uVar11);
    uVar56 = uVar37 + uVar49;
    uVar12 = ((uVar30 * 0x10 | uVar18 >> 0x1c) ^ (uVar18 * 0x40000000 | uVar30 >> 2) ^
             (uVar18 * 0x2000000 | uVar30 >> 7)) + (uVar18 & (uVar3 ^ uVar36) ^ uVar3 & uVar36) +
             (uint)CARRY4(uVar5,uVar7) + iVar6 + (uint)CARRY4(uVar37,uVar49);
    uVar37 = (uVar12 * 0x10 | uVar56 >> 0x1c) ^ (uVar56 * 0x40000000 | uVar12 >> 2) ^
             (uVar56 * 0x2000000 | uVar12 >> 7);
    uVar9 = uVar56 & (uVar30 ^ uVar55) ^ uVar30 & uVar55;
    uVar7 = uVar37 + uVar9;
    uVar11 = uVar49 + uVar17;
    uVar17 = iVar6 + uVar13 + (uint)CARRY4(uVar49,uVar17);
    uVar13 = uVar63 & uVar11 | uVar16 & ~uVar11;
    uVar14 = local_a8[0x10] + uVar50 + uVar13;
    uVar4 = (uVar17 * 0x40000 | uVar11 >> 0xe) ^ (uVar17 * 0x4000 | uVar11 >> 0x12) ^
            (uVar11 * 0x800000 | uVar17 >> 9);
    uVar5 = uVar14 + uVar4;
    uVar62 = uVar5 + 0xa3030242;
    iVar6 = local_a8[0x11] + uVar43 + (uint)CARRY4(local_a8[0x10],uVar50) +
            (uVar61 & uVar17 | uVar19 & ~uVar17) + (uint)CARRY4(local_a8[0x10] + uVar50,uVar13) +
            ((uVar11 * 0x40000 | uVar17 >> 0xe) ^ (uVar11 * 0x4000 | uVar17 >> 0x12) ^
            (uVar17 * 0x800000 | uVar11 >> 9)) + (uint)CARRY4(uVar14,uVar4) + -0x27f85568 +
            (uint)(0x5cfcfdbd < uVar5);
    uVar44 = uVar7 + uVar62;
    uVar13 = ((uVar56 * 0x10 | uVar12 >> 0x1c) ^ (uVar12 * 0x40000000 | uVar56 >> 2) ^
             (uVar12 * 0x2000000 | uVar56 >> 7)) + (uVar12 & (uVar18 ^ uVar3) ^ uVar18 & uVar3) +
             (uint)CARRY4(uVar37,uVar9) + iVar6 + (uint)CARRY4(uVar7,uVar62);
    uVar43 = (uVar13 * 0x10 | uVar44 >> 0x1c) ^ (uVar44 * 0x40000000 | uVar13 >> 2) ^
             (uVar44 * 0x2000000 | uVar13 >> 7);
    uVar14 = uVar44 & (uVar56 ^ uVar30) ^ uVar56 & uVar30;
    uVar7 = uVar43 + uVar14;
    uVar49 = uVar62 + uVar24;
    uVar37 = iVar6 + uVar36 + (uint)CARRY4(uVar62,uVar24);
    uVar4 = uVar11 & uVar49 | uVar63 & ~uVar49;
    uVar5 = local_a8[0x12] + uVar16 + uVar4;
    uVar36 = (uVar37 * 0x40000 | uVar49 >> 0xe) ^ (uVar37 * 0x4000 | uVar49 >> 0x12) ^
             (uVar49 * 0x800000 | uVar37 >> 9);
    uVar9 = uVar5 + uVar36;
    uVar62 = uVar9 + 0x45706fbe;
    iVar6 = local_a8[0x13] + uVar19 + (uint)CARRY4(local_a8[0x12],uVar16) +
            (uVar17 & uVar37 | uVar61 & ~uVar37) + (uint)CARRY4(local_a8[0x12] + uVar16,uVar4) +
            ((uVar49 * 0x40000 | uVar37 >> 0xe) ^ (uVar49 * 0x4000 | uVar37 >> 0x12) ^
            (uVar37 * 0x800000 | uVar49 >> 9)) + (uint)CARRY4(uVar5,uVar36) + 0x12835b01 +
            (uint)(0xba8f9041 < uVar9);
    uVar16 = uVar7 + uVar62;
    uVar24 = ((uVar44 * 0x10 | uVar13 >> 0x1c) ^ (uVar13 * 0x40000000 | uVar44 >> 2) ^
             (uVar13 * 0x2000000 | uVar44 >> 7)) + (uVar13 & (uVar12 ^ uVar18) ^ uVar12 & uVar18) +
             (uint)CARRY4(uVar43,uVar14) + iVar6 + (uint)CARRY4(uVar7,uVar62);
    uVar43 = (uVar24 * 0x10 | uVar16 >> 0x1c) ^ (uVar16 * 0x40000000 | uVar24 >> 2) ^
             (uVar16 * 0x2000000 | uVar24 >> 7);
    uVar5 = uVar16 & (uVar44 ^ uVar56) ^ uVar44 & uVar56;
    uVar7 = uVar43 + uVar5;
    uVar36 = uVar62 + uVar55;
    uVar55 = iVar6 + uVar3 + (uint)CARRY4(uVar62,uVar55);
    uVar19 = uVar49 & uVar36 | uVar11 & ~uVar36;
    uVar9 = local_a8[0x14] + uVar63 + uVar19;
    uVar3 = (uVar55 * 0x40000 | uVar36 >> 0xe) ^ (uVar55 * 0x4000 | uVar36 >> 0x12) ^
            (uVar36 * 0x800000 | uVar55 >> 9);
    uVar4 = uVar9 + uVar3;
    uVar14 = uVar4 + 0x4ee4b28c;
    iVar6 = local_a8[0x15] + uVar61 + (uint)CARRY4(local_a8[0x14],uVar63) +
            (uVar37 & uVar55 | uVar17 & ~uVar55) + (uint)CARRY4(local_a8[0x14] + uVar63,uVar19) +
            ((uVar36 * 0x40000 | uVar55 >> 0xe) ^ (uVar36 * 0x4000 | uVar55 >> 0x12) ^
            (uVar55 * 0x800000 | uVar36 >> 9)) + (uint)CARRY4(uVar9,uVar3) + 0x243185be +
            (uint)(0xb11b4d73 < uVar4);
    uVar62 = uVar7 + uVar14;
    uVar9 = ((uVar16 * 0x10 | uVar24 >> 0x1c) ^ (uVar24 * 0x40000000 | uVar16 >> 2) ^
            (uVar24 * 0x2000000 | uVar16 >> 7)) + (uVar24 & (uVar13 ^ uVar12) ^ uVar13 & uVar12) +
            (uint)CARRY4(uVar43,uVar5) + iVar6 + (uint)CARRY4(uVar7,uVar14);
    uVar61 = (uVar9 * 0x10 | uVar62 >> 0x1c) ^ (uVar62 * 0x40000000 | uVar9 >> 2) ^
             (uVar62 * 0x2000000 | uVar9 >> 7);
    uVar4 = uVar62 & (uVar16 ^ uVar44) ^ uVar16 & uVar44;
    uVar5 = uVar61 + uVar4;
    uVar50 = uVar14 + uVar30;
    uVar64 = iVar6 + uVar18 + (uint)CARRY4(uVar14,uVar30);
    uVar19 = uVar36 & uVar50 | uVar49 & ~uVar50;
    uVar18 = local_a8[0x16] + uVar11 + uVar19;
    uVar3 = (uVar64 * 0x40000 | uVar50 >> 0xe) ^ (uVar64 * 0x4000 | uVar50 >> 0x12) ^
            (uVar50 * 0x800000 | uVar64 >> 9);
    uVar7 = uVar18 + uVar3;
    uVar30 = uVar7 + 0xd5ffb4e2;
    iVar6 = local_a8[0x17] + uVar17 + (uint)CARRY4(local_a8[0x16],uVar11) +
            (uVar55 & uVar64 | uVar37 & ~uVar64) + (uint)CARRY4(local_a8[0x16] + uVar11,uVar19) +
            ((uVar50 * 0x40000 | uVar64 >> 0xe) ^ (uVar50 * 0x4000 | uVar64 >> 0x12) ^
            (uVar64 * 0x800000 | uVar50 >> 9)) + (uint)CARRY4(uVar18,uVar3) + 0x550c7dc3 +
            (uint)(0x2a004b1d < uVar7);
    uVar17 = uVar5 + uVar30;
    uVar43 = ((uVar62 * 0x10 | uVar9 >> 0x1c) ^ (uVar9 * 0x40000000 | uVar62 >> 2) ^
             (uVar9 * 0x2000000 | uVar62 >> 7)) + (uVar9 & (uVar24 ^ uVar13) ^ uVar24 & uVar13) +
             (uint)CARRY4(uVar61,uVar4) + iVar6 + (uint)CARRY4(uVar5,uVar30);
    uVar4 = (uVar43 * 0x10 | uVar17 >> 0x1c) ^ (uVar17 * 0x40000000 | uVar43 >> 2) ^
            (uVar17 * 0x2000000 | uVar43 >> 7);
    uVar18 = uVar17 & (uVar62 ^ uVar16) ^ uVar62 & uVar16;
    uVar5 = uVar4 + uVar18;
    uVar63 = uVar30 + uVar56;
    uVar19 = iVar6 + uVar12 + (uint)CARRY4(uVar30,uVar56);
    uVar11 = uVar50 & uVar63 | uVar36 & ~uVar63;
    uVar61 = local_a8[0x18] + uVar49 + uVar11;
    uVar3 = (uVar19 * 0x40000 | uVar63 >> 0xe) ^ (uVar19 * 0x4000 | uVar63 >> 0x12) ^
            (uVar63 * 0x800000 | uVar19 >> 9);
    uVar7 = uVar61 + uVar3;
    uVar12 = uVar7 + 0xf27b896f;
    iVar6 = local_a8[0x19] + uVar37 + (uint)CARRY4(local_a8[0x18],uVar49) +
            (uVar64 & uVar19 | uVar55 & ~uVar19) + (uint)CARRY4(local_a8[0x18] + uVar49,uVar11) +
            ((uVar63 * 0x40000 | uVar19 >> 0xe) ^ (uVar63 * 0x4000 | uVar19 >> 0x12) ^
            (uVar19 * 0x800000 | uVar63 >> 9)) + (uint)CARRY4(uVar61,uVar3) + 0x72be5d74 +
            (uint)(0xd847690 < uVar7);
    uVar11 = uVar5 + uVar12;
    uVar14 = ((uVar17 * 0x10 | uVar43 >> 0x1c) ^ (uVar43 * 0x40000000 | uVar17 >> 2) ^
             (uVar43 * 0x2000000 | uVar17 >> 7)) + (uVar43 & (uVar9 ^ uVar24) ^ uVar9 & uVar24) +
             (uint)CARRY4(uVar4,uVar18) + iVar6 + (uint)CARRY4(uVar5,uVar12);
    uVar30 = (uVar14 * 0x10 | uVar11 >> 0x1c) ^ (uVar11 * 0x40000000 | uVar14 >> 2) ^
             (uVar11 * 0x2000000 | uVar14 >> 7);
    uVar18 = uVar11 & (uVar17 ^ uVar62) ^ uVar17 & uVar62;
    uVar3 = uVar30 + uVar18;
    uVar49 = uVar12 + uVar44;
    uVar44 = iVar6 + uVar13 + (uint)CARRY4(uVar12,uVar44);
    uVar7 = uVar63 & uVar49 | uVar50 & ~uVar49;
    uVar4 = local_a8[0x1a] + uVar36 + uVar7;
    uVar61 = (uVar44 * 0x40000 | uVar49 >> 0xe) ^ (uVar44 * 0x4000 | uVar49 >> 0x12) ^
             (uVar49 * 0x800000 | uVar44 >> 9);
    uVar5 = uVar4 + uVar61;
    uVar12 = uVar5 + 0x3b1696b1;
    iVar6 = local_a8[0x1b] + uVar55 + (uint)CARRY4(local_a8[0x1a],uVar36) +
            (uVar19 & uVar44 | uVar64 & ~uVar44) + (uint)CARRY4(local_a8[0x1a] + uVar36,uVar7) +
            ((uVar49 * 0x40000 | uVar44 >> 0xe) ^ (uVar49 * 0x4000 | uVar44 >> 0x12) ^
            (uVar44 * 0x800000 | uVar49 >> 9)) + (uint)CARRY4(uVar4,uVar61) + -0x7f214e02 +
            (uint)(0xc4e9694e < uVar5);
    uVar36 = uVar3 + uVar12;
    uVar55 = ((uVar11 * 0x10 | uVar14 >> 0x1c) ^ (uVar14 * 0x40000000 | uVar11 >> 2) ^
             (uVar14 * 0x2000000 | uVar11 >> 7)) + (uVar14 & (uVar43 ^ uVar9) ^ uVar43 & uVar9) +
             (uint)CARRY4(uVar30,uVar18) + iVar6 + (uint)CARRY4(uVar3,uVar12);
    uVar13 = (uVar55 * 0x10 | uVar36 >> 0x1c) ^ (uVar36 * 0x40000000 | uVar55 >> 2) ^
             (uVar36 * 0x2000000 | uVar55 >> 7);
    uVar61 = uVar36 & (uVar11 ^ uVar17) ^ uVar11 & uVar17;
    uVar37 = uVar13 + uVar61;
    uVar30 = uVar12 + uVar16;
    uVar3 = iVar6 + uVar24 + (uint)CARRY4(uVar12,uVar16);
    uVar5 = uVar49 & uVar30 | uVar63 & ~uVar30;
    uVar7 = local_a8[0x1c] + uVar50 + uVar5;
    uVar18 = (uVar3 * 0x40000 | uVar30 >> 0xe) ^ (uVar3 * 0x4000 | uVar30 >> 0x12) ^
             (uVar30 * 0x800000 | uVar3 >> 9);
    uVar4 = uVar7 + uVar18;
    uVar16 = uVar4 + 0x25c71235;
    iVar6 = local_a8[0x1d] + uVar64 + (uint)CARRY4(local_a8[0x1c],uVar50) +
            (uVar44 & uVar3 | uVar19 & ~uVar3) + (uint)CARRY4(local_a8[0x1c] + uVar50,uVar5) +
            ((uVar30 * 0x40000 | uVar3 >> 0xe) ^ (uVar30 * 0x4000 | uVar3 >> 0x12) ^
            (uVar3 * 0x800000 | uVar30 >> 9)) + (uint)CARRY4(uVar7,uVar18) + -0x6423f959 +
            (uint)(0xda38edca < uVar4);
    uVar18 = uVar37 + uVar16;
    uVar24 = ((uVar36 * 0x10 | uVar55 >> 0x1c) ^ (uVar55 * 0x40000000 | uVar36 >> 2) ^
             (uVar55 * 0x2000000 | uVar36 >> 7)) + (uVar55 & (uVar14 ^ uVar43) ^ uVar14 & uVar43) +
             (uint)CARRY4(uVar13,uVar61) + iVar6 + (uint)CARRY4(uVar37,uVar16);
    uVar13 = (uVar24 * 0x10 | uVar18 >> 0x1c) ^ (uVar18 * 0x40000000 | uVar24 >> 2) ^
             (uVar18 * 0x2000000 | uVar24 >> 7);
    uVar4 = uVar18 & (uVar36 ^ uVar11) ^ uVar36 & uVar11;
    uVar7 = uVar13 + uVar4;
    uVar56 = uVar16 + uVar62;
    uVar64 = iVar6 + uVar9 + (uint)CARRY4(uVar16,uVar62);
    uVar5 = uVar30 & uVar56 | uVar49 & ~uVar56;
    uVar9 = local_a8[0x1e] + uVar63 + uVar5;
    uVar16 = (uVar64 * 0x40000 | uVar56 >> 0xe) ^ (uVar64 * 0x4000 | uVar56 >> 0x12) ^
             (uVar56 * 0x800000 | uVar64 >> 9);
    uVar61 = uVar9 + uVar16;
    uVar12 = uVar61 + 0xcf692694;
    iVar6 = local_a8[0x1f] + uVar19 + (uint)CARRY4(local_a8[0x1e],uVar63) +
            (uVar3 & uVar64 | uVar44 & ~uVar64) + (uint)CARRY4(local_a8[0x1e] + uVar63,uVar5) +
            ((uVar56 * 0x40000 | uVar64 >> 0xe) ^ (uVar56 * 0x4000 | uVar64 >> 0x12) ^
            (uVar64 * 0x800000 | uVar56 >> 9)) + (uint)CARRY4(uVar9,uVar16) + -0x3e640e8c +
            (uint)(0x3096d96b < uVar61);
    uVar37 = uVar7 + uVar12;
    uVar62 = ((uVar18 * 0x10 | uVar24 >> 0x1c) ^ (uVar24 * 0x40000000 | uVar18 >> 2) ^
             (uVar24 * 0x2000000 | uVar18 >> 7)) + (uVar24 & (uVar55 ^ uVar14) ^ uVar55 & uVar14) +
             (uint)CARRY4(uVar13,uVar4) + iVar6 + (uint)CARRY4(uVar7,uVar12);
    uVar16 = (uVar62 * 0x10 | uVar37 >> 0x1c) ^ (uVar37 * 0x40000000 | uVar62 >> 2) ^
             (uVar37 * 0x2000000 | uVar62 >> 7);
    uVar13 = uVar37 & (uVar18 ^ uVar36) ^ uVar18 & uVar36;
    uVar7 = uVar16 + uVar13;
    uVar65 = uVar12 + uVar17;
    uVar31 = iVar6 + uVar43 + (uint)CARRY4(uVar12,uVar17);
    uVar17 = uVar56 & uVar65 | uVar30 & ~uVar65;
    uVar4 = (local_a8[3] << 0x1f | local_a8[2] >> 1) ^ (local_a8[3] << 0x18 | local_a8[2] >> 8) ^
            (local_a8[2] >> 7 | local_a8[3] << 0x19);
    uVar5 = uVar4 + local_a8[0];
    uVar9 = uVar5 + local_a8[0x12];
    uVar19 = (local_a8[0x1d] << 0xd | local_a8[0x1c] >> 0x13) ^
             (local_a8[0x1c] << 3 | local_a8[0x1d] >> 0x1d) ^
             (local_a8[0x1c] >> 6 | local_a8[0x1d] << 0x1a);
    uVar61 = uVar9 + uVar19;
    uVar43 = ((local_a8[2] << 0x1f | local_a8[3] >> 1) ^ (local_a8[2] << 0x18 | local_a8[3] >> 8) ^
             local_a8[3] >> 7) + local_a8[1] + (uint)CARRY4(uVar4,local_a8[0]) + local_a8[0x13] +
             (uint)CARRY4(uVar5,local_a8[0x12]) +
             ((local_a8[0x1c] << 0xd | local_a8[0x1d] >> 0x13) ^
              (local_a8[0x1d] << 3 | local_a8[0x1c] >> 0x1d) ^ local_a8[0x1d] >> 6) +
             (uint)CARRY4(uVar9,uVar19);
    uVar4 = uVar61 + uVar49 + uVar17;
    uVar19 = (uVar31 * 0x40000 | uVar65 >> 0xe) ^ (uVar31 * 0x4000 | uVar65 >> 0x12) ^
             (uVar65 * 0x800000 | uVar31 >> 9);
    uVar5 = uVar4 + uVar19;
    uVar9 = uVar5 + 0x9ef14ad2;
    iVar6 = uVar43 + uVar44 + (uint)CARRY4(uVar61,uVar49) + (uVar64 & uVar31 | uVar3 & ~uVar31) +
            (uint)CARRY4(uVar61 + uVar49,uVar17) +
            ((uVar65 * 0x40000 | uVar31 >> 0xe) ^ (uVar65 * 0x4000 | uVar31 >> 0x12) ^
            (uVar31 * 0x800000 | uVar65 >> 9)) + (uint)CARRY4(uVar4,uVar19) + -0x1b64963f +
            (uint)(0x610eb52d < uVar5);
    uVar32 = uVar7 + uVar9;
    uVar19 = ((uVar37 * 0x10 | uVar62 >> 0x1c) ^ (uVar62 * 0x40000000 | uVar37 >> 2) ^
             (uVar62 * 0x2000000 | uVar37 >> 7)) + (uVar62 & (uVar24 ^ uVar55) ^ uVar24 & uVar55) +
             (uint)CARRY4(uVar16,uVar13) + iVar6 + (uint)CARRY4(uVar7,uVar9);
    uVar12 = (uVar19 * 0x10 | uVar32 >> 0x1c) ^ (uVar32 * 0x40000000 | uVar19 >> 2) ^
             (uVar32 * 0x2000000 | uVar19 >> 7);
    uVar16 = uVar32 & (uVar37 ^ uVar18) ^ uVar37 & uVar18;
    uVar5 = uVar12 + uVar16;
    uVar50 = uVar9 + uVar11;
    uVar38 = iVar6 + uVar14 + (uint)CARRY4(uVar9,uVar11);
    uVar17 = uVar65 & uVar50 | uVar56 & ~uVar50;
    uVar7 = (local_a8[5] << 0x1f | local_a8[4] >> 1) ^ (local_a8[5] << 0x18 | local_a8[4] >> 8) ^
            (local_a8[4] >> 7 | local_a8[5] << 0x19);
    uVar4 = local_a8[0x14] + local_a8[2] + uVar7;
    uVar9 = (local_a8[0x1f] << 0xd | local_a8[0x1e] >> 0x13) ^
            (local_a8[0x1e] << 3 | local_a8[0x1f] >> 0x1d) ^
            (local_a8[0x1e] >> 6 | local_a8[0x1f] << 0x1a);
    uVar11 = uVar4 + uVar9;
    uVar44 = local_a8[0x15] + local_a8[3] + (uint)CARRY4(local_a8[0x14],local_a8[2]) +
             ((local_a8[4] << 0x1f | local_a8[5] >> 1) ^ (local_a8[4] << 0x18 | local_a8[5] >> 8) ^
             local_a8[5] >> 7) + (uint)CARRY4(local_a8[0x14] + local_a8[2],uVar7) +
             ((local_a8[0x1e] << 0xd | local_a8[0x1f] >> 0x13) ^
              (local_a8[0x1f] << 3 | local_a8[0x1e] >> 0x1d) ^ local_a8[0x1f] >> 6) +
             (uint)CARRY4(uVar4,uVar9);
    uVar7 = uVar11 + uVar30 + uVar17;
    uVar9 = (uVar38 * 0x40000 | uVar50 >> 0xe) ^ (uVar38 * 0x4000 | uVar50 >> 0x12) ^
            (uVar50 * 0x800000 | uVar38 >> 9);
    uVar4 = uVar7 + uVar9;
    uVar13 = uVar4 + 0x384f25e3;
    iVar6 = uVar44 + uVar3 + (uint)CARRY4(uVar11,uVar30) + (uVar31 & uVar38 | uVar64 & ~uVar38) +
            (uint)CARRY4(uVar11 + uVar30,uVar17) +
            ((uVar50 * 0x40000 | uVar38 >> 0xe) ^ (uVar50 * 0x4000 | uVar38 >> 0x12) ^
            (uVar38 * 0x800000 | uVar50 >> 9)) + (uint)CARRY4(uVar7,uVar9) + -0x1041b87a +
            (uint)(0xc7b0da1c < uVar4);
    uVar17 = uVar5 + uVar13;
    uVar12 = ((uVar32 * 0x10 | uVar19 >> 0x1c) ^ (uVar19 * 0x40000000 | uVar32 >> 2) ^
             (uVar19 * 0x2000000 | uVar32 >> 7)) + (uVar19 & (uVar62 ^ uVar24) ^ uVar62 & uVar24) +
             (uint)CARRY4(uVar12,uVar16) + iVar6 + (uint)CARRY4(uVar5,uVar13);
    uVar30 = (uVar12 * 0x10 | uVar17 >> 0x1c) ^ (uVar17 * 0x40000000 | uVar12 >> 2) ^
             (uVar17 * 0x2000000 | uVar12 >> 7);
    uVar9 = uVar17 & (uVar32 ^ uVar37) ^ uVar32 & uVar37;
    uVar3 = uVar30 + uVar9;
    uVar33 = uVar13 + uVar36;
    uVar63 = iVar6 + uVar55 + (uint)CARRY4(uVar13,uVar36);
    uVar16 = uVar50 & uVar33 | uVar65 & ~uVar33;
    uVar7 = (uVar43 * 0x2000 | uVar61 >> 0x13) ^ (uVar61 * 8 | uVar43 >> 0x1d) ^
            (uVar61 >> 6 | uVar43 * 0x4000000);
    uVar4 = (local_a8[7] << 0x1f | local_a8[6] >> 1) ^ (local_a8[7] << 0x18 | local_a8[6] >> 8) ^
            (local_a8[6] >> 7 | local_a8[7] << 0x19);
    uVar5 = uVar4 + local_a8[4];
    uVar36 = uVar5 + local_a8[0x16];
    uVar55 = uVar36 + uVar7;
    uVar49 = ((local_a8[6] << 0x1f | local_a8[7] >> 1) ^ (local_a8[6] << 0x18 | local_a8[7] >> 8) ^
             local_a8[7] >> 7) + local_a8[5] + (uint)CARRY4(uVar4,local_a8[4]) + local_a8[0x17] +
             (uint)CARRY4(uVar5,local_a8[0x16]) +
             ((uVar61 * 0x2000 | uVar43 >> 0x13) ^ (uVar43 * 8 | uVar61 >> 0x1d) ^ uVar43 >> 6) +
             (uint)CARRY4(uVar36,uVar7);
    uVar7 = uVar55 + uVar56 + uVar16;
    uVar5 = (uVar63 * 0x40000 | uVar33 >> 0xe) ^ (uVar63 * 0x4000 | uVar33 >> 0x12) ^
            (uVar33 * 0x800000 | uVar63 >> 9);
    uVar4 = uVar7 + uVar5;
    uVar36 = uVar4 + 0x8b8cd5b5;
    iVar6 = uVar49 + uVar64 + (uint)CARRY4(uVar55,uVar56) + (uVar38 & uVar63 | uVar31 & ~uVar63) +
            (uint)CARRY4(uVar55 + uVar56,uVar16) +
            ((uVar33 * 0x40000 | uVar63 >> 0xe) ^ (uVar33 * 0x4000 | uVar63 >> 0x12) ^
            (uVar63 * 0x800000 | uVar33 >> 9)) + (uint)CARRY4(uVar7,uVar5) + 0xfc19dc6 +
            (uint)(0x74732a4a < uVar4);
    uVar64 = uVar3 + uVar36;
    uVar13 = ((uVar17 * 0x10 | uVar12 >> 0x1c) ^ (uVar12 * 0x40000000 | uVar17 >> 2) ^
             (uVar12 * 0x2000000 | uVar17 >> 7)) + (uVar12 & (uVar19 ^ uVar62) ^ uVar19 & uVar62) +
             (uint)CARRY4(uVar30,uVar9) + iVar6 + (uint)CARRY4(uVar3,uVar36);
    uVar5 = (uVar13 * 0x10 | uVar64 >> 0x1c) ^ (uVar64 * 0x40000000 | uVar13 >> 2) ^
            (uVar64 * 0x2000000 | uVar13 >> 7);
    uVar9 = uVar64 & (uVar17 ^ uVar32) ^ uVar17 & uVar32;
    uVar3 = uVar5 + uVar9;
    uVar51 = uVar36 + uVar18;
    uVar45 = iVar6 + uVar24 + (uint)CARRY4(uVar36,uVar18);
    uVar24 = uVar33 & uVar51 | uVar50 & ~uVar51;
    uVar4 = (uVar44 * 0x2000 | uVar11 >> 0x13) ^ (uVar11 * 8 | uVar44 >> 0x1d) ^
            (uVar11 >> 6 | uVar44 * 0x4000000);
    uVar36 = (local_a8[9] << 0x1f | local_a8[8] >> 1) ^ (local_a8[9] << 0x18 | local_a8[8] >> 8) ^
             (local_a8[8] >> 7 | local_a8[9] << 0x19);
    uVar7 = local_a8[0x18] + local_a8[6] + uVar36;
    uVar16 = uVar7 + uVar4;
    uVar56 = local_a8[0x19] + local_a8[7] + (uint)CARRY4(local_a8[0x18],local_a8[6]) +
             ((local_a8[8] << 0x1f | local_a8[9] >> 1) ^ (local_a8[8] << 0x18 | local_a8[9] >> 8) ^
             local_a8[9] >> 7) + (uint)CARRY4(local_a8[0x18] + local_a8[6],uVar36) +
             ((uVar11 * 0x2000 | uVar44 >> 0x13) ^ (uVar44 * 8 | uVar11 >> 0x1d) ^ uVar44 >> 6) +
             (uint)CARRY4(uVar7,uVar4);
    uVar7 = uVar16 + uVar65 + uVar24;
    uVar36 = (uVar45 * 0x40000 | uVar51 >> 0xe) ^ (uVar45 * 0x4000 | uVar51 >> 0x12) ^
             (uVar51 * 0x800000 | uVar45 >> 9);
    uVar4 = uVar7 + uVar36;
    uVar18 = uVar4 + 0x77ac9c65;
    iVar6 = uVar56 + uVar31 + (uint)CARRY4(uVar16,uVar65) + (uVar63 & uVar45 | uVar38 & ~uVar45) +
            (uint)CARRY4(uVar16 + uVar65,uVar24) +
            ((uVar51 * 0x40000 | uVar45 >> 0xe) ^ (uVar51 * 0x4000 | uVar45 >> 0x12) ^
            (uVar45 * 0x800000 | uVar51 >> 9)) + (uint)CARRY4(uVar7,uVar36) + 0x240ca1cc +
            (uint)(0x8853639a < uVar4);
    uVar31 = uVar3 + uVar18;
    uVar14 = ((uVar64 * 0x10 | uVar13 >> 0x1c) ^ (uVar13 * 0x40000000 | uVar64 >> 2) ^
             (uVar13 * 0x2000000 | uVar64 >> 7)) + (uVar13 & (uVar12 ^ uVar19) ^ uVar12 & uVar19) +
             (uint)CARRY4(uVar5,uVar9) + iVar6 + (uint)CARRY4(uVar3,uVar18);
    uVar36 = (uVar14 * 0x10 | uVar31 >> 0x1c) ^ (uVar31 * 0x40000000 | uVar14 >> 2) ^
             (uVar31 * 0x2000000 | uVar14 >> 7);
    uVar30 = uVar31 & (uVar64 ^ uVar17) ^ uVar64 & uVar17;
    uVar3 = uVar36 + uVar30;
    uVar66 = uVar18 + uVar37;
    uVar65 = iVar6 + uVar62 + (uint)CARRY4(uVar18,uVar37);
    uVar7 = uVar51 & uVar66 | uVar33 & ~uVar66;
    uVar18 = (uVar49 * 0x2000 | uVar55 >> 0x13) ^ (uVar55 * 8 | uVar49 >> 0x1d) ^
             (uVar55 >> 6 | uVar49 * 0x4000000);
    uVar4 = (local_a8[0xb] << 0x1f | local_a8[10] >> 1) ^
            (local_a8[0xb] << 0x18 | local_a8[10] >> 8) ^
            (local_a8[10] >> 7 | local_a8[0xb] << 0x19);
    uVar5 = uVar4 + local_a8[8];
    uVar9 = uVar5 + local_a8[0x1a];
    uVar24 = uVar9 + uVar18;
    uVar62 = ((local_a8[10] << 0x1f | local_a8[0xb] >> 1) ^
              (local_a8[10] << 0x18 | local_a8[0xb] >> 8) ^ local_a8[0xb] >> 7) + local_a8[9] +
             (uint)CARRY4(uVar4,local_a8[8]) + local_a8[0x1b] + (uint)CARRY4(uVar5,local_a8[0x1a]) +
             ((uVar55 * 0x2000 | uVar49 >> 0x13) ^ (uVar49 * 8 | uVar55 >> 0x1d) ^ uVar49 >> 6) +
             (uint)CARRY4(uVar9,uVar18);
    uVar4 = uVar24 + uVar50 + uVar7;
    uVar18 = (uVar65 * 0x40000 | uVar66 >> 0xe) ^ (uVar65 * 0x4000 | uVar66 >> 0x12) ^
             (uVar66 * 0x800000 | uVar65 >> 9);
    uVar5 = uVar4 + uVar18;
    uVar9 = uVar5 + 0x592b0275;
    iVar6 = uVar62 + uVar38 + (uint)CARRY4(uVar24,uVar50) + (uVar45 & uVar65 | uVar63 & ~uVar65) +
            (uint)CARRY4(uVar24 + uVar50,uVar7) +
            ((uVar66 * 0x40000 | uVar65 >> 0xe) ^ (uVar66 * 0x4000 | uVar65 >> 0x12) ^
            (uVar65 * 0x800000 | uVar66 >> 9)) + (uint)CARRY4(uVar4,uVar18) + 0x2de92c6f +
            (uint)(0xa6d4fd8a < uVar5);
    uVar25 = uVar3 + uVar9;
    uVar30 = ((uVar31 * 0x10 | uVar14 >> 0x1c) ^ (uVar14 * 0x40000000 | uVar31 >> 2) ^
             (uVar14 * 0x2000000 | uVar31 >> 7)) + (uVar14 & (uVar13 ^ uVar12) ^ uVar13 & uVar12) +
             (uint)CARRY4(uVar36,uVar30) + iVar6 + (uint)CARRY4(uVar3,uVar9);
    uVar37 = (uVar30 * 0x10 | uVar25 >> 0x1c) ^ (uVar25 * 0x40000000 | uVar30 >> 2) ^
             (uVar25 * 0x2000000 | uVar30 >> 7);
    uVar36 = uVar25 & (uVar31 ^ uVar64) ^ uVar31 & uVar64;
    uVar18 = uVar37 + uVar36;
    uVar26 = uVar9 + uVar32;
    uVar57 = iVar6 + uVar19 + (uint)CARRY4(uVar9,uVar32);
    uVar19 = uVar66 & uVar26 | uVar51 & ~uVar26;
    uVar7 = (uVar56 * 0x2000 | uVar16 >> 0x13) ^ (uVar16 * 8 | uVar56 >> 0x1d) ^
            (uVar16 >> 6 | uVar56 * 0x4000000);
    uVar5 = (local_a8[0xd] << 0x1f | local_a8[0xc] >> 1) ^
            (local_a8[0xd] << 0x18 | local_a8[0xc] >> 8) ^
            (local_a8[0xc] >> 7 | local_a8[0xd] << 0x19);
    uVar4 = local_a8[0x1c] + local_a8[10] + uVar5;
    uVar3 = uVar4 + uVar7;
    uVar50 = local_a8[0x1d] + local_a8[0xb] + (uint)CARRY4(local_a8[0x1c],local_a8[10]) +
             ((local_a8[0xc] << 0x1f | local_a8[0xd] >> 1) ^
              (local_a8[0xc] << 0x18 | local_a8[0xd] >> 8) ^ local_a8[0xd] >> 7) +
             (uint)CARRY4(local_a8[0x1c] + local_a8[10],uVar5) +
             ((uVar16 * 0x2000 | uVar56 >> 0x13) ^ (uVar56 * 8 | uVar16 >> 0x1d) ^ uVar56 >> 6) +
             (uint)CARRY4(uVar4,uVar7);
    uVar7 = uVar3 + uVar33 + uVar19;
    uVar9 = (uVar57 * 0x40000 | uVar26 >> 0xe) ^ (uVar57 * 0x4000 | uVar26 >> 0x12) ^
            (uVar26 * 0x800000 | uVar57 >> 9);
    uVar4 = uVar7 + uVar9;
    uVar5 = uVar4 + 0x6ea6e483;
    iVar6 = uVar50 + uVar63 + (uint)CARRY4(uVar3,uVar33) + (uVar65 & uVar57 | uVar45 & ~uVar57) +
            (uint)CARRY4(uVar3 + uVar33,uVar19) +
            ((uVar26 * 0x40000 | uVar57 >> 0xe) ^ (uVar26 * 0x4000 | uVar57 >> 0x12) ^
            (uVar57 * 0x800000 | uVar26 >> 9)) + (uint)CARRY4(uVar7,uVar9) + 0x4a7484aa +
            (uint)(0x91591b7c < uVar4);
    uVar32 = uVar18 + uVar5;
    uVar33 = ((uVar25 * 0x10 | uVar30 >> 0x1c) ^ (uVar30 * 0x40000000 | uVar25 >> 2) ^
             (uVar30 * 0x2000000 | uVar25 >> 7)) + (uVar30 & (uVar14 ^ uVar13) ^ uVar14 & uVar13) +
             (uint)CARRY4(uVar37,uVar36) + iVar6 + (uint)CARRY4(uVar18,uVar5);
    uVar36 = (uVar33 * 0x10 | uVar32 >> 0x1c) ^ (uVar32 * 0x40000000 | uVar33 >> 2) ^
             (uVar32 * 0x2000000 | uVar33 >> 7);
    uVar18 = uVar32 & (uVar25 ^ uVar31) ^ uVar25 & uVar31;
    uVar9 = uVar36 + uVar18;
    uVar39 = uVar5 + uVar17;
    uVar20 = iVar6 + uVar12 + (uint)CARRY4(uVar5,uVar17);
    uVar12 = uVar26 & uVar39 | uVar66 & ~uVar39;
    uVar4 = (uVar62 * 0x2000 | uVar24 >> 0x13) ^ (uVar24 * 8 | uVar62 >> 0x1d) ^
            (uVar24 >> 6 | uVar62 * 0x4000000);
    uVar5 = (local_a8[0xf] << 0x1f | local_a8[0xe] >> 1) ^
            (local_a8[0xf] << 0x18 | local_a8[0xe] >> 8) ^
            (local_a8[0xe] >> 7 | local_a8[0xf] << 0x19);
    uVar17 = uVar5 + local_a8[0xc];
    uVar19 = uVar17 + local_a8[0x1e];
    uVar7 = uVar19 + uVar4;
    uVar63 = ((local_a8[0xe] << 0x1f | local_a8[0xf] >> 1) ^
              (local_a8[0xe] << 0x18 | local_a8[0xf] >> 8) ^ local_a8[0xf] >> 7) + local_a8[0xd] +
             (uint)CARRY4(uVar5,local_a8[0xc]) + local_a8[0x1f] +
             (uint)CARRY4(uVar17,local_a8[0x1e]) +
             ((uVar24 * 0x2000 | uVar62 >> 0x13) ^ (uVar62 * 8 | uVar24 >> 0x1d) ^ uVar62 >> 6) +
             (uint)CARRY4(uVar19,uVar4);
    uVar4 = uVar7 + uVar51 + uVar12;
    uVar19 = (uVar20 * 0x40000 | uVar39 >> 0xe) ^ (uVar20 * 0x4000 | uVar39 >> 0x12) ^
             (uVar39 * 0x800000 | uVar20 >> 9);
    uVar5 = uVar4 + uVar19;
    uVar17 = uVar5 + 0xbd41fbd4;
    iVar6 = uVar63 + uVar45 + (uint)CARRY4(uVar7,uVar51) + (uVar57 & uVar20 | uVar65 & ~uVar20) +
            (uint)CARRY4(uVar7 + uVar51,uVar12) +
            ((uVar39 * 0x40000 | uVar20 >> 0xe) ^ (uVar39 * 0x4000 | uVar20 >> 0x12) ^
            (uVar20 * 0x800000 | uVar39 >> 9)) + (uint)CARRY4(uVar4,uVar19) + 0x5cb0a9dc +
            (uint)(0x42be042b < uVar5);
    uVar4 = uVar9 + uVar17;
    uVar37 = ((uVar32 * 0x10 | uVar33 >> 0x1c) ^ (uVar33 * 0x40000000 | uVar32 >> 2) ^
             (uVar33 * 0x2000000 | uVar32 >> 7)) + (uVar33 & (uVar30 ^ uVar14) ^ uVar30 & uVar14) +
             (uint)CARRY4(uVar36,uVar18) + iVar6 + (uint)CARRY4(uVar9,uVar17);
    uVar12 = (uVar37 * 0x10 | uVar4 >> 0x1c) ^ (uVar4 * 0x40000000 | uVar37 >> 2) ^
             (uVar4 * 0x2000000 | uVar37 >> 7);
    uVar5 = uVar4 & (uVar32 ^ uVar25) ^ uVar32 & uVar25;
    uVar9 = uVar12 + uVar5;
    uVar46 = uVar17 + uVar64;
    uVar38 = iVar6 + uVar13 + (uint)CARRY4(uVar17,uVar64);
    uVar45 = uVar39 & uVar46 | uVar26 & ~uVar46;
    uVar18 = (uVar50 * 0x2000 | uVar3 >> 0x13) ^ (uVar3 * 8 | uVar50 >> 0x1d) ^
             (uVar3 >> 6 | uVar50 * 0x4000000);
    uVar36 = (local_a8[0x11] << 0x1f | local_a8[0x10] >> 1) ^
             (local_a8[0x11] << 0x18 | local_a8[0x10] >> 8) ^
             (local_a8[0x10] >> 7 | local_a8[0x11] << 0x19);
    uVar17 = uVar61 + local_a8[0xe] + uVar36;
    uVar19 = uVar17 + uVar18;
    uVar64 = uVar43 + local_a8[0xf] + (uint)CARRY4(uVar61,local_a8[0xe]) +
             ((local_a8[0x10] << 0x1f | local_a8[0x11] >> 1) ^
              (local_a8[0x10] << 0x18 | local_a8[0x11] >> 8) ^ local_a8[0x11] >> 7) +
             (uint)CARRY4(uVar61 + local_a8[0xe],uVar36) +
             ((uVar3 * 0x2000 | uVar50 >> 0x13) ^ (uVar50 * 8 | uVar3 >> 0x1d) ^ uVar50 >> 6) +
             (uint)CARRY4(uVar17,uVar18);
    uVar17 = uVar19 + uVar66 + uVar45;
    uVar13 = (uVar38 * 0x40000 | uVar46 >> 0xe) ^ (uVar38 * 0x4000 | uVar46 >> 0x12) ^
             (uVar46 * 0x800000 | uVar38 >> 9);
    uVar36 = uVar17 + uVar13;
    uVar18 = uVar36 + 0x831153b5;
    iVar6 = uVar64 + uVar65 + (uint)CARRY4(uVar19,uVar66) + (uVar20 & uVar38 | uVar57 & ~uVar38) +
            (uint)CARRY4(uVar19 + uVar66,uVar45) +
            ((uVar46 * 0x40000 | uVar38 >> 0xe) ^ (uVar46 * 0x4000 | uVar38 >> 0x12) ^
            (uVar38 * 0x800000 | uVar46 >> 9)) + (uint)CARRY4(uVar17,uVar13) + 0x76f988da +
            (uint)(0x7ceeac4a < uVar36);
    uVar27 = uVar9 + uVar18;
    uVar51 = ((uVar4 * 0x10 | uVar37 >> 0x1c) ^ (uVar37 * 0x40000000 | uVar4 >> 2) ^
             (uVar37 * 0x2000000 | uVar4 >> 7)) + (uVar37 & (uVar33 ^ uVar30) ^ uVar33 & uVar30) +
             (uint)CARRY4(uVar12,uVar5) + iVar6 + (uint)CARRY4(uVar9,uVar18);
    uVar36 = (uVar51 * 0x10 | uVar27 >> 0x1c) ^ (uVar27 * 0x40000000 | uVar51 >> 2) ^
             (uVar27 * 0x2000000 | uVar51 >> 7);
    uVar12 = uVar27 & (uVar4 ^ uVar32) ^ uVar4 & uVar32;
    uVar5 = uVar36 + uVar12;
    uVar66 = uVar18 + uVar31;
    uVar18 = iVar6 + uVar14 + (uint)CARRY4(uVar18,uVar31);
    uVar65 = uVar46 & uVar66 | uVar39 & ~uVar66;
    uVar9 = (uVar63 * 0x2000 | uVar7 >> 0x13) ^ (uVar7 * 8 | uVar63 >> 0x1d) ^
            (uVar7 >> 6 | uVar63 * 0x4000000);
    uVar17 = (local_a8[0x13] << 0x1f | local_a8[0x12] >> 1) ^
             (local_a8[0x13] << 0x18 | local_a8[0x12] >> 8) ^
             (local_a8[0x12] >> 7 | local_a8[0x13] << 0x19);
    uVar13 = uVar17 + local_a8[0x10];
    uVar14 = uVar13 + uVar11;
    uVar31 = uVar14 + uVar9;
    uVar10 = ((local_a8[0x12] << 0x1f | local_a8[0x13] >> 1) ^
              (local_a8[0x12] << 0x18 | local_a8[0x13] >> 8) ^ local_a8[0x13] >> 7) + local_a8[0x11]
             + (uint)CARRY4(uVar17,local_a8[0x10]) + uVar44 + (uint)CARRY4(uVar13,uVar11) +
             ((uVar7 * 0x2000 | uVar63 >> 0x13) ^ (uVar63 * 8 | uVar7 >> 0x1d) ^ uVar63 >> 6) +
             (uint)CARRY4(uVar14,uVar9);
    uVar13 = (uVar18 * 0x40000 | uVar66 >> 0xe) ^ (uVar18 * 0x4000 | uVar66 >> 0x12) ^
             (uVar66 * 0x800000 | uVar18 >> 9);
    uVar9 = uVar31 + uVar26 + uVar65;
    uVar17 = uVar9 + uVar13;
    uVar14 = uVar17 + 0xee66dfab;
    iVar6 = uVar10 + uVar57 + (uint)CARRY4(uVar31,uVar26) + (uVar38 & uVar18 | uVar20 & ~uVar18) +
            (uint)CARRY4(uVar31 + uVar26,uVar65) +
            ((uVar66 * 0x40000 | uVar18 >> 0xe) ^ (uVar66 * 0x4000 | uVar18 >> 0x12) ^
            (uVar18 * 0x800000 | uVar66 >> 9)) + (uint)CARRY4(uVar9,uVar13) + -0x67c1aeae +
            (uint)(0x11992054 < uVar17);
    uVar26 = uVar5 + uVar14;
    uVar13 = ((uVar27 * 0x10 | uVar51 >> 0x1c) ^ (uVar51 * 0x40000000 | uVar27 >> 2) ^
             (uVar51 * 0x2000000 | uVar27 >> 7)) + (uVar51 & (uVar37 ^ uVar33) ^ uVar37 & uVar33) +
             (uint)CARRY4(uVar36,uVar12) + iVar6 + (uint)CARRY4(uVar5,uVar14);
    uVar45 = (uVar13 * 0x10 | uVar26 >> 0x1c) ^ (uVar26 * 0x40000000 | uVar13 >> 2) ^
             (uVar26 * 0x2000000 | uVar13 >> 7);
    uVar12 = uVar26 & (uVar27 ^ uVar4) ^ uVar27 & uVar4;
    uVar5 = uVar45 + uVar12;
    uVar58 = uVar14 + uVar25;
    uVar67 = iVar6 + uVar30 + (uint)CARRY4(uVar14,uVar25);
    uVar9 = uVar66 & uVar58 | uVar46 & ~uVar58;
    uVar14 = (uVar64 * 0x2000 | uVar19 >> 0x13) ^ (uVar19 * 8 | uVar64 >> 0x1d) ^
             (uVar19 >> 6 | uVar64 * 0x4000000);
    uVar17 = (local_a8[0x15] << 0x1f | local_a8[0x14] >> 1) ^
             (local_a8[0x15] << 0x18 | local_a8[0x14] >> 8) ^
             (local_a8[0x14] >> 7 | local_a8[0x15] << 0x19);
    uVar36 = uVar55 + local_a8[0x12] + uVar17;
    uVar30 = uVar36 + uVar14;
    uVar65 = uVar49 + local_a8[0x13] + (uint)CARRY4(uVar55,local_a8[0x12]) +
             ((local_a8[0x14] << 0x1f | local_a8[0x15] >> 1) ^
              (local_a8[0x14] << 0x18 | local_a8[0x15] >> 8) ^ local_a8[0x15] >> 7) +
             (uint)CARRY4(uVar55 + local_a8[0x12],uVar17) +
             ((uVar19 * 0x2000 | uVar64 >> 0x13) ^ (uVar64 * 8 | uVar19 >> 0x1d) ^ uVar64 >> 6) +
             (uint)CARRY4(uVar36,uVar14);
    uVar17 = uVar30 + uVar39 + uVar9;
    uVar14 = (uVar67 * 0x40000 | uVar58 >> 0xe) ^ (uVar67 * 0x4000 | uVar58 >> 0x12) ^
             (uVar58 * 0x800000 | uVar67 >> 9);
    uVar36 = uVar17 + uVar14;
    uVar40 = uVar36 + 0x2db43210;
    iVar6 = uVar65 + uVar20 + (uint)CARRY4(uVar30,uVar39) + (uVar18 & uVar67 | uVar38 & ~uVar67) +
            (uint)CARRY4(uVar30 + uVar39,uVar9) +
            ((uVar58 * 0x40000 | uVar67 >> 0xe) ^ (uVar58 * 0x4000 | uVar67 >> 0x12) ^
            (uVar67 * 0x800000 | uVar58 >> 9)) + (uint)CARRY4(uVar17,uVar14) + -0x57ce3993 +
            (uint)(0xd24bcdef < uVar36);
    uVar57 = uVar5 + uVar40;
    uVar20 = ((uVar26 * 0x10 | uVar13 >> 0x1c) ^ (uVar13 * 0x40000000 | uVar26 >> 2) ^
             (uVar13 * 0x2000000 | uVar26 >> 7)) + (uVar13 & (uVar51 ^ uVar37) ^ uVar51 & uVar37) +
             (uint)CARRY4(uVar45,uVar12) + iVar6 + (uint)CARRY4(uVar5,uVar40);
    uVar12 = (uVar20 * 0x10 | uVar57 >> 0x1c) ^ (uVar57 * 0x40000000 | uVar20 >> 2) ^
             (uVar57 * 0x2000000 | uVar20 >> 7);
    uVar25 = uVar57 & (uVar26 ^ uVar27) ^ uVar26 & uVar27;
    uVar5 = uVar12 + uVar25;
    uVar15 = uVar40 + uVar32;
    uVar59 = iVar6 + uVar33 + (uint)CARRY4(uVar40,uVar32);
    uVar33 = uVar58 & uVar15 | uVar66 & ~uVar15;
    uVar17 = (uVar10 * 0x2000 | uVar31 >> 0x13) ^ (uVar31 * 8 | uVar10 >> 0x1d) ^
             (uVar31 >> 6 | uVar10 * 0x4000000);
    uVar36 = (local_a8[0x17] << 0x1f | local_a8[0x16] >> 1) ^
             (local_a8[0x17] << 0x18 | local_a8[0x16] >> 8) ^
             (local_a8[0x16] >> 7 | local_a8[0x17] << 0x19);
    uVar14 = uVar36 + local_a8[0x14];
    uVar32 = uVar14 + uVar16;
    uVar9 = uVar32 + uVar17;
    uVar32 = ((local_a8[0x16] << 0x1f | local_a8[0x17] >> 1) ^
              (local_a8[0x16] << 0x18 | local_a8[0x17] >> 8) ^ local_a8[0x17] >> 7) + local_a8[0x15]
             + (uint)CARRY4(uVar36,local_a8[0x14]) + uVar56 + (uint)CARRY4(uVar14,uVar16) +
             ((uVar31 * 0x2000 | uVar10 >> 0x13) ^ (uVar10 * 8 | uVar31 >> 0x1d) ^ uVar10 >> 6) +
             (uint)CARRY4(uVar32,uVar17);
    uVar17 = uVar9 + uVar46 + uVar33;
    uVar14 = (uVar59 * 0x40000 | uVar15 >> 0xe) ^ (uVar59 * 0x4000 | uVar15 >> 0x12) ^
             (uVar15 * 0x800000 | uVar59 >> 9);
    uVar36 = uVar17 + uVar14;
    uVar39 = uVar36 + 0x98fb213f;
    iVar6 = uVar32 + uVar38 + (uint)CARRY4(uVar9,uVar46) + (uVar67 & uVar59 | uVar18 & ~uVar59) +
            (uint)CARRY4(uVar9 + uVar46,uVar33) +
            ((uVar15 * 0x40000 | uVar59 >> 0xe) ^ (uVar15 * 0x4000 | uVar59 >> 0x12) ^
            (uVar59 * 0x800000 | uVar15 >> 9)) + (uint)CARRY4(uVar17,uVar14) + -0x4ffcd838 +
            (uint)(0x6704dec0 < uVar36);
    uVar45 = uVar5 + uVar39;
    uVar21 = ((uVar57 * 0x10 | uVar20 >> 0x1c) ^ (uVar20 * 0x40000000 | uVar57 >> 2) ^
             (uVar20 * 0x2000000 | uVar57 >> 7)) + (uVar20 & (uVar13 ^ uVar51) ^ uVar13 & uVar51) +
             (uint)CARRY4(uVar12,uVar25) + iVar6 + (uint)CARRY4(uVar5,uVar39);
    uVar14 = (uVar21 * 0x10 | uVar45 >> 0x1c) ^ (uVar45 * 0x40000000 | uVar21 >> 2) ^
             (uVar45 * 0x2000000 | uVar21 >> 7);
    uVar38 = uVar45 & (uVar57 ^ uVar26) ^ uVar57 & uVar26;
    uVar5 = uVar14 + uVar38;
    uVar25 = uVar39 + uVar4;
    uVar52 = iVar6 + uVar37 + (uint)CARRY4(uVar39,uVar4);
    uVar39 = uVar15 & uVar25 | uVar58 & ~uVar25;
    uVar12 = (uVar65 * 0x2000 | uVar30 >> 0x13) ^ (uVar30 * 8 | uVar65 >> 0x1d) ^
             (uVar30 >> 6 | uVar65 * 0x4000000);
    uVar4 = (local_a8[0x19] << 0x1f | local_a8[0x18] >> 1) ^
            (local_a8[0x19] << 0x18 | local_a8[0x18] >> 8) ^
            (local_a8[0x18] >> 7 | local_a8[0x19] << 0x19);
    uVar17 = uVar24 + local_a8[0x16] + uVar4;
    uVar36 = uVar17 + uVar12;
    uVar33 = uVar62 + local_a8[0x17] + (uint)CARRY4(uVar24,local_a8[0x16]) +
             ((local_a8[0x18] << 0x1f | local_a8[0x19] >> 1) ^
              (local_a8[0x18] << 0x18 | local_a8[0x19] >> 8) ^ local_a8[0x19] >> 7) +
             (uint)CARRY4(uVar24 + local_a8[0x16],uVar4) +
             ((uVar30 * 0x2000 | uVar65 >> 0x13) ^ (uVar65 * 8 | uVar30 >> 0x1d) ^ uVar65 >> 6) +
             (uint)CARRY4(uVar17,uVar12);
    uVar4 = uVar36 + uVar66 + uVar39;
    uVar37 = (uVar52 * 0x40000 | uVar25 >> 0xe) ^ (uVar52 * 0x4000 | uVar25 >> 0x12) ^
             (uVar25 * 0x800000 | uVar52 >> 9);
    uVar17 = uVar4 + uVar37;
    uVar12 = uVar17 + 0xbeef0ee4;
    iVar6 = uVar33 + uVar18 + (uint)CARRY4(uVar36,uVar66) + (uVar59 & uVar52 | uVar67 & ~uVar52) +
            (uint)CARRY4(uVar36 + uVar66,uVar39) +
            ((uVar25 * 0x40000 | uVar52 >> 0xe) ^ (uVar25 * 0x4000 | uVar52 >> 0x12) ^
            (uVar52 * 0x800000 | uVar25 >> 9)) + (uint)CARRY4(uVar4,uVar37) + -0x40a68039 +
            (uint)(0x4110f11b < uVar17);
    uVar28 = uVar5 + uVar12;
    uVar22 = ((uVar45 * 0x10 | uVar21 >> 0x1c) ^ (uVar21 * 0x40000000 | uVar45 >> 2) ^
             (uVar21 * 0x2000000 | uVar45 >> 7)) + (uVar21 & (uVar20 ^ uVar13) ^ uVar20 & uVar13) +
             (uint)CARRY4(uVar14,uVar38) + iVar6 + (uint)CARRY4(uVar5,uVar12);
    uVar18 = (uVar22 * 0x10 | uVar28 >> 0x1c) ^ (uVar28 * 0x40000000 | uVar22 >> 2) ^
             (uVar28 * 0x2000000 | uVar22 >> 7);
    uVar14 = uVar28 & (uVar45 ^ uVar57) ^ uVar45 & uVar57;
    uVar4 = uVar18 + uVar14;
    uVar66 = uVar12 + uVar27;
    uVar37 = iVar6 + uVar51 + (uint)CARRY4(uVar12,uVar27);
    uVar51 = uVar25 & uVar66 | uVar15 & ~uVar66;
    uVar5 = (uVar32 * 0x2000 | uVar9 >> 0x13) ^ (uVar9 * 8 | uVar32 >> 0x1d) ^
            (uVar9 >> 6 | uVar32 * 0x4000000);
    uVar17 = (local_a8[0x1b] << 0x1f | local_a8[0x1a] >> 1) ^
             (local_a8[0x1b] << 0x18 | local_a8[0x1a] >> 8) ^
             (local_a8[0x1a] >> 7 | local_a8[0x1b] << 0x19);
    uVar12 = uVar17 + local_a8[0x18];
    uVar38 = uVar12 + uVar3;
    uVar27 = uVar38 + uVar5;
    uVar40 = ((local_a8[0x1a] << 0x1f | local_a8[0x1b] >> 1) ^
              (local_a8[0x1a] << 0x18 | local_a8[0x1b] >> 8) ^ local_a8[0x1b] >> 7) + local_a8[0x19]
             + (uint)CARRY4(uVar17,local_a8[0x18]) + uVar50 + (uint)CARRY4(uVar12,uVar3) +
             ((uVar9 * 0x2000 | uVar32 >> 0x13) ^ (uVar32 * 8 | uVar9 >> 0x1d) ^ uVar32 >> 6) +
             (uint)CARRY4(uVar38,uVar5);
    uVar5 = uVar27 + uVar58 + uVar51;
    uVar38 = (uVar37 * 0x40000 | uVar66 >> 0xe) ^ (uVar37 * 0x4000 | uVar66 >> 0x12) ^
             (uVar66 * 0x800000 | uVar37 >> 9);
    uVar17 = uVar5 + uVar38;
    uVar12 = uVar17 + 0x3da88fc2;
    iVar6 = uVar40 + uVar67 + (uint)CARRY4(uVar27,uVar58) + (uVar52 & uVar37 | uVar59 & ~uVar37) +
            (uint)CARRY4(uVar27 + uVar58,uVar51) +
            ((uVar66 * 0x40000 | uVar37 >> 0xe) ^ (uVar66 * 0x4000 | uVar37 >> 0x12) ^
            (uVar37 * 0x800000 | uVar66 >> 9)) + (uint)CARRY4(uVar5,uVar38) + -0x391ff40d +
            (uint)(0xc257703d < uVar17);
    uVar39 = uVar4 + uVar12;
    uVar38 = ((uVar28 * 0x10 | uVar22 >> 0x1c) ^ (uVar22 * 0x40000000 | uVar28 >> 2) ^
             (uVar22 * 0x2000000 | uVar28 >> 7)) + (uVar22 & (uVar21 ^ uVar20) ^ uVar21 & uVar20) +
             (uint)CARRY4(uVar18,uVar14) + iVar6 + (uint)CARRY4(uVar4,uVar12);
    uVar51 = (uVar38 * 0x10 | uVar39 >> 0x1c) ^ (uVar39 * 0x40000000 | uVar38 >> 2) ^
             (uVar39 * 0x2000000 | uVar38 >> 7);
    uVar14 = uVar39 & (uVar28 ^ uVar45) ^ uVar28 & uVar45;
    uVar4 = uVar51 + uVar14;
    uVar60 = uVar12 + uVar26;
    uVar68 = iVar6 + uVar13 + (uint)CARRY4(uVar12,uVar26);
    uVar5 = uVar66 & uVar60 | uVar25 & ~uVar60;
    uVar13 = (uVar33 * 0x2000 | uVar36 >> 0x13) ^ (uVar36 * 8 | uVar33 >> 0x1d) ^
             (uVar36 >> 6 | uVar33 * 0x4000000);
    uVar18 = (local_a8[0x1d] << 0x1f | local_a8[0x1c] >> 1) ^
             (local_a8[0x1d] << 0x18 | local_a8[0x1c] >> 8) ^
             (local_a8[0x1c] >> 7 | local_a8[0x1d] << 0x19);
    uVar17 = uVar7 + local_a8[0x1a] + uVar18;
    uVar12 = uVar17 + uVar13;
    uVar26 = uVar63 + local_a8[0x1b] + (uint)CARRY4(uVar7,local_a8[0x1a]) +
             ((local_a8[0x1c] << 0x1f | local_a8[0x1d] >> 1) ^
              (local_a8[0x1c] << 0x18 | local_a8[0x1d] >> 8) ^ local_a8[0x1d] >> 7) +
             (uint)CARRY4(uVar7 + local_a8[0x1a],uVar18) +
             ((uVar36 * 0x2000 | uVar33 >> 0x13) ^ (uVar33 * 8 | uVar36 >> 0x1d) ^ uVar33 >> 6) +
             (uint)CARRY4(uVar17,uVar13);
    uVar17 = uVar12 + uVar15 + uVar5;
    uVar13 = (uVar68 * 0x40000 | uVar60 >> 0xe) ^ (uVar68 * 0x4000 | uVar60 >> 0x12) ^
             (uVar60 * 0x800000 | uVar68 >> 9);
    uVar18 = uVar17 + uVar13;
    uVar46 = uVar18 + 0x930aa725;
    iVar6 = uVar26 + uVar59 + (uint)CARRY4(uVar12,uVar15) + (uVar37 & uVar68 | uVar52 & ~uVar68) +
            (uint)CARRY4(uVar12 + uVar15,uVar5) +
            ((uVar60 * 0x40000 | uVar68 >> 0xe) ^ (uVar60 * 0x4000 | uVar68 >> 0x12) ^
            (uVar68 * 0x800000 | uVar60 >> 9)) + (uint)CARRY4(uVar17,uVar13) + -0x2a586eb9 +
            (uint)(0x6cf558da < uVar18);
    uVar59 = uVar4 + uVar46;
    uVar15 = ((uVar39 * 0x10 | uVar38 >> 0x1c) ^ (uVar38 * 0x40000000 | uVar39 >> 2) ^
             (uVar38 * 0x2000000 | uVar39 >> 7)) + (uVar38 & (uVar22 ^ uVar21) ^ uVar22 & uVar21) +
             (uint)CARRY4(uVar51,uVar14) + iVar6 + (uint)CARRY4(uVar4,uVar46);
    uVar14 = (uVar15 * 0x10 | uVar59 >> 0x1c) ^ (uVar59 * 0x40000000 | uVar15 >> 2) ^
             (uVar59 * 0x2000000 | uVar15 >> 7);
    uVar58 = uVar59 & (uVar39 ^ uVar28) ^ uVar39 & uVar28;
    uVar4 = uVar14 + uVar58;
    uVar47 = uVar46 + uVar57;
    uVar57 = iVar6 + uVar20 + (uint)CARRY4(uVar46,uVar57);
    uVar46 = uVar60 & uVar47 | uVar66 & ~uVar47;
    uVar20 = (uVar40 * 0x2000 | uVar27 >> 0x13) ^ (uVar27 * 8 | uVar40 >> 0x1d) ^
             (uVar27 >> 6 | uVar40 * 0x4000000);
    uVar5 = (local_a8[0x1f] << 0x1f | local_a8[0x1e] >> 1) ^
            (local_a8[0x1f] << 0x18 | local_a8[0x1e] >> 8) ^
            (local_a8[0x1e] >> 7 | local_a8[0x1f] << 0x19);
    uVar17 = uVar5 + local_a8[0x1c];
    uVar18 = uVar17 + uVar19;
    uVar13 = uVar18 + uVar20;
    uVar20 = ((local_a8[0x1e] << 0x1f | local_a8[0x1f] >> 1) ^
              (local_a8[0x1e] << 0x18 | local_a8[0x1f] >> 8) ^ local_a8[0x1f] >> 7) + local_a8[0x1d]
             + (uint)CARRY4(uVar5,local_a8[0x1c]) + uVar64 + (uint)CARRY4(uVar17,uVar19) +
             ((uVar27 * 0x2000 | uVar40 >> 0x13) ^ (uVar40 * 8 | uVar27 >> 0x1d) ^ uVar40 >> 6) +
             (uint)CARRY4(uVar18,uVar20);
    uVar5 = uVar13 + uVar25 + uVar46;
    uVar18 = (uVar57 * 0x40000 | uVar47 >> 0xe) ^ (uVar57 * 0x4000 | uVar47 >> 0x12) ^
             (uVar47 * 0x800000 | uVar57 >> 9);
    uVar17 = uVar5 + uVar18;
    uVar51 = uVar17 + 0xe003826f;
    iVar6 = uVar20 + uVar52 + (uint)CARRY4(uVar13,uVar25) + (uVar68 & uVar57 | uVar37 & ~uVar57) +
            (uint)CARRY4(uVar13 + uVar25,uVar46) +
            ((uVar47 * 0x40000 | uVar57 >> 0xe) ^ (uVar47 * 0x4000 | uVar57 >> 0x12) ^
            (uVar57 * 0x800000 | uVar47 >> 9)) + (uint)CARRY4(uVar5,uVar18) + 0x6ca6351 +
            (uint)(0x1ffc7d90 < uVar17);
    uVar41 = uVar4 + uVar51;
    uVar58 = ((uVar59 * 0x10 | uVar15 >> 0x1c) ^ (uVar15 * 0x40000000 | uVar59 >> 2) ^
             (uVar15 * 0x2000000 | uVar59 >> 7)) + (uVar15 & (uVar38 ^ uVar22) ^ uVar38 & uVar22) +
             (uint)CARRY4(uVar14,uVar58) + iVar6 + (uint)CARRY4(uVar4,uVar51);
    uVar25 = (uVar58 * 0x10 | uVar41 >> 0x1c) ^ (uVar41 * 0x40000000 | uVar58 >> 2) ^
             (uVar41 * 0x2000000 | uVar58 >> 7);
    uVar52 = uVar41 & (uVar59 ^ uVar39) ^ uVar59 & uVar39;
    uVar4 = uVar25 + uVar52;
    uVar34 = uVar51 + uVar45;
    uVar46 = iVar6 + uVar21 + (uint)CARRY4(uVar51,uVar45);
    uVar5 = uVar47 & uVar34 | uVar60 & ~uVar34;
    uVar17 = (uVar26 * 0x2000 | uVar12 >> 0x13) ^ (uVar12 * 8 | uVar26 >> 0x1d) ^
             (uVar12 >> 6 | uVar26 * 0x4000000);
    uVar18 = (uVar43 * -0x80000000 | uVar61 >> 1) ^ (uVar43 * 0x1000000 | uVar61 >> 8) ^
             (uVar61 >> 7 | uVar43 * 0x2000000);
    uVar45 = uVar31 + local_a8[0x1e] + uVar18;
    uVar14 = uVar45 + uVar17;
    uVar45 = uVar10 + local_a8[0x1f] + (uint)CARRY4(uVar31,local_a8[0x1e]) +
             ((uVar61 * -0x80000000 | uVar43 >> 1) ^ (uVar61 * 0x1000000 | uVar43 >> 8) ^
             uVar43 >> 7) + (uint)CARRY4(uVar31 + local_a8[0x1e],uVar18) +
             ((uVar12 * 0x2000 | uVar26 >> 0x13) ^ (uVar26 * 8 | uVar12 >> 0x1d) ^ uVar26 >> 6) +
             (uint)CARRY4(uVar45,uVar17);
    uVar17 = uVar14 + uVar66 + uVar5;
    uVar51 = (uVar46 * 0x40000 | uVar34 >> 0xe) ^ (uVar46 * 0x4000 | uVar34 >> 0x12) ^
             (uVar34 * 0x800000 | uVar46 >> 9);
    uVar18 = uVar17 + uVar51;
    uVar21 = uVar18 + 0xa0e6e70;
    iVar6 = uVar45 + uVar37 + (uint)CARRY4(uVar14,uVar66) + (uVar57 & uVar46 | uVar68 & ~uVar46) +
            (uint)CARRY4(uVar14 + uVar66,uVar5) +
            ((uVar34 * 0x40000 | uVar46 >> 0xe) ^ (uVar34 * 0x4000 | uVar46 >> 0x12) ^
            (uVar46 * 0x800000 | uVar34 >> 9)) + (uint)CARRY4(uVar17,uVar51) + 0x14292967 +
            (uint)(0xf5f1918f < uVar18);
    uVar67 = uVar4 + uVar21;
    uVar52 = ((uVar41 * 0x10 | uVar58 >> 0x1c) ^ (uVar58 * 0x40000000 | uVar41 >> 2) ^
             (uVar58 * 0x2000000 | uVar41 >> 7)) + (uVar58 & (uVar15 ^ uVar38) ^ uVar15 & uVar38) +
             (uint)CARRY4(uVar25,uVar52) + iVar6 + (uint)CARRY4(uVar4,uVar21);
    uVar18 = (uVar52 * 0x10 | uVar67 >> 0x1c) ^ (uVar67 * 0x40000000 | uVar52 >> 2) ^
             (uVar67 * 0x2000000 | uVar52 >> 7);
    uVar51 = uVar67 & (uVar41 ^ uVar59) ^ uVar41 & uVar59;
    uVar4 = uVar18 + uVar51;
    uVar53 = uVar21 + uVar28;
    uVar42 = iVar6 + uVar22 + (uint)CARRY4(uVar21,uVar28);
    uVar21 = uVar34 & uVar53 | uVar47 & ~uVar53;
    uVar5 = (uVar20 * 0x2000 | uVar13 >> 0x13) ^ (uVar13 * 8 | uVar20 >> 0x1d) ^
            (uVar13 >> 6 | uVar20 * 0x4000000);
    uVar17 = (uVar44 * -0x80000000 | uVar11 >> 1) ^ (uVar44 * 0x1000000 | uVar11 >> 8) ^
             (uVar11 >> 7 | uVar44 * 0x2000000);
    uVar25 = uVar17 + uVar61;
    uVar66 = uVar25 + uVar30;
    uVar37 = uVar66 + uVar5;
    uVar25 = ((uVar11 * -0x80000000 | uVar44 >> 1) ^ (uVar11 * 0x1000000 | uVar44 >> 8) ^
             uVar44 >> 7) + uVar43 + (uint)CARRY4(uVar17,uVar61) + uVar65 +
             (uint)CARRY4(uVar25,uVar30) +
             ((uVar13 * 0x2000 | uVar20 >> 0x13) ^ (uVar20 * 8 | uVar13 >> 0x1d) ^ uVar20 >> 6) +
             (uint)CARRY4(uVar66,uVar5);
    uVar43 = (uVar42 * 0x40000 | uVar53 >> 0xe) ^ (uVar42 * 0x4000 | uVar53 >> 0x12) ^
             (uVar53 * 0x800000 | uVar42 >> 9);
    uVar5 = uVar37 + uVar60 + uVar21;
    uVar17 = uVar5 + uVar43;
    uVar61 = uVar17 + 0x46d22ffc;
    iVar6 = uVar25 + uVar68 + (uint)CARRY4(uVar37,uVar60) + (uVar46 & uVar42 | uVar57 & ~uVar42) +
            (uint)CARRY4(uVar37 + uVar60,uVar21) +
            ((uVar53 * 0x40000 | uVar42 >> 0xe) ^ (uVar53 * 0x4000 | uVar42 >> 0x12) ^
            (uVar42 * 0x800000 | uVar53 >> 9)) + (uint)CARRY4(uVar5,uVar43) + 0x27b70a85 +
            (uint)(0xb92dd003 < uVar17);
    uVar43 = uVar4 + uVar61;
    uVar51 = ((uVar67 * 0x10 | uVar52 >> 0x1c) ^ (uVar52 * 0x40000000 | uVar67 >> 2) ^
             (uVar52 * 0x2000000 | uVar67 >> 7)) + (uVar52 & (uVar58 ^ uVar15) ^ uVar58 & uVar15) +
             (uint)CARRY4(uVar18,uVar51) + iVar6 + (uint)CARRY4(uVar4,uVar61);
    uVar22 = (uVar51 * 0x10 | uVar43 >> 0x1c) ^ (uVar43 * 0x40000000 | uVar51 >> 2) ^
             (uVar43 * 0x2000000 | uVar51 >> 7);
    uVar66 = uVar43 & (uVar67 ^ uVar41) ^ uVar67 & uVar41;
    uVar4 = uVar22 + uVar66;
    uVar60 = uVar61 + uVar39;
    uVar68 = iVar6 + uVar38 + (uint)CARRY4(uVar61,uVar39);
    uVar5 = uVar53 & uVar60 | uVar34 & ~uVar60;
    uVar38 = (uVar45 * 0x2000 | uVar14 >> 0x13) ^ (uVar14 * 8 | uVar45 >> 0x1d) ^
             (uVar14 >> 6 | uVar45 * 0x4000000);
    uVar61 = (uVar49 * -0x80000000 | uVar55 >> 1) ^ (uVar49 * 0x1000000 | uVar55 >> 8) ^
             (uVar55 >> 7 | uVar49 * 0x2000000);
    uVar18 = uVar9 + uVar11 + uVar61;
    uVar17 = uVar18 + uVar38;
    uVar44 = uVar32 + uVar44 + (uint)CARRY4(uVar9,uVar11) +
             ((uVar55 * -0x80000000 | uVar49 >> 1) ^ (uVar55 * 0x1000000 | uVar49 >> 8) ^
             uVar49 >> 7) + (uint)CARRY4(uVar9 + uVar11,uVar61) +
             ((uVar14 * 0x2000 | uVar45 >> 0x13) ^ (uVar45 * 8 | uVar14 >> 0x1d) ^ uVar45 >> 6) +
             (uint)CARRY4(uVar18,uVar38);
    uVar18 = uVar17 + uVar47 + uVar5;
    uVar11 = (uVar68 * 0x40000 | uVar60 >> 0xe) ^ (uVar68 * 0x4000 | uVar60 >> 0x12) ^
             (uVar60 * 0x800000 | uVar68 >> 9);
    uVar61 = uVar18 + uVar11;
    uVar38 = uVar61 + 0x5c26c926;
    iVar6 = uVar44 + uVar57 + (uint)CARRY4(uVar17,uVar47) + (uVar42 & uVar68 | uVar46 & ~uVar68) +
            (uint)CARRY4(uVar17 + uVar47,uVar5) +
            ((uVar60 * 0x40000 | uVar68 >> 0xe) ^ (uVar60 * 0x4000 | uVar68 >> 0x12) ^
            (uVar68 * 0x800000 | uVar60 >> 9)) + (uint)CARRY4(uVar18,uVar11) + 0x2e1b2138 +
            (uint)(0xa3d936d9 < uVar61);
    uVar21 = uVar4 + uVar38;
    uVar57 = ((uVar43 * 0x10 | uVar51 >> 0x1c) ^ (uVar51 * 0x40000000 | uVar43 >> 2) ^
             (uVar51 * 0x2000000 | uVar43 >> 7)) + (uVar51 & (uVar52 ^ uVar58) ^ uVar52 & uVar58) +
             (uint)CARRY4(uVar22,uVar66) + iVar6 + (uint)CARRY4(uVar4,uVar38);
    uVar61 = (uVar57 * 0x10 | uVar21 >> 0x1c) ^ (uVar21 * 0x40000000 | uVar57 >> 2) ^
             (uVar21 * 0x2000000 | uVar57 >> 7);
    uVar39 = uVar21 & (uVar43 ^ uVar67) ^ uVar43 & uVar67;
    uVar4 = uVar61 + uVar39;
    uVar47 = uVar38 + uVar59;
    uVar22 = iVar6 + uVar15 + (uint)CARRY4(uVar38,uVar59);
    uVar15 = uVar60 & uVar47 | uVar53 & ~uVar47;
    uVar5 = (uVar25 * 0x2000 | uVar37 >> 0x13) ^ (uVar37 * 8 | uVar25 >> 0x1d) ^
            (uVar37 >> 6 | uVar25 * 0x4000000);
    uVar18 = (uVar56 * -0x80000000 | uVar16 >> 1) ^ (uVar56 * 0x1000000 | uVar16 >> 8) ^
             (uVar16 >> 7 | uVar56 * 0x2000000);
    uVar11 = uVar18 + uVar55;
    uVar66 = uVar11 + uVar36;
    uVar38 = uVar66 + uVar5;
    uVar66 = ((uVar16 * -0x80000000 | uVar56 >> 1) ^ (uVar16 * 0x1000000 | uVar56 >> 8) ^
             uVar56 >> 7) + uVar49 + (uint)CARRY4(uVar18,uVar55) + uVar33 +
             (uint)CARRY4(uVar11,uVar36) +
             ((uVar37 * 0x2000 | uVar25 >> 0x13) ^ (uVar25 * 8 | uVar37 >> 0x1d) ^ uVar25 >> 6) +
             (uint)CARRY4(uVar66,uVar5);
    uVar5 = uVar38 + uVar34 + uVar15;
    uVar11 = (uVar22 * 0x40000 | uVar47 >> 0xe) ^ (uVar22 * 0x4000 | uVar47 >> 0x12) ^
             (uVar47 * 0x800000 | uVar22 >> 9);
    uVar18 = uVar5 + uVar11;
    uVar55 = uVar18 + 0x5ac42aed;
    iVar6 = uVar66 + uVar46 + (uint)CARRY4(uVar38,uVar34) + (uVar68 & uVar22 | uVar42 & ~uVar22) +
            (uint)CARRY4(uVar38 + uVar34,uVar15) +
            ((uVar47 * 0x40000 | uVar22 >> 0xe) ^ (uVar47 * 0x4000 | uVar22 >> 0x12) ^
            (uVar22 * 0x800000 | uVar47 >> 9)) + (uint)CARRY4(uVar5,uVar11) + 0x4d2c6dfc +
            (uint)(0xa53bd512 < uVar18);
    uVar5 = uVar4 + uVar55;
    uVar28 = ((uVar21 * 0x10 | uVar57 >> 0x1c) ^ (uVar57 * 0x40000000 | uVar21 >> 2) ^
             (uVar57 * 0x2000000 | uVar21 >> 7)) + (uVar57 & (uVar51 ^ uVar52) ^ uVar51 & uVar52) +
             (uint)CARRY4(uVar61,uVar39) + iVar6 + (uint)CARRY4(uVar4,uVar55);
    uVar15 = (uVar28 * 0x10 | uVar5 >> 0x1c) ^ (uVar5 * 0x40000000 | uVar28 >> 2) ^
             (uVar5 * 0x2000000 | uVar28 >> 7);
    uVar39 = uVar5 & (uVar21 ^ uVar43) ^ uVar21 & uVar43;
    uVar4 = uVar15 + uVar39;
    uVar69 = uVar55 + uVar41;
    uVar46 = iVar6 + uVar58 + (uint)CARRY4(uVar55,uVar41);
    uVar18 = uVar47 & uVar69 | uVar60 & ~uVar69;
    uVar61 = (uVar44 * 0x2000 | uVar17 >> 0x13) ^ (uVar17 * 8 | uVar44 >> 0x1d) ^
             (uVar17 >> 6 | uVar44 * 0x4000000);
    uVar11 = (uVar62 * -0x80000000 | uVar24 >> 1) ^ (uVar62 * 0x1000000 | uVar24 >> 8) ^
             (uVar24 >> 7 | uVar62 * 0x2000000);
    uVar49 = uVar27 + uVar16 + uVar11;
    uVar55 = uVar49 + uVar61;
    uVar49 = uVar40 + uVar56 + (uint)CARRY4(uVar27,uVar16) +
             ((uVar24 * -0x80000000 | uVar62 >> 1) ^ (uVar24 * 0x1000000 | uVar62 >> 8) ^
             uVar62 >> 7) + (uint)CARRY4(uVar27 + uVar16,uVar11) +
             ((uVar17 * 0x2000 | uVar44 >> 0x13) ^ (uVar44 * 8 | uVar17 >> 0x1d) ^ uVar44 >> 6) +
             (uint)CARRY4(uVar49,uVar61);
    uVar61 = uVar55 + uVar53 + uVar18;
    uVar16 = (uVar46 * 0x40000 | uVar69 >> 0xe) ^ (uVar46 * 0x4000 | uVar69 >> 0x12) ^
             (uVar69 * 0x800000 | uVar46 >> 9);
    uVar11 = uVar61 + uVar16;
    uVar59 = uVar11 + 0x9d95b3df;
    iVar6 = uVar49 + uVar42 + (uint)CARRY4(uVar55,uVar53) + (uVar22 & uVar46 | uVar68 & ~uVar46) +
            (uint)CARRY4(uVar55 + uVar53,uVar18) +
            ((uVar69 * 0x40000 | uVar46 >> 0xe) ^ (uVar69 * 0x4000 | uVar46 >> 0x12) ^
            (uVar46 * 0x800000 | uVar69 >> 9)) + (uint)CARRY4(uVar61,uVar16) + 0x53380d13 +
            (uint)(0x626a4c20 < uVar11);
    uVar56 = uVar4 + uVar59;
    uVar58 = ((uVar5 * 0x10 | uVar28 >> 0x1c) ^ (uVar28 * 0x40000000 | uVar5 >> 2) ^
             (uVar28 * 0x2000000 | uVar5 >> 7)) + (uVar28 & (uVar57 ^ uVar51) ^ uVar57 & uVar51) +
             (uint)CARRY4(uVar15,uVar39) + iVar6 + (uint)CARRY4(uVar4,uVar59);
    uVar16 = (uVar58 * 0x10 | uVar56 >> 0x1c) ^ (uVar56 * 0x40000000 | uVar58 >> 2) ^
             (uVar56 * 0x2000000 | uVar58 >> 7);
    uVar15 = uVar56 & (uVar5 ^ uVar21) ^ uVar5 & uVar21;
    uVar4 = uVar16 + uVar15;
    uVar41 = uVar59 + uVar67;
    uVar11 = iVar6 + uVar52 + (uint)CARRY4(uVar59,uVar67);
    uVar67 = uVar69 & uVar41 | uVar47 & ~uVar41;
    uVar18 = (uVar66 * 0x2000 | uVar38 >> 0x13) ^ (uVar38 * 8 | uVar66 >> 0x1d) ^
             (uVar38 >> 6 | uVar66 * 0x4000000);
    uVar61 = (uVar50 * -0x80000000 | uVar3 >> 1) ^ (uVar50 * 0x1000000 | uVar3 >> 8) ^
             (uVar3 >> 7 | uVar50 * 0x2000000);
    uVar52 = uVar61 + uVar24;
    uVar59 = uVar52 + uVar12;
    uVar39 = uVar59 + uVar18;
    uVar59 = ((uVar3 * -0x80000000 | uVar50 >> 1) ^ (uVar3 * 0x1000000 | uVar50 >> 8) ^ uVar50 >> 7)
             + uVar62 + (uint)CARRY4(uVar61,uVar24) + uVar26 + (uint)CARRY4(uVar52,uVar12) +
             ((uVar38 * 0x2000 | uVar66 >> 0x13) ^ (uVar66 * 8 | uVar38 >> 0x1d) ^ uVar66 >> 6) +
             (uint)CARRY4(uVar59,uVar18);
    uVar18 = uVar39 + uVar60 + uVar67;
    uVar62 = (uVar11 * 0x40000 | uVar41 >> 0xe) ^ (uVar11 * 0x4000 | uVar41 >> 0x12) ^
             (uVar41 * 0x800000 | uVar11 >> 9);
    uVar61 = uVar18 + uVar62;
    uVar24 = uVar61 + 0x8baf63de;
    iVar6 = uVar59 + uVar68 + (uint)CARRY4(uVar39,uVar60) + (uVar46 & uVar11 | uVar22 & ~uVar11) +
            (uint)CARRY4(uVar39 + uVar60,uVar67) +
            ((uVar41 * 0x40000 | uVar11 >> 0xe) ^ (uVar41 * 0x4000 | uVar11 >> 0x12) ^
            (uVar11 * 0x800000 | uVar41 >> 9)) + (uint)CARRY4(uVar18,uVar62) + 0x650a7354 +
            (uint)(0x74509c21 < uVar61);
    uVar62 = uVar4 + uVar24;
    uVar67 = ((uVar56 * 0x10 | uVar58 >> 0x1c) ^ (uVar58 * 0x40000000 | uVar56 >> 2) ^
             (uVar58 * 0x2000000 | uVar56 >> 7)) + (uVar58 & (uVar28 ^ uVar57) ^ uVar28 & uVar57) +
             (uint)CARRY4(uVar16,uVar15) + iVar6 + (uint)CARRY4(uVar4,uVar24);
    uVar15 = (uVar67 * 0x10 | uVar62 >> 0x1c) ^ (uVar62 * 0x40000000 | uVar67 >> 2) ^
             (uVar62 * 0x2000000 | uVar67 >> 7);
    uVar16 = uVar62 & (uVar56 ^ uVar5) ^ uVar56 & uVar5;
    uVar4 = uVar15 + uVar16;
    uVar70 = uVar24 + uVar43;
    uVar53 = iVar6 + uVar51 + (uint)CARRY4(uVar24,uVar43);
    uVar18 = uVar41 & uVar70 | uVar69 & ~uVar70;
    uVar51 = (uVar49 * 0x2000 | uVar55 >> 0x13) ^ (uVar55 * 8 | uVar49 >> 0x1d) ^
             (uVar55 >> 6 | uVar49 * 0x4000000);
    uVar61 = (uVar63 * -0x80000000 | uVar7 >> 1) ^ (uVar63 * 0x1000000 | uVar7 >> 8) ^
             (uVar7 >> 7 | uVar63 * 0x2000000);
    uVar43 = uVar13 + uVar3 + uVar61;
    uVar24 = uVar43 + uVar51;
    uVar43 = uVar20 + uVar50 + (uint)CARRY4(uVar13,uVar3) +
             ((uVar7 * -0x80000000 | uVar63 >> 1) ^ (uVar7 * 0x1000000 | uVar63 >> 8) ^ uVar63 >> 7)
             + (uint)CARRY4(uVar13 + uVar3,uVar61) +
             ((uVar55 * 0x2000 | uVar49 >> 0x13) ^ (uVar49 * 8 | uVar55 >> 0x1d) ^ uVar49 >> 6) +
             (uint)CARRY4(uVar43,uVar51);
    uVar3 = uVar24 + uVar47 + uVar18;
    uVar50 = (uVar53 * 0x40000 | uVar70 >> 0xe) ^ (uVar53 * 0x4000 | uVar70 >> 0x12) ^
             (uVar70 * 0x800000 | uVar53 >> 9);
    uVar61 = uVar3 + uVar50;
    uVar51 = uVar61 + 0x3c77b2a8;
    iVar6 = uVar43 + uVar22 + (uint)CARRY4(uVar24,uVar47) + (uVar11 & uVar53 | uVar46 & ~uVar53) +
            (uint)CARRY4(uVar24 + uVar47,uVar18) +
            ((uVar70 * 0x40000 | uVar53 >> 0xe) ^ (uVar70 * 0x4000 | uVar53 >> 0x12) ^
            (uVar53 * 0x800000 | uVar70 >> 9)) + (uint)CARRY4(uVar3,uVar50) + 0x766a0abb +
            (uint)(0xc3884d57 < uVar61);
    uVar22 = uVar4 + uVar51;
    uVar15 = ((uVar62 * 0x10 | uVar67 >> 0x1c) ^ (uVar67 * 0x40000000 | uVar62 >> 2) ^
             (uVar67 * 0x2000000 | uVar62 >> 7)) + (uVar67 & (uVar58 ^ uVar28) ^ uVar58 & uVar28) +
             (uint)CARRY4(uVar15,uVar16) + iVar6 + (uint)CARRY4(uVar4,uVar51);
    uVar18 = (uVar15 * 0x10 | uVar22 >> 0x1c) ^ (uVar22 * 0x40000000 | uVar15 >> 2) ^
             (uVar22 * 0x2000000 | uVar15 >> 7);
    uVar34 = uVar22 & (uVar62 ^ uVar56) ^ uVar62 & uVar56;
    uVar3 = uVar18 + uVar34;
    uVar42 = uVar51 + uVar21;
    uVar21 = iVar6 + uVar57 + (uint)CARRY4(uVar51,uVar21);
    uVar52 = uVar70 & uVar42 | uVar41 & ~uVar42;
    uVar4 = (uVar59 * 0x2000 | uVar39 >> 0x13) ^ (uVar39 * 8 | uVar59 >> 0x1d) ^
            (uVar39 >> 6 | uVar59 * 0x4000000);
    uVar61 = (uVar64 * -0x80000000 | uVar19 >> 1) ^ (uVar64 * 0x1000000 | uVar19 >> 8) ^
             (uVar19 >> 7 | uVar64 * 0x2000000);
    uVar16 = uVar61 + uVar7;
    uVar51 = uVar16 + uVar14;
    uVar50 = uVar51 + uVar4;
    uVar57 = ((uVar19 * -0x80000000 | uVar64 >> 1) ^ (uVar19 * 0x1000000 | uVar64 >> 8) ^
             uVar64 >> 7) + uVar63 + (uint)CARRY4(uVar61,uVar7) + uVar45 +
             (uint)CARRY4(uVar16,uVar14) +
             ((uVar39 * 0x2000 | uVar59 >> 0x13) ^ (uVar59 * 8 | uVar39 >> 0x1d) ^ uVar59 >> 6) +
             (uint)CARRY4(uVar51,uVar4);
    uVar7 = uVar50 + uVar69 + uVar52;
    uVar61 = (uVar21 * 0x40000 | uVar42 >> 0xe) ^ (uVar21 * 0x4000 | uVar42 >> 0x12) ^
             (uVar42 * 0x800000 | uVar21 >> 9);
    uVar4 = uVar7 + uVar61;
    uVar16 = uVar4 + 0x47edaee6;
    iVar6 = uVar57 + uVar46 + (uint)CARRY4(uVar50,uVar69) + (uVar53 & uVar21 | uVar11 & ~uVar21) +
            (uint)CARRY4(uVar50 + uVar69,uVar52) +
            ((uVar42 * 0x40000 | uVar21 >> 0xe) ^ (uVar42 * 0x4000 | uVar21 >> 0x12) ^
            (uVar21 * 0x800000 | uVar42 >> 9)) + (uint)CARRY4(uVar7,uVar61) + -0x7e3d36d2 +
            (uint)(0xb8125119 < uVar4);
    uVar7 = uVar3 + uVar16;
    uVar46 = ((uVar22 * 0x10 | uVar15 >> 0x1c) ^ (uVar15 * 0x40000000 | uVar22 >> 2) ^
             (uVar15 * 0x2000000 | uVar22 >> 7)) + (uVar15 & (uVar67 ^ uVar58) ^ uVar67 & uVar58) +
             (uint)CARRY4(uVar18,uVar34) + iVar6 + (uint)CARRY4(uVar3,uVar16);
    uVar34 = (uVar46 * 0x10 | uVar7 >> 0x1c) ^ (uVar7 * 0x40000000 | uVar46 >> 2) ^
             (uVar7 * 0x2000000 | uVar46 >> 7);
    uVar51 = uVar7 & (uVar22 ^ uVar62) ^ uVar22 & uVar62;
    uVar3 = uVar34 + uVar51;
    uVar60 = uVar16 + uVar5;
    uVar28 = iVar6 + uVar28 + (uint)CARRY4(uVar16,uVar5);
    uVar4 = uVar42 & uVar60 | uVar70 & ~uVar60;
    uVar16 = (uVar43 * 0x2000 | uVar24 >> 0x13) ^ (uVar24 * 8 | uVar43 >> 0x1d) ^
             (uVar24 >> 6 | uVar43 * 0x4000000);
    uVar5 = (uVar10 * -0x80000000 | uVar31 >> 1) ^ (uVar10 * 0x1000000 | uVar31 >> 8) ^
            (uVar31 >> 7 | uVar10 * 0x2000000);
    uVar18 = uVar37 + uVar19 + uVar5;
    uVar61 = uVar18 + uVar16;
    uVar63 = uVar25 + uVar64 + (uint)CARRY4(uVar37,uVar19) +
             ((uVar31 * -0x80000000 | uVar10 >> 1) ^ (uVar31 * 0x1000000 | uVar10 >> 8) ^
             uVar10 >> 7) + (uint)CARRY4(uVar37 + uVar19,uVar5) +
             ((uVar24 * 0x2000 | uVar43 >> 0x13) ^ (uVar43 * 8 | uVar24 >> 0x1d) ^ uVar43 >> 6) +
             (uint)CARRY4(uVar18,uVar16);
    uVar5 = uVar61 + uVar41 + uVar4;
    uVar16 = (uVar28 * 0x40000 | uVar60 >> 0xe) ^ (uVar28 * 0x4000 | uVar60 >> 0x12) ^
             (uVar60 * 0x800000 | uVar28 >> 9);
    uVar18 = uVar5 + uVar16;
    uVar19 = uVar18 + 0x1482353b;
    iVar6 = uVar63 + uVar11 + (uint)CARRY4(uVar61,uVar41) + (uVar21 & uVar28 | uVar53 & ~uVar28) +
            (uint)CARRY4(uVar61 + uVar41,uVar4) +
            ((uVar60 * 0x40000 | uVar28 >> 0xe) ^ (uVar60 * 0x4000 | uVar28 >> 0x12) ^
            (uVar28 * 0x800000 | uVar60 >> 9)) + (uint)CARRY4(uVar5,uVar16) + -0x6d8dd37b +
            (uint)(0xeb7dcac4 < uVar18);
    uVar52 = uVar3 + uVar19;
    uVar34 = ((uVar7 * 0x10 | uVar46 >> 0x1c) ^ (uVar46 * 0x40000000 | uVar7 >> 2) ^
             (uVar46 * 0x2000000 | uVar7 >> 7)) + (uVar46 & (uVar15 ^ uVar67) ^ uVar15 & uVar67) +
             (uint)CARRY4(uVar34,uVar51) + iVar6 + (uint)CARRY4(uVar3,uVar19);
    uVar18 = (uVar34 * 0x10 | uVar52 >> 0x1c) ^ (uVar52 * 0x40000000 | uVar34 >> 2) ^
             (uVar52 * 0x2000000 | uVar34 >> 7);
    uVar16 = uVar52 & (uVar7 ^ uVar22) ^ uVar7 & uVar22;
    uVar3 = uVar18 + uVar16;
    uVar41 = uVar19 + uVar56;
    uVar68 = iVar6 + uVar58 + (uint)CARRY4(uVar19,uVar56);
    uVar64 = uVar60 & uVar41 | uVar42 & ~uVar41;
    uVar4 = (uVar57 * 0x2000 | uVar50 >> 0x13) ^ (uVar50 * 8 | uVar57 >> 0x1d) ^
            (uVar50 >> 6 | uVar57 * 0x4000000);
    uVar5 = (uVar65 * -0x80000000 | uVar30 >> 1) ^ (uVar65 * 0x1000000 | uVar30 >> 8) ^
            (uVar30 >> 7 | uVar65 * 0x2000000);
    uVar19 = uVar5 + uVar31;
    uVar56 = uVar19 + uVar17;
    uVar11 = uVar56 + uVar4;
    uVar56 = ((uVar30 * -0x80000000 | uVar65 >> 1) ^ (uVar30 * 0x1000000 | uVar65 >> 8) ^
             uVar65 >> 7) + uVar10 + (uint)CARRY4(uVar5,uVar31) + uVar44 +
             (uint)CARRY4(uVar19,uVar17) +
             ((uVar50 * 0x2000 | uVar57 >> 0x13) ^ (uVar57 * 8 | uVar50 >> 0x1d) ^ uVar57 >> 6) +
             (uint)CARRY4(uVar56,uVar4);
    uVar19 = (uVar68 * 0x40000 | uVar41 >> 0xe) ^ (uVar68 * 0x4000 | uVar41 >> 0x12) ^
             (uVar41 * 0x800000 | uVar68 >> 9);
    uVar4 = uVar11 + uVar70 + uVar64;
    uVar5 = uVar4 + uVar19;
    uVar10 = uVar5 + 0x4cf10364;
    iVar6 = uVar56 + uVar53 + (uint)CARRY4(uVar11,uVar70) + (uVar28 & uVar68 | uVar21 & ~uVar68) +
            (uint)CARRY4(uVar11 + uVar70,uVar64) +
            ((uVar41 * 0x40000 | uVar68 >> 0xe) ^ (uVar41 * 0x4000 | uVar68 >> 0x12) ^
            (uVar68 * 0x800000 | uVar41 >> 9)) + (uint)CARRY4(uVar4,uVar19) + -0x5d40175f +
            (uint)(0xb30efc9b < uVar5);
    uVar51 = uVar3 + uVar10;
    uVar64 = ((uVar52 * 0x10 | uVar34 >> 0x1c) ^ (uVar34 * 0x40000000 | uVar52 >> 2) ^
             (uVar34 * 0x2000000 | uVar52 >> 7)) + (uVar34 & (uVar46 ^ uVar15) ^ uVar46 & uVar15) +
             (uint)CARRY4(uVar18,uVar16) + iVar6 + (uint)CARRY4(uVar3,uVar10);
    uVar31 = (uVar64 * 0x10 | uVar51 >> 0x1c) ^ (uVar51 * 0x40000000 | uVar64 >> 2) ^
             (uVar51 * 0x2000000 | uVar64 >> 7);
    uVar19 = uVar51 & (uVar52 ^ uVar7) ^ uVar52 & uVar7;
    uVar3 = uVar31 + uVar19;
    uVar58 = uVar10 + uVar62;
    uVar69 = iVar6 + uVar67 + (uint)CARRY4(uVar10,uVar62);
    uVar10 = uVar41 & uVar58 | uVar60 & ~uVar58;
    uVar18 = (uVar63 * 0x2000 | uVar61 >> 0x13) ^ (uVar61 * 8 | uVar63 >> 0x1d) ^
             (uVar61 >> 6 | uVar63 * 0x4000000);
    uVar4 = (uVar32 * -0x80000000 | uVar9 >> 1) ^ (uVar32 * 0x1000000 | uVar9 >> 8) ^
            (uVar9 >> 7 | uVar32 * 0x2000000);
    uVar5 = uVar38 + uVar30 + uVar4;
    uVar16 = uVar5 + uVar18;
    uVar62 = uVar66 + uVar65 + (uint)CARRY4(uVar38,uVar30) +
             ((uVar9 * -0x80000000 | uVar32 >> 1) ^ (uVar9 * 0x1000000 | uVar32 >> 8) ^ uVar32 >> 7)
             + (uint)CARRY4(uVar38 + uVar30,uVar4) +
             ((uVar61 * 0x2000 | uVar63 >> 0x13) ^ (uVar63 * 8 | uVar61 >> 0x1d) ^ uVar63 >> 6) +
             (uint)CARRY4(uVar5,uVar18);
    uVar4 = uVar16 + uVar42 + uVar10;
    uVar30 = (uVar69 * 0x40000 | uVar58 >> 0xe) ^ (uVar69 * 0x4000 | uVar58 >> 0x12) ^
             (uVar58 * 0x800000 | uVar69 >> 9);
    uVar5 = uVar4 + uVar30;
    uVar18 = uVar5 + 0xbc423001;
    iVar6 = uVar62 + uVar21 + (uint)CARRY4(uVar16,uVar42) + (uVar68 & uVar69 | uVar28 & ~uVar69) +
            (uint)CARRY4(uVar16 + uVar42,uVar10) +
            ((uVar58 * 0x40000 | uVar69 >> 0xe) ^ (uVar58 * 0x4000 | uVar69 >> 0x12) ^
            (uVar69 * 0x800000 | uVar58 >> 9)) + (uint)CARRY4(uVar4,uVar30) + -0x57e599b5 +
            (uint)(0x43bdcffe < uVar5);
    uVar70 = uVar3 + uVar18;
    uVar21 = ((uVar51 * 0x10 | uVar64 >> 0x1c) ^ (uVar64 * 0x40000000 | uVar51 >> 2) ^
             (uVar64 * 0x2000000 | uVar51 >> 7)) + (uVar64 & (uVar34 ^ uVar46) ^ uVar34 & uVar46) +
             (uint)CARRY4(uVar31,uVar19) + iVar6 + (uint)CARRY4(uVar3,uVar18);
    uVar30 = (uVar21 * 0x10 | uVar70 >> 0x1c) ^ (uVar70 * 0x40000000 | uVar21 >> 2) ^
             (uVar70 * 0x2000000 | uVar21 >> 7);
    uVar65 = uVar70 & (uVar51 ^ uVar52) ^ uVar51 & uVar52;
    uVar19 = uVar30 + uVar65;
    uVar47 = uVar18 + uVar22;
    uVar67 = iVar6 + uVar15 + (uint)CARRY4(uVar18,uVar22);
    uVar10 = uVar58 & uVar47 | uVar41 & ~uVar47;
    uVar3 = (uVar56 * 0x2000 | uVar11 >> 0x13) ^ (uVar11 * 8 | uVar56 >> 0x1d) ^
            (uVar11 >> 6 | uVar56 * 0x4000000);
    uVar4 = (uVar33 * -0x80000000 | uVar36 >> 1) ^ (uVar33 * 0x1000000 | uVar36 >> 8) ^
            (uVar36 >> 7 | uVar33 * 0x2000000);
    uVar5 = uVar4 + uVar9;
    uVar18 = uVar5 + uVar55;
    uVar31 = uVar18 + uVar3;
    uVar15 = ((uVar36 * -0x80000000 | uVar33 >> 1) ^ (uVar36 * 0x1000000 | uVar33 >> 8) ^
             uVar33 >> 7) + uVar32 + (uint)CARRY4(uVar4,uVar9) + uVar49 + (uint)CARRY4(uVar5,uVar55)
             + ((uVar11 * 0x2000 | uVar56 >> 0x13) ^ (uVar56 * 8 | uVar11 >> 0x1d) ^ uVar56 >> 6) +
             (uint)CARRY4(uVar18,uVar3);
    uVar3 = uVar31 + uVar60 + uVar10;
    uVar9 = (uVar67 * 0x40000 | uVar47 >> 0xe) ^ (uVar67 * 0x4000 | uVar47 >> 0x12) ^
            (uVar47 * 0x800000 | uVar67 >> 9);
    uVar4 = uVar3 + uVar9;
    uVar5 = uVar4 + 0xd0f89791;
    iVar6 = uVar15 + uVar28 + (uint)CARRY4(uVar31,uVar60) + (uVar69 & uVar67 | uVar68 & ~uVar67) +
            (uint)CARRY4(uVar31 + uVar60,uVar10) +
            ((uVar47 * 0x40000 | uVar67 >> 0xe) ^ (uVar47 * 0x4000 | uVar67 >> 0x12) ^
            (uVar67 * 0x800000 | uVar47 >> 9)) + (uint)CARRY4(uVar3,uVar9) + -0x3db47490 +
            (uint)(0x2f07686e < uVar4);
    uVar28 = uVar19 + uVar5;
    uVar22 = ((uVar70 * 0x10 | uVar21 >> 0x1c) ^ (uVar21 * 0x40000000 | uVar70 >> 2) ^
             (uVar21 * 0x2000000 | uVar70 >> 7)) + (uVar21 & (uVar64 ^ uVar34) ^ uVar64 & uVar34) +
             (uint)CARRY4(uVar30,uVar65) + iVar6 + (uint)CARRY4(uVar19,uVar5);
    uVar18 = (uVar22 * 0x10 | uVar28 >> 0x1c) ^ (uVar28 * 0x40000000 | uVar22 >> 2) ^
             (uVar28 * 0x2000000 | uVar22 >> 7);
    uVar19 = uVar28 & (uVar70 ^ uVar51) ^ uVar70 & uVar51;
    uVar4 = uVar18 + uVar19;
    uVar53 = uVar5 + uVar7;
    uVar60 = iVar6 + uVar46 + (uint)CARRY4(uVar5,uVar7);
    uVar3 = uVar47 & uVar53 | uVar58 & ~uVar53;
    uVar5 = (uVar62 * 0x2000 | uVar16 >> 0x13) ^ (uVar16 * 8 | uVar62 >> 0x1d) ^
            (uVar16 >> 6 | uVar62 * 0x4000000);
    uVar30 = (uVar40 * -0x80000000 | uVar27 >> 1) ^ (uVar40 * 0x1000000 | uVar27 >> 8) ^
             (uVar27 >> 7 | uVar40 * 0x2000000);
    uVar9 = uVar39 + uVar36 + uVar30;
    uVar7 = uVar9 + uVar5;
    uVar65 = uVar59 + uVar33 + (uint)CARRY4(uVar39,uVar36) +
             ((uVar27 * -0x80000000 | uVar40 >> 1) ^ (uVar27 * 0x1000000 | uVar40 >> 8) ^
             uVar40 >> 7) + (uint)CARRY4(uVar39 + uVar36,uVar30) +
             ((uVar16 * 0x2000 | uVar62 >> 0x13) ^ (uVar62 * 8 | uVar16 >> 0x1d) ^ uVar62 >> 6) +
             (uint)CARRY4(uVar9,uVar5);
    uVar5 = uVar7 + uVar41 + uVar3;
    uVar30 = (uVar60 * 0x40000 | uVar53 >> 0xe) ^ (uVar60 * 0x4000 | uVar53 >> 0x12) ^
             (uVar53 * 0x800000 | uVar60 >> 9);
    uVar9 = uVar5 + uVar30;
    uVar36 = uVar9 + 0x654be30;
    iVar6 = uVar65 + uVar68 + (uint)CARRY4(uVar7,uVar41) + (uVar67 & uVar60 | uVar69 & ~uVar60) +
            (uint)CARRY4(uVar7 + uVar41,uVar3) +
            ((uVar53 * 0x40000 | uVar60 >> 0xe) ^ (uVar53 * 0x4000 | uVar60 >> 0x12) ^
            (uVar60 * 0x800000 | uVar53 >> 9)) + (uint)CARRY4(uVar5,uVar30) + -0x3893ae5d +
            (uint)(0xf9ab41cf < uVar9);
    uVar10 = uVar4 + uVar36;
    uVar46 = ((uVar28 * 0x10 | uVar22 >> 0x1c) ^ (uVar22 * 0x40000000 | uVar28 >> 2) ^
             (uVar22 * 0x2000000 | uVar28 >> 7)) + (uVar22 & (uVar21 ^ uVar64) ^ uVar21 & uVar64) +
             (uint)CARRY4(uVar18,uVar19) + iVar6 + (uint)CARRY4(uVar4,uVar36);
    uVar33 = (uVar46 * 0x10 | uVar10 >> 0x1c) ^ (uVar10 * 0x40000000 | uVar46 >> 2) ^
             (uVar10 * 0x2000000 | uVar46 >> 7);
    uVar18 = uVar10 & (uVar28 ^ uVar70) ^ uVar28 & uVar70;
    uVar3 = uVar33 + uVar18;
    uVar41 = uVar36 + uVar52;
    uVar52 = iVar6 + uVar34 + (uint)CARRY4(uVar36,uVar52);
    uVar4 = uVar53 & uVar41 | uVar47 & ~uVar41;
    uVar5 = (uVar15 * 0x2000 | uVar31 >> 0x13) ^ (uVar31 * 8 | uVar15 >> 0x1d) ^
            (uVar31 >> 6 | uVar15 * 0x4000000);
    uVar9 = (uVar26 * -0x80000000 | uVar12 >> 1) ^ (uVar26 * 0x1000000 | uVar12 >> 8) ^
            (uVar12 >> 7 | uVar26 * 0x2000000);
    uVar36 = uVar9 + uVar27;
    uVar30 = uVar36 + uVar24;
    uVar19 = uVar30 + uVar5;
    uVar32 = ((uVar12 * -0x80000000 | uVar26 >> 1) ^ (uVar12 * 0x1000000 | uVar26 >> 8) ^
             uVar26 >> 7) + uVar40 + (uint)CARRY4(uVar9,uVar27) + uVar43 +
             (uint)CARRY4(uVar36,uVar24) +
             ((uVar31 * 0x2000 | uVar15 >> 0x13) ^ (uVar15 * 8 | uVar31 >> 0x1d) ^ uVar15 >> 6) +
             (uint)CARRY4(uVar30,uVar5);
    uVar5 = uVar19 + uVar58 + uVar4;
    uVar36 = (uVar52 * 0x40000 | uVar41 >> 0xe) ^ (uVar52 * 0x4000 | uVar41 >> 0x12) ^
             (uVar41 * 0x800000 | uVar52 >> 9);
    uVar9 = uVar5 + uVar36;
    uVar40 = uVar9 + 0xd6ef5218;
    iVar6 = uVar32 + uVar69 + (uint)CARRY4(uVar19,uVar58) + (uVar60 & uVar52 | uVar67 & ~uVar52) +
            (uint)CARRY4(uVar19 + uVar58,uVar4) +
            ((uVar41 * 0x40000 | uVar52 >> 0xe) ^ (uVar41 * 0x4000 | uVar52 >> 0x12) ^
            (uVar52 * 0x800000 | uVar41 >> 9)) + (uint)CARRY4(uVar5,uVar36) + -0x2e6d17e7 +
            (uint)(0x2910ade7 < uVar9);
    uVar4 = uVar3 + uVar40;
    uVar18 = ((uVar10 * 0x10 | uVar46 >> 0x1c) ^ (uVar46 * 0x40000000 | uVar10 >> 2) ^
             (uVar46 * 0x2000000 | uVar10 >> 7)) + (uVar46 & (uVar22 ^ uVar21) ^ uVar22 & uVar21) +
             (uint)CARRY4(uVar33,uVar18) + iVar6 + (uint)CARRY4(uVar3,uVar40);
    uVar27 = (uVar18 * 0x10 | uVar4 >> 0x1c) ^ (uVar4 * 0x40000000 | uVar18 >> 2) ^
             (uVar4 * 0x2000000 | uVar18 >> 7);
    uVar36 = uVar4 & (uVar10 ^ uVar28) ^ uVar10 & uVar28;
    uVar30 = uVar27 + uVar36;
    uVar69 = uVar40 + uVar51;
    uVar42 = iVar6 + uVar64 + (uint)CARRY4(uVar40,uVar51);
    uVar3 = uVar41 & uVar69 | uVar53 & ~uVar69;
    uVar33 = (uVar65 * 0x2000 | uVar7 >> 0x13) ^ (uVar7 * 8 | uVar65 >> 0x1d) ^
             (uVar7 >> 6 | uVar65 * 0x4000000);
    uVar5 = (uVar20 * -0x80000000 | uVar13 >> 1) ^ (uVar20 * 0x1000000 | uVar13 >> 8) ^
            (uVar13 >> 7 | uVar20 * 0x2000000);
    uVar9 = uVar50 + uVar12 + uVar5;
    uVar64 = uVar9 + uVar33;
    uVar12 = uVar57 + uVar26 + (uint)CARRY4(uVar50,uVar12) +
             ((uVar13 * -0x80000000 | uVar20 >> 1) ^ (uVar13 * 0x1000000 | uVar20 >> 8) ^
             uVar20 >> 7) + (uint)CARRY4(uVar50 + uVar12,uVar5) +
             ((uVar7 * 0x2000 | uVar65 >> 0x13) ^ (uVar65 * 8 | uVar7 >> 0x1d) ^ uVar65 >> 6) +
             (uint)CARRY4(uVar9,uVar33);
    uVar5 = uVar64 + uVar47 + uVar3;
    uVar33 = (uVar42 * 0x40000 | uVar69 >> 0xe) ^ (uVar42 * 0x4000 | uVar69 >> 0x12) ^
             (uVar69 * 0x800000 | uVar42 >> 9);
    uVar9 = uVar5 + uVar33;
    uVar26 = uVar9 + 0x5565a910;
    iVar6 = uVar12 + uVar67 + (uint)CARRY4(uVar64,uVar47) + (uVar52 & uVar42 | uVar60 & ~uVar42) +
            (uint)CARRY4(uVar64 + uVar47,uVar3) +
            ((uVar69 * 0x40000 | uVar42 >> 0xe) ^ (uVar69 * 0x4000 | uVar42 >> 0x12) ^
            (uVar42 * 0x800000 | uVar69 >> 9)) + (uint)CARRY4(uVar5,uVar33) + -0x2966f9dc +
            (uint)(0xaa9a56ef < uVar9);
    uVar51 = uVar30 + uVar26;
    uVar67 = ((uVar4 * 0x10 | uVar18 >> 0x1c) ^ (uVar18 * 0x40000000 | uVar4 >> 2) ^
             (uVar18 * 0x2000000 | uVar4 >> 7)) + (uVar18 & (uVar46 ^ uVar22) ^ uVar46 & uVar22) +
             (uint)CARRY4(uVar27,uVar36) + iVar6 + (uint)CARRY4(uVar30,uVar26);
    uVar36 = (uVar67 * 0x10 | uVar51 >> 0x1c) ^ (uVar51 * 0x40000000 | uVar67 >> 2) ^
             (uVar51 * 0x2000000 | uVar67 >> 7);
    uVar27 = uVar51 & (uVar4 ^ uVar10) ^ uVar4 & uVar10;
    uVar3 = uVar36 + uVar27;
    uVar47 = uVar26 + uVar70;
    uVar58 = iVar6 + uVar21 + (uint)CARRY4(uVar26,uVar70);
    uVar40 = uVar69 & uVar47 | uVar41 & ~uVar47;
    uVar5 = (uVar32 * 0x2000 | uVar19 >> 0x13) ^ (uVar19 * 8 | uVar32 >> 0x1d) ^
            (uVar19 >> 6 | uVar32 * 0x4000000);
    uVar9 = (uVar45 * -0x80000000 | uVar14 >> 1) ^ (uVar45 * 0x1000000 | uVar14 >> 8) ^
            (uVar14 >> 7 | uVar45 * 0x2000000);
    uVar30 = uVar9 + uVar13;
    uVar26 = uVar30 + uVar61;
    uVar33 = uVar26 + uVar5;
    uVar34 = ((uVar14 * -0x80000000 | uVar45 >> 1) ^ (uVar14 * 0x1000000 | uVar45 >> 8) ^
             uVar45 >> 7) + uVar20 + (uint)CARRY4(uVar9,uVar13) + uVar63 +
             (uint)CARRY4(uVar30,uVar61) +
             ((uVar19 * 0x2000 | uVar32 >> 0x13) ^ (uVar32 * 8 | uVar19 >> 0x1d) ^ uVar32 >> 6) +
             (uint)CARRY4(uVar26,uVar5);
    uVar5 = uVar33 + uVar53 + uVar40;
    uVar30 = (uVar58 * 0x40000 | uVar47 >> 0xe) ^ (uVar58 * 0x4000 | uVar47 >> 0x12) ^
             (uVar47 * 0x800000 | uVar58 >> 9);
    uVar9 = uVar5 + uVar30;
    uVar13 = uVar9 + 0x5771202a;
    iVar6 = uVar34 + uVar60 + (uint)CARRY4(uVar33,uVar53) + (uVar42 & uVar58 | uVar52 & ~uVar58) +
            (uint)CARRY4(uVar33 + uVar53,uVar40) +
            ((uVar47 * 0x40000 | uVar58 >> 0xe) ^ (uVar47 * 0x4000 | uVar58 >> 0x12) ^
            (uVar58 * 0x800000 | uVar47 >> 9)) + (uint)CARRY4(uVar5,uVar30) + -0xbf1ca7b +
            (uint)(0xa88edfd5 < uVar9);
    uVar68 = uVar3 + uVar13;
    uVar27 = ((uVar51 * 0x10 | uVar67 >> 0x1c) ^ (uVar67 * 0x40000000 | uVar51 >> 2) ^
             (uVar67 * 0x2000000 | uVar51 >> 7)) + (uVar67 & (uVar18 ^ uVar46) ^ uVar18 & uVar46) +
             (uint)CARRY4(uVar36,uVar27) + iVar6 + (uint)CARRY4(uVar3,uVar13);
    uVar26 = (uVar27 * 0x10 | uVar68 >> 0x1c) ^ (uVar68 * 0x40000000 | uVar27 >> 2) ^
             (uVar68 * 0x2000000 | uVar27 >> 7);
    uVar40 = uVar68 & (uVar51 ^ uVar4) ^ uVar51 & uVar4;
    uVar3 = uVar26 + uVar40;
    uVar60 = uVar13 + uVar28;
    uVar22 = iVar6 + uVar22 + (uint)CARRY4(uVar13,uVar28);
    uVar5 = uVar47 & uVar60 | uVar69 & ~uVar60;
    uVar13 = (uVar12 * 0x2000 | uVar64 >> 0x13) ^ (uVar64 * 8 | uVar12 >> 0x1d) ^
             (uVar64 >> 6 | uVar12 * 0x4000000);
    uVar9 = (uVar25 * -0x80000000 | uVar37 >> 1) ^ (uVar25 * 0x1000000 | uVar37 >> 8) ^
            (uVar37 >> 7 | uVar25 * 0x2000000);
    uVar36 = uVar11 + uVar14 + uVar9;
    uVar30 = uVar36 + uVar13;
    uVar20 = uVar56 + uVar45 + (uint)CARRY4(uVar11,uVar14) +
             ((uVar37 * -0x80000000 | uVar25 >> 1) ^ (uVar37 * 0x1000000 | uVar25 >> 8) ^
             uVar25 >> 7) + (uint)CARRY4(uVar11 + uVar14,uVar9) +
             ((uVar64 * 0x2000 | uVar12 >> 0x13) ^ (uVar12 * 8 | uVar64 >> 0x1d) ^ uVar12 >> 6) +
             (uint)CARRY4(uVar36,uVar13);
    uVar9 = uVar30 + uVar41 + uVar5;
    uVar14 = (uVar22 * 0x40000 | uVar60 >> 0xe) ^ (uVar22 * 0x4000 | uVar60 >> 0x12) ^
             (uVar60 * 0x800000 | uVar22 >> 9);
    uVar36 = uVar9 + uVar14;
    uVar13 = uVar36 + 0x32bbd1b8;
    iVar6 = uVar20 + uVar52 + (uint)CARRY4(uVar30,uVar41) + (uVar58 & uVar22 | uVar42 & ~uVar22) +
            (uint)CARRY4(uVar30 + uVar41,uVar5) +
            ((uVar60 * 0x40000 | uVar22 >> 0xe) ^ (uVar60 * 0x4000 | uVar22 >> 0x12) ^
            (uVar22 * 0x800000 | uVar60 >> 9)) + (uint)CARRY4(uVar9,uVar14) + 0x106aa070 +
            (uint)(0xcd442e47 < uVar36);
    uVar41 = uVar3 + uVar13;
    uVar21 = ((uVar68 * 0x10 | uVar27 >> 0x1c) ^ (uVar27 * 0x40000000 | uVar68 >> 2) ^
             (uVar27 * 0x2000000 | uVar68 >> 7)) + (uVar27 & (uVar67 ^ uVar18) ^ uVar67 & uVar18) +
             (uint)CARRY4(uVar26,uVar40) + iVar6 + (uint)CARRY4(uVar3,uVar13);
    uVar14 = (uVar21 * 0x10 | uVar41 >> 0x1c) ^ (uVar41 * 0x40000000 | uVar21 >> 2) ^
             (uVar41 * 0x2000000 | uVar21 >> 7);
    uVar45 = uVar41 & (uVar68 ^ uVar51) ^ uVar68 & uVar51;
    uVar3 = uVar14 + uVar45;
    uVar52 = uVar13 + uVar10;
    uVar53 = iVar6 + uVar46 + (uint)CARRY4(uVar13,uVar10);
    uVar36 = uVar60 & uVar52 | uVar47 & ~uVar52;
    uVar5 = (uVar34 * 0x2000 | uVar33 >> 0x13) ^ (uVar33 * 8 | uVar34 >> 0x1d) ^
            (uVar33 >> 6 | uVar34 * 0x4000000);
    uVar9 = (uVar44 * -0x80000000 | uVar17 >> 1) ^ (uVar44 * 0x1000000 | uVar17 >> 8) ^
            (uVar17 >> 7 | uVar44 * 0x2000000);
    uVar13 = uVar9 + uVar37;
    uVar10 = uVar13 + uVar16;
    uVar26 = uVar10 + uVar5;
    uVar40 = ((uVar17 * -0x80000000 | uVar44 >> 1) ^ (uVar17 * 0x1000000 | uVar44 >> 8) ^
             uVar44 >> 7) + uVar25 + (uint)CARRY4(uVar9,uVar37) + uVar62 +
             (uint)CARRY4(uVar13,uVar16) +
             ((uVar33 * 0x2000 | uVar34 >> 0x13) ^ (uVar34 * 8 | uVar33 >> 0x1d) ^ uVar34 >> 6) +
             (uint)CARRY4(uVar10,uVar5);
    uVar13 = (uVar53 * 0x40000 | uVar52 >> 0xe) ^ (uVar53 * 0x4000 | uVar52 >> 0x12) ^
             (uVar52 * 0x800000 | uVar53 >> 9);
    uVar5 = uVar26 + uVar69 + uVar36;
    uVar9 = uVar5 + uVar13;
    uVar25 = uVar9 + 0xb8d2d0c8;
    iVar6 = uVar40 + uVar42 + (uint)CARRY4(uVar26,uVar69) + (uVar22 & uVar53 | uVar58 & ~uVar53) +
            (uint)CARRY4(uVar26 + uVar69,uVar36) +
            ((uVar52 * 0x40000 | uVar53 >> 0xe) ^ (uVar52 * 0x4000 | uVar53 >> 0x12) ^
            (uVar53 * 0x800000 | uVar52 >> 9)) + (uint)CARRY4(uVar5,uVar13) + 0x19a4c116 +
            (uint)(0x472d2f37 < uVar9);
    uVar37 = uVar3 + uVar25;
    uVar36 = ((uVar41 * 0x10 | uVar21 >> 0x1c) ^ (uVar21 * 0x40000000 | uVar41 >> 2) ^
             (uVar21 * 0x2000000 | uVar41 >> 7)) + (uVar21 & (uVar27 ^ uVar67) ^ uVar27 & uVar67) +
             (uint)CARRY4(uVar14,uVar45) + iVar6 + (uint)CARRY4(uVar3,uVar25);
    uVar45 = (uVar36 * 0x10 | uVar37 >> 0x1c) ^ (uVar37 * 0x40000000 | uVar36 >> 2) ^
             (uVar37 * 0x2000000 | uVar36 >> 7);
    uVar14 = uVar37 & (uVar41 ^ uVar68) ^ uVar41 & uVar68;
    uVar3 = uVar45 + uVar14;
    uVar69 = uVar25 + uVar4;
    uVar70 = iVar6 + uVar18 + (uint)CARRY4(uVar25,uVar4);
    uVar4 = uVar52 & uVar69 | uVar60 & ~uVar69;
    uVar5 = (uVar20 * 0x2000 | uVar30 >> 0x13) ^ (uVar30 * 8 | uVar20 >> 0x1d) ^
            (uVar30 >> 6 | uVar20 * 0x4000000);
    uVar9 = (uVar66 * -0x80000000 | uVar38 >> 1) ^ (uVar66 * 0x1000000 | uVar38 >> 8) ^
            (uVar38 >> 7 | uVar66 * 0x2000000);
    uVar18 = uVar31 + uVar17 + uVar9;
    uVar13 = uVar18 + uVar5;
    uVar25 = uVar15 + uVar44 + (uint)CARRY4(uVar31,uVar17) +
             ((uVar38 * -0x80000000 | uVar66 >> 1) ^ (uVar38 * 0x1000000 | uVar66 >> 8) ^
             uVar66 >> 7) + (uint)CARRY4(uVar31 + uVar17,uVar9) +
             ((uVar30 * 0x2000 | uVar20 >> 0x13) ^ (uVar20 * 8 | uVar30 >> 0x1d) ^ uVar20 >> 6) +
             (uint)CARRY4(uVar18,uVar5);
    uVar5 = uVar13 + uVar47 + uVar4;
    uVar17 = (uVar70 * 0x40000 | uVar69 >> 0xe) ^ (uVar70 * 0x4000 | uVar69 >> 0x12) ^
             (uVar69 * 0x800000 | uVar70 >> 9);
    uVar9 = uVar5 + uVar17;
    uVar44 = uVar9 + 0x5141ab53;
    iVar6 = uVar25 + uVar58 + (uint)CARRY4(uVar13,uVar47) + (uVar53 & uVar70 | uVar22 & ~uVar70) +
            (uint)CARRY4(uVar13 + uVar47,uVar4) +
            ((uVar69 * 0x40000 | uVar70 >> 0xe) ^ (uVar69 * 0x4000 | uVar70 >> 0x12) ^
            (uVar70 * 0x800000 | uVar69 >> 9)) + (uint)CARRY4(uVar5,uVar17) + 0x1e376c08 +
            (uint)(0xaebe54ac < uVar9);
    uVar28 = uVar3 + uVar44;
    uVar42 = ((uVar37 * 0x10 | uVar36 >> 0x1c) ^ (uVar36 * 0x40000000 | uVar37 >> 2) ^
             (uVar36 * 0x2000000 | uVar37 >> 7)) + (uVar36 & (uVar21 ^ uVar27) ^ uVar21 & uVar27) +
             (uint)CARRY4(uVar45,uVar14) + iVar6 + (uint)CARRY4(uVar3,uVar44);
    uVar17 = (uVar42 * 0x10 | uVar28 >> 0x1c) ^ (uVar28 * 0x40000000 | uVar42 >> 2) ^
             (uVar28 * 0x2000000 | uVar42 >> 7);
    uVar18 = uVar28 & (uVar37 ^ uVar41) ^ uVar37 & uVar41;
    uVar3 = uVar17 + uVar18;
    uVar58 = uVar44 + uVar51;
    uVar10 = iVar6 + uVar67 + (uint)CARRY4(uVar44,uVar51);
    uVar44 = uVar69 & uVar58 | uVar52 & ~uVar58;
    uVar4 = (uVar40 * 0x2000 | uVar26 >> 0x13) ^ (uVar26 * 8 | uVar40 >> 0x1d) ^
            (uVar26 >> 6 | uVar40 * 0x4000000);
    uVar5 = (uVar49 * -0x80000000 | uVar55 >> 1) ^ (uVar49 * 0x1000000 | uVar55 >> 8) ^
            (uVar55 >> 7 | uVar49 * 0x2000000);
    uVar9 = uVar5 + uVar38;
    uVar14 = uVar9 + uVar7;
    uVar45 = uVar14 + uVar4;
    uVar46 = ((uVar55 * -0x80000000 | uVar49 >> 1) ^ (uVar55 * 0x1000000 | uVar49 >> 8) ^
             uVar49 >> 7) + uVar66 + (uint)CARRY4(uVar5,uVar38) + uVar65 + (uint)CARRY4(uVar9,uVar7)
             + ((uVar26 * 0x2000 | uVar40 >> 0x13) ^ (uVar40 * 8 | uVar26 >> 0x1d) ^ uVar40 >> 6) +
             (uint)CARRY4(uVar14,uVar4);
    uVar4 = uVar45 + uVar60 + uVar44;
    uVar14 = (uVar10 * 0x40000 | uVar58 >> 0xe) ^ (uVar10 * 0x4000 | uVar58 >> 0x12) ^
             (uVar58 * 0x800000 | uVar10 >> 9);
    uVar5 = uVar4 + uVar14;
    uVar9 = uVar5 + 0xdf8eeb99;
    iVar6 = uVar46 + uVar22 + (uint)CARRY4(uVar45,uVar60) + (uVar70 & uVar10 | uVar53 & ~uVar10) +
            (uint)CARRY4(uVar45 + uVar60,uVar44) +
            ((uVar58 * 0x40000 | uVar10 >> 0xe) ^ (uVar58 * 0x4000 | uVar10 >> 0x12) ^
            (uVar10 * 0x800000 | uVar58 >> 9)) + (uint)CARRY4(uVar4,uVar14) + 0x2748774c +
            (uint)(0x20711466 < uVar5);
    uVar60 = uVar3 + uVar9;
    uVar67 = ((uVar28 * 0x10 | uVar42 >> 0x1c) ^ (uVar42 * 0x40000000 | uVar28 >> 2) ^
             (uVar42 * 0x2000000 | uVar28 >> 7)) + (uVar42 & (uVar36 ^ uVar21) ^ uVar36 & uVar21) +
             (uint)CARRY4(uVar17,uVar18) + iVar6 + (uint)CARRY4(uVar3,uVar9);
    uVar18 = (uVar67 * 0x10 | uVar60 >> 0x1c) ^ (uVar60 * 0x40000000 | uVar67 >> 2) ^
             (uVar60 * 0x2000000 | uVar67 >> 7);
    uVar44 = uVar60 & (uVar28 ^ uVar37) ^ uVar28 & uVar37;
    uVar17 = uVar18 + uVar44;
    uVar22 = uVar9 + uVar68;
    uVar47 = iVar6 + uVar27 + (uint)CARRY4(uVar9,uVar68);
    uVar3 = uVar58 & uVar22 | uVar69 & ~uVar22;
    uVar9 = (uVar25 * 0x2000 | uVar13 >> 0x13) ^ (uVar13 * 8 | uVar25 >> 0x1d) ^
            (uVar13 >> 6 | uVar25 * 0x4000000);
    uVar4 = (uVar59 * -0x80000000 | uVar39 >> 1) ^ (uVar59 * 0x1000000 | uVar39 >> 8) ^
            (uVar39 >> 7 | uVar59 * 0x2000000);
    uVar5 = uVar19 + uVar55 + uVar4;
    uVar14 = uVar5 + uVar9;
    uVar38 = uVar32 + uVar49 + (uint)CARRY4(uVar19,uVar55) +
             ((uVar39 * -0x80000000 | uVar59 >> 1) ^ (uVar39 * 0x1000000 | uVar59 >> 8) ^
             uVar59 >> 7) + (uint)CARRY4(uVar19 + uVar55,uVar4) +
             ((uVar13 * 0x2000 | uVar25 >> 0x13) ^ (uVar25 * 8 | uVar13 >> 0x1d) ^ uVar25 >> 6) +
             (uint)CARRY4(uVar5,uVar9);
    uVar4 = uVar14 + uVar52 + uVar3;
    uVar55 = (uVar47 * 0x40000 | uVar22 >> 0xe) ^ (uVar47 * 0x4000 | uVar22 >> 0x12) ^
             (uVar22 * 0x800000 | uVar47 >> 9);
    uVar5 = uVar4 + uVar55;
    uVar9 = uVar5 + 0xe19b48a8;
    iVar6 = uVar38 + uVar53 + (uint)CARRY4(uVar14,uVar52) + (uVar10 & uVar47 | uVar70 & ~uVar47) +
            (uint)CARRY4(uVar14 + uVar52,uVar3) +
            ((uVar22 * 0x40000 | uVar47 >> 0xe) ^ (uVar22 * 0x4000 | uVar47 >> 0x12) ^
            (uVar47 * 0x800000 | uVar22 >> 9)) + (uint)CARRY4(uVar4,uVar55) + 0x34b0bcb5 +
            (uint)(0x1e64b757 < uVar5);
    uVar27 = uVar17 + uVar9;
    uVar44 = ((uVar60 * 0x10 | uVar67 >> 0x1c) ^ (uVar67 * 0x40000000 | uVar60 >> 2) ^
             (uVar67 * 0x2000000 | uVar60 >> 7)) + (uVar67 & (uVar42 ^ uVar36) ^ uVar42 & uVar36) +
             (uint)CARRY4(uVar18,uVar44) + iVar6 + (uint)CARRY4(uVar17,uVar9);
    uVar17 = (uVar44 * 0x10 | uVar27 >> 0x1c) ^ (uVar27 * 0x40000000 | uVar44 >> 2) ^
             (uVar27 * 0x2000000 | uVar44 >> 7);
    uVar18 = uVar27 & (uVar60 ^ uVar28) ^ uVar60 & uVar28;
    uVar3 = uVar17 + uVar18;
    uVar52 = uVar9 + uVar41;
    uVar21 = iVar6 + uVar21 + (uint)CARRY4(uVar9,uVar41);
    uVar66 = uVar22 & uVar52 | uVar58 & ~uVar52;
    uVar4 = (uVar46 * 0x2000 | uVar45 >> 0x13) ^ (uVar45 * 8 | uVar46 >> 0x1d) ^
            (uVar45 >> 6 | uVar46 * 0x4000000);
    uVar5 = (uVar43 * -0x80000000 | uVar24 >> 1) ^ (uVar43 * 0x1000000 | uVar24 >> 8) ^
            (uVar24 >> 7 | uVar43 * 0x2000000);
    uVar9 = uVar5 + uVar39;
    uVar49 = uVar9 + uVar64;
    uVar55 = uVar49 + uVar4;
    uVar51 = ((uVar24 * -0x80000000 | uVar43 >> 1) ^ (uVar24 * 0x1000000 | uVar43 >> 8) ^
             uVar43 >> 7) + uVar59 + (uint)CARRY4(uVar5,uVar39) + uVar12 +
             (uint)CARRY4(uVar9,uVar64) +
             ((uVar45 * 0x2000 | uVar46 >> 0x13) ^ (uVar46 * 8 | uVar45 >> 0x1d) ^ uVar46 >> 6) +
             (uint)CARRY4(uVar49,uVar4);
    uVar49 = (uVar21 * 0x40000 | uVar52 >> 0xe) ^ (uVar21 * 0x4000 | uVar52 >> 0x12) ^
             (uVar52 * 0x800000 | uVar21 >> 9);
    uVar4 = uVar55 + uVar69 + uVar66;
    uVar5 = uVar4 + uVar49;
    uVar9 = uVar5 + 0xc5c95a63;
    iVar6 = uVar51 + uVar70 + (uint)CARRY4(uVar55,uVar69) + (uVar47 & uVar21 | uVar10 & ~uVar21) +
            (uint)CARRY4(uVar55 + uVar69,uVar66) +
            ((uVar52 * 0x40000 | uVar21 >> 0xe) ^ (uVar52 * 0x4000 | uVar21 >> 0x12) ^
            (uVar21 * 0x800000 | uVar52 >> 9)) + (uint)CARRY4(uVar4,uVar49) + 0x391c0cb3 +
            (uint)(0x3a36a59c < uVar5);
    uVar39 = uVar3 + uVar9;
    uVar18 = ((uVar27 * 0x10 | uVar44 >> 0x1c) ^ (uVar44 * 0x40000000 | uVar27 >> 2) ^
             (uVar44 * 0x2000000 | uVar27 >> 7)) + (uVar44 & (uVar67 ^ uVar42) ^ uVar67 & uVar42) +
             (uint)CARRY4(uVar17,uVar18) + iVar6 + (uint)CARRY4(uVar3,uVar9);
    uVar49 = (uVar18 * 0x10 | uVar39 >> 0x1c) ^ (uVar39 * 0x40000000 | uVar18 >> 2) ^
             (uVar39 * 0x2000000 | uVar18 >> 7);
    uVar17 = uVar39 & (uVar27 ^ uVar60) ^ uVar27 & uVar60;
    uVar3 = uVar49 + uVar17;
    uVar68 = uVar9 + uVar37;
    uVar70 = iVar6 + uVar36 + (uint)CARRY4(uVar9,uVar37);
    uVar4 = uVar52 & uVar68 | uVar22 & ~uVar68;
    uVar5 = (uVar38 * 0x2000 | uVar14 >> 0x13) ^ (uVar14 * 8 | uVar38 >> 0x1d) ^
            (uVar14 >> 6 | uVar38 * 0x4000000);
    uVar36 = (uVar57 * -0x80000000 | uVar50 >> 1) ^ (uVar57 * 0x1000000 | uVar50 >> 8) ^
             (uVar50 >> 7 | uVar57 * 0x2000000);
    uVar9 = uVar33 + uVar24 + uVar36;
    uVar37 = uVar9 + uVar5;
    uVar66 = uVar34 + uVar43 + (uint)CARRY4(uVar33,uVar24) +
             ((uVar50 * -0x80000000 | uVar57 >> 1) ^ (uVar50 * 0x1000000 | uVar57 >> 8) ^
             uVar57 >> 7) + (uint)CARRY4(uVar33 + uVar24,uVar36) +
             ((uVar14 * 0x2000 | uVar38 >> 0x13) ^ (uVar38 * 8 | uVar14 >> 0x1d) ^ uVar38 >> 6) +
             (uint)CARRY4(uVar9,uVar5);
    uVar5 = uVar37 + uVar58 + uVar4;
    uVar36 = (uVar70 * 0x40000 | uVar68 >> 0xe) ^ (uVar70 * 0x4000 | uVar68 >> 0x12) ^
             (uVar68 * 0x800000 | uVar70 >> 9);
    uVar9 = uVar5 + uVar36;
    uVar24 = uVar9 + 0xe3418acb;
    iVar6 = uVar66 + uVar10 + (uint)CARRY4(uVar37,uVar58) + (uVar21 & uVar70 | uVar47 & ~uVar70) +
            (uint)CARRY4(uVar37 + uVar58,uVar4) +
            ((uVar68 * 0x40000 | uVar70 >> 0xe) ^ (uVar68 * 0x4000 | uVar70 >> 0x12) ^
            (uVar70 * 0x800000 | uVar68 >> 9)) + (uint)CARRY4(uVar5,uVar36) + 0x4ed8aa4a +
            (uint)(0x1cbe7534 < uVar9);
    uVar58 = uVar3 + uVar24;
    uVar59 = ((uVar39 * 0x10 | uVar18 >> 0x1c) ^ (uVar18 * 0x40000000 | uVar39 >> 2) ^
             (uVar18 * 0x2000000 | uVar39 >> 7)) + (uVar18 & (uVar44 ^ uVar67) ^ uVar44 & uVar67) +
             (uint)CARRY4(uVar49,uVar17) + iVar6 + (uint)CARRY4(uVar3,uVar24);
    uVar5 = (uVar59 * 0x10 | uVar58 >> 0x1c) ^ (uVar58 * 0x40000000 | uVar59 >> 2) ^
            (uVar58 * 0x2000000 | uVar59 >> 7);
    uVar9 = uVar58 & (uVar39 ^ uVar27) ^ uVar39 & uVar27;
    uVar43 = uVar5 + uVar9;
    uVar69 = uVar24 + uVar28;
    uVar53 = iVar6 + uVar42 + (uint)CARRY4(uVar24,uVar28);
    uVar49 = uVar68 & uVar69 | uVar52 & ~uVar69;
    uVar3 = (uVar51 * 0x2000 | uVar55 >> 0x13) ^ (uVar55 * 8 | uVar51 >> 0x1d) ^
            (uVar55 >> 6 | uVar51 * 0x4000000);
    uVar4 = (uVar63 * -0x80000000 | uVar61 >> 1) ^ (uVar63 * 0x1000000 | uVar61 >> 8) ^
            (uVar61 >> 7 | uVar63 * 0x2000000);
    uVar17 = uVar4 + uVar50;
    uVar36 = uVar17 + uVar30;
    uVar24 = uVar36 + uVar3;
    uVar50 = ((uVar61 * -0x80000000 | uVar63 >> 1) ^ (uVar61 * 0x1000000 | uVar63 >> 8) ^
             uVar63 >> 7) + uVar57 + (uint)CARRY4(uVar4,uVar50) + uVar20 +
             (uint)CARRY4(uVar17,uVar30) +
             ((uVar55 * 0x2000 | uVar51 >> 0x13) ^ (uVar51 * 8 | uVar55 >> 0x1d) ^ uVar51 >> 6) +
             (uint)CARRY4(uVar36,uVar3);
    uVar3 = uVar24 + uVar22 + uVar49;
    uVar17 = (uVar53 * 0x40000 | uVar69 >> 0xe) ^ (uVar53 * 0x4000 | uVar69 >> 0x12) ^
             (uVar69 * 0x800000 | uVar53 >> 9);
    uVar4 = uVar3 + uVar17;
    uVar28 = uVar4 + 0x7763e373;
    iVar6 = uVar50 + uVar47 + (uint)CARRY4(uVar24,uVar22) + (uVar70 & uVar53 | uVar21 & ~uVar53) +
            (uint)CARRY4(uVar24 + uVar22,uVar49) +
            ((uVar69 * 0x40000 | uVar53 >> 0xe) ^ (uVar69 * 0x4000 | uVar53 >> 0x12) ^
            (uVar53 * 0x800000 | uVar69 >> 9)) + (uint)CARRY4(uVar3,uVar17) + 0x5b9cca4f +
            (uint)(0x889c1c8c < uVar4);
    uVar41 = uVar43 + uVar28;
    uVar49 = ((uVar58 * 0x10 | uVar59 >> 0x1c) ^ (uVar59 * 0x40000000 | uVar58 >> 2) ^
             (uVar59 * 0x2000000 | uVar58 >> 7)) + (uVar59 & (uVar18 ^ uVar44) ^ uVar18 & uVar44) +
             (uint)CARRY4(uVar5,uVar9) + iVar6 + (uint)CARRY4(uVar43,uVar28);
    uVar36 = (uVar49 * 0x10 | uVar41 >> 0x1c) ^ (uVar41 * 0x40000000 | uVar49 >> 2) ^
             (uVar41 * 0x2000000 | uVar49 >> 7);
    uVar10 = uVar41 & (uVar58 ^ uVar39) ^ uVar58 & uVar39;
    uVar3 = uVar36 + uVar10;
    uVar57 = uVar28 + uVar60;
    uVar71 = iVar6 + uVar67 + (uint)CARRY4(uVar28,uVar60);
    uVar4 = uVar69 & uVar57 | uVar68 & ~uVar57;
    uVar43 = (uVar66 * 0x2000 | uVar37 >> 0x13) ^ (uVar37 * 8 | uVar66 >> 0x1d) ^
             (uVar37 >> 6 | uVar66 * 0x4000000);
    uVar5 = (uVar56 * -0x80000000 | uVar11 >> 1) ^ (uVar56 * 0x1000000 | uVar11 >> 8) ^
            (uVar11 >> 7 | uVar56 * 0x2000000);
    uVar9 = uVar26 + uVar61 + uVar5;
    uVar17 = uVar9 + uVar43;
    uVar63 = uVar40 + uVar63 + (uint)CARRY4(uVar26,uVar61) +
             ((uVar11 * -0x80000000 | uVar56 >> 1) ^ (uVar11 * 0x1000000 | uVar56 >> 8) ^
             uVar56 >> 7) + (uint)CARRY4(uVar26 + uVar61,uVar5) +
             ((uVar37 * 0x2000 | uVar66 >> 0x13) ^ (uVar66 * 8 | uVar37 >> 0x1d) ^ uVar66 >> 6) +
             (uint)CARRY4(uVar9,uVar43);
    uVar5 = uVar17 + uVar52 + uVar4;
    uVar61 = (uVar71 * 0x40000 | uVar57 >> 0xe) ^ (uVar71 * 0x4000 | uVar57 >> 0x12) ^
             (uVar57 * 0x800000 | uVar71 >> 9);
    uVar9 = uVar5 + uVar61;
    uVar43 = uVar9 + 0xd6b2b8a3;
    iVar6 = uVar63 + uVar21 + (uint)CARRY4(uVar17,uVar52) + (uVar53 & uVar71 | uVar70 & ~uVar71) +
            (uint)CARRY4(uVar17 + uVar52,uVar4) +
            ((uVar57 * 0x40000 | uVar71 >> 0xe) ^ (uVar57 * 0x4000 | uVar71 >> 0x12) ^
            (uVar71 * 0x800000 | uVar57 >> 9)) + (uint)CARRY4(uVar5,uVar61) + 0x682e6ff3 +
            (uint)(0x294d475c < uVar9);
    uVar67 = uVar3 + uVar43;
    uVar21 = ((uVar41 * 0x10 | uVar49 >> 0x1c) ^ (uVar49 * 0x40000000 | uVar41 >> 2) ^
             (uVar49 * 0x2000000 | uVar41 >> 7)) + (uVar49 & (uVar59 ^ uVar18) ^ uVar59 & uVar18) +
             (uint)CARRY4(uVar36,uVar10) + iVar6 + (uint)CARRY4(uVar3,uVar43);
    uVar9 = (uVar21 * 0x10 | uVar67 >> 0x1c) ^ (uVar67 * 0x40000000 | uVar21 >> 2) ^
            (uVar67 * 0x2000000 | uVar21 >> 7);
    uVar36 = uVar67 & (uVar41 ^ uVar58) ^ uVar41 & uVar58;
    uVar3 = uVar9 + uVar36;
    uVar22 = uVar43 + uVar27;
    uVar60 = iVar6 + uVar44 + (uint)CARRY4(uVar43,uVar27);
    uVar27 = uVar57 & uVar22 | uVar69 & ~uVar22;
    uVar4 = (uVar50 * 0x2000 | uVar24 >> 0x13) ^ (uVar24 * 8 | uVar50 >> 0x1d) ^
            (uVar24 >> 6 | uVar50 * 0x4000000);
    uVar5 = (uVar62 * -0x80000000 | uVar16 >> 1) ^ (uVar62 * 0x1000000 | uVar16 >> 8) ^
            (uVar16 >> 7 | uVar62 * 0x2000000);
    uVar61 = uVar5 + uVar11;
    uVar44 = uVar61 + uVar13;
    uVar43 = uVar44 + uVar4;
    uVar10 = ((uVar16 * -0x80000000 | uVar62 >> 1) ^ (uVar16 * 0x1000000 | uVar62 >> 8) ^
             uVar62 >> 7) + uVar56 + (uint)CARRY4(uVar5,uVar11) + uVar25 +
             (uint)CARRY4(uVar61,uVar13) +
             ((uVar24 * 0x2000 | uVar50 >> 0x13) ^ (uVar50 * 8 | uVar24 >> 0x1d) ^ uVar50 >> 6) +
             (uint)CARRY4(uVar44,uVar4);
    uVar11 = (uVar60 * 0x40000 | uVar22 >> 0xe) ^ (uVar60 * 0x4000 | uVar22 >> 0x12) ^
             (uVar22 * 0x800000 | uVar60 >> 9);
    uVar4 = uVar43 + uVar68 + uVar27;
    uVar5 = uVar4 + uVar11;
    uVar61 = uVar5 + 0x5defb2fc;
    iVar6 = uVar10 + uVar70 + (uint)CARRY4(uVar43,uVar68) + (uVar71 & uVar60 | uVar53 & ~uVar60) +
            (uint)CARRY4(uVar43 + uVar68,uVar27) +
            ((uVar22 * 0x40000 | uVar60 >> 0xe) ^ (uVar22 * 0x4000 | uVar60 >> 0x12) ^
            (uVar60 * 0x800000 | uVar22 >> 9)) + (uint)CARRY4(uVar4,uVar11) + 0x748f82ee +
            (uint)(0xa2104d03 < uVar5);
    uVar52 = uVar3 + uVar61;
    uVar11 = ((uVar67 * 0x10 | uVar21 >> 0x1c) ^ (uVar21 * 0x40000000 | uVar67 >> 2) ^
             (uVar21 * 0x2000000 | uVar67 >> 7)) + (uVar21 & (uVar49 ^ uVar59) ^ uVar49 & uVar59) +
             (uint)CARRY4(uVar9,uVar36) + iVar6 + (uint)CARRY4(uVar3,uVar61);
    uVar56 = (uVar11 * 0x10 | uVar52 >> 0x1c) ^ (uVar52 * 0x40000000 | uVar11 >> 2) ^
             (uVar52 * 0x2000000 | uVar11 >> 7);
    uVar36 = uVar52 & (uVar67 ^ uVar41) ^ uVar67 & uVar41;
    uVar3 = uVar56 + uVar36;
    uVar28 = uVar61 + uVar39;
    uVar42 = iVar6 + uVar18 + (uint)CARRY4(uVar61,uVar39);
    uVar4 = uVar22 & uVar28 | uVar57 & ~uVar28;
    uVar18 = (uVar63 * 0x2000 | uVar17 >> 0x13) ^ (uVar17 * 8 | uVar63 >> 0x1d) ^
             (uVar17 >> 6 | uVar63 * 0x4000000);
    uVar5 = (uVar15 * -0x80000000 | uVar31 >> 1) ^ (uVar15 * 0x1000000 | uVar31 >> 8) ^
            (uVar31 >> 7 | uVar15 * 0x2000000);
    uVar9 = uVar45 + uVar16 + uVar5;
    uVar44 = uVar9 + uVar18;
    uVar27 = uVar46 + uVar62 + (uint)CARRY4(uVar45,uVar16) +
             ((uVar31 * -0x80000000 | uVar15 >> 1) ^ (uVar31 * 0x1000000 | uVar15 >> 8) ^
             uVar15 >> 7) + (uint)CARRY4(uVar45 + uVar16,uVar5) +
             ((uVar17 * 0x2000 | uVar63 >> 0x13) ^ (uVar63 * 8 | uVar17 >> 0x1d) ^ uVar63 >> 6) +
             (uint)CARRY4(uVar9,uVar18);
    uVar5 = uVar44 + uVar69 + uVar4;
    uVar18 = (uVar42 * 0x40000 | uVar28 >> 0xe) ^ (uVar42 * 0x4000 | uVar28 >> 0x12) ^
             (uVar28 * 0x800000 | uVar42 >> 9);
    uVar9 = uVar5 + uVar18;
    uVar61 = uVar9 + 0x43172f60;
    iVar6 = uVar27 + uVar53 + (uint)CARRY4(uVar44,uVar69) + (uVar60 & uVar42 | uVar71 & ~uVar42) +
            (uint)CARRY4(uVar44 + uVar69,uVar4) +
            ((uVar28 * 0x40000 | uVar42 >> 0xe) ^ (uVar28 * 0x4000 | uVar42 >> 0x12) ^
            (uVar42 * 0x800000 | uVar28 >> 9)) + (uint)CARRY4(uVar5,uVar18) + 0x78a5636f +
            (uint)(0xbce8d09f < uVar9);
    uVar39 = uVar3 + uVar61;
    uVar47 = ((uVar52 * 0x10 | uVar11 >> 0x1c) ^ (uVar11 * 0x40000000 | uVar52 >> 2) ^
             (uVar11 * 0x2000000 | uVar52 >> 7)) + (uVar11 & (uVar21 ^ uVar49) ^ uVar21 & uVar49) +
             (uint)CARRY4(uVar56,uVar36) + iVar6 + (uint)CARRY4(uVar3,uVar61);
    uVar36 = (uVar47 * 0x10 | uVar39 >> 0x1c) ^ (uVar39 * 0x40000000 | uVar47 >> 2) ^
             (uVar39 * 0x2000000 | uVar47 >> 7);
    uVar18 = uVar39 & (uVar52 ^ uVar67) ^ uVar52 & uVar67;
    uVar3 = uVar36 + uVar18;
    uVar68 = uVar61 + uVar58;
    uVar59 = iVar6 + uVar59 + (uint)CARRY4(uVar61,uVar58);
    uVar56 = uVar28 & uVar68 | uVar22 & ~uVar68;
    uVar5 = (uVar10 * 0x2000 | uVar43 >> 0x13) ^ (uVar43 * 8 | uVar10 >> 0x1d) ^
            (uVar43 >> 6 | uVar10 * 0x4000000);
    uVar9 = (uVar65 * -0x80000000 | uVar7 >> 1) ^ (uVar65 * 0x1000000 | uVar7 >> 8) ^
            (uVar7 >> 7 | uVar65 * 0x2000000);
    uVar61 = uVar9 + uVar31;
    uVar16 = uVar61 + uVar14;
    uVar4 = uVar16 + uVar5;
    uVar16 = ((uVar7 * -0x80000000 | uVar65 >> 1) ^ (uVar7 * 0x1000000 | uVar65 >> 8) ^ uVar65 >> 7)
             + uVar15 + (uint)CARRY4(uVar9,uVar31) + uVar38 + (uint)CARRY4(uVar61,uVar14) +
             ((uVar43 * 0x2000 | uVar10 >> 0x13) ^ (uVar10 * 8 | uVar43 >> 0x1d) ^ uVar10 >> 6) +
             (uint)CARRY4(uVar16,uVar5);
    uVar5 = uVar4 + uVar57 + uVar56;
    uVar61 = (uVar59 * 0x40000 | uVar68 >> 0xe) ^ (uVar59 * 0x4000 | uVar68 >> 0x12) ^
             (uVar68 * 0x800000 | uVar59 >> 9);
    uVar9 = uVar5 + uVar61;
    uVar62 = uVar9 + 0xa1f0ab72;
    iVar6 = uVar16 + uVar71 + (uint)CARRY4(uVar4,uVar57) + (uVar42 & uVar59 | uVar60 & ~uVar59) +
            (uint)CARRY4(uVar4 + uVar57,uVar56) +
            ((uVar68 * 0x40000 | uVar59 >> 0xe) ^ (uVar68 * 0x4000 | uVar59 >> 0x12) ^
            (uVar59 * 0x800000 | uVar68 >> 9)) + (uint)CARRY4(uVar5,uVar61) + -0x7b3787ec +
            (uint)(0x5e0f548d < uVar9);
    uVar53 = uVar3 + uVar62;
    uVar57 = ((uVar39 * 0x10 | uVar47 >> 0x1c) ^ (uVar47 * 0x40000000 | uVar39 >> 2) ^
             (uVar47 * 0x2000000 | uVar39 >> 7)) + (uVar47 & (uVar11 ^ uVar21) ^ uVar11 & uVar21) +
             (uint)CARRY4(uVar36,uVar18) + iVar6 + (uint)CARRY4(uVar3,uVar62);
    uVar61 = (uVar57 * 0x10 | uVar53 >> 0x1c) ^ (uVar53 * 0x40000000 | uVar57 >> 2) ^
             (uVar53 * 0x2000000 | uVar57 >> 7);
    uVar56 = uVar53 & (uVar39 ^ uVar52) ^ uVar39 & uVar52;
    uVar3 = uVar61 + uVar56;
    uVar69 = uVar62 + uVar41;
    uVar70 = iVar6 + uVar49 + (uint)CARRY4(uVar62,uVar41);
    uVar5 = uVar68 & uVar69 | uVar28 & ~uVar69;
    uVar49 = (uVar27 * 0x2000 | uVar44 >> 0x13) ^ (uVar44 * 8 | uVar27 >> 0x1d) ^
             (uVar44 >> 6 | uVar27 * 0x4000000);
    uVar9 = (uVar32 * -0x80000000 | uVar19 >> 1) ^ (uVar32 * 0x1000000 | uVar19 >> 8) ^
            (uVar19 >> 7 | uVar32 * 0x2000000);
    uVar36 = uVar55 + uVar7 + uVar9;
    uVar18 = uVar36 + uVar49;
    uVar49 = uVar51 + uVar65 + (uint)CARRY4(uVar55,uVar7) +
             ((uVar19 * -0x80000000 | uVar32 >> 1) ^ (uVar19 * 0x1000000 | uVar32 >> 8) ^
             uVar32 >> 7) + (uint)CARRY4(uVar55 + uVar7,uVar9) +
             ((uVar44 * 0x2000 | uVar27 >> 0x13) ^ (uVar27 * 8 | uVar44 >> 0x1d) ^ uVar27 >> 6) +
             (uint)CARRY4(uVar36,uVar49);
    uVar7 = uVar18 + uVar22 + uVar5;
    uVar36 = (uVar70 * 0x40000 | uVar69 >> 0xe) ^ (uVar70 * 0x4000 | uVar69 >> 0x12) ^
             (uVar69 * 0x800000 | uVar70 >> 9);
    uVar9 = uVar7 + uVar36;
    uVar62 = uVar9 + 0x1a6439ec;
    iVar6 = uVar49 + uVar60 + (uint)CARRY4(uVar18,uVar22) + (uVar59 & uVar70 | uVar42 & ~uVar70) +
            (uint)CARRY4(uVar18 + uVar22,uVar5) +
            ((uVar69 * 0x40000 | uVar70 >> 0xe) ^ (uVar69 * 0x4000 | uVar70 >> 0x12) ^
            (uVar70 * 0x800000 | uVar69 >> 9)) + (uint)CARRY4(uVar7,uVar36) + -0x7338fdf8 +
            (uint)(0xe59bc613 < uVar9);
    uVar41 = uVar3 + uVar62;
    uVar15 = ((uVar53 * 0x10 | uVar57 >> 0x1c) ^ (uVar57 * 0x40000000 | uVar53 >> 2) ^
             (uVar57 * 0x2000000 | uVar53 >> 7)) + (uVar57 & (uVar47 ^ uVar11) ^ uVar47 & uVar11) +
             (uint)CARRY4(uVar61,uVar56) + iVar6 + (uint)CARRY4(uVar3,uVar62);
    uVar36 = (uVar15 * 0x10 | uVar41 >> 0x1c) ^ (uVar41 * 0x40000000 | uVar15 >> 2) ^
             (uVar41 * 0x2000000 | uVar15 >> 7);
    uVar65 = uVar41 & (uVar53 ^ uVar39) ^ uVar53 & uVar39;
    uVar3 = uVar36 + uVar65;
    uVar58 = uVar62 + uVar67;
    uVar67 = iVar6 + uVar21 + (uint)CARRY4(uVar62,uVar67);
    uVar62 = uVar69 & uVar58 | uVar68 & ~uVar58;
    uVar61 = (uVar16 * 0x2000 | uVar4 >> 0x13) ^ (uVar4 * 8 | uVar16 >> 0x1d) ^
             (uVar4 >> 6 | uVar16 * 0x4000000);
    uVar7 = (uVar12 * -0x80000000 | uVar64 >> 1) ^ (uVar12 * 0x1000000 | uVar64 >> 8) ^
            (uVar64 >> 7 | uVar12 * 0x2000000);
    uVar5 = uVar7 + uVar19;
    uVar9 = uVar5 + uVar37;
    uVar56 = uVar9 + uVar61;
    uVar31 = ((uVar64 * -0x80000000 | uVar12 >> 1) ^ (uVar64 * 0x1000000 | uVar12 >> 8) ^
             uVar12 >> 7) + uVar32 + (uint)CARRY4(uVar7,uVar19) + uVar66 +
             (uint)CARRY4(uVar5,uVar37) +
             ((uVar4 * 0x2000 | uVar16 >> 0x13) ^ (uVar16 * 8 | uVar4 >> 0x1d) ^ uVar16 >> 6) +
             (uint)CARRY4(uVar9,uVar61);
    uVar9 = (uVar67 * 0x40000 | uVar58 >> 0xe) ^ (uVar67 * 0x4000 | uVar58 >> 0x12) ^
            (uVar58 * 0x800000 | uVar67 >> 9);
    uVar7 = uVar56 + uVar28 + uVar62;
    uVar5 = uVar7 + uVar9;
    uVar32 = uVar5 + 0x23631e28;
    iVar6 = uVar31 + uVar42 + (uint)CARRY4(uVar56,uVar28) + (uVar70 & uVar67 | uVar59 & ~uVar67) +
            (uint)CARRY4(uVar56 + uVar28,uVar62) +
            ((uVar58 * 0x40000 | uVar67 >> 0xe) ^ (uVar58 * 0x4000 | uVar67 >> 0x12) ^
            (uVar67 * 0x800000 | uVar58 >> 9)) + (uint)CARRY4(uVar7,uVar9) + -0x6f410006 +
            (uint)(0xdc9ce1d7 < uVar5);
    uVar62 = uVar3 + uVar32;
    uVar21 = ((uVar41 * 0x10 | uVar15 >> 0x1c) ^ (uVar15 * 0x40000000 | uVar41 >> 2) ^
             (uVar15 * 0x2000000 | uVar41 >> 7)) + (uVar15 & (uVar57 ^ uVar47) ^ uVar57 & uVar47) +
             (uint)CARRY4(uVar36,uVar65) + iVar6 + (uint)CARRY4(uVar3,uVar32);
    uVar19 = (uVar21 * 0x10 | uVar62 >> 0x1c) ^ (uVar62 * 0x40000000 | uVar21 >> 2) ^
             (uVar62 * 0x2000000 | uVar21 >> 7);
    uVar61 = uVar62 & (uVar41 ^ uVar53) ^ uVar41 & uVar53;
    uVar3 = uVar19 + uVar61;
    uVar28 = uVar32 + uVar52;
    uVar42 = iVar6 + uVar11 + (uint)CARRY4(uVar32,uVar52);
    uVar7 = uVar58 & uVar28 | uVar69 & ~uVar28;
    uVar11 = (uVar49 * 0x2000 | uVar18 >> 0x13) ^ (uVar18 * 8 | uVar49 >> 0x1d) ^
             (uVar18 >> 6 | uVar49 * 0x4000000);
    uVar9 = (uVar34 * -0x80000000 | uVar33 >> 1) ^ (uVar34 * 0x1000000 | uVar33 >> 8) ^
            (uVar33 >> 7 | uVar34 * 0x2000000);
    uVar36 = uVar24 + uVar64 + uVar9;
    uVar5 = uVar36 + uVar11;
    uVar64 = uVar50 + uVar12 + (uint)CARRY4(uVar24,uVar64) +
             ((uVar33 * -0x80000000 | uVar34 >> 1) ^ (uVar33 * 0x1000000 | uVar34 >> 8) ^
             uVar34 >> 7) + (uint)CARRY4(uVar24 + uVar64,uVar9) +
             ((uVar18 * 0x2000 | uVar49 >> 0x13) ^ (uVar49 * 8 | uVar18 >> 0x1d) ^ uVar49 >> 6) +
             (uint)CARRY4(uVar36,uVar11);
    uVar9 = uVar5 + uVar68 + uVar7;
    uVar11 = (uVar42 * 0x40000 | uVar28 >> 0xe) ^ (uVar42 * 0x4000 | uVar28 >> 0x12) ^
             (uVar28 * 0x800000 | uVar42 >> 9);
    uVar36 = uVar9 + uVar11;
    uVar65 = uVar36 + 0xde82bde9;
    iVar6 = uVar64 + uVar59 + (uint)CARRY4(uVar5,uVar68) + (uVar67 & uVar42 | uVar70 & ~uVar42) +
            (uint)CARRY4(uVar5 + uVar68,uVar7) +
            ((uVar28 * 0x40000 | uVar42 >> 0xe) ^ (uVar28 * 0x4000 | uVar42 >> 0x12) ^
            (uVar42 * 0x800000 | uVar28 >> 9)) + (uint)CARRY4(uVar9,uVar11) + -0x5baf9315 +
            (uint)(0x217d4216 < uVar36);
    uVar12 = uVar3 + uVar65;
    uVar59 = ((uVar62 * 0x10 | uVar21 >> 0x1c) ^ (uVar21 * 0x40000000 | uVar62 >> 2) ^
             (uVar21 * 0x2000000 | uVar62 >> 7)) + (uVar21 & (uVar15 ^ uVar57) ^ uVar15 & uVar57) +
             (uint)CARRY4(uVar19,uVar61) + iVar6 + (uint)CARRY4(uVar3,uVar65);
    uVar9 = (uVar59 * 0x10 | uVar12 >> 0x1c) ^ (uVar12 * 0x40000000 | uVar59 >> 2) ^
            (uVar12 * 0x2000000 | uVar59 >> 7);
    uVar22 = uVar12 & (uVar62 ^ uVar41) ^ uVar62 & uVar41;
    uVar3 = uVar9 + uVar22;
    uVar60 = uVar65 + uVar39;
    uVar39 = iVar6 + uVar47 + (uint)CARRY4(uVar65,uVar39);
    uVar32 = uVar28 & uVar60 | uVar58 & ~uVar60;
    uVar36 = (uVar31 * 0x2000 | uVar56 >> 0x13) ^ (uVar56 * 8 | uVar31 >> 0x1d) ^
             (uVar56 >> 6 | uVar31 * 0x4000000);
    uVar61 = (uVar20 * -0x80000000 | uVar30 >> 1) ^ (uVar20 * 0x1000000 | uVar30 >> 8) ^
             (uVar30 >> 7 | uVar20 * 0x2000000);
    uVar11 = uVar61 + uVar33;
    uVar19 = uVar11 + uVar17;
    uVar7 = uVar19 + uVar36;
    uVar65 = ((uVar30 * -0x80000000 | uVar20 >> 1) ^ (uVar30 * 0x1000000 | uVar20 >> 8) ^
             uVar20 >> 7) + uVar34 + (uint)CARRY4(uVar61,uVar33) + uVar63 +
             (uint)CARRY4(uVar11,uVar17) +
             ((uVar56 * 0x2000 | uVar31 >> 0x13) ^ (uVar31 * 8 | uVar56 >> 0x1d) ^ uVar31 >> 6) +
             (uint)CARRY4(uVar19,uVar36);
    uVar36 = uVar7 + uVar69 + uVar32;
    uVar11 = (uVar39 * 0x40000 | uVar60 >> 0xe) ^ (uVar39 * 0x4000 | uVar60 >> 0x12) ^
             (uVar60 * 0x800000 | uVar39 >> 9);
    uVar61 = uVar36 + uVar11;
    uVar19 = uVar61 + 0xb2c67915;
    iVar6 = uVar65 + uVar70 + (uint)CARRY4(uVar7,uVar69) + (uVar42 & uVar39 | uVar67 & ~uVar39) +
            (uint)CARRY4(uVar7 + uVar69,uVar32) +
            ((uVar60 * 0x40000 | uVar39 >> 0xe) ^ (uVar60 * 0x4000 | uVar39 >> 0x12) ^
            (uVar39 * 0x800000 | uVar60 >> 9)) + (uint)CARRY4(uVar36,uVar11) + -0x41065c09 +
            (uint)(0x4d3986ea < uVar61);
    uVar32 = uVar3 + uVar19;
    uVar22 = ((uVar12 * 0x10 | uVar59 >> 0x1c) ^ (uVar59 * 0x40000000 | uVar12 >> 2) ^
             (uVar59 * 0x2000000 | uVar12 >> 7)) + (uVar59 & (uVar21 ^ uVar15) ^ uVar21 & uVar15) +
             (uint)CARRY4(uVar9,uVar22) + iVar6 + (uint)CARRY4(uVar3,uVar19);
    uVar11 = (uVar22 * 0x10 | uVar32 >> 0x1c) ^ (uVar32 * 0x40000000 | uVar22 >> 2) ^
             (uVar32 * 0x2000000 | uVar22 >> 7);
    uVar52 = uVar32 & (uVar12 ^ uVar62) ^ uVar12 & uVar62;
    uVar3 = uVar11 + uVar52;
    uVar68 = uVar19 + uVar53;
    uVar69 = iVar6 + uVar57 + (uint)CARRY4(uVar19,uVar53);
    uVar9 = uVar60 & uVar68 | uVar28 & ~uVar68;
    uVar33 = (uVar64 * 0x2000 | uVar5 >> 0x13) ^ (uVar5 * 8 | uVar64 >> 0x1d) ^
             (uVar5 >> 6 | uVar64 * 0x4000000);
    uVar36 = (uVar40 * -0x80000000 | uVar26 >> 1) ^ (uVar40 * 0x1000000 | uVar26 >> 8) ^
             (uVar26 >> 7 | uVar40 * 0x2000000);
    uVar61 = uVar43 + uVar30 + uVar36;
    uVar19 = uVar61 + uVar33;
    uVar33 = uVar10 + uVar20 + (uint)CARRY4(uVar43,uVar30) +
             ((uVar26 * -0x80000000 | uVar40 >> 1) ^ (uVar26 * 0x1000000 | uVar40 >> 8) ^
             uVar40 >> 7) + (uint)CARRY4(uVar43 + uVar30,uVar36) +
             ((uVar5 * 0x2000 | uVar64 >> 0x13) ^ (uVar64 * 8 | uVar5 >> 0x1d) ^ uVar64 >> 6) +
             (uint)CARRY4(uVar61,uVar33);
    uVar36 = uVar19 + uVar58 + uVar9;
    uVar30 = (uVar69 * 0x40000 | uVar68 >> 0xe) ^ (uVar69 * 0x4000 | uVar68 >> 0x12) ^
             (uVar68 * 0x800000 | uVar69 >> 9);
    uVar61 = uVar36 + uVar30;
    uVar20 = uVar61 + 0xe372532b;
    iVar6 = uVar33 + uVar67 + (uint)CARRY4(uVar19,uVar58) + (uVar39 & uVar69 | uVar42 & ~uVar69) +
            (uint)CARRY4(uVar19 + uVar58,uVar9) +
            ((uVar68 * 0x40000 | uVar69 >> 0xe) ^ (uVar68 * 0x4000 | uVar69 >> 0x12) ^
            (uVar69 * 0x800000 | uVar68 >> 9)) + (uint)CARRY4(uVar36,uVar30) + -0x398e870e +
            (uint)(0x1c8dacd4 < uVar61);
    uVar34 = uVar3 + uVar20;
    uVar58 = ((uVar32 * 0x10 | uVar22 >> 0x1c) ^ (uVar22 * 0x40000000 | uVar32 >> 2) ^
             (uVar22 * 0x2000000 | uVar32 >> 7)) + (uVar22 & (uVar59 ^ uVar21) ^ uVar59 & uVar21) +
             (uint)CARRY4(uVar11,uVar52) + iVar6 + (uint)CARRY4(uVar3,uVar20);
    uVar61 = (uVar58 * 0x10 | uVar34 >> 0x1c) ^ (uVar34 * 0x40000000 | uVar58 >> 2) ^
             (uVar34 * 0x2000000 | uVar58 >> 7);
    uVar52 = uVar34 & (uVar32 ^ uVar12) ^ uVar32 & uVar12;
    uVar3 = uVar61 + uVar52;
    uVar67 = uVar20 + uVar41;
    uVar11 = iVar6 + uVar15 + (uint)CARRY4(uVar20,uVar41);
    uVar47 = uVar68 & uVar67 | uVar60 & ~uVar67;
    uVar9 = (uVar65 * 0x2000 | uVar7 >> 0x13) ^ (uVar7 * 8 | uVar65 >> 0x1d) ^
            (uVar7 >> 6 | uVar65 * 0x4000000);
    uVar36 = (uVar25 * -0x80000000 | uVar13 >> 1) ^ (uVar25 * 0x1000000 | uVar13 >> 8) ^
             (uVar13 >> 7 | uVar25 * 0x2000000);
    uVar30 = uVar36 + uVar26;
    uVar57 = uVar30 + uVar44;
    uVar20 = uVar57 + uVar9;
    uVar15 = ((uVar13 * -0x80000000 | uVar25 >> 1) ^ (uVar13 * 0x1000000 | uVar25 >> 8) ^
             uVar25 >> 7) + uVar40 + (uint)CARRY4(uVar36,uVar26) + uVar27 +
             (uint)CARRY4(uVar30,uVar44) +
             ((uVar7 * 0x2000 | uVar65 >> 0x13) ^ (uVar65 * 8 | uVar7 >> 0x1d) ^ uVar65 >> 6) +
             (uint)CARRY4(uVar57,uVar9);
    uVar9 = uVar20 + uVar28 + uVar47;
    uVar30 = (uVar11 * 0x40000 | uVar67 >> 0xe) ^ (uVar11 * 0x4000 | uVar67 >> 0x12) ^
             (uVar67 * 0x800000 | uVar11 >> 9);
    uVar36 = uVar9 + uVar30;
    uVar41 = uVar36 + 0xea26619c;
    iVar6 = uVar15 + uVar42 + (uint)CARRY4(uVar20,uVar28) + (uVar69 & uVar11 | uVar39 & ~uVar11) +
            (uint)CARRY4(uVar20 + uVar28,uVar47) +
            ((uVar67 * 0x40000 | uVar11 >> 0xe) ^ (uVar67 * 0x4000 | uVar11 >> 0x12) ^
            (uVar11 * 0x800000 | uVar67 >> 9)) + (uint)CARRY4(uVar9,uVar30) + -0x35d8c132 +
            (uint)(0x15d99e63 < uVar36);
    uVar40 = uVar3 + uVar41;
    uVar26 = ((uVar34 * 0x10 | uVar58 >> 0x1c) ^ (uVar58 * 0x40000000 | uVar34 >> 2) ^
             (uVar58 * 0x2000000 | uVar34 >> 7)) + (uVar58 & (uVar22 ^ uVar59) ^ uVar22 & uVar59) +
             (uint)CARRY4(uVar61,uVar52) + iVar6 + (uint)CARRY4(uVar3,uVar41);
    uVar57 = (uVar26 * 0x10 | uVar40 >> 0x1c) ^ (uVar40 * 0x40000000 | uVar26 >> 2) ^
             (uVar40 * 0x2000000 | uVar26 >> 7);
    uVar52 = uVar40 & (uVar34 ^ uVar32) ^ uVar34 & uVar32;
    uVar3 = uVar57 + uVar52;
    uVar47 = uVar41 + uVar62;
    uVar28 = iVar6 + uVar21 + (uint)CARRY4(uVar41,uVar62);
    uVar9 = uVar67 & uVar47 | uVar68 & ~uVar47;
    uVar36 = (uVar33 * 0x2000 | uVar19 >> 0x13) ^ (uVar19 * 8 | uVar33 >> 0x1d) ^
             (uVar19 >> 6 | uVar33 * 0x4000000);
    uVar61 = (uVar46 * -0x80000000 | uVar45 >> 1) ^ (uVar46 * 0x1000000 | uVar45 >> 8) ^
             (uVar45 >> 7 | uVar46 * 0x2000000);
    uVar62 = uVar4 + uVar13 + uVar61;
    uVar30 = uVar62 + uVar36;
    uVar25 = uVar16 + uVar25 + (uint)CARRY4(uVar4,uVar13) +
             ((uVar45 * -0x80000000 | uVar46 >> 1) ^ (uVar45 * 0x1000000 | uVar46 >> 8) ^
             uVar46 >> 7) + (uint)CARRY4(uVar4 + uVar13,uVar61) +
             ((uVar19 * 0x2000 | uVar33 >> 0x13) ^ (uVar33 * 8 | uVar19 >> 0x1d) ^ uVar33 >> 6) +
             (uint)CARRY4(uVar62,uVar36);
    uVar36 = uVar30 + uVar60 + uVar9;
    uVar13 = (uVar28 * 0x40000 | uVar47 >> 0xe) ^ (uVar28 * 0x4000 | uVar47 >> 0x12) ^
             (uVar47 * 0x800000 | uVar28 >> 9);
    uVar61 = uVar36 + uVar13;
    uVar41 = uVar61 + 0x21c0c207;
    iVar6 = uVar25 + uVar39 + (uint)CARRY4(uVar30,uVar60) + (uVar11 & uVar28 | uVar69 & ~uVar28) +
            (uint)CARRY4(uVar30 + uVar60,uVar9) +
            ((uVar47 * 0x40000 | uVar28 >> 0xe) ^ (uVar47 * 0x4000 | uVar28 >> 0x12) ^
            (uVar28 * 0x800000 | uVar47 >> 9)) + (uint)CARRY4(uVar36,uVar13) + -0x2e794739 +
            (uint)(0xde3f3df8 < uVar61);
    uVar39 = uVar3 + uVar41;
    uVar52 = ((uVar40 * 0x10 | uVar26 >> 0x1c) ^ (uVar26 * 0x40000000 | uVar40 >> 2) ^
             (uVar26 * 0x2000000 | uVar40 >> 7)) + (uVar26 & (uVar58 ^ uVar22) ^ uVar58 & uVar22) +
             (uint)CARRY4(uVar57,uVar52) + iVar6 + (uint)CARRY4(uVar3,uVar41);
    uVar61 = (uVar52 * 0x10 | uVar39 >> 0x1c) ^ (uVar39 * 0x40000000 | uVar52 >> 2) ^
             (uVar39 * 0x2000000 | uVar52 >> 7);
    uVar21 = uVar39 & (uVar40 ^ uVar34) ^ uVar40 & uVar34;
    uVar62 = uVar61 + uVar21;
    uVar53 = uVar41 + uVar12;
    uVar59 = iVar6 + uVar59 + (uint)CARRY4(uVar41,uVar12);
    uVar57 = uVar47 & uVar53 | uVar67 & ~uVar53;
    uVar3 = (uVar15 * 0x2000 | uVar20 >> 0x13) ^ (uVar20 * 8 | uVar15 >> 0x1d) ^
            (uVar20 >> 6 | uVar15 * 0x4000000);
    uVar9 = (uVar38 * -0x80000000 | uVar14 >> 1) ^ (uVar38 * 0x1000000 | uVar14 >> 8) ^
            (uVar14 >> 7 | uVar38 * 0x2000000);
    uVar36 = uVar9 + uVar45;
    uVar13 = uVar36 + uVar18;
    uVar12 = uVar13 + uVar3;
    uVar45 = ((uVar14 * -0x80000000 | uVar38 >> 1) ^ (uVar14 * 0x1000000 | uVar38 >> 8) ^
             uVar38 >> 7) + uVar46 + (uint)CARRY4(uVar9,uVar45) + uVar49 +
             (uint)CARRY4(uVar36,uVar18) +
             ((uVar20 * 0x2000 | uVar15 >> 0x13) ^ (uVar15 * 8 | uVar20 >> 0x1d) ^ uVar15 >> 6) +
             (uint)CARRY4(uVar13,uVar3);
    uVar3 = uVar12 + uVar68 + uVar57;
    uVar13 = (uVar59 * 0x40000 | uVar53 >> 0xe) ^ (uVar59 * 0x4000 | uVar53 >> 0x12) ^
             (uVar53 * 0x800000 | uVar59 >> 9);
    uVar9 = uVar3 + uVar13;
    uVar36 = uVar9 + 0xcde0eb1e;
    iVar6 = uVar45 + uVar69 + (uint)CARRY4(uVar12,uVar68) + (uVar28 & uVar59 | uVar11 & ~uVar59) +
            (uint)CARRY4(uVar12 + uVar68,uVar57) +
            ((uVar53 * 0x40000 | uVar59 >> 0xe) ^ (uVar53 * 0x4000 | uVar59 >> 0x12) ^
            (uVar59 * 0x800000 | uVar53 >> 9)) + (uint)CARRY4(uVar3,uVar13) + -0x1525822a +
            (uint)(0x321f14e1 < uVar9);
    uVar57 = uVar62 + uVar36;
    uVar21 = ((uVar39 * 0x10 | uVar52 >> 0x1c) ^ (uVar52 * 0x40000000 | uVar39 >> 2) ^
             (uVar52 * 0x2000000 | uVar39 >> 7)) + (uVar52 & (uVar26 ^ uVar58) ^ uVar26 & uVar58) +
             (uint)CARRY4(uVar61,uVar21) + iVar6 + (uint)CARRY4(uVar62,uVar36);
    uVar46 = (uVar21 * 0x10 | uVar57 >> 0x1c) ^ (uVar57 * 0x40000000 | uVar21 >> 2) ^
             (uVar57 * 0x2000000 | uVar21 >> 7);
    uVar62 = uVar57 & (uVar39 ^ uVar40) ^ uVar39 & uVar40;
    uVar61 = uVar46 + uVar62;
    uVar41 = uVar36 + uVar32;
    uVar60 = iVar6 + uVar22 + (uint)CARRY4(uVar36,uVar32);
    uVar3 = uVar53 & uVar41 | uVar47 & ~uVar41;
    uVar32 = (uVar25 * 0x2000 | uVar30 >> 0x13) ^ (uVar30 * 8 | uVar25 >> 0x1d) ^
             (uVar30 >> 6 | uVar25 * 0x4000000);
    uVar36 = (uVar51 * -0x80000000 | uVar55 >> 1) ^ (uVar51 * 0x1000000 | uVar55 >> 8) ^
             (uVar55 >> 7 | uVar51 * 0x2000000);
    uVar9 = uVar56 + uVar14 + uVar36;
    uVar13 = uVar9 + uVar32;
    uVar32 = uVar31 + uVar38 + (uint)CARRY4(uVar56,uVar14) +
             ((uVar55 * -0x80000000 | uVar51 >> 1) ^ (uVar55 * 0x1000000 | uVar51 >> 8) ^
             uVar51 >> 7) + (uint)CARRY4(uVar56 + uVar14,uVar36) +
             ((uVar30 * 0x2000 | uVar25 >> 0x13) ^ (uVar25 * 8 | uVar30 >> 0x1d) ^ uVar25 >> 6) +
             (uint)CARRY4(uVar9,uVar32);
    uVar9 = uVar13 + uVar67 + uVar3;
    uVar38 = (uVar60 * 0x40000 | uVar41 >> 0xe) ^ (uVar60 * 0x4000 | uVar41 >> 0x12) ^
             (uVar41 * 0x800000 | uVar60 >> 9);
    uVar36 = uVar9 + uVar38;
    uVar14 = uVar36 + 0xee6ed178;
    iVar6 = uVar32 + uVar11 + (uint)CARRY4(uVar13,uVar67) + (uVar59 & uVar60 | uVar28 & ~uVar60) +
            (uint)CARRY4(uVar13 + uVar67,uVar3) +
            ((uVar41 * 0x40000 | uVar60 >> 0xe) ^ (uVar41 * 0x4000 | uVar60 >> 0x12) ^
            (uVar60 * 0x800000 | uVar41 >> 9)) + (uint)CARRY4(uVar9,uVar38) + -0xa82b081 +
            (uint)(0x11912e87 < uVar36);
    uVar42 = uVar61 + uVar14;
    uVar67 = ((uVar57 * 0x10 | uVar21 >> 0x1c) ^ (uVar21 * 0x40000000 | uVar57 >> 2) ^
             (uVar21 * 0x2000000 | uVar57 >> 7)) + (uVar21 & (uVar52 ^ uVar26) ^ uVar52 & uVar26) +
             (uint)CARRY4(uVar46,uVar62) + iVar6 + (uint)CARRY4(uVar61,uVar14);
    uVar38 = (uVar67 * 0x10 | uVar42 >> 0x1c) ^ (uVar42 * 0x40000000 | uVar67 >> 2) ^
             (uVar42 * 0x2000000 | uVar67 >> 7);
    uVar22 = uVar42 & (uVar57 ^ uVar39) ^ uVar57 & uVar39;
    uVar3 = uVar38 + uVar22;
    uVar62 = uVar14 + uVar34;
    uVar34 = iVar6 + uVar58 + (uint)CARRY4(uVar14,uVar34);
    uVar58 = uVar41 & uVar62 | uVar53 & ~uVar62;
    uVar14 = (uVar45 * 0x2000 | uVar12 >> 0x13) ^ (uVar12 * 8 | uVar45 >> 0x1d) ^
             (uVar12 >> 6 | uVar45 * 0x4000000);
    uVar9 = (uVar66 * -0x80000000 | uVar37 >> 1) ^ (uVar66 * 0x1000000 | uVar37 >> 8) ^
            (uVar37 >> 7 | uVar66 * 0x2000000);
    uVar36 = uVar9 + uVar55;
    uVar61 = uVar36 + uVar5;
    uVar11 = uVar61 + uVar14;
    uVar46 = ((uVar37 * -0x80000000 | uVar66 >> 1) ^ (uVar37 * 0x1000000 | uVar66 >> 8) ^
             uVar66 >> 7) + uVar51 + (uint)CARRY4(uVar9,uVar55) + uVar64 +
             (uint)CARRY4(uVar36,uVar5) +
             ((uVar12 * 0x2000 | uVar45 >> 0x13) ^ (uVar45 * 8 | uVar12 >> 0x1d) ^ uVar45 >> 6) +
             (uint)CARRY4(uVar61,uVar14);
    uVar9 = uVar11 + uVar47 + uVar58;
    uVar61 = (uVar34 * 0x40000 | uVar62 >> 0xe) ^ (uVar34 * 0x4000 | uVar62 >> 0x12) ^
             (uVar62 * 0x800000 | uVar34 >> 9);
    uVar36 = uVar9 + uVar61;
    uVar14 = uVar36 + 0x72176fba;
    iVar6 = uVar46 + uVar28 + (uint)CARRY4(uVar11,uVar47) + (uVar60 & uVar34 | uVar59 & ~uVar34) +
            (uint)CARRY4(uVar11 + uVar47,uVar58) +
            ((uVar62 * 0x40000 | uVar34 >> 0xe) ^ (uVar62 * 0x4000 | uVar34 >> 0x12) ^
            (uVar34 * 0x800000 | uVar62 >> 9)) + (uint)CARRY4(uVar9,uVar61) + 0x6f067aa +
            (uint)(0x8de89045 < uVar36);
    uVar55 = uVar3 + uVar14;
    uVar22 = ((uVar42 * 0x10 | uVar67 >> 0x1c) ^ (uVar67 * 0x40000000 | uVar42 >> 2) ^
             (uVar67 * 0x2000000 | uVar42 >> 7)) + (uVar67 & (uVar21 ^ uVar52) ^ uVar21 & uVar52) +
             (uint)CARRY4(uVar38,uVar22) + iVar6 + (uint)CARRY4(uVar3,uVar14);
    uVar51 = (uVar22 * 0x10 | uVar55 >> 0x1c) ^ (uVar55 * 0x40000000 | uVar22 >> 2) ^
             (uVar55 * 0x2000000 | uVar22 >> 7);
    uVar58 = uVar55 & (uVar42 ^ uVar57) ^ uVar42 & uVar57;
    uVar3 = uVar51 + uVar58;
    uVar28 = uVar14 + uVar40;
    uVar68 = iVar6 + uVar26 + (uint)CARRY4(uVar14,uVar40);
    uVar9 = uVar62 & uVar28 | uVar41 & ~uVar28;
    uVar38 = (uVar32 * 0x2000 | uVar13 >> 0x13) ^ (uVar13 * 8 | uVar32 >> 0x1d) ^
             (uVar13 >> 6 | uVar32 * 0x4000000);
    uVar36 = (uVar50 * -0x80000000 | uVar24 >> 1) ^ (uVar50 * 0x1000000 | uVar24 >> 8) ^
             (uVar24 >> 7 | uVar50 * 0x2000000);
    uVar61 = uVar7 + uVar37 + uVar36;
    uVar14 = uVar61 + uVar38;
    uVar38 = uVar65 + uVar66 + (uint)CARRY4(uVar7,uVar37) +
             ((uVar24 * -0x80000000 | uVar50 >> 1) ^ (uVar24 * 0x1000000 | uVar50 >> 8) ^
             uVar50 >> 7) + (uint)CARRY4(uVar7 + uVar37,uVar36) +
             ((uVar13 * 0x2000 | uVar32 >> 0x13) ^ (uVar32 * 8 | uVar13 >> 0x1d) ^ uVar32 >> 6) +
             (uint)CARRY4(uVar61,uVar38);
    uVar36 = uVar14 + uVar53 + uVar9;
    uVar37 = (uVar68 * 0x40000 | uVar28 >> 0xe) ^ (uVar68 * 0x4000 | uVar28 >> 0x12) ^
             (uVar28 * 0x800000 | uVar68 >> 9);
    uVar61 = uVar36 + uVar37;
    uVar47 = uVar61 + 0xa2c898a6;
    iVar6 = uVar38 + uVar59 + (uint)CARRY4(uVar14,uVar53) + (uVar34 & uVar68 | uVar60 & ~uVar68) +
            (uint)CARRY4(uVar14 + uVar53,uVar9) +
            ((uVar28 * 0x40000 | uVar68 >> 0xe) ^ (uVar28 * 0x4000 | uVar68 >> 0x12) ^
            (uVar68 * 0x800000 | uVar28 >> 9)) + (uint)CARRY4(uVar36,uVar37) + 0xa637dc5 +
            (uint)(0x5d376759 < uVar61);
    uVar59 = uVar3 + uVar47;
    uVar66 = ((uVar55 * 0x10 | uVar22 >> 0x1c) ^ (uVar22 * 0x40000000 | uVar55 >> 2) ^
             (uVar22 * 0x2000000 | uVar55 >> 7)) + (uVar22 & (uVar67 ^ uVar21) ^ uVar67 & uVar21) +
             (uint)CARRY4(uVar51,uVar58) + iVar6 + (uint)CARRY4(uVar3,uVar47);
    uVar26 = (uVar66 * 0x10 | uVar59 >> 0x1c) ^ (uVar59 * 0x40000000 | uVar66 >> 2) ^
             (uVar59 * 0x2000000 | uVar66 >> 7);
    uVar40 = uVar59 & (uVar55 ^ uVar42) ^ uVar55 & uVar42;
    uVar3 = uVar26 + uVar40;
    uVar58 = uVar47 + uVar39;
    uVar47 = iVar6 + uVar52 + (uint)CARRY4(uVar47,uVar39);
    uVar39 = uVar28 & uVar58 | uVar62 & ~uVar58;
    uVar51 = (uVar46 * 0x2000 | uVar11 >> 0x13) ^ (uVar11 * 8 | uVar46 >> 0x1d) ^
             (uVar11 >> 6 | uVar46 * 0x4000000);
    uVar9 = (uVar63 * -0x80000000 | uVar17 >> 1) ^ (uVar63 * 0x1000000 | uVar17 >> 8) ^
            (uVar17 >> 7 | uVar63 * 0x2000000);
    uVar36 = uVar9 + uVar24;
    uVar61 = uVar36 + uVar19;
    uVar37 = uVar61 + uVar51;
    uVar50 = ((uVar17 * -0x80000000 | uVar63 >> 1) ^ (uVar17 * 0x1000000 | uVar63 >> 8) ^
             uVar63 >> 7) + uVar50 + (uint)CARRY4(uVar9,uVar24) + uVar33 +
             (uint)CARRY4(uVar36,uVar19) +
             ((uVar11 * 0x2000 | uVar46 >> 0x13) ^ (uVar46 * 8 | uVar11 >> 0x1d) ^ uVar46 >> 6) +
             (uint)CARRY4(uVar61,uVar51);
    uVar9 = uVar37 + uVar41 + uVar39;
    uVar24 = (uVar47 * 0x40000 | uVar58 >> 0xe) ^ (uVar47 * 0x4000 | uVar58 >> 0x12) ^
             (uVar58 * 0x800000 | uVar47 >> 9);
    uVar36 = uVar9 + uVar24;
    uVar61 = uVar36 + 0xbef90dae;
    iVar6 = uVar50 + uVar60 + (uint)CARRY4(uVar37,uVar41) + (uVar68 & uVar47 | uVar34 & ~uVar47) +
            (uint)CARRY4(uVar37 + uVar41,uVar39) +
            ((uVar58 * 0x40000 | uVar47 >> 0xe) ^ (uVar58 * 0x4000 | uVar47 >> 0x12) ^
            (uVar47 * 0x800000 | uVar58 >> 9)) + (uint)CARRY4(uVar9,uVar24) + 0x113f9804 +
            (uint)(0x4106f251 < uVar36);
    uVar51 = uVar3 + uVar61;
    uVar40 = ((uVar59 * 0x10 | uVar66 >> 0x1c) ^ (uVar66 * 0x40000000 | uVar59 >> 2) ^
             (uVar66 * 0x2000000 | uVar59 >> 7)) + (uVar66 & (uVar22 ^ uVar67) ^ uVar22 & uVar67) +
             (uint)CARRY4(uVar26,uVar40) + iVar6 + (uint)CARRY4(uVar3,uVar61);
    uVar26 = (uVar40 * 0x10 | uVar51 >> 0x1c) ^ (uVar51 * 0x40000000 | uVar40 >> 2) ^
             (uVar51 * 0x2000000 | uVar40 >> 7);
    uVar39 = uVar51 & (uVar59 ^ uVar55) ^ uVar59 & uVar55;
    uVar36 = uVar26 + uVar39;
    uVar41 = uVar61 + uVar57;
    uVar53 = iVar6 + uVar21 + (uint)CARRY4(uVar61,uVar57);
    uVar57 = uVar58 & uVar41 | uVar28 & ~uVar41;
    uVar61 = (uVar38 * 0x2000 | uVar14 >> 0x13) ^ (uVar14 * 8 | uVar38 >> 0x1d) ^
             (uVar14 >> 6 | uVar38 * 0x4000000);
    uVar3 = (uVar10 * -0x80000000 | uVar43 >> 1) ^ (uVar10 * 0x1000000 | uVar43 >> 8) ^
            (uVar43 >> 7 | uVar10 * 0x2000000);
    uVar9 = uVar20 + uVar17 + uVar3;
    uVar24 = uVar9 + uVar61;
    uVar63 = uVar15 + uVar63 + (uint)CARRY4(uVar20,uVar17) +
             ((uVar43 * -0x80000000 | uVar10 >> 1) ^ (uVar43 * 0x1000000 | uVar10 >> 8) ^
             uVar10 >> 7) + (uint)CARRY4(uVar20 + uVar17,uVar3) +
             ((uVar14 * 0x2000 | uVar38 >> 0x13) ^ (uVar38 * 8 | uVar14 >> 0x1d) ^ uVar38 >> 6) +
             (uint)CARRY4(uVar9,uVar61);
    uVar3 = uVar24 + uVar62 + uVar57;
    uVar17 = (uVar53 * 0x40000 | uVar41 >> 0xe) ^ (uVar53 * 0x4000 | uVar41 >> 0x12) ^
             (uVar41 * 0x800000 | uVar53 >> 9);
    uVar9 = uVar3 + uVar17;
    uVar61 = uVar9 + 0x131c471b;
    iVar6 = uVar63 + uVar34 + (uint)CARRY4(uVar24,uVar62) + (uVar47 & uVar53 | uVar68 & ~uVar53) +
            (uint)CARRY4(uVar24 + uVar62,uVar57) +
            ((uVar41 * 0x40000 | uVar53 >> 0xe) ^ (uVar41 * 0x4000 | uVar53 >> 0x12) ^
            (uVar53 * 0x800000 | uVar41 >> 9)) + (uint)CARRY4(uVar3,uVar17) + 0x1b710b35 +
            (uint)(0xece3b8e4 < uVar9);
    uVar21 = uVar36 + uVar61;
    uVar57 = ((uVar51 * 0x10 | uVar40 >> 0x1c) ^ (uVar40 * 0x40000000 | uVar51 >> 2) ^
             (uVar40 * 0x2000000 | uVar51 >> 7)) + (uVar40 & (uVar66 ^ uVar22) ^ uVar66 & uVar22) +
             (uint)CARRY4(uVar26,uVar39) + iVar6 + (uint)CARRY4(uVar36,uVar61);
    uVar3 = (uVar57 * 0x10 | uVar21 >> 0x1c) ^ (uVar21 * 0x40000000 | uVar57 >> 2) ^
            (uVar21 * 0x2000000 | uVar57 >> 7);
    uVar26 = uVar21 & (uVar51 ^ uVar59) ^ uVar51 & uVar59;
    uVar9 = uVar3 + uVar26;
    uVar39 = uVar61 + uVar42;
    uVar52 = iVar6 + uVar67 + (uint)CARRY4(uVar61,uVar42);
    uVar67 = uVar41 & uVar39 | uVar58 & ~uVar39;
    uVar34 = (uVar50 * 0x2000 | uVar37 >> 0x13) ^ (uVar37 * 8 | uVar50 >> 0x1d) ^
             (uVar37 >> 6 | uVar50 * 0x4000000);
    uVar17 = (uVar27 * -0x80000000 | uVar44 >> 1) ^ (uVar27 * 0x1000000 | uVar44 >> 8) ^
             (uVar44 >> 7 | uVar27 * 0x2000000);
    uVar36 = uVar17 + uVar43;
    uVar61 = uVar36 + uVar30;
    uVar62 = uVar61 + uVar34;
    uVar43 = ((uVar44 * -0x80000000 | uVar27 >> 1) ^ (uVar44 * 0x1000000 | uVar27 >> 8) ^
             uVar27 >> 7) + uVar10 + (uint)CARRY4(uVar17,uVar43) + uVar25 +
             (uint)CARRY4(uVar36,uVar30) +
             ((uVar37 * 0x2000 | uVar50 >> 0x13) ^ (uVar50 * 8 | uVar37 >> 0x1d) ^ uVar50 >> 6) +
             (uint)CARRY4(uVar61,uVar34);
    uVar17 = uVar62 + uVar28 + uVar67;
    uVar61 = (uVar52 * 0x40000 | uVar39 >> 0xe) ^ (uVar52 * 0x4000 | uVar39 >> 0x12) ^
             (uVar39 * 0x800000 | uVar52 >> 9);
    uVar36 = uVar17 + uVar61;
    uVar30 = uVar36 + 0x23047d84;
    iVar6 = uVar43 + uVar68 + (uint)CARRY4(uVar62,uVar28) + (uVar53 & uVar52 | uVar47 & ~uVar52) +
            (uint)CARRY4(uVar62 + uVar28,uVar67) +
            ((uVar39 * 0x40000 | uVar52 >> 0xe) ^ (uVar39 * 0x4000 | uVar52 >> 0x12) ^
            (uVar52 * 0x800000 | uVar39 >> 9)) + (uint)CARRY4(uVar17,uVar61) + 0x28db77f5 +
            (uint)(0xdcfb827b < uVar36);
    uVar25 = uVar9 + uVar30;
    uVar28 = ((uVar21 * 0x10 | uVar57 >> 0x1c) ^ (uVar57 * 0x40000000 | uVar21 >> 2) ^
             (uVar57 * 0x2000000 | uVar21 >> 7)) + (uVar57 & (uVar40 ^ uVar66) ^ uVar40 & uVar66) +
             (uint)CARRY4(uVar3,uVar26) + iVar6 + (uint)CARRY4(uVar9,uVar30);
    uVar9 = (uVar28 * 0x10 | uVar25 >> 0x1c) ^ (uVar25 * 0x40000000 | uVar28 >> 2) ^
            (uVar25 * 0x2000000 | uVar28 >> 7);
    uVar10 = uVar25 & (uVar21 ^ uVar51) ^ uVar21 & uVar51;
    uVar3 = uVar9 + uVar10;
    uVar67 = uVar30 + uVar55;
    uVar22 = iVar6 + uVar22 + (uint)CARRY4(uVar30,uVar55);
    uVar26 = uVar39 & uVar67 | uVar41 & ~uVar67;
    uVar17 = (uVar63 * 0x2000 | uVar24 >> 0x13) ^ (uVar24 * 8 | uVar63 >> 0x1d) ^
             (uVar24 >> 6 | uVar63 * 0x4000000);
    uVar55 = (uVar16 * -0x80000000 | uVar4 >> 1) ^ (uVar16 * 0x1000000 | uVar4 >> 8) ^
             (uVar4 >> 7 | uVar16 * 0x2000000);
    uVar36 = uVar12 + uVar44 + uVar55;
    uVar61 = uVar36 + uVar17;
    uVar30 = uVar45 + uVar27 + (uint)CARRY4(uVar12,uVar44) +
             ((uVar4 * -0x80000000 | uVar16 >> 1) ^ (uVar4 * 0x1000000 | uVar16 >> 8) ^ uVar16 >> 7)
             + (uint)CARRY4(uVar12 + uVar44,uVar55) +
             ((uVar24 * 0x2000 | uVar63 >> 0x13) ^ (uVar63 * 8 | uVar24 >> 0x1d) ^ uVar63 >> 6) +
             (uint)CARRY4(uVar36,uVar17);
    uVar17 = uVar61 + uVar58 + uVar26;
    uVar55 = (uVar22 * 0x40000 | uVar67 >> 0xe) ^ (uVar22 * 0x4000 | uVar67 >> 0x12) ^
             (uVar67 * 0x800000 | uVar22 >> 9);
    uVar36 = uVar17 + uVar55;
    uVar44 = uVar36 + 0x40c72493;
    iVar6 = uVar30 + uVar47 + (uint)CARRY4(uVar61,uVar58) + (uVar52 & uVar22 | uVar53 & ~uVar22) +
            (uint)CARRY4(uVar61 + uVar58,uVar26) +
            ((uVar67 * 0x40000 | uVar22 >> 0xe) ^ (uVar67 * 0x4000 | uVar22 >> 0x12) ^
            (uVar22 * 0x800000 | uVar67 >> 9)) + (uint)CARRY4(uVar17,uVar55) + 0x32caab7b +
            (uint)(0xbf38db6c < uVar36);
    uVar26 = uVar3 + uVar44;
    uVar55 = ((uVar25 * 0x10 | uVar28 >> 0x1c) ^ (uVar28 * 0x40000000 | uVar25 >> 2) ^
             (uVar28 * 0x2000000 | uVar25 >> 7)) + (uVar28 & (uVar57 ^ uVar40) ^ uVar57 & uVar40) +
             (uint)CARRY4(uVar9,uVar10) + iVar6 + (uint)CARRY4(uVar3,uVar44);
    uVar45 = (uVar55 * 0x10 | uVar26 >> 0x1c) ^ (uVar26 * 0x40000000 | uVar55 >> 2) ^
             (uVar26 * 0x2000000 | uVar55 >> 7);
    uVar12 = uVar26 & (uVar25 ^ uVar21) ^ uVar25 & uVar21;
    uVar3 = uVar45 + uVar12;
    uVar9 = uVar44 + uVar59;
    uVar27 = iVar6 + uVar66 + (uint)CARRY4(uVar44,uVar59);
    uVar58 = uVar67 & uVar9 | uVar39 & ~uVar9;
    uVar66 = (uVar43 * 0x2000 | uVar62 >> 0x13) ^ (uVar62 * 8 | uVar43 >> 0x1d) ^
             (uVar62 >> 6 | uVar43 * 0x4000000);
    uVar17 = (uVar49 * -0x80000000 | uVar18 >> 1) ^ (uVar49 * 0x1000000 | uVar18 >> 8) ^
             (uVar18 >> 7 | uVar49 * 0x2000000);
    uVar36 = uVar17 + uVar4;
    uVar44 = uVar36 + uVar13;
    uVar10 = uVar44 + uVar66;
    uVar66 = ((uVar18 * -0x80000000 | uVar49 >> 1) ^ (uVar18 * 0x1000000 | uVar49 >> 8) ^
             uVar49 >> 7) + uVar16 + (uint)CARRY4(uVar17,uVar4) + uVar32 +
             (uint)CARRY4(uVar36,uVar13) +
             ((uVar62 * 0x2000 | uVar43 >> 0x13) ^ (uVar43 * 8 | uVar62 >> 0x1d) ^ uVar43 >> 6) +
             (uint)CARRY4(uVar44,uVar66);
    uVar4 = uVar10 + uVar41 + uVar58;
    uVar16 = (uVar27 * 0x40000 | uVar9 >> 0xe) ^ (uVar27 * 0x4000 | uVar9 >> 0x12) ^
             (uVar9 * 0x800000 | uVar27 >> 9);
    uVar17 = uVar4 + uVar16;
    uVar36 = uVar17 + 0x15c9bebc;
    iVar6 = uVar66 + uVar53 + (uint)CARRY4(uVar10,uVar41) + (uVar22 & uVar27 | uVar52 & ~uVar27) +
            (uint)CARRY4(uVar10 + uVar41,uVar58) +
            ((uVar9 * 0x40000 | uVar27 >> 0xe) ^ (uVar9 * 0x4000 | uVar27 >> 0x12) ^
            (uVar27 * 0x800000 | uVar9 >> 9)) + (uint)CARRY4(uVar4,uVar16) + 0x3c9ebe0a +
            (uint)(0xea364143 < uVar17);
    uVar13 = uVar3 + uVar36;
    uVar45 = ((uVar26 * 0x10 | uVar55 >> 0x1c) ^ (uVar55 * 0x40000000 | uVar26 >> 2) ^
             (uVar55 * 0x2000000 | uVar26 >> 7)) + (uVar55 & (uVar28 ^ uVar57) ^ uVar28 & uVar57) +
             (uint)CARRY4(uVar45,uVar12) + iVar6 + (uint)CARRY4(uVar3,uVar36);
    uVar44 = (uVar45 * 0x10 | uVar13 >> 0x1c) ^ (uVar13 * 0x40000000 | uVar45 >> 2) ^
             (uVar13 * 0x2000000 | uVar45 >> 7);
    uVar17 = uVar13 & (uVar26 ^ uVar25) ^ uVar26 & uVar25;
    uVar3 = uVar44 + uVar17;
    uVar16 = uVar36 + uVar51;
    uVar40 = iVar6 + uVar40 + (uint)CARRY4(uVar36,uVar51);
    uVar51 = uVar9 & uVar16 | uVar67 & ~uVar16;
    uVar32 = (uVar30 * 0x2000 | uVar61 >> 0x13) ^ (uVar61 * 8 | uVar30 >> 0x1d) ^
             (uVar61 >> 6 | uVar30 * 0x4000000);
    uVar36 = (uVar31 * -0x80000000 | uVar56 >> 1) ^ (uVar31 * 0x1000000 | uVar56 >> 8) ^
             (uVar56 >> 7 | uVar31 * 0x2000000);
    uVar12 = uVar11 + uVar18 + uVar36;
    uVar4 = uVar12 + uVar32;
    uVar11 = uVar46 + uVar49 + (uint)CARRY4(uVar11,uVar18) +
             ((uVar56 * -0x80000000 | uVar31 >> 1) ^ (uVar56 * 0x1000000 | uVar31 >> 8) ^
             uVar31 >> 7) + (uint)CARRY4(uVar11 + uVar18,uVar36) +
             ((uVar61 * 0x2000 | uVar30 >> 0x13) ^ (uVar30 * 8 | uVar61 >> 0x1d) ^ uVar30 >> 6) +
             (uint)CARRY4(uVar12,uVar32);
    uVar36 = uVar4 + uVar39 + uVar51;
    uVar61 = (uVar40 * 0x40000 | uVar16 >> 0xe) ^ (uVar40 * 0x4000 | uVar16 >> 0x12) ^
             (uVar16 * 0x800000 | uVar40 >> 9);
    uVar18 = uVar36 + uVar61;
    uVar30 = uVar18 + 0x9c100d4c;
    iVar6 = uVar11 + uVar52 + (uint)CARRY4(uVar4,uVar39) + (uVar27 & uVar40 | uVar22 & ~uVar40) +
            (uint)CARRY4(uVar4 + uVar39,uVar51) +
            ((uVar16 * 0x40000 | uVar40 >> 0xe) ^ (uVar16 * 0x4000 | uVar40 >> 0x12) ^
            (uVar40 * 0x800000 | uVar16 >> 9)) + (uint)CARRY4(uVar36,uVar61) + 0x431d67c4 +
            (uint)(0x63eff2b3 < uVar18);
    uVar49 = uVar3 + uVar30;
    uVar51 = ((uVar13 * 0x10 | uVar45 >> 0x1c) ^ (uVar45 * 0x40000000 | uVar13 >> 2) ^
             (uVar45 * 0x2000000 | uVar13 >> 7)) + (uVar45 & (uVar55 ^ uVar28) ^ uVar55 & uVar28) +
             (uint)CARRY4(uVar44,uVar17) + iVar6 + (uint)CARRY4(uVar3,uVar30);
    uVar44 = (uVar51 * 0x10 | uVar49 >> 0x1c) ^ (uVar49 * 0x40000000 | uVar51 >> 2) ^
             (uVar49 * 0x2000000 | uVar51 >> 7);
    uVar3 = uVar49 & (uVar13 ^ uVar26) ^ uVar13 & uVar26;
    uVar17 = uVar44 + uVar3;
    uVar39 = uVar30 + uVar21;
    uVar57 = iVar6 + uVar57 + (uint)CARRY4(uVar30,uVar21);
    uVar32 = uVar16 & uVar39 | uVar9 & ~uVar39;
    uVar18 = (uVar66 * 0x2000 | uVar10 >> 0x13) ^ (uVar10 * 8 | uVar66 >> 0x1d) ^
             (uVar10 >> 6 | uVar66 * 0x4000000);
    uVar61 = (uVar64 * -0x80000000 | uVar5 >> 1) ^ (uVar64 * 0x1000000 | uVar5 >> 8) ^
             (uVar5 >> 7 | uVar64 * 0x2000000);
    uVar30 = uVar61 + uVar56;
    uVar12 = uVar30 + uVar14;
    uVar36 = uVar12 + uVar18;
    uVar14 = ((uVar5 * -0x80000000 | uVar64 >> 1) ^ (uVar5 * 0x1000000 | uVar64 >> 8) ^ uVar64 >> 7)
             + uVar31 + (uint)CARRY4(uVar61,uVar56) + uVar38 + (uint)CARRY4(uVar30,uVar14) +
             ((uVar10 * 0x2000 | uVar66 >> 0x13) ^ (uVar66 * 8 | uVar10 >> 0x1d) ^ uVar66 >> 6) +
             (uint)CARRY4(uVar12,uVar18);
    uVar18 = uVar36 + uVar67 + uVar32;
    uVar30 = (uVar57 * 0x40000 | uVar39 >> 0xe) ^ (uVar57 * 0x4000 | uVar39 >> 0x12) ^
             (uVar39 * 0x800000 | uVar57 >> 9);
    uVar61 = uVar18 + uVar30;
    uVar12 = uVar61 + 0xcb3e42b6;
    iVar6 = uVar14 + uVar22 + (uint)CARRY4(uVar36,uVar67) + (uVar40 & uVar57 | uVar27 & ~uVar57) +
            (uint)CARRY4(uVar36 + uVar67,uVar32) +
            ((uVar39 * 0x40000 | uVar57 >> 0xe) ^ (uVar39 * 0x4000 | uVar57 >> 0x12) ^
            (uVar57 * 0x800000 | uVar39 >> 9)) + (uint)CARRY4(uVar18,uVar30) + 0x4cc5d4be +
            (uint)(0x34c1bd49 < uVar61);
    uVar56 = uVar17 + uVar12;
    uVar30 = ((uVar49 * 0x10 | uVar51 >> 0x1c) ^ (uVar51 * 0x40000000 | uVar49 >> 2) ^
             (uVar51 * 0x2000000 | uVar49 >> 7)) + (uVar51 & (uVar45 ^ uVar55) ^ uVar45 & uVar55) +
             (uint)CARRY4(uVar44,uVar3) + iVar6 + (uint)CARRY4(uVar17,uVar12);
    uVar61 = (uVar30 * 0x10 | uVar56 >> 0x1c) ^ (uVar56 * 0x40000000 | uVar30 >> 2) ^
             (uVar56 * 0x2000000 | uVar30 >> 7);
    uVar44 = uVar56 & (uVar49 ^ uVar13) ^ uVar49 & uVar13;
    uVar3 = uVar61 + uVar44;
    uVar38 = uVar12 + uVar25;
    uVar66 = iVar6 + uVar28 + (uint)CARRY4(uVar12,uVar25);
    uVar32 = uVar39 & uVar38 | uVar16 & ~uVar38;
    uVar31 = (uVar11 * 0x2000 | uVar4 >> 0x13) ^ (uVar4 * 8 | uVar11 >> 0x1d) ^
             (uVar4 >> 6 | uVar11 * 0x4000000);
    uVar17 = (uVar65 * -0x80000000 | uVar7 >> 1) ^ (uVar65 * 0x1000000 | uVar7 >> 8) ^
             (uVar7 >> 7 | uVar65 * 0x2000000);
    uVar18 = uVar37 + uVar5 + uVar17;
    uVar12 = uVar18 + uVar31;
    uVar37 = uVar50 + uVar64 + (uint)CARRY4(uVar37,uVar5) +
             ((uVar7 * -0x80000000 | uVar65 >> 1) ^ (uVar7 * 0x1000000 | uVar65 >> 8) ^ uVar65 >> 7)
             + (uint)CARRY4(uVar37 + uVar5,uVar17) +
             ((uVar4 * 0x2000 | uVar11 >> 0x13) ^ (uVar11 * 8 | uVar4 >> 0x1d) ^ uVar11 >> 6) +
             (uint)CARRY4(uVar18,uVar31);
    uVar4 = uVar12 + uVar9 + uVar32;
    uVar18 = (uVar66 * 0x40000 | uVar38 >> 0xe) ^ (uVar66 * 0x4000 | uVar38 >> 0x12) ^
             (uVar38 * 0x800000 | uVar66 >> 9);
    uVar5 = uVar4 + uVar18;
    uVar17 = uVar5 + 0xfc657e2a;
    iVar6 = uVar37 + uVar27 + (uint)CARRY4(uVar12,uVar9) + (uVar57 & uVar66 | uVar40 & ~uVar66) +
            (uint)CARRY4(uVar12 + uVar9,uVar32) +
            ((uVar38 * 0x40000 | uVar66 >> 0xe) ^ (uVar38 * 0x4000 | uVar66 >> 0x12) ^
            (uVar66 * 0x800000 | uVar38 >> 9)) + (uint)CARRY4(uVar4,uVar18) + 0x597f299c +
            (uint)(0x39a81d5 < uVar5);
    uVar64 = uVar3 + uVar17;
    uVar31 = ((uVar56 * 0x10 | uVar30 >> 0x1c) ^ (uVar30 * 0x40000000 | uVar56 >> 2) ^
             (uVar30 * 0x2000000 | uVar56 >> 7)) + (uVar30 & (uVar51 ^ uVar45) ^ uVar51 & uVar45) +
             (uint)CARRY4(uVar61,uVar44) + iVar6 + (uint)CARRY4(uVar3,uVar17);
    uVar50 = (uVar31 * 0x10 | uVar64 >> 0x1c) ^ (uVar64 * 0x40000000 | uVar31 >> 2) ^
             (uVar64 * 0x2000000 | uVar31 >> 7);
    uVar32 = uVar64 & (uVar56 ^ uVar49) ^ uVar56 & uVar49;
    uVar44 = uVar50 + uVar32;
    uVar25 = uVar17 + uVar26;
    uVar27 = iVar6 + uVar55 + (uint)CARRY4(uVar17,uVar26);
    uVar26 = uVar38 & uVar25 | uVar39 & ~uVar25;
    uVar10 = (uVar14 * 0x2000 | uVar36 >> 0x13) ^ (uVar36 * 8 | uVar14 >> 0x1d) ^
             (uVar36 >> 6 | uVar14 * 0x4000000);
    uVar3 = (uVar33 * -0x80000000 | uVar19 >> 1) ^ (uVar33 * 0x1000000 | uVar19 >> 8) ^
            (uVar19 >> 7 | uVar33 * 0x2000000);
    uVar4 = uVar3 + uVar7;
    uVar5 = uVar4 + uVar24;
    uVar9 = uVar5 + uVar10;
    uVar17 = uVar9 + uVar16;
    uVar18 = uVar17 + uVar26;
    uVar55 = (uVar27 * 0x40000 | uVar25 >> 0xe) ^ (uVar27 * 0x4000 | uVar25 >> 0x12) ^
             (uVar25 * 0x800000 | uVar27 >> 9);
    uVar61 = uVar18 + uVar55;
    uVar11 = uVar61 + 0x3ad6faec;
    iVar6 = ((uVar19 * -0x80000000 | uVar33 >> 1) ^ (uVar19 * 0x1000000 | uVar33 >> 8) ^ uVar33 >> 7
            ) + uVar65 + (uint)CARRY4(uVar3,uVar7) + uVar63 + (uint)CARRY4(uVar4,uVar24) +
            ((uVar36 * 0x2000 | uVar14 >> 0x13) ^ (uVar14 * 8 | uVar36 >> 0x1d) ^ uVar14 >> 6) +
            (uint)CARRY4(uVar5,uVar10) + uVar40 + (uint)CARRY4(uVar9,uVar16) +
            (uVar66 & uVar27 | uVar57 & ~uVar27) + (uint)CARRY4(uVar17,uVar26) +
            ((uVar25 * 0x40000 | uVar27 >> 0xe) ^ (uVar25 * 0x4000 | uVar27 >> 0x12) ^
            (uVar27 * 0x800000 | uVar25 >> 9)) + (uint)CARRY4(uVar18,uVar55) + 0x5fcb6fab +
            (uint)(0xc5290513 < uVar61);
    uVar63 = uVar44 + uVar11;
    uVar44 = ((uVar64 * 0x10 | uVar31 >> 0x1c) ^ (uVar31 * 0x40000000 | uVar64 >> 2) ^
             (uVar31 * 0x2000000 | uVar64 >> 7)) + (uVar31 & (uVar30 ^ uVar51) ^ uVar30 & uVar51) +
             (uint)CARRY4(uVar50,uVar32) + iVar6 + (uint)CARRY4(uVar44,uVar11);
    uVar18 = (uVar44 * 0x10 | uVar63 >> 0x1c) ^ (uVar63 * 0x40000000 | uVar44 >> 2) ^
             (uVar63 * 0x2000000 | uVar44 >> 7);
    uVar55 = uVar63 & (uVar64 ^ uVar56) ^ uVar64 & uVar56;
    bVar72 = CARRY4(uVar55,local_ac);
    uVar55 = uVar55 + local_ac;
    uVar4 = uVar55 + uVar18;
    uVar9 = uVar11 + uVar13;
    uVar5 = iVar6 + uVar45 + (uint)CARRY4(uVar11,uVar13);
    uVar3 = uVar25 & uVar9 | uVar38 & ~uVar9;
    uVar7 = (uVar37 * 0x2000 | uVar12 >> 0x13) ^ (uVar12 * 8 | uVar37 >> 0x1d) ^
            (uVar12 >> 6 | uVar37 * 0x4000000);
    uVar11 = (uVar15 * -0x80000000 | uVar20 >> 1) ^ (uVar15 * 0x1000000 | uVar20 >> 8) ^
             (uVar20 >> 7 | uVar15 * 0x2000000);
    uVar16 = uVar62 + uVar19 + uVar11;
    uVar24 = uVar16 + uVar7;
    uVar13 = uVar24 + uVar39;
    uVar14 = uVar13 + uVar3;
    uVar17 = (uVar5 * 0x40000 | uVar9 >> 0xe) ^ (uVar5 * 0x4000 | uVar9 >> 0x12) ^
             (uVar9 * 0x800000 | uVar5 >> 9);
    uVar36 = uVar14 + uVar17;
    uVar61 = uVar36 + 0x4a475817;
    iVar6 = uVar43 + uVar33 + (uint)CARRY4(uVar62,uVar19) +
            ((uVar20 * -0x80000000 | uVar15 >> 1) ^ (uVar20 * 0x1000000 | uVar15 >> 8) ^ uVar15 >> 7
            ) + (uint)CARRY4(uVar62 + uVar19,uVar11) +
            ((uVar12 * 0x2000 | uVar37 >> 0x13) ^ (uVar37 * 8 | uVar12 >> 0x1d) ^ uVar37 >> 6) +
            (uint)CARRY4(uVar16,uVar7) + uVar57 + (uint)CARRY4(uVar24,uVar39) +
            (uVar27 & uVar5 | uVar66 & ~uVar5) + (uint)CARRY4(uVar13,uVar3) +
            ((uVar9 * 0x40000 | uVar5 >> 0xe) ^ (uVar9 * 0x4000 | uVar5 >> 0x12) ^
            (uVar5 * 0x800000 | uVar9 >> 9)) + (uint)CARRY4(uVar14,uVar17) + 0x6c44198c +
            (uint)(0xb5b8a7e8 < uVar36);
    local_ac = uVar4 + uVar61;
    local_b0 = (uVar44 & (uVar31 ^ uVar30) ^ uVar31 & uVar30) + local_b0 + (uint)bVar72 +
               ((uVar63 * 0x10 | uVar44 >> 0x1c) ^ (uVar44 * 0x40000000 | uVar63 >> 2) ^
               (uVar44 * 0x2000000 | uVar63 >> 7)) + (uint)CARRY4(uVar55,uVar18) + iVar6 +
               (uint)CARRY4(uVar4,uVar61);
    bVar72 = CARRY4(uVar49,local_bc);
    uVar49 = uVar49 + local_bc;
    local_bc = uVar49 + uVar61;
    uVar54 = uVar51 + uVar54 + (uint)bVar72 + iVar6 + (uint)CARRY4(uVar49,uVar61);
    bVar72 = CARRY4(uVar63,local_b8);
    local_b8 = uVar63 + local_b8;
    uVar48 = uVar44 + uVar48 + (uint)bVar72;
    bVar72 = CARRY4(uVar9,local_144);
    local_144 = uVar9 + local_144;
    uVar8 = uVar5 + uVar8 + (uint)bVar72;
    bVar72 = CARRY4(uVar64,uVar29);
    uVar29 = uVar64 + uVar29;
    local_b4 = uVar31 + local_b4 + (uint)bVar72;
    param_2 = param_2 + 0x80;
    bVar72 = CARRY4(uVar25,local_148);
    local_148 = uVar25 + local_148;
    local_14c = uVar27 + local_14c + (uint)bVar72;
    bVar72 = CARRY4(uVar56,local_190);
    local_190 = uVar56 + local_190;
    local_18c = uVar30 + local_18c + (uint)bVar72;
    bVar72 = CARRY4(uVar38,uVar35);
    uVar35 = uVar38 + uVar35;
    uVar23 = uVar66 + uVar23 + (uint)bVar72;
  } while (param_2 != iVar1);
  param_1[2] = local_b8;
  param_1[3] = uVar48;
  *param_1 = local_ac;
  param_1[1] = local_b0;
  param_1[4] = uVar29;
  param_1[5] = local_b4;
  param_1[6] = local_190;
  param_1[7] = local_18c;
  param_1[8] = local_bc;
  param_1[9] = uVar54;
  param_1[10] = local_144;
  param_1[0xb] = uVar8;
  param_1[0xc] = local_148;
  param_1[0xd] = local_14c;
  param_1[0xe] = uVar35;
  param_1[0xf] = uVar23;
  return;
}

