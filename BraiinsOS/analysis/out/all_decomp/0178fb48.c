// FUN_0178fb48 @ 0178fb48 size=2412 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_0178fb48(uint *param_1)

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
  undefined8 uVar16;
  
  iVar1 = DAT_018ddaf8;
  uVar2 = *param_1 ^ param_1[10] ^ param_1[0x14] ^ param_1[0x1e] ^ param_1[0x28];
  uVar9 = param_1[1] ^ param_1[0xb] ^ param_1[0x15] ^ param_1[0x1f] ^ param_1[0x29];
  uVar12 = param_1[2] ^ param_1[0xc] ^ param_1[0x16] ^ param_1[0x20] ^ param_1[0x2a];
  uVar3 = param_1[3] ^ param_1[0xd] ^ param_1[0x17] ^ param_1[0x21] ^ param_1[0x2b];
  uVar13 = param_1[4] ^ param_1[0xe] ^ param_1[0x18] ^ param_1[0x22] ^ param_1[0x2c];
  uVar4 = param_1[5] ^ param_1[0xf] ^ param_1[0x19] ^ param_1[0x23] ^ param_1[0x2d];
  uVar14 = param_1[6] ^ param_1[0x10] ^ param_1[0x1a] ^ param_1[0x24] ^ param_1[0x2e];
  uVar5 = param_1[7] ^ param_1[0x11] ^ param_1[0x1b] ^ param_1[0x25] ^ param_1[0x2f];
  uVar15 = param_1[8] ^ param_1[0x12] ^ param_1[0x1c] ^ param_1[0x26] ^ param_1[0x30];
  uVar6 = param_1[9] ^ param_1[0x13] ^ param_1[0x1d] ^ param_1[0x27] ^ param_1[0x31];
  uVar16 = FUN_0178f8b0(uVar12,uVar3,1);
  uVar7 = uVar15 ^ (uint)uVar16;
  uVar10 = uVar6 ^ (uint)((ulonglong)uVar16 >> 0x20);
  uVar16 = FUN_0178f8b0(uVar13,uVar4,1);
  uVar8 = uVar2 ^ (uint)uVar16;
  uVar11 = uVar9 ^ (uint)((ulonglong)uVar16 >> 0x20);
  uVar16 = FUN_0178f8b0(uVar14,uVar5,1);
  uVar12 = uVar12 ^ (uint)uVar16;
  uVar3 = uVar3 ^ (uint)((ulonglong)uVar16 >> 0x20);
  uVar16 = FUN_0178f8b0(uVar15,uVar6,1);
  uVar13 = uVar13 ^ (uint)uVar16;
  uVar4 = uVar4 ^ (uint)((ulonglong)uVar16 >> 0x20);
  uVar16 = FUN_0178f8b0(uVar2,uVar9,1);
  uVar14 = uVar14 ^ (uint)uVar16;
  uVar5 = uVar5 ^ (uint)((ulonglong)uVar16 >> 0x20);
  *param_1 = *param_1 ^ uVar7;
  param_1[1] = param_1[1] ^ uVar10;
  param_1[2] = param_1[2] ^ uVar8;
  param_1[3] = param_1[3] ^ uVar11;
  param_1[4] = param_1[4] ^ uVar12;
  param_1[5] = param_1[5] ^ uVar3;
  param_1[6] = param_1[6] ^ uVar13;
  param_1[7] = param_1[7] ^ uVar4;
  param_1[8] = param_1[8] ^ uVar14;
  param_1[9] = param_1[9] ^ uVar5;
  param_1[10] = param_1[10] ^ uVar7;
  param_1[0xb] = param_1[0xb] ^ uVar10;
  param_1[0xc] = param_1[0xc] ^ uVar8;
  param_1[0xd] = param_1[0xd] ^ uVar11;
  param_1[0xe] = param_1[0xe] ^ uVar12;
  param_1[0xf] = param_1[0xf] ^ uVar3;
  param_1[0x10] = param_1[0x10] ^ uVar13;
  param_1[0x11] = param_1[0x11] ^ uVar4;
  param_1[0x12] = param_1[0x12] ^ uVar14;
  param_1[0x13] = param_1[0x13] ^ uVar5;
  param_1[0x14] = param_1[0x14] ^ uVar7;
  param_1[0x15] = param_1[0x15] ^ uVar10;
  param_1[0x16] = param_1[0x16] ^ uVar8;
  param_1[0x17] = param_1[0x17] ^ uVar11;
  param_1[0x18] = param_1[0x18] ^ uVar12;
  param_1[0x19] = param_1[0x19] ^ uVar3;
  param_1[0x1a] = param_1[0x1a] ^ uVar13;
  param_1[0x1b] = param_1[0x1b] ^ uVar4;
  param_1[0x1c] = param_1[0x1c] ^ uVar14;
  param_1[0x1d] = param_1[0x1d] ^ uVar5;
  param_1[0x1e] = param_1[0x1e] ^ uVar7;
  param_1[0x1f] = param_1[0x1f] ^ uVar10;
  param_1[0x20] = param_1[0x20] ^ uVar8;
  param_1[0x21] = param_1[0x21] ^ uVar11;
  param_1[0x22] = param_1[0x22] ^ uVar12;
  param_1[0x23] = param_1[0x23] ^ uVar3;
  param_1[0x24] = param_1[0x24] ^ uVar13;
  param_1[0x25] = param_1[0x25] ^ uVar4;
  param_1[0x26] = param_1[0x26] ^ uVar14;
  param_1[0x27] = param_1[0x27] ^ uVar5;
  param_1[0x28] = param_1[0x28] ^ uVar7;
  param_1[0x29] = param_1[0x29] ^ uVar10;
  param_1[0x2a] = param_1[0x2a] ^ uVar8;
  param_1[0x2b] = param_1[0x2b] ^ uVar11;
  param_1[0x2c] = param_1[0x2c] ^ uVar12;
  param_1[0x2d] = param_1[0x2d] ^ uVar3;
  param_1[0x2e] = param_1[0x2e] ^ uVar13;
  param_1[0x2f] = param_1[0x2f] ^ uVar4;
  param_1[0x30] = param_1[0x30] ^ uVar14;
  param_1[0x31] = param_1[0x31] ^ uVar5;
  if (iVar1 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

