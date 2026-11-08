// FUN_01b7f154 @ 01b7f154 size=3384 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b7f154(uint *param_1)

{
  int iVar1;
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
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  iVar1 = DAT_01d53560;
  uVar2 = *param_1;
  uVar12 = param_1[1];
  uVar3 = param_1[10];
  uVar13 = param_1[0xb];
  uVar4 = param_1[0x14];
  uVar14 = param_1[0x15];
  uVar5 = param_1[0x1e];
  uVar15 = param_1[0x1f];
  uVar6 = param_1[0x28];
  uVar16 = param_1[0x29];
  uVar7 = param_1[2];
  uVar17 = param_1[3];
  uVar8 = param_1[0xc];
  uVar18 = param_1[0xd];
  uVar9 = param_1[0x16];
  uVar19 = param_1[0x17];
  uVar10 = param_1[0x20];
  uVar20 = param_1[0x21];
  uVar11 = param_1[0x2a];
  uVar21 = param_1[0x2b];
  *param_1 = *param_1 ^ ~param_1[2] & param_1[4];
  param_1[1] = param_1[1] ^ ~param_1[3] & param_1[5];
  param_1[10] = param_1[10] ^ ~param_1[0xc] & param_1[0xe];
  param_1[0xb] = ~param_1[0xd] & param_1[0xf] ^ param_1[0xb];
  param_1[0x14] = param_1[0x14] ^ ~param_1[0x16] & param_1[0x18];
  param_1[0x15] = ~param_1[0x17] & param_1[0x19] ^ param_1[0x15];
  param_1[0x1e] = param_1[0x1e] ^ ~param_1[0x20] & param_1[0x22];
  param_1[0x1f] = ~param_1[0x21] & param_1[0x23] ^ param_1[0x1f];
  param_1[0x28] = param_1[0x28] ^ ~param_1[0x2a] & param_1[0x2c];
  param_1[0x29] = ~param_1[0x2b] & param_1[0x2d] ^ param_1[0x29];
  param_1[2] = param_1[2] ^ ~param_1[4] & param_1[6];
  param_1[3] = ~param_1[5] & param_1[7] ^ param_1[3];
  param_1[0xc] = param_1[0xc] ^ ~param_1[0xe] & param_1[0x10];
  param_1[0xd] = ~param_1[0xf] & param_1[0x11] ^ param_1[0xd];
  param_1[0x16] = param_1[0x16] ^ ~param_1[0x18] & param_1[0x1a];
  param_1[0x17] = ~param_1[0x19] & param_1[0x1b] ^ param_1[0x17];
  param_1[0x20] = param_1[0x20] ^ ~param_1[0x22] & param_1[0x24];
  param_1[0x21] = ~param_1[0x23] & param_1[0x25] ^ param_1[0x21];
  param_1[0x2a] = param_1[0x2a] ^ ~param_1[0x2c] & param_1[0x2e];
  param_1[0x2b] = ~param_1[0x2d] & param_1[0x2f] ^ param_1[0x2b];
  param_1[4] = param_1[4] ^ ~param_1[6] & param_1[8];
  param_1[5] = ~param_1[7] & param_1[9] ^ param_1[5];
  param_1[0xe] = param_1[0xe] ^ ~param_1[0x10] & param_1[0x12];
  param_1[0xf] = ~param_1[0x11] & param_1[0x13] ^ param_1[0xf];
  param_1[0x18] = param_1[0x18] ^ ~param_1[0x1a] & param_1[0x1c];
  param_1[0x19] = ~param_1[0x1b] & param_1[0x1d] ^ param_1[0x19];
  param_1[0x22] = param_1[0x22] ^ ~param_1[0x24] & param_1[0x26];
  param_1[0x23] = ~param_1[0x25] & param_1[0x27] ^ param_1[0x23];
  param_1[0x2c] = param_1[0x2c] ^ ~param_1[0x2e] & param_1[0x30];
  param_1[0x2d] = ~param_1[0x2f] & param_1[0x31] ^ param_1[0x2d];
  param_1[6] = param_1[6] ^ ~param_1[8] & uVar2;
  param_1[7] = ~param_1[9] & uVar12 ^ param_1[7];
  param_1[0x10] = param_1[0x10] ^ ~param_1[0x12] & uVar3;
  param_1[0x11] = ~param_1[0x13] & uVar13 ^ param_1[0x11];
  param_1[0x1a] = param_1[0x1a] ^ ~param_1[0x1c] & uVar4;
  param_1[0x1b] = ~param_1[0x1d] & uVar14 ^ param_1[0x1b];
  param_1[0x24] = param_1[0x24] ^ ~param_1[0x26] & uVar5;
  param_1[0x25] = ~param_1[0x27] & uVar15 ^ param_1[0x25];
  param_1[0x2e] = param_1[0x2e] ^ ~param_1[0x30] & uVar6;
  param_1[0x2f] = ~param_1[0x31] & uVar16 ^ param_1[0x2f];
  param_1[8] = param_1[8] ^ ~uVar2 & uVar7;
  param_1[9] = ~uVar12 & uVar17 ^ param_1[9];
  param_1[0x12] = param_1[0x12] ^ ~uVar3 & uVar8;
  param_1[0x13] = ~uVar13 & uVar18 ^ param_1[0x13];
  param_1[0x1c] = param_1[0x1c] ^ ~uVar4 & uVar9;
  param_1[0x1d] = ~uVar14 & uVar19 ^ param_1[0x1d];
  param_1[0x26] = param_1[0x26] ^ ~uVar5 & uVar10;
  param_1[0x27] = ~uVar15 & uVar20 ^ param_1[0x27];
  param_1[0x30] = param_1[0x30] ^ ~uVar6 & uVar11;
  param_1[0x31] = ~uVar16 & uVar21 ^ param_1[0x31];
  if (iVar1 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

