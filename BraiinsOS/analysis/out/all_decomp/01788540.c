// FUN_01788540 @ 01788540 size=3548 calls_out=0 calls_in=3
// strings: 

void FUN_01788540(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
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
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  int *piVar21;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  puVar3 = param_2 + param_3 * 0x10;
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar7 = param_1[2];
  uVar9 = param_1[3];
  uVar11 = param_1[4];
  uVar13 = param_1[5];
  uVar15 = param_1[6];
  uVar17 = param_1[7];
  piVar20 = (int *)&DAT_01788420;
  do {
    uVar4 = *param_2;
    uVar1 = uVar11 ^ (uVar11 >> 5 | uVar11 << 0x1b) ^ (uVar11 >> 0x13 | uVar11 << 0xd);
    local_70 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
               uVar4 >> 0x18;
    iVar18 = uVar17 + local_70 + (uVar1 >> 6 | uVar1 << 0x1a) + *piVar20 +
             ((uVar13 ^ uVar15) & uVar11 ^ uVar15);
    uVar1 = param_2[1];
    uVar17 = uVar5 ^ (uVar5 >> 0xb | uVar5 << 0x15) ^ (uVar5 >> 0x14 | uVar5 << 0xc);
    uVar9 = uVar9 + iVar18;
    uVar19 = iVar18 + (uVar17 >> 2 | uVar17 << 0x1e) + ((uVar6 ^ uVar7) & (uVar5 ^ uVar6) ^ uVar6);
    uVar17 = uVar9 ^ (uVar9 >> 5 | uVar9 * 0x8000000) ^ (uVar9 >> 0x13 | uVar9 * 0x2000);
    local_6c = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
    iVar18 = uVar15 + local_6c + (uVar17 >> 6 | uVar17 << 0x1a) + piVar20[1] +
             ((uVar11 ^ uVar13) & uVar9 ^ uVar13);
    uVar17 = param_2[2];
    uVar15 = uVar19 ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 0x14 | uVar19 * 0x1000);
    uVar7 = uVar7 + iVar18;
    uVar16 = iVar18 + (uVar15 >> 2 | uVar15 << 0x1e) + ((uVar5 ^ uVar6) & (uVar19 ^ uVar5) ^ uVar5);
    uVar15 = uVar7 ^ (uVar7 >> 5 | uVar7 * 0x8000000) ^ (uVar7 >> 0x13 | uVar7 * 0x2000);
    local_68 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
               uVar17 >> 0x18;
    iVar18 = uVar13 + local_68 + (uVar15 >> 6 | uVar15 << 0x1a) + piVar20[2] +
             ((uVar9 ^ uVar11) & uVar7 ^ uVar11);
    uVar15 = param_2[3];
    uVar13 = uVar16 ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 0x14 | uVar16 * 0x1000);
    uVar6 = uVar6 + iVar18;
    uVar14 = iVar18 + (uVar13 >> 2 | uVar13 << 0x1e) +
             ((uVar19 ^ uVar5) & (uVar16 ^ uVar19) ^ uVar19);
    uVar13 = uVar6 ^ (uVar6 >> 5 | uVar6 * 0x8000000) ^ (uVar6 >> 0x13 | uVar6 * 0x2000);
    local_64 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
               uVar15 >> 0x18;
    iVar18 = uVar11 + local_64 + (uVar13 >> 6 | uVar13 << 0x1a) + piVar20[3] +
             ((uVar7 ^ uVar9) & uVar6 ^ uVar9);
    uVar13 = param_2[4];
    uVar11 = uVar14 ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 >> 0x14 | uVar14 * 0x1000);
    uVar5 = uVar5 + iVar18;
    uVar12 = iVar18 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar16 ^ uVar19) & (uVar14 ^ uVar16) ^ uVar16);
    uVar11 = uVar5 ^ (uVar5 >> 5 | uVar5 * 0x8000000) ^ (uVar5 >> 0x13 | uVar5 * 0x2000);
    local_60 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
               uVar13 >> 0x18;
    iVar18 = uVar9 + local_60 + (uVar11 >> 6 | uVar11 << 0x1a) + piVar20[4] +
             ((uVar6 ^ uVar7) & uVar5 ^ uVar7);
    uVar11 = param_2[5];
    uVar9 = uVar12 ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^ (uVar12 >> 0x14 | uVar12 * 0x1000);
    uVar19 = uVar19 + iVar18;
    uVar10 = iVar18 + (uVar9 >> 2 | uVar9 << 0x1e) +
             ((uVar14 ^ uVar16) & (uVar12 ^ uVar14) ^ uVar14);
    uVar9 = uVar19 ^ (uVar19 >> 5 | uVar19 * 0x8000000) ^ (uVar19 >> 0x13 | uVar19 * 0x2000);
    local_5c = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18;
    iVar18 = uVar7 + local_5c + (uVar9 >> 6 | uVar9 << 0x1a) + piVar20[5] +
             ((uVar5 ^ uVar6) & uVar19 ^ uVar6);
    uVar9 = param_2[6];
    uVar7 = uVar10 ^ (uVar10 >> 0xb | uVar10 * 0x200000) ^ (uVar10 >> 0x14 | uVar10 * 0x1000);
    uVar16 = uVar16 + iVar18;
    uVar8 = iVar18 + (uVar7 >> 2 | uVar7 << 0x1e) + ((uVar12 ^ uVar14) & (uVar10 ^ uVar12) ^ uVar12)
    ;
    uVar7 = uVar16 ^ (uVar16 >> 5 | uVar16 * 0x8000000) ^ (uVar16 >> 0x13 | uVar16 * 0x2000);
    local_58 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
               uVar9 >> 0x18;
    iVar18 = uVar6 + local_58 + (uVar7 >> 6 | uVar7 << 0x1a) + piVar20[6] +
             ((uVar19 ^ uVar5) & uVar16 ^ uVar5);
    uVar7 = param_2[7];
    uVar6 = uVar8 ^ (uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 0x14 | uVar8 * 0x1000);
    uVar14 = uVar14 + iVar18;
    uVar1 = iVar18 + (uVar6 >> 2 | uVar6 << 0x1e) + ((uVar10 ^ uVar12) & (uVar8 ^ uVar10) ^ uVar10);
    uVar6 = uVar14 ^ (uVar14 >> 5 | uVar14 * 0x8000000) ^ (uVar14 >> 0x13 | uVar14 * 0x2000);
    local_54 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
               uVar7 >> 0x18;
    iVar18 = uVar5 + local_54 + (uVar6 >> 6 | uVar6 << 0x1a) + piVar20[7] +
             ((uVar16 ^ uVar19) & uVar14 ^ uVar19);
    uVar6 = param_2[8];
    uVar5 = uVar1 ^ (uVar1 >> 0xb | uVar1 * 0x200000) ^ (uVar1 >> 0x14 | uVar1 * 0x1000);
    uVar12 = uVar12 + iVar18;
    uVar4 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) + ((uVar8 ^ uVar10) & (uVar1 ^ uVar8) ^ uVar8);
    uVar5 = uVar12 ^ (uVar12 >> 5 | uVar12 * 0x8000000) ^ (uVar12 >> 0x13 | uVar12 * 0x2000);
    local_50 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
    iVar18 = uVar19 + local_50 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar20[8] +
             ((uVar14 ^ uVar16) & uVar12 ^ uVar16);
    uVar6 = param_2[9];
    uVar5 = uVar4 ^ (uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 0x14 | uVar4 * 0x1000);
    uVar10 = uVar10 + iVar18;
    uVar17 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) + ((uVar1 ^ uVar8) & (uVar4 ^ uVar1) ^ uVar1);
    uVar5 = uVar10 ^ (uVar10 >> 5 | uVar10 * 0x8000000) ^ (uVar10 >> 0x13 | uVar10 * 0x2000);
    local_4c = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
    iVar18 = uVar16 + local_4c + (uVar5 >> 6 | uVar5 << 0x1a) + piVar20[9] +
             ((uVar12 ^ uVar14) & uVar10 ^ uVar14);
    uVar6 = param_2[10];
    uVar5 = uVar17 ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 0x14 | uVar17 * 0x1000);
    uVar8 = uVar8 + iVar18;
    uVar15 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) + ((uVar4 ^ uVar1) & (uVar17 ^ uVar4) ^ uVar4);
    uVar5 = uVar8 ^ (uVar8 >> 5 | uVar8 * 0x8000000) ^ (uVar8 >> 0x13 | uVar8 * 0x2000);
    local_48 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
    iVar18 = uVar14 + local_48 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar20[10] +
             ((uVar10 ^ uVar12) & uVar8 ^ uVar12);
    uVar6 = param_2[0xb];
    uVar5 = uVar15 ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^ (uVar15 >> 0x14 | uVar15 * 0x1000);
    uVar1 = uVar1 + iVar18;
    uVar13 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) + ((uVar17 ^ uVar4) & (uVar15 ^ uVar17) ^ uVar17)
    ;
    uVar5 = uVar1 ^ (uVar1 >> 5 | uVar1 * 0x8000000) ^ (uVar1 >> 0x13 | uVar1 * 0x2000);
    local_44 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
    iVar18 = uVar12 + local_44 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar20[0xb] +
             ((uVar8 ^ uVar10) & uVar1 ^ uVar10);
    uVar6 = param_2[0xc];
    uVar5 = uVar13 ^ (uVar13 >> 0xb | uVar13 * 0x200000) ^ (uVar13 >> 0x14 | uVar13 * 0x1000);
    uVar4 = uVar4 + iVar18;
    uVar11 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) +
             ((uVar15 ^ uVar17) & (uVar13 ^ uVar15) ^ uVar15);
    uVar5 = uVar4 ^ (uVar4 >> 5 | uVar4 * 0x8000000) ^ (uVar4 >> 0x13 | uVar4 * 0x2000);
    local_40 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
    iVar18 = uVar10 + local_40 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar20[0xc] +
             ((uVar1 ^ uVar8) & uVar4 ^ uVar8);
    uVar6 = param_2[0xd];
    uVar5 = uVar11 ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^ (uVar11 >> 0x14 | uVar11 * 0x1000);
    uVar17 = uVar17 + iVar18;
    uVar9 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) + ((uVar13 ^ uVar15) & (uVar11 ^ uVar13) ^ uVar13)
    ;
    uVar5 = uVar17 ^ (uVar17 >> 5 | uVar17 * 0x8000000) ^ (uVar17 >> 0x13 | uVar17 * 0x2000);
    local_3c = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
    iVar18 = uVar8 + local_3c + (uVar5 >> 6 | uVar5 << 0x1a) + piVar20[0xd] +
             ((uVar4 ^ uVar1) & uVar17 ^ uVar1);
    puVar2 = param_2 + 0xf;
    uVar6 = param_2[0xe];
    uVar5 = uVar9 ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 0x14 | uVar9 * 0x1000);
    uVar15 = uVar15 + iVar18;
    uVar7 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) + ((uVar11 ^ uVar13) & (uVar9 ^ uVar11) ^ uVar11);
    uVar5 = uVar15 ^ (uVar15 >> 5 | uVar15 * 0x8000000) ^ (uVar15 >> 0x13 | uVar15 * 0x2000);
    local_38 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
    iVar18 = uVar1 + local_38 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar20[0xe] +
             ((uVar17 ^ uVar4) & uVar15 ^ uVar4);
    param_2 = param_2 + 0x10;
    uVar1 = *puVar2;
    uVar5 = uVar7 ^ (uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 >> 0x14 | uVar7 * 0x1000);
    uVar13 = uVar13 + iVar18;
    uVar6 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) + ((uVar9 ^ uVar11) & (uVar7 ^ uVar9) ^ uVar9);
    uVar5 = uVar13 ^ (uVar13 >> 5 | uVar13 * 0x8000000) ^ (uVar13 >> 0x13 | uVar13 * 0x2000);
    local_34 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
    iVar18 = uVar4 + local_34 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar20[0xf] +
             ((uVar15 ^ uVar17) & uVar13 ^ uVar17);
    uVar1 = uVar6 ^ uVar7;
    uVar5 = uVar6 ^ (uVar6 >> 0xb | uVar6 * 0x200000) ^ (uVar6 >> 0x14 | uVar6 * 0x1000);
    uVar11 = uVar11 + iVar18;
    uVar4 = (uVar7 ^ uVar9) & uVar1 ^ uVar7;
    iVar18 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e);
    do {
      piVar21 = piVar20;
      uVar4 = iVar18 + uVar4;
      uVar5 = uVar11 ^ (uVar11 >> 5 | uVar11 << 0x1b) ^ (uVar11 >> 0x13 | uVar11 << 0xd);
      local_70 = local_70 +
                 ((local_38 >> 0x11 | local_38 << 0xf) ^ (local_38 >> 0x13 | local_38 << 0xd) ^
                 local_38 >> 10) +
                 ((local_6c >> 7 | local_6c << 0x19) ^ (local_6c >> 0x12 | local_6c << 0xe) ^
                 local_6c >> 3) + local_4c;
      iVar18 = uVar17 + local_70 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar21[0x10] +
               ((uVar13 ^ uVar15) & uVar11 ^ uVar15);
      uVar5 = uVar4 ^ (uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 0x14 | uVar4 * 0x1000);
      uVar9 = uVar9 + iVar18;
      uVar17 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) + (uVar1 & (uVar4 ^ uVar6) ^ uVar6);
      uVar5 = uVar9 ^ (uVar9 >> 5 | uVar9 * 0x8000000) ^ (uVar9 >> 0x13 | uVar9 * 0x2000);
      local_6c = local_6c +
                 ((local_34 >> 0x11 | local_34 << 0xf) ^ (local_34 >> 0x13 | local_34 << 0xd) ^
                 local_34 >> 10) +
                 ((local_68 >> 7 | local_68 << 0x19) ^ (local_68 >> 0x12 | local_68 << 0xe) ^
                 local_68 >> 3) + local_48;
      iVar18 = uVar15 + local_6c + (uVar5 >> 6 | uVar5 << 0x1a) + piVar21[0x11] +
               ((uVar11 ^ uVar13) & uVar9 ^ uVar13);
      uVar5 = uVar17 ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 0x14 | uVar17 * 0x1000);
      uVar7 = uVar7 + iVar18;
      uVar15 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) + ((uVar4 ^ uVar6) & (uVar17 ^ uVar4) ^ uVar4);
      uVar5 = uVar7 ^ (uVar7 >> 5 | uVar7 * 0x8000000) ^ (uVar7 >> 0x13 | uVar7 * 0x2000);
      local_68 = local_68 +
                 ((local_70 >> 0x11 | local_70 * 0x8000) ^ (local_70 >> 0x13 | local_70 * 0x2000) ^
                 local_70 >> 10) +
                 ((local_64 >> 7 | local_64 << 0x19) ^ (local_64 >> 0x12 | local_64 << 0xe) ^
                 local_64 >> 3) + local_44;
      iVar18 = uVar13 + local_68 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar21[0x12] +
               ((uVar9 ^ uVar11) & uVar7 ^ uVar11);
      uVar5 = uVar15 ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^ (uVar15 >> 0x14 | uVar15 * 0x1000);
      uVar6 = uVar6 + iVar18;
      uVar13 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) +
               ((uVar17 ^ uVar4) & (uVar15 ^ uVar17) ^ uVar17);
      uVar5 = uVar6 ^ (uVar6 >> 5 | uVar6 * 0x8000000) ^ (uVar6 >> 0x13 | uVar6 * 0x2000);
      local_64 = local_64 +
                 ((local_6c >> 0x11 | local_6c * 0x8000) ^ (local_6c >> 0x13 | local_6c * 0x2000) ^
                 local_6c >> 10) +
                 ((local_60 >> 7 | local_60 << 0x19) ^ (local_60 >> 0x12 | local_60 << 0xe) ^
                 local_60 >> 3) + local_40;
      iVar18 = uVar11 + local_64 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar21[0x13] +
               ((uVar7 ^ uVar9) & uVar6 ^ uVar9);
      uVar5 = uVar13 ^ (uVar13 >> 0xb | uVar13 * 0x200000) ^ (uVar13 >> 0x14 | uVar13 * 0x1000);
      uVar4 = uVar4 + iVar18;
      uVar11 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) +
               ((uVar15 ^ uVar17) & (uVar13 ^ uVar15) ^ uVar15);
      uVar5 = uVar4 ^ (uVar4 >> 5 | uVar4 * 0x8000000) ^ (uVar4 >> 0x13 | uVar4 * 0x2000);
      local_60 = local_60 +
                 ((local_68 >> 0x11 | local_68 * 0x8000) ^ (local_68 >> 0x13 | local_68 * 0x2000) ^
                 local_68 >> 10) +
                 ((local_5c >> 7 | local_5c << 0x19) ^ (local_5c >> 0x12 | local_5c << 0xe) ^
                 local_5c >> 3) + local_3c;
      iVar18 = uVar9 + local_60 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar21[0x14] +
               ((uVar6 ^ uVar7) & uVar4 ^ uVar7);
      uVar5 = uVar11 ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^ (uVar11 >> 0x14 | uVar11 * 0x1000);
      uVar17 = uVar17 + iVar18;
      uVar9 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) +
              ((uVar13 ^ uVar15) & (uVar11 ^ uVar13) ^ uVar13);
      uVar5 = uVar17 ^ (uVar17 >> 5 | uVar17 * 0x8000000) ^ (uVar17 >> 0x13 | uVar17 * 0x2000);
      local_5c = local_5c +
                 ((local_64 >> 0x11 | local_64 * 0x8000) ^ (local_64 >> 0x13 | local_64 * 0x2000) ^
                 local_64 >> 10) +
                 ((local_58 >> 7 | local_58 << 0x19) ^ (local_58 >> 0x12 | local_58 << 0xe) ^
                 local_58 >> 3) + local_38;
      iVar18 = uVar7 + local_5c + (uVar5 >> 6 | uVar5 << 0x1a) + piVar21[0x15] +
               ((uVar4 ^ uVar6) & uVar17 ^ uVar6);
      uVar5 = uVar9 ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 0x14 | uVar9 * 0x1000);
      uVar15 = uVar15 + iVar18;
      uVar7 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) +
              ((uVar11 ^ uVar13) & (uVar9 ^ uVar11) ^ uVar11);
      uVar5 = uVar15 ^ (uVar15 >> 5 | uVar15 * 0x8000000) ^ (uVar15 >> 0x13 | uVar15 * 0x2000);
      local_58 = local_58 +
                 ((local_60 >> 0x11 | local_60 * 0x8000) ^ (local_60 >> 0x13 | local_60 * 0x2000) ^
                 local_60 >> 10) +
                 ((local_54 >> 7 | local_54 << 0x19) ^ (local_54 >> 0x12 | local_54 << 0xe) ^
                 local_54 >> 3) + local_34;
      iVar18 = uVar6 + local_58 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar21[0x16] +
               ((uVar17 ^ uVar4) & uVar15 ^ uVar4);
      uVar5 = uVar7 ^ (uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 >> 0x14 | uVar7 * 0x1000);
      uVar13 = uVar13 + iVar18;
      uVar6 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) + ((uVar9 ^ uVar11) & (uVar7 ^ uVar9) ^ uVar9);
      uVar5 = uVar13 ^ (uVar13 >> 5 | uVar13 * 0x8000000) ^ (uVar13 >> 0x13 | uVar13 * 0x2000);
      local_54 = local_54 +
                 ((local_5c >> 0x11 | local_5c * 0x8000) ^ (local_5c >> 0x13 | local_5c * 0x2000) ^
                 local_5c >> 10) +
                 ((local_50 >> 7 | local_50 << 0x19) ^ (local_50 >> 0x12 | local_50 << 0xe) ^
                 local_50 >> 3) + local_70;
      iVar18 = uVar4 + local_54 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar21[0x17] +
               ((uVar15 ^ uVar17) & uVar13 ^ uVar17);
      uVar5 = uVar6 ^ (uVar6 >> 0xb | uVar6 * 0x200000) ^ (uVar6 >> 0x14 | uVar6 * 0x1000);
      uVar11 = uVar11 + iVar18;
      uVar1 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) + ((uVar7 ^ uVar9) & (uVar6 ^ uVar7) ^ uVar7);
      uVar5 = uVar11 ^ (uVar11 >> 5 | uVar11 * 0x8000000) ^ (uVar11 >> 0x13 | uVar11 * 0x2000);
      local_50 = local_50 +
                 ((local_58 >> 0x11 | local_58 * 0x8000) ^ (local_58 >> 0x13 | local_58 * 0x2000) ^
                 local_58 >> 10) +
                 ((local_4c >> 7 | local_4c << 0x19) ^ (local_4c >> 0x12 | local_4c << 0xe) ^
                 local_4c >> 3) + local_6c;
      iVar18 = uVar17 + local_50 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar21[0x18] +
               ((uVar13 ^ uVar15) & uVar11 ^ uVar15);
      uVar5 = uVar1 ^ (uVar1 >> 0xb | uVar1 * 0x200000) ^ (uVar1 >> 0x14 | uVar1 * 0x1000);
      uVar9 = uVar9 + iVar18;
      uVar17 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) + ((uVar6 ^ uVar7) & (uVar1 ^ uVar6) ^ uVar6);
      uVar5 = uVar9 ^ (uVar9 >> 5 | uVar9 * 0x8000000) ^ (uVar9 >> 0x13 | uVar9 * 0x2000);
      local_4c = local_4c +
                 ((local_54 >> 0x11 | local_54 * 0x8000) ^ (local_54 >> 0x13 | local_54 * 0x2000) ^
                 local_54 >> 10) +
                 ((local_48 >> 7 | local_48 << 0x19) ^ (local_48 >> 0x12 | local_48 << 0xe) ^
                 local_48 >> 3) + local_68;
      iVar18 = uVar15 + local_4c + (uVar5 >> 6 | uVar5 << 0x1a) + piVar21[0x19] +
               ((uVar11 ^ uVar13) & uVar9 ^ uVar13);
      uVar5 = uVar17 ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 0x14 | uVar17 * 0x1000);
      uVar7 = uVar7 + iVar18;
      uVar15 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) + ((uVar1 ^ uVar6) & (uVar17 ^ uVar1) ^ uVar1);
      uVar5 = uVar7 ^ (uVar7 >> 5 | uVar7 * 0x8000000) ^ (uVar7 >> 0x13 | uVar7 * 0x2000);
      local_48 = local_48 +
                 ((local_50 >> 0x11 | local_50 * 0x8000) ^ (local_50 >> 0x13 | local_50 * 0x2000) ^
                 local_50 >> 10) +
                 ((local_44 >> 7 | local_44 << 0x19) ^ (local_44 >> 0x12 | local_44 << 0xe) ^
                 local_44 >> 3) + local_64;
      iVar18 = uVar13 + local_48 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar21[0x1a] +
               ((uVar9 ^ uVar11) & uVar7 ^ uVar11);
      uVar5 = uVar15 ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^ (uVar15 >> 0x14 | uVar15 * 0x1000);
      uVar6 = uVar6 + iVar18;
      uVar13 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) +
               ((uVar17 ^ uVar1) & (uVar15 ^ uVar17) ^ uVar17);
      uVar5 = uVar6 ^ (uVar6 >> 5 | uVar6 * 0x8000000) ^ (uVar6 >> 0x13 | uVar6 * 0x2000);
      local_44 = local_44 +
                 ((local_4c >> 0x11 | local_4c * 0x8000) ^ (local_4c >> 0x13 | local_4c * 0x2000) ^
                 local_4c >> 10) +
                 ((local_40 >> 7 | local_40 << 0x19) ^ (local_40 >> 0x12 | local_40 << 0xe) ^
                 local_40 >> 3) + local_60;
      iVar18 = uVar11 + local_44 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar21[0x1b] +
               ((uVar7 ^ uVar9) & uVar6 ^ uVar9);
      uVar5 = uVar13 ^ (uVar13 >> 0xb | uVar13 * 0x200000) ^ (uVar13 >> 0x14 | uVar13 * 0x1000);
      uVar1 = uVar1 + iVar18;
      uVar11 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) +
               ((uVar15 ^ uVar17) & (uVar13 ^ uVar15) ^ uVar15);
      uVar5 = uVar1 ^ (uVar1 >> 5 | uVar1 * 0x8000000) ^ (uVar1 >> 0x13 | uVar1 * 0x2000);
      local_40 = local_40 +
                 ((local_48 >> 0x11 | local_48 * 0x8000) ^ (local_48 >> 0x13 | local_48 * 0x2000) ^
                 local_48 >> 10) +
                 ((local_3c >> 7 | local_3c << 0x19) ^ (local_3c >> 0x12 | local_3c << 0xe) ^
                 local_3c >> 3) + local_5c;
      iVar18 = uVar9 + local_40 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar21[0x1c] +
               ((uVar6 ^ uVar7) & uVar1 ^ uVar7);
      uVar5 = uVar11 ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^ (uVar11 >> 0x14 | uVar11 * 0x1000);
      uVar17 = uVar17 + iVar18;
      uVar9 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) +
              ((uVar13 ^ uVar15) & (uVar11 ^ uVar13) ^ uVar13);
      uVar5 = uVar17 ^ (uVar17 >> 5 | uVar17 * 0x8000000) ^ (uVar17 >> 0x13 | uVar17 * 0x2000);
      local_3c = local_3c +
                 ((local_44 >> 0x11 | local_44 * 0x8000) ^ (local_44 >> 0x13 | local_44 * 0x2000) ^
                 local_44 >> 10) +
                 ((local_38 >> 7 | local_38 << 0x19) ^ (local_38 >> 0x12 | local_38 << 0xe) ^
                 local_38 >> 3) + local_58;
      iVar18 = uVar7 + local_3c + (uVar5 >> 6 | uVar5 << 0x1a) + piVar21[0x1d] +
               ((uVar1 ^ uVar6) & uVar17 ^ uVar6);
      uVar5 = uVar9 ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 0x14 | uVar9 * 0x1000);
      uVar15 = uVar15 + iVar18;
      uVar7 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) +
              ((uVar11 ^ uVar13) & (uVar9 ^ uVar11) ^ uVar11);
      uVar5 = uVar15 ^ (uVar15 >> 5 | uVar15 * 0x8000000) ^ (uVar15 >> 0x13 | uVar15 * 0x2000);
      local_38 = local_38 +
                 ((local_40 >> 0x11 | local_40 * 0x8000) ^ (local_40 >> 0x13 | local_40 * 0x2000) ^
                 local_40 >> 10) +
                 ((local_34 >> 7 | local_34 << 0x19) ^ (local_34 >> 0x12 | local_34 << 0xe) ^
                 local_34 >> 3) + local_54;
      iVar18 = uVar6 + local_38 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar21[0x1e] +
               ((uVar17 ^ uVar1) & uVar15 ^ uVar1);
      uVar5 = uVar7 ^ (uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 >> 0x14 | uVar7 * 0x1000);
      uVar13 = uVar13 + iVar18;
      uVar6 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e) + ((uVar9 ^ uVar11) & (uVar7 ^ uVar9) ^ uVar9);
      uVar5 = uVar13 ^ (uVar13 >> 5 | uVar13 * 0x8000000) ^ (uVar13 >> 0x13 | uVar13 * 0x2000);
      local_34 = local_34 +
                 ((local_3c >> 0x11 | local_3c * 0x8000) ^ (local_3c >> 0x13 | local_3c * 0x2000) ^
                 local_3c >> 10) +
                 ((local_70 >> 7 | local_70 * 0x2000000) ^ (local_70 >> 0x12 | local_70 * 0x4000) ^
                 local_70 >> 3) + local_50;
      iVar18 = uVar1 + local_34 + (uVar5 >> 6 | uVar5 << 0x1a) + piVar21[0x1f] +
               ((uVar15 ^ uVar17) & uVar13 ^ uVar17);
      uVar1 = uVar6 ^ uVar7;
      uVar5 = uVar6 ^ (uVar6 >> 0xb | uVar6 * 0x200000) ^ (uVar6 >> 0x14 | uVar6 * 0x1000);
      uVar11 = uVar11 + iVar18;
      uVar4 = (uVar7 ^ uVar9) & uVar1 ^ uVar7;
      iVar18 = iVar18 + (uVar5 >> 2 | uVar5 << 0x1e);
      piVar20 = piVar21 + 0x10;
    } while ((piVar21[0x1f] & 0xffU) != 0xf2);
    uVar5 = iVar18 + uVar4 + *param_1;
    uVar6 = uVar6 + param_1[1];
    uVar7 = uVar7 + param_1[2];
    uVar9 = uVar9 + param_1[3];
    uVar11 = uVar11 + param_1[4];
    uVar13 = uVar13 + param_1[5];
    uVar15 = uVar15 + param_1[6];
    uVar17 = uVar17 + param_1[7];
    *param_1 = uVar5;
    param_1[1] = uVar6;
    param_1[2] = uVar7;
    param_1[3] = uVar9;
    param_1[4] = uVar11;
    param_1[5] = uVar13;
    param_1[6] = uVar15;
    param_1[7] = uVar17;
    piVar20 = piVar21 + -0x20;
  } while (param_2 != puVar3);
  return;
}

