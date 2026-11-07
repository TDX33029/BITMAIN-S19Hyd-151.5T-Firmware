// FUN_0196c428 @ 0196c428 size=3320 calls_out=2 calls_in=4
// strings: 

void FUN_0196c428(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
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
  int iVar29;
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
  uint local_98 [16];
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
  uint local_30;
  uint local_2c;
  
  FUN_01bed93e(local_98,0,0x40);
  uVar20 = param_1[2];
  uVar40 = param_1[3];
  uVar41 = param_1[4];
  uVar15 = *param_1;
  uVar24 = param_1[1];
  iVar29 = param_2;
  do {
    iVar3 = iVar29 + 0x40;
    iVar4 = 0;
    do {
      uVar9 = *(uint *)(iVar29 + iVar4 * 4);
      local_98[iVar4] =
           uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
      ;
      uVar14 = local_98[0xf];
      uVar25 = local_98[0xe];
      uVar13 = local_98[0xd];
      uVar12 = local_98[0xc];
      uVar5 = local_98[0xb];
      uVar19 = local_98[10];
      uVar36 = local_98[9];
      uVar26 = local_98[8];
      uVar2 = local_98[7];
      uVar23 = local_98[6];
      uVar28 = local_98[5];
      uVar7 = local_98[4];
      uVar6 = local_98[3];
      uVar8 = local_98[2];
      uVar1 = local_98[1];
      uVar9 = local_98[0];
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x10);
    local_54 = local_98[1];
    local_50 = local_98[2];
    local_58 = local_98[0] + uVar41;
    local_4c = local_98[3];
    local_48 = uVar15;
    local_44 = uVar24;
    local_40 = uVar20;
    local_3c = uVar40;
    FUN_0196d120(&local_38,&local_48,&local_58,0);
    local_58 = local_38;
    local_54 = local_34;
    local_50 = local_30;
    local_4c = local_2c;
    local_2c = uVar2;
    local_38 = uVar7 + (uVar15 >> 2 | uVar15 << 0x1e);
    local_34 = uVar28;
    local_30 = uVar23;
    FUN_0196d120(&local_48,&local_58,&local_38,0);
    local_38 = uVar26 + (local_58 >> 2 | local_58 << 0x1e);
    local_2c = uVar5;
    local_30 = uVar19;
    local_34 = uVar36;
    FUN_0196d120(&local_58,&local_48,&local_38,0);
    local_38 = uVar12 + (local_48 >> 2 | local_48 << 0x1e);
    local_2c = uVar14;
    local_30 = uVar25;
    local_34 = uVar13;
    FUN_0196d120(&local_48,&local_58,&local_38,0);
    uVar21 = uVar6 ^ uVar1 ^ uVar36 ^ uVar25;
    local_34 = uVar21 >> 0x1f | uVar21 << 1;
    uVar10 = uVar8 ^ uVar9 ^ uVar26 ^ uVar13;
    local_38 = (local_58 >> 2 | local_58 << 0x1e) + (uVar10 >> 0x1f | uVar10 << 1);
    uVar32 = uVar28 ^ uVar6 ^ uVar5 ^ (uVar10 >> 0x1f | uVar10 << 1);
    uVar30 = uVar7 ^ uVar8 ^ uVar19 ^ uVar14;
    uVar9 = uVar32 >> 0x1f | uVar32 << 1;
    uVar1 = uVar30 >> 0x1f | uVar30 << 1;
    local_30 = uVar1;
    local_2c = uVar9;
    FUN_0196d120(&local_58,&local_48,&local_38,0);
    uVar16 = uVar23 ^ uVar7 ^ uVar12 ^ (uVar21 >> 0x1f | uVar21 << 1);
    local_38 = (local_48 >> 2 | local_48 << 0x1e) + (uVar16 >> 0x1f | uVar16 << 1);
    uVar27 = uVar2 ^ uVar28 ^ uVar13 ^ (uVar30 >> 0x1f | uVar30 << 1);
    uVar11 = uVar26 ^ uVar23 ^ uVar25 ^ (uVar32 >> 0x1f | uVar32 << 1);
    uVar33 = uVar36 ^ uVar2 ^ uVar14 ^ (uVar16 >> 0x1f | uVar16 << 1);
    uVar8 = uVar11 >> 0x1f | uVar11 << 1;
    uVar6 = uVar33 >> 0x1f | uVar33 << 1;
    uVar7 = uVar27 >> 0x1f | uVar27 << 1;
    local_34 = uVar7;
    local_30 = uVar8;
    local_2c = uVar6;
    FUN_0196d120(&local_48,&local_58,&local_38,1);
    uVar17 = uVar19 ^ uVar26 ^ (uVar10 >> 0x1f | uVar10 << 1) ^ (uVar27 >> 0x1f | uVar27 << 1);
    local_38 = (local_58 >> 2 | local_58 << 0x1e) + (uVar17 >> 0x1f | uVar17 << 1);
    uVar22 = uVar5 ^ uVar36 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1);
    uVar39 = uVar12 ^ uVar19 ^ (uVar30 >> 0x1f | uVar30 << 1) ^ (uVar33 >> 0x1f | uVar33 << 1);
    uVar5 = uVar13 ^ uVar5 ^ (uVar32 >> 0x1f | uVar32 << 1) ^ (uVar17 >> 0x1f | uVar17 << 1);
    uVar28 = uVar5 >> 0x1f | uVar5 << 1;
    uVar23 = uVar39 >> 0x1f | uVar39 << 1;
    uVar2 = uVar22 >> 0x1f | uVar22 << 1;
    local_34 = uVar2;
    local_30 = uVar23;
    local_2c = uVar28;
    FUN_0196d120(&local_58,&local_48,&local_38,1);
    uVar18 = uVar25 ^ uVar12 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar22 >> 0x1f | uVar22 << 1);
    local_38 = (local_48 >> 2 | local_48 << 0x1e) + (uVar18 >> 0x1f | uVar18 << 1);
    uVar37 = uVar14 ^ uVar13 ^ (uVar27 >> 0x1f | uVar27 << 1) ^ (uVar39 >> 0x1f | uVar39 << 1);
    uVar25 = uVar25 ^ (uVar10 >> 0x1f | uVar10 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1) ^
             (uVar5 >> 0x1f | uVar5 << 1);
    uVar34 = uVar14 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar33 >> 0x1f | uVar33 << 1) ^
             (uVar18 >> 0x1f | uVar18 << 1);
    uVar26 = uVar25 >> 0x1f | uVar25 << 1;
    uVar36 = uVar34 >> 0x1f | uVar34 << 1;
    uVar19 = uVar37 >> 0x1f | uVar37 << 1;
    local_34 = uVar19;
    local_30 = uVar26;
    local_2c = uVar36;
    FUN_0196d120(&local_48,&local_58,&local_38,1);
    uVar12 = uVar1 ^ (uVar10 >> 0x1f | uVar10 << 1) ^ (uVar17 >> 0x1f | uVar17 << 1) ^
             (uVar37 >> 0x1f | uVar37 << 1);
    local_38 = (local_58 >> 2 | local_58 << 0x1e) + (uVar12 >> 0x1f | uVar12 << 1);
    uVar13 = uVar7 ^ (uVar32 >> 0x1f | uVar32 << 1) ^ (uVar5 >> 0x1f | uVar5 << 1) ^
             (uVar12 >> 0x1f | uVar12 << 1);
    uVar32 = uVar9 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar22 >> 0x1f | uVar22 << 1) ^
             (uVar25 >> 0x1f | uVar25 << 1);
    uVar9 = uVar13 >> 0x1f | uVar13 << 1;
    uVar30 = (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar30 >> 0x1f | uVar30 << 1) ^
             (uVar39 >> 0x1f | uVar39 << 1) ^ (uVar34 >> 0x1f | uVar34 << 1);
    uVar1 = uVar32 >> 0x1f | uVar32 << 1;
    uVar7 = uVar30 >> 0x1f | uVar30 << 1;
    local_34 = uVar1;
    local_30 = uVar7;
    local_2c = uVar9;
    FUN_0196d120(&local_58,&local_48,&local_38,1);
    uVar14 = uVar8 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar18 >> 0x1f | uVar18 << 1) ^
             (uVar32 >> 0x1f | uVar32 << 1);
    local_38 = (local_48 >> 2 | local_48 << 0x1e) + (uVar14 >> 0x1f | uVar14 << 1);
    uVar38 = uVar6 ^ (uVar27 >> 0x1f | uVar27 << 1) ^ (uVar37 >> 0x1f | uVar37 << 1) ^
             (uVar30 >> 0x1f | uVar30 << 1);
    uVar35 = (uVar17 >> 0x1f | uVar17 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1) ^
             (uVar25 >> 0x1f | uVar25 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1);
    uVar33 = uVar2 ^ (uVar33 >> 0x1f | uVar33 << 1) ^ (uVar34 >> 0x1f | uVar34 << 1) ^
             (uVar14 >> 0x1f | uVar14 << 1);
    uVar8 = uVar35 >> 0x1f | uVar35 << 1;
    uVar6 = uVar33 >> 0x1f | uVar33 << 1;
    uVar2 = uVar38 >> 0x1f | uVar38 << 1;
    local_34 = uVar2;
    local_30 = uVar8;
    local_2c = uVar6;
    FUN_0196d120(&local_48,&local_58,&local_38,1);
    uVar10 = uVar23 ^ (uVar17 >> 0x1f | uVar17 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1) ^
             (uVar38 >> 0x1f | uVar38 << 1);
    local_38 = (local_58 >> 2 | local_58 << 0x1e) + (uVar10 >> 0x1f | uVar10 << 1);
    uVar31 = uVar28 ^ (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar32 >> 0x1f | uVar32 << 1) ^
             (uVar35 >> 0x1f | uVar35 << 1);
    uVar21 = (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar39 >> 0x1f | uVar39 << 1) ^
             (uVar30 >> 0x1f | uVar30 << 1) ^ (uVar33 >> 0x1f | uVar33 << 1);
    uVar5 = uVar19 ^ (uVar5 >> 0x1f | uVar5 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
            (uVar10 >> 0x1f | uVar10 << 1);
    uVar28 = uVar5 >> 0x1f | uVar5 << 1;
    uVar23 = uVar21 >> 0x1f | uVar21 << 1;
    uVar19 = uVar31 >> 0x1f | uVar31 << 1;
    local_34 = uVar19;
    local_30 = uVar23;
    local_2c = uVar28;
    FUN_0196d120(&local_58,&local_48,&local_38,2);
    uVar11 = uVar26 ^ (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
             (uVar31 >> 0x1f | uVar31 << 1);
    local_38 = (local_48 >> 2 | local_48 << 0x1e) + (uVar11 >> 0x1f | uVar11 << 1);
    uVar37 = uVar36 ^ (uVar37 >> 0x1f | uVar37 << 1) ^ (uVar38 >> 0x1f | uVar38 << 1) ^
             (uVar21 >> 0x1f | uVar21 << 1);
    uVar27 = (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar25 >> 0x1f | uVar25 << 1) ^
             (uVar35 >> 0x1f | uVar35 << 1) ^ (uVar5 >> 0x1f | uVar5 << 1);
    uVar34 = uVar1 ^ (uVar34 >> 0x1f | uVar34 << 1) ^ (uVar33 >> 0x1f | uVar33 << 1) ^
             (uVar11 >> 0x1f | uVar11 << 1);
    uVar1 = uVar27 >> 0x1f | uVar27 << 1;
    uVar26 = uVar34 >> 0x1f | uVar34 << 1;
    uVar36 = uVar37 >> 0x1f | uVar37 << 1;
    local_34 = uVar36;
    local_30 = uVar1;
    local_2c = uVar26;
    FUN_0196d120(&local_48,&local_58,&local_38,2);
    uVar25 = uVar7 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar10 >> 0x1f | uVar10 << 1) ^
             (uVar37 >> 0x1f | uVar37 << 1);
    local_38 = (local_58 >> 2 | local_58 << 0x1e) + (uVar25 >> 0x1f | uVar25 << 1);
    uVar16 = uVar2 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar5 >> 0x1f | uVar5 << 1) ^
             (uVar25 >> 0x1f | uVar25 << 1);
    uVar18 = uVar9 ^ (uVar32 >> 0x1f | uVar32 << 1) ^ (uVar31 >> 0x1f | uVar31 << 1) ^
             (uVar27 >> 0x1f | uVar27 << 1);
    uVar30 = (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar30 >> 0x1f | uVar30 << 1) ^
             (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar34 >> 0x1f | uVar34 << 1);
    uVar9 = uVar16 >> 0x1f | uVar16 << 1;
    uVar7 = uVar30 >> 0x1f | uVar30 << 1;
    uVar2 = uVar18 >> 0x1f | uVar18 << 1;
    local_34 = uVar2;
    local_30 = uVar7;
    local_2c = uVar9;
    FUN_0196d120(&local_58,&local_48,&local_38,2);
    uVar17 = uVar8 ^ (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1) ^
             (uVar18 >> 0x1f | uVar18 << 1);
    local_38 = (local_48 >> 2 | local_48 << 0x1e) + (uVar17 >> 0x1f | uVar17 << 1);
    uVar13 = uVar6 ^ (uVar38 >> 0x1f | uVar38 << 1) ^ (uVar37 >> 0x1f | uVar37 << 1) ^
             (uVar30 >> 0x1f | uVar30 << 1);
    uVar32 = (uVar10 >> 0x1f | uVar10 << 1) ^ (uVar35 >> 0x1f | uVar35 << 1) ^
             (uVar27 >> 0x1f | uVar27 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1);
    uVar35 = uVar19 ^ (uVar33 >> 0x1f | uVar33 << 1) ^ (uVar34 >> 0x1f | uVar34 << 1) ^
             (uVar17 >> 0x1f | uVar17 << 1);
    uVar8 = uVar35 >> 0x1f | uVar35 << 1;
    uVar6 = uVar32 >> 0x1f | uVar32 << 1;
    uVar19 = uVar13 >> 0x1f | uVar13 << 1;
    local_34 = uVar19;
    local_30 = uVar6;
    local_2c = uVar8;
    FUN_0196d120(&local_48,&local_58,&local_38,2);
    uVar22 = uVar23 ^ (uVar10 >> 0x1f | uVar10 << 1) ^ (uVar25 >> 0x1f | uVar25 << 1) ^
             (uVar13 >> 0x1f | uVar13 << 1);
    local_38 = (local_58 >> 2 | local_58 << 0x1e) + (uVar22 >> 0x1f | uVar22 << 1);
    uVar33 = uVar28 ^ (uVar31 >> 0x1f | uVar31 << 1) ^ (uVar18 >> 0x1f | uVar18 << 1) ^
             (uVar32 >> 0x1f | uVar32 << 1);
    uVar14 = (uVar11 >> 0x1f | uVar11 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
             (uVar30 >> 0x1f | uVar30 << 1) ^ (uVar35 >> 0x1f | uVar35 << 1);
    uVar5 = uVar36 ^ (uVar5 >> 0x1f | uVar5 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1) ^
            (uVar22 >> 0x1f | uVar22 << 1);
    uVar28 = uVar5 >> 0x1f | uVar5 << 1;
    uVar23 = uVar14 >> 0x1f | uVar14 << 1;
    uVar36 = uVar33 >> 0x1f | uVar33 << 1;
    local_34 = uVar36;
    local_30 = uVar23;
    local_2c = uVar28;
    FUN_0196d120(&local_58,&local_48,&local_38,2);
    uVar11 = uVar1 ^ (uVar11 >> 0x1f | uVar11 << 1) ^ (uVar17 >> 0x1f | uVar17 << 1) ^
             (uVar33 >> 0x1f | uVar33 << 1);
    local_38 = (local_48 >> 2 | local_48 << 0x1e) + (uVar11 >> 0x1f | uVar11 << 1);
    uVar21 = uVar26 ^ (uVar37 >> 0x1f | uVar37 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
             (uVar14 >> 0x1f | uVar14 << 1);
    uVar10 = (uVar25 >> 0x1f | uVar25 << 1) ^ (uVar27 >> 0x1f | uVar27 << 1) ^
             (uVar32 >> 0x1f | uVar32 << 1) ^ (uVar5 >> 0x1f | uVar5 << 1);
    uVar12 = uVar2 ^ (uVar34 >> 0x1f | uVar34 << 1) ^ (uVar35 >> 0x1f | uVar35 << 1) ^
             (uVar11 >> 0x1f | uVar11 << 1);
    uVar1 = uVar12 >> 0x1f | uVar12 << 1;
    uVar2 = uVar10 >> 0x1f | uVar10 << 1;
    uVar26 = uVar21 >> 0x1f | uVar21 << 1;
    local_34 = uVar26;
    local_30 = uVar2;
    local_2c = uVar1;
    FUN_0196d120(&local_48,&local_58,&local_38,3);
    uVar25 = uVar7 ^ (uVar25 >> 0x1f | uVar25 << 1) ^ (uVar22 >> 0x1f | uVar22 << 1) ^
             (uVar21 >> 0x1f | uVar21 << 1);
    uVar27 = uVar19 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar5 >> 0x1f | uVar5 << 1) ^
             (uVar25 >> 0x1f | uVar25 << 1);
    local_2c = uVar27 >> 0x1f | uVar27 << 1;
    uVar30 = (uVar17 >> 0x1f | uVar17 << 1) ^ (uVar30 >> 0x1f | uVar30 << 1) ^
             (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1);
    local_30 = uVar30 >> 0x1f | uVar30 << 1;
    local_38 = (local_58 >> 2 | local_58 << 0x1e) + (uVar25 >> 0x1f | uVar25 << 1);
    uVar16 = uVar9 ^ (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar33 >> 0x1f | uVar33 << 1) ^
             (uVar10 >> 0x1f | uVar10 << 1);
    uVar9 = uVar16 >> 0x1f | uVar16 << 1;
    local_34 = uVar9;
    FUN_0196d120(&local_58,&local_48,&local_38,3);
    uVar19 = uVar6 ^ (uVar17 >> 0x1f | uVar17 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1) ^
             (uVar16 >> 0x1f | uVar16 << 1);
    uVar6 = uVar36 ^ (uVar35 >> 0x1f | uVar35 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1) ^
            (uVar19 >> 0x1f | uVar19 << 1);
    local_2c = uVar6 >> 0x1f | uVar6 << 1;
    uVar7 = (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar32 >> 0x1f | uVar32 << 1) ^
            (uVar10 >> 0x1f | uVar10 << 1) ^ (uVar27 >> 0x1f | uVar27 << 1);
    local_30 = uVar7 >> 0x1f | uVar7 << 1;
    uVar36 = uVar8 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
             (uVar30 >> 0x1f | uVar30 << 1);
    local_34 = uVar36 >> 0x1f | uVar36 << 1;
    local_38 = (local_48 >> 2 | local_48 << 0x1e) + (uVar19 >> 0x1f | uVar19 << 1);
    FUN_0196d120(&local_48,&local_58,&local_38,3);
    uVar8 = uVar23 ^ (uVar22 >> 0x1f | uVar22 << 1) ^ (uVar25 >> 0x1f | uVar25 << 1) ^
            (uVar36 >> 0x1f | uVar36 << 1);
    uVar23 = uVar26 ^ (uVar5 >> 0x1f | uVar5 << 1) ^ (uVar27 >> 0x1f | uVar27 << 1) ^
             (uVar8 >> 0x1f | uVar8 << 1);
    local_2c = uVar23 >> 0x1f | uVar23 << 1;
    uVar26 = (uVar11 >> 0x1f | uVar11 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
             (uVar30 >> 0x1f | uVar30 << 1) ^ (uVar6 >> 0x1f | uVar6 << 1);
    local_30 = uVar26 >> 0x1f | uVar26 << 1;
    uVar28 = uVar28 ^ (uVar33 >> 0x1f | uVar33 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1) ^
             (uVar7 >> 0x1f | uVar7 << 1);
    local_34 = uVar28 >> 0x1f | uVar28 << 1;
    local_38 = (local_58 >> 2 | local_58 << 0x1e) + (uVar8 >> 0x1f | uVar8 << 1);
    FUN_0196d120(&local_58,&local_48,&local_38,3);
    uVar8 = uVar2 ^ (uVar11 >> 0x1f | uVar11 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1) ^
            (uVar28 >> 0x1f | uVar28 << 1);
    uVar9 = uVar9 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar6 >> 0x1f | uVar6 << 1) ^
            (uVar8 >> 0x1f | uVar8 << 1);
    local_2c = uVar9 >> 0x1f | uVar9 << 1;
    uVar9 = (uVar25 >> 0x1f | uVar25 << 1) ^ (uVar10 >> 0x1f | uVar10 << 1) ^
            (uVar7 >> 0x1f | uVar7 << 1) ^ (uVar23 >> 0x1f | uVar23 << 1);
    local_30 = uVar9 >> 0x1f | uVar9 << 1;
    uVar9 = uVar1 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar36 >> 0x1f | uVar36 << 1) ^
            (uVar26 >> 0x1f | uVar26 << 1);
    local_34 = uVar9 >> 0x1f | uVar9 << 1;
    local_38 = (local_48 >> 2 | local_48 << 0x1e) + (uVar8 >> 0x1f | uVar8 << 1);
    FUN_0196d120(&local_48,&local_58,&local_38,3);
    uVar40 = local_3c + uVar40;
    uVar20 = local_40 + uVar20;
    uVar15 = local_48 + uVar15;
    uVar41 = uVar41 + (local_58 >> 2 | local_58 << 0x1e);
    uVar24 = local_44 + uVar24;
    iVar29 = iVar3;
  } while (iVar3 != param_2 + param_3 * 0x40);
  *param_1 = uVar15;
  param_1[1] = uVar24;
  param_1[2] = uVar20;
  param_1[3] = uVar40;
  param_1[4] = uVar41;
  return;
}

