// FUN_01b6a3cc @ 01b6a3cc size=1744 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b6a3cc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int local_2c;
  
  iVar21 = *param_1;
  uVar19 = param_1[1];
  uVar16 = param_1[2];
  uVar20 = param_1[3];
  local_2c = param_3;
  while (local_2c != 0) {
    local_2c = local_2c + -1;
    iVar1 = FUN_01b6a2d4(param_2);
    iVar2 = FUN_01b6a2d4(param_2 + 4);
    iVar3 = FUN_01b6a2d4(param_2 + 8);
    uVar18 = ((uVar16 ^ uVar20) & uVar19 ^ uVar20) + iVar1 + iVar21;
    uVar20 = ((uVar19 ^ uVar16) & (uVar18 >> 0x1d | uVar18 * 8) ^ uVar16) + uVar20 + iVar2;
    iVar21 = FUN_01b6a2d4(param_2 + 0xc);
    uVar20 = uVar20 >> 0x19 | uVar20 * 0x80;
    uVar17 = ((uVar19 ^ (uVar18 >> 0x1d | uVar18 * 8)) & uVar20 ^ uVar19) + uVar16 + iVar3;
    iVar4 = FUN_01b6a2d4(param_2 + 0x10);
    uVar16 = ((uVar20 ^ (uVar18 >> 0x1d | uVar18 * 8)) & (uVar17 >> 0x15 | uVar17 * 0x800) ^
             (uVar18 >> 0x1d | uVar18 * 8)) + uVar19 + iVar21;
    iVar5 = FUN_01b6a2d4(param_2 + 0x14);
    uVar16 = uVar16 >> 0xd | uVar16 * 0x80000;
    uVar18 = ((uVar20 ^ (uVar17 >> 0x15 | uVar17 * 0x800)) & uVar16 ^ uVar20) +
             iVar4 + (uVar18 >> 0x1d | uVar18 * 8);
    iVar6 = FUN_01b6a2d4(param_2 + 0x18);
    uVar20 = ((uVar16 ^ (uVar17 >> 0x15 | uVar17 * 0x800)) & (uVar18 >> 0x1d | uVar18 * 8) ^
             (uVar17 >> 0x15 | uVar17 * 0x800)) + uVar20 + iVar5;
    iVar7 = FUN_01b6a2d4(param_2 + 0x1c);
    uVar20 = uVar20 >> 0x19 | uVar20 * 0x80;
    uVar19 = ((uVar16 ^ (uVar18 >> 0x1d | uVar18 * 8)) & uVar20 ^ uVar16) +
             iVar6 + (uVar17 >> 0x15 | uVar17 * 0x800);
    iVar8 = FUN_01b6a2d4(param_2 + 0x20);
    uVar16 = ((uVar20 ^ (uVar18 >> 0x1d | uVar18 * 8)) & (uVar19 >> 0x15 | uVar19 * 0x800) ^
             (uVar18 >> 0x1d | uVar18 * 8)) + uVar16 + iVar7;
    iVar9 = FUN_01b6a2d4(param_2 + 0x24);
    uVar16 = uVar16 >> 0xd | uVar16 * 0x80000;
    uVar17 = ((uVar20 ^ (uVar19 >> 0x15 | uVar19 * 0x800)) & uVar16 ^ uVar20) +
             iVar8 + (uVar18 >> 0x1d | uVar18 * 8);
    iVar10 = FUN_01b6a2d4(param_2 + 0x28);
    uVar20 = ((uVar16 ^ (uVar19 >> 0x15 | uVar19 * 0x800)) & (uVar17 >> 0x1d | uVar17 * 8) ^
             (uVar19 >> 0x15 | uVar19 * 0x800)) + uVar20 + iVar9;
    iVar11 = FUN_01b6a2d4(param_2 + 0x2c);
    uVar20 = uVar20 >> 0x19 | uVar20 * 0x80;
    uVar19 = ((uVar16 ^ (uVar17 >> 0x1d | uVar17 * 8)) & uVar20 ^ uVar16) +
             iVar10 + (uVar19 >> 0x15 | uVar19 * 0x800);
    iVar12 = FUN_01b6a2d4(param_2 + 0x30);
    uVar16 = ((uVar20 ^ (uVar17 >> 0x1d | uVar17 * 8)) & (uVar19 >> 0x15 | uVar19 * 0x800) ^
             (uVar17 >> 0x1d | uVar17 * 8)) + uVar16 + iVar11;
    iVar13 = FUN_01b6a2d4(param_2 + 0x34);
    uVar16 = uVar16 >> 0xd | uVar16 * 0x80000;
    uVar18 = ((uVar20 ^ (uVar19 >> 0x15 | uVar19 * 0x800)) & uVar16 ^ uVar20) +
             iVar12 + (uVar17 >> 0x1d | uVar17 * 8);
    iVar14 = FUN_01b6a2d4(param_2 + 0x38);
    uVar20 = ((uVar16 ^ (uVar19 >> 0x15 | uVar19 * 0x800)) & (uVar18 >> 0x1d | uVar18 * 8) ^
             (uVar19 >> 0x15 | uVar19 * 0x800)) + uVar20 + iVar13;
    iVar15 = FUN_01b6a2d4(param_2 + 0x3c);
    uVar20 = uVar20 >> 0x19 | uVar20 * 0x80;
    uVar17 = ((uVar16 ^ (uVar18 >> 0x1d | uVar18 * 8)) & uVar20 ^ uVar16) +
             iVar14 + (uVar19 >> 0x15 | uVar19 * 0x800);
    uVar19 = ((uVar20 ^ (uVar18 >> 0x1d | uVar18 * 8)) & (uVar17 >> 0x15 | uVar17 * 0x800) ^
             (uVar18 >> 0x1d | uVar18 * 8)) + uVar16 + iVar15;
    param_2 = param_2 + 0x40;
    uVar16 = uVar19 >> 0xd | uVar19 * 0x80000;
    uVar18 = ((uVar20 | uVar17 >> 0x15 | uVar17 * 0x800) & (uVar19 >> 0xd | uVar19 * 0x80000) |
             uVar20 & (uVar17 >> 0x15 | uVar17 * 0x800)) +
             iVar1 + 0x5a827999 + (uVar18 >> 0x1d | uVar18 * 8);
    uVar19 = ((uVar16 | uVar17 >> 0x15 | uVar17 * 0x800) & (uVar18 >> 0x1d | uVar18 * 8) |
             uVar16 & (uVar17 >> 0x15 | uVar17 * 0x800)) + iVar4 + 0x5a827999 + uVar20;
    uVar20 = uVar19 >> 0x1b | uVar19 * 0x20;
    uVar19 = ((uVar16 | uVar18 >> 0x1d | uVar18 * 8) & (uVar19 >> 0x1b | uVar19 * 0x20) |
             uVar16 & (uVar18 >> 0x1d | uVar18 * 8)) +
             iVar8 + 0x5a827999 + (uVar17 >> 0x15 | uVar17 * 0x800);
    uVar17 = ((uVar20 | uVar18 >> 0x1d | uVar18 * 8) & (uVar19 >> 0x17 | uVar19 * 0x200) |
             uVar20 & (uVar18 >> 0x1d | uVar18 * 8)) + iVar12 + 0x5a827999 + uVar16;
    uVar16 = uVar17 >> 0x13 | uVar17 * 0x2000;
    uVar17 = ((uVar20 | uVar19 >> 0x17 | uVar19 * 0x200) & (uVar17 >> 0x13 | uVar17 * 0x2000) |
             uVar20 & (uVar19 >> 0x17 | uVar19 * 0x200)) +
             iVar2 + 0x5a827999 + (uVar18 >> 0x1d | uVar18 * 8);
    uVar18 = ((uVar16 | uVar19 >> 0x17 | uVar19 * 0x200) & (uVar17 >> 0x1d | uVar17 * 8) |
             uVar16 & (uVar19 >> 0x17 | uVar19 * 0x200)) + iVar5 + 0x5a827999 + uVar20;
    uVar20 = uVar18 >> 0x1b | uVar18 * 0x20;
    uVar18 = ((uVar16 | uVar17 >> 0x1d | uVar17 * 8) & (uVar18 >> 0x1b | uVar18 * 0x20) |
             uVar16 & (uVar17 >> 0x1d | uVar17 * 8)) +
             iVar9 + 0x5a827999 + (uVar19 >> 0x17 | uVar19 * 0x200);
    uVar19 = ((uVar20 | uVar17 >> 0x1d | uVar17 * 8) & (uVar18 >> 0x17 | uVar18 * 0x200) |
             uVar20 & (uVar17 >> 0x1d | uVar17 * 8)) + iVar13 + 0x5a827999 + uVar16;
    uVar16 = uVar19 >> 0x13 | uVar19 * 0x2000;
    uVar19 = ((uVar20 | uVar18 >> 0x17 | uVar18 * 0x200) & (uVar19 >> 0x13 | uVar19 * 0x2000) |
             uVar20 & (uVar18 >> 0x17 | uVar18 * 0x200)) +
             iVar3 + 0x5a827999 + (uVar17 >> 0x1d | uVar17 * 8);
    uVar17 = ((uVar16 | uVar18 >> 0x17 | uVar18 * 0x200) & (uVar19 >> 0x1d | uVar19 * 8) |
             uVar16 & (uVar18 >> 0x17 | uVar18 * 0x200)) + iVar6 + 0x5a827999 + uVar20;
    uVar20 = uVar17 >> 0x1b | uVar17 * 0x20;
    uVar22 = ((uVar16 | uVar19 >> 0x1d | uVar19 * 8) & (uVar17 >> 0x1b | uVar17 * 0x20) |
             uVar16 & (uVar19 >> 0x1d | uVar19 * 8)) +
             iVar10 + 0x5a827999 + (uVar18 >> 0x17 | uVar18 * 0x200);
    uVar17 = ((uVar20 | uVar19 >> 0x1d | uVar19 * 8) & (uVar22 >> 0x17 | uVar22 * 0x200) |
             uVar20 & (uVar19 >> 0x1d | uVar19 * 8)) + iVar14 + 0x5a827999 + uVar16;
    uVar16 = uVar17 >> 0x13 | uVar17 * 0x2000;
    uVar18 = ((uVar20 | uVar22 >> 0x17 | uVar22 * 0x200) & (uVar17 >> 0x13 | uVar17 * 0x2000) |
             uVar20 & (uVar22 >> 0x17 | uVar22 * 0x200)) +
             iVar21 + 0x5a827999 + (uVar19 >> 0x1d | uVar19 * 8);
    uVar19 = ((uVar16 | uVar22 >> 0x17 | uVar22 * 0x200) & (uVar18 >> 0x1d | uVar18 * 8) |
             uVar16 & (uVar22 >> 0x17 | uVar22 * 0x200)) + iVar7 + 0x5a827999 + uVar20;
    uVar20 = uVar19 >> 0x1b | uVar19 * 0x20;
    uVar17 = ((uVar16 | uVar18 >> 0x1d | uVar18 * 8) & (uVar19 >> 0x1b | uVar19 * 0x20) |
             uVar16 & (uVar18 >> 0x1d | uVar18 * 8)) +
             iVar11 + 0x5a827999 + (uVar22 >> 0x17 | uVar22 * 0x200);
    uVar19 = uVar17 >> 0x17 | uVar17 * 0x200;
    uVar22 = ((uVar20 | uVar18 >> 0x1d | uVar18 * 8) & (uVar17 >> 0x17 | uVar17 * 0x200) |
             uVar20 & (uVar18 >> 0x1d | uVar18 * 8)) + iVar15 + 0x5a827999 + uVar16;
    uVar18 = (uVar20 ^ (uVar17 >> 0x17 | uVar17 * 0x200) ^ (uVar22 >> 0x13 | uVar22 * 0x2000)) +
             iVar1 + 0x6ed9eba1 + (uVar18 >> 0x1d | uVar18 * 8);
    uVar16 = uVar22 >> 0x13 | uVar22 * 0x2000;
    uVar17 = uVar18 >> 0x1d | uVar18 * 8;
    uVar22 = (uVar19 ^ (uVar22 >> 0x13 | uVar22 * 0x2000) ^ (uVar18 >> 0x1d | uVar18 * 8)) +
             iVar8 + 0x6ed9eba1 + uVar20;
    uVar18 = (uVar16 ^ (uVar18 >> 0x1d | uVar18 * 8) ^ (uVar22 >> 0x17 | uVar22 * 0x200)) +
             iVar4 + 0x6ed9eba1 + uVar19;
    uVar20 = uVar22 >> 0x17 | uVar22 * 0x200;
    uVar19 = uVar18 >> 0x15 | uVar18 * 0x800;
    uVar22 = (uVar17 ^ (uVar22 >> 0x17 | uVar22 * 0x200) ^ (uVar18 >> 0x15 | uVar18 * 0x800)) +
             iVar12 + 0x6ed9eba1 + uVar16;
    uVar18 = (uVar20 ^ (uVar18 >> 0x15 | uVar18 * 0x800) ^ (uVar22 >> 0x11 | uVar22 * 0x8000)) +
             iVar3 + 0x6ed9eba1 + uVar17;
    uVar16 = uVar22 >> 0x11 | uVar22 * 0x8000;
    uVar17 = uVar18 >> 0x1d | uVar18 * 8;
    uVar22 = (uVar19 ^ (uVar22 >> 0x11 | uVar22 * 0x8000) ^ (uVar18 >> 0x1d | uVar18 * 8)) +
             iVar10 + 0x6ed9eba1 + uVar20;
    uVar18 = (uVar16 ^ (uVar18 >> 0x1d | uVar18 * 8) ^ (uVar22 >> 0x17 | uVar22 * 0x200)) +
             iVar6 + 0x6ed9eba1 + uVar19;
    uVar20 = uVar22 >> 0x17 | uVar22 * 0x200;
    uVar19 = uVar18 >> 0x15 | uVar18 * 0x800;
    uVar22 = (uVar17 ^ (uVar22 >> 0x17 | uVar22 * 0x200) ^ (uVar18 >> 0x15 | uVar18 * 0x800)) +
             iVar14 + 0x6ed9eba1 + uVar16;
    uVar18 = (uVar20 ^ (uVar18 >> 0x15 | uVar18 * 0x800) ^ (uVar22 >> 0x11 | uVar22 * 0x8000)) +
             iVar2 + 0x6ed9eba1 + uVar17;
    uVar16 = uVar22 >> 0x11 | uVar22 * 0x8000;
    uVar17 = uVar18 >> 0x1d | uVar18 * 8;
    uVar23 = (uVar19 ^ (uVar22 >> 0x11 | uVar22 * 0x8000) ^ (uVar18 >> 0x1d | uVar18 * 8)) +
             iVar9 + 0x6ed9eba1 + uVar20;
    uVar22 = (uVar16 ^ (uVar18 >> 0x1d | uVar18 * 8) ^ (uVar23 >> 0x17 | uVar23 * 0x200)) +
             iVar5 + 0x6ed9eba1 + uVar19;
    uVar20 = uVar23 >> 0x17 | uVar23 * 0x200;
    uVar19 = uVar22 >> 0x15 | uVar22 * 0x800;
    uVar16 = (uVar17 ^ (uVar23 >> 0x17 | uVar23 * 0x200) ^ (uVar22 >> 0x15 | uVar22 * 0x800)) +
             iVar13 + 0x6ed9eba1 + uVar16;
    uVar18 = uVar16 >> 0x11 | uVar16 * 0x8000;
    uVar17 = (uVar20 ^ (uVar22 >> 0x15 | uVar22 * 0x800) ^ (uVar16 >> 0x11 | uVar16 * 0x8000)) +
             iVar21 + 0x6ed9eba1 + uVar17;
    uVar16 = (uVar19 ^ (uVar16 >> 0x11 | uVar16 * 0x8000) ^ (uVar17 >> 0x1d | uVar17 * 8)) +
             iVar11 + 0x6ed9eba1 + uVar20;
    uVar20 = uVar16 >> 0x17 | uVar16 * 0x200;
    uVar19 = (uVar18 ^ (uVar17 >> 0x1d | uVar17 * 8) ^ (uVar16 >> 0x17 | uVar16 * 0x200)) +
             iVar7 + 0x6ed9eba1 + uVar19;
    iVar21 = *param_1 + (uVar17 >> 0x1d | uVar17 * 8);
    *param_1 = iVar21;
    uVar16 = param_1[2] + (uVar19 >> 0x15 | uVar19 * 0x800);
    uVar19 = (uVar20 ^ (uVar17 >> 0x1d | uVar17 * 8) ^ (uVar19 >> 0x15 | uVar19 * 0x800)) +
             iVar15 + 0x6ed9eba1 + uVar18;
    uVar19 = param_1[1] + (uVar19 >> 0x11 | uVar19 * 0x8000);
    param_1[2] = uVar16;
    uVar20 = uVar20 + param_1[3];
    param_1[1] = uVar19;
    param_1[3] = uVar20;
  }
  return 0;
}

