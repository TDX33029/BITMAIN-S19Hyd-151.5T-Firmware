// FUN_01bc94a0 @ 01bc94a0 size=772 calls_out=0 calls_in=6
// strings: 

undefined8 FUN_01bc94a0(undefined1 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  
  uVar3 = (param_2[1] - (-((int)(*param_2 + 0xfc000013U) >> 0x1a) & 0xffU)) + 0xfe000001;
  uVar19 = (param_2[2] - (-((int)uVar3 >> 0x19) & 0xffU)) + 0xfc000001;
  uVar10 = (param_2[3] - (-((int)uVar19 >> 0x1a) & 0xffU)) + 0xfe000001;
  uVar8 = (param_2[4] - (-((int)uVar10 >> 0x19) & 0xffU)) + 0xfc000001;
  uVar17 = (param_2[5] - (-((int)uVar8 >> 0x1a) & 0xffU)) + 0xfe000001;
  uVar22 = (param_2[6] - (-((int)uVar17 >> 0x19) & 0xffU)) + 0xfc000001;
  uVar6 = (param_2[7] - (-((int)uVar22 >> 0x1a) & 0xffU)) + 0xfe000001;
  uVar15 = (param_2[8] - (-((int)uVar6 >> 0x19) & 0xffU)) + 0xfc000001;
  uVar1 = (param_2[9] - (-((int)uVar15 >> 0x1a) & 0xffU)) + 0xfe000001;
  if (uVar1 >> 0x19 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0xffffffff;
  }
  uVar13 = (uVar16 & 0x3ffffed) + (*param_2 + 0xfc000013U & 0x3ffffff);
  uVar18 = uVar16 & 0x1ffffff;
  uVar16 = uVar16 & 0x3ffffff;
  uVar4 = (uVar3 & 0x1ffffff) + uVar18 + (uVar13 >> 0x1a);
  uVar20 = (uVar19 & 0x3ffffff) + uVar16 + (uVar4 >> 0x19);
  uVar3 = uVar13 & 0x3ffffff;
  uVar11 = (uVar10 & 0x1ffffff) + uVar18 + (uVar20 >> 0x1a);
  uVar19 = (uVar8 & 0x3ffffff) + uVar16 + (uVar11 >> 0x19);
  uVar8 = (uVar17 & 0x1ffffff) + uVar18 + (uVar19 >> 0x1a);
  uVar10 = uVar4 * 4 & 0x7fffffc;
  uVar4 = (uVar22 & 0x3ffffff) + uVar16 + (uVar8 >> 0x19);
  uVar17 = uVar11 * 0x20 & 0x3fffffe0;
  uVar22 = uVar20 * 8 & 0x1ffffff8;
  uVar6 = (uVar6 & 0x1ffffff) + uVar18 + (uVar4 >> 0x1a);
  uVar15 = (uVar15 & 0x3ffffff) + uVar16 + (uVar6 >> 0x19);
  iVar9 = uVar19 * 0x40 + (uVar17 >> 0x18);
  iVar14 = uVar10 + ((uVar13 & 0x3ffffff) >> 0x18);
  iVar5 = uVar22 + (uVar10 >> 0x18);
  iVar21 = uVar17 + (uVar22 >> 0x18);
  uVar4 = uVar4 & 0x3ffffff;
  uVar6 = uVar6 * 8 & 0xffffff8;
  uVar10 = uVar15 * 0x10 & 0x3ffffff0;
  uVar17 = uVar8 & 0x1ffffff;
  *param_1 = (char)uVar3;
  param_1[1] = (char)(uVar3 >> 8);
  iVar2 = uVar4 * 2 - ((int)(uVar8 * 0x80) >> 0x1f);
  iVar23 = uVar6 + (uVar4 >> 0x17);
  iVar7 = uVar10 + (uVar6 >> 0x18);
  iVar12 = (((uVar1 & 0x1ffffff) + uVar18 + (uVar15 >> 0x1a)) * 0x40 & 0x7fffffc0) +
           (uVar10 >> 0x18);
  param_1[3] = (char)iVar14;
  param_1[6] = (char)iVar5;
  param_1[9] = (char)iVar21;
  param_1[2] = (char)(uVar3 >> 0x10);
  param_1[0xc] = (char)iVar9;
  param_1[4] = (char)((uint)iVar14 >> 8);
  param_1[5] = (char)((uint)iVar14 >> 0x10);
  param_1[7] = (char)((uint)iVar5 >> 8);
  param_1[8] = (char)((uint)iVar5 >> 0x10);
  param_1[10] = (char)((uint)iVar21 >> 8);
  param_1[0xb] = (char)((uint)iVar21 >> 0x10);
  param_1[0xd] = (char)((uint)iVar9 >> 8);
  param_1[0x10] = (char)uVar17;
  param_1[0xe] = (char)((uint)iVar9 >> 0x10);
  param_1[0x13] = (char)iVar2;
  param_1[0x11] = (char)(uVar17 >> 8);
  param_1[0x16] = (char)iVar23;
  param_1[0x14] = (char)((uint)iVar2 >> 8);
  param_1[0x19] = (char)iVar7;
  param_1[0x17] = (char)((uint)iVar23 >> 8);
  param_1[0x1c] = (char)iVar12;
  param_1[0xf] = (char)((uint)iVar9 >> 0x18);
  param_1[0x1b] = (char)((uint)iVar7 >> 0x10);
  param_1[0x12] = (char)(uVar17 >> 0x10);
  param_1[0x1d] = (char)((uint)iVar12 >> 8);
  param_1[0x15] = (char)((uint)iVar2 >> 0x10);
  param_1[0x18] = (char)((uint)iVar23 >> 0x10);
  param_1[0x1a] = (char)((uint)iVar7 >> 8);
  param_1[0x1e] = (char)((uint)iVar12 >> 0x10);
  param_1[0x1f] = (char)((uint)iVar12 >> 0x18);
  return 0;
}

