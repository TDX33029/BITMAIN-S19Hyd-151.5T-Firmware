// FUN_010078bc @ 010078bc size=1264 calls_out=0 calls_in=2
// strings: 

void FUN_010078bc(uint *param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  
  uVar17 = *param_1;
  uVar18 = ~param_1[2];
  *param_1 = uVar17 + param_3;
  param_1[4] = param_1[4] + param_3;
  param_1[1] = param_1[1] + (uint)CARRY4(uVar17,param_3);
  for (; 0x3f < param_3; param_3 = param_3 - 0x40) {
    uVar18 = *(uint *)(&DAT_00369e28 + (uint)param_2[0xf] * 4) ^
             *(uint *)(&DAT_0036a228 + (uint)param_2[0xe] * 4) ^
             *(uint *)(&DAT_0036a628 + (uint)param_2[0xd] * 4) ^
             *(uint *)(&DAT_0036aa28 + (uint)param_2[0xc] * 4) ^
             *(uint *)(&DAT_0036ae28 + (uint)param_2[0xb] * 4) ^
             *(uint *)(&DAT_0036b228 + (uint)param_2[10] * 4) ^
             *(uint *)(&DAT_0036b628 + (uint)param_2[9] * 4) ^
             *(uint *)(&DAT_0036ba28 + (uint)param_2[8] * 4) ^
             *(uint *)(&DAT_0036be28 + (uint)param_2[7] * 4) ^
             *(uint *)(&DAT_0036c228 + (uint)param_2[6] * 4) ^
             *(uint *)(&DAT_0036c628 + (uint)param_2[5] * 4) ^
             *(uint *)(&DAT_0036ca28 + (uint)param_2[4] * 4) ^
             *(uint *)(&DAT_0036ce28 + ((uint)param_2[3] ^ uVar18 >> 0x18) * 4) ^
             *(uint *)(&DAT_0036d228 + ((uVar18 & 0xffffff) >> 0x10 ^ (uint)param_2[2]) * 4) ^
             *(uint *)(&DAT_0036d628 + ((uVar18 & 0xffff) >> 8 ^ (uint)param_2[1]) * 4) ^
             *(uint *)(&DAT_0036da28 + (uVar18 & 0xff ^ (uint)*param_2) * 4);
    uVar18 = *(uint *)(&DAT_00369e28 + (uint)param_2[0x1f] * 4) ^
             *(uint *)(&DAT_0036a228 + (uint)param_2[0x1e] * 4) ^
             *(uint *)(&DAT_0036a628 + (uint)param_2[0x1d] * 4) ^
             *(uint *)(&DAT_0036aa28 + (uint)param_2[0x1c] * 4) ^
             *(uint *)(&DAT_0036ae28 + (uint)param_2[0x1b] * 4) ^
             *(uint *)(&DAT_0036b228 + (uint)param_2[0x1a] * 4) ^
             *(uint *)(&DAT_0036b628 + (uint)param_2[0x19] * 4) ^
             *(uint *)(&DAT_0036ba28 + (uint)param_2[0x18] * 4) ^
             *(uint *)(&DAT_0036be28 + (uint)param_2[0x17] * 4) ^
             *(uint *)(&DAT_0036c228 + (uint)param_2[0x16] * 4) ^
             *(uint *)(&DAT_0036c628 + (uint)param_2[0x15] * 4) ^
             *(uint *)(&DAT_0036ca28 + (uint)param_2[0x14] * 4) ^
             *(uint *)(&DAT_0036ce28 + ((uint)param_2[0x13] ^ uVar18 >> 0x18) * 4) ^
             *(uint *)(&DAT_0036d228 + ((uVar18 & 0xffffff) >> 0x10 ^ (uint)param_2[0x12]) * 4) ^
             *(uint *)(&DAT_0036d628 + ((uVar18 & 0xffff) >> 8 ^ (uint)param_2[0x11]) * 4) ^
             *(uint *)(&DAT_0036da28 + (uVar18 & 0xff ^ (uint)param_2[0x10]) * 4);
    uVar18 = *(uint *)(&DAT_00369e28 + (uint)param_2[0x2f] * 4) ^
             *(uint *)(&DAT_0036a228 + (uint)param_2[0x2e] * 4) ^
             *(uint *)(&DAT_0036a628 + (uint)param_2[0x2d] * 4) ^
             *(uint *)(&DAT_0036aa28 + (uint)param_2[0x2c] * 4) ^
             *(uint *)(&DAT_0036ae28 + (uint)param_2[0x2b] * 4) ^
             *(uint *)(&DAT_0036b228 + (uint)param_2[0x2a] * 4) ^
             *(uint *)(&DAT_0036b628 + (uint)param_2[0x29] * 4) ^
             *(uint *)(&DAT_0036ba28 + (uint)param_2[0x28] * 4) ^
             *(uint *)(&DAT_0036be28 + (uint)param_2[0x27] * 4) ^
             *(uint *)(&DAT_0036c228 + (uint)param_2[0x26] * 4) ^
             *(uint *)(&DAT_0036c628 + (uint)param_2[0x25] * 4) ^
             *(uint *)(&DAT_0036ca28 + (uint)param_2[0x24] * 4) ^
             *(uint *)(&DAT_0036ce28 + ((uint)param_2[0x23] ^ uVar18 >> 0x18) * 4) ^
             *(uint *)(&DAT_0036d228 + ((uVar18 & 0xffffff) >> 0x10 ^ (uint)param_2[0x22]) * 4) ^
             *(uint *)(&DAT_0036d628 + ((uVar18 & 0xffff) >> 8 ^ (uint)param_2[0x21]) * 4) ^
             *(uint *)(&DAT_0036da28 + (uVar18 & 0xff ^ (uint)param_2[0x20]) * 4);
    pbVar1 = param_2 + 0x31;
    pbVar2 = param_2 + 0x32;
    pbVar3 = param_2 + 0x33;
    pbVar4 = param_2 + 0x30;
    pbVar5 = param_2 + 0x3f;
    pbVar6 = param_2 + 0x3e;
    pbVar7 = param_2 + 0x3d;
    pbVar8 = param_2 + 0x3c;
    pbVar9 = param_2 + 0x3b;
    pbVar10 = param_2 + 0x3a;
    pbVar11 = param_2 + 0x39;
    pbVar12 = param_2 + 0x38;
    pbVar13 = param_2 + 0x37;
    pbVar14 = param_2 + 0x36;
    pbVar15 = param_2 + 0x35;
    pbVar16 = param_2 + 0x34;
    param_2 = param_2 + 0x40;
    uVar18 = *(uint *)(&DAT_0036a228 + (uint)*pbVar6 * 4) ^
             *(uint *)(&DAT_00369e28 + (uint)*pbVar5 * 4) ^
             *(uint *)(&DAT_0036a628 + (uint)*pbVar7 * 4) ^
             *(uint *)(&DAT_0036aa28 + (uint)*pbVar8 * 4) ^
             *(uint *)(&DAT_0036ae28 + (uint)*pbVar9 * 4) ^
             *(uint *)(&DAT_0036b228 + (uint)*pbVar10 * 4) ^
             *(uint *)(&DAT_0036b628 + (uint)*pbVar11 * 4) ^
             *(uint *)(&DAT_0036ba28 + (uint)*pbVar12 * 4) ^
             *(uint *)(&DAT_0036be28 + (uint)*pbVar13 * 4) ^
             *(uint *)(&DAT_0036c228 + (uint)*pbVar14 * 4) ^
             *(uint *)(&DAT_0036c628 + (uint)*pbVar15 * 4) ^
             *(uint *)(&DAT_0036ca28 + (uint)*pbVar16 * 4) ^
             *(uint *)(&DAT_0036ce28 + ((uint)*pbVar3 ^ uVar18 >> 0x18) * 4) ^
             *(uint *)(&DAT_0036d228 + ((uVar18 & 0xffffff) >> 0x10 ^ (uint)*pbVar2) * 4) ^
             *(uint *)(&DAT_0036d628 + ((uVar18 & 0xffff) >> 8 ^ (uint)*pbVar1) * 4) ^
             *(uint *)(&DAT_0036da28 + (uVar18 & 0xff ^ (uint)*pbVar4) * 4);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar18 = *(uint *)(&DAT_00369e28 + ((*param_2 ^ uVar18) & 0xff) * 4) ^ uVar18 >> 8;
    param_2 = param_2 + 1;
  }
  param_1[2] = ~uVar18;
  return;
}

