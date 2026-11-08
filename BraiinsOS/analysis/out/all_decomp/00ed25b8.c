// FUN_00ed25b8 @ 00ed25b8 size=480 calls_out=0 calls_in=3
// strings: 

undefined1 * FUN_00ed25b8(byte *param_1,undefined1 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  
  bVar1 = param_1[0xf];
  bVar2 = param_1[0xe];
  bVar3 = param_1[0xd];
  uVar4 = (&DAT_00563e90)[bVar1 >> 4];
  param_2[0x17] = 0x2d;
  param_2[0x12] = 0x2d;
  param_2[0xd] = 0x2d;
  param_2[8] = 0x2d;
  uVar5 = (&DAT_00563e90)[bVar2 >> 4];
  param_2[0x22] = uVar4;
  bVar6 = param_1[0xc];
  param_2[0x20] = uVar5;
  bVar7 = param_1[0xb];
  param_2[0x1e] = (&DAT_00563e90)[bVar3 >> 4];
  bVar8 = param_1[10];
  param_2[0x1c] = (&DAT_00563e90)[bVar6 >> 4];
  bVar9 = param_1[9];
  param_2[0x1a] = (&DAT_00563e90)[bVar7 >> 4];
  bVar10 = param_1[8];
  param_2[0x18] = (&DAT_00563e90)[bVar8 >> 4];
  bVar11 = param_1[7];
  param_2[0x15] = (&DAT_00563e90)[bVar9 >> 4];
  bVar12 = param_1[4];
  param_2[0x13] = (&DAT_00563e90)[bVar10 >> 4];
  bVar13 = param_1[2];
  param_2[0x10] = (&DAT_00563e90)[bVar11 >> 4];
  bVar14 = param_1[6];
  bVar15 = param_1[1];
  uVar4 = (&DAT_00563e90)[bVar13 >> 4];
  param_2[0xe] = (&DAT_00563e90)[bVar14 >> 4];
  bVar16 = param_1[5];
  param_2[4] = uVar4;
  uVar4 = (&DAT_00563e90)[bVar15 >> 4];
  param_2[0xb] = (&DAT_00563e90)[bVar16 >> 4];
  uVar5 = (&DAT_00563e90)[bVar12 >> 4];
  param_2[2] = uVar4;
  param_2[9] = uVar5;
  bVar17 = *param_1;
  bVar18 = param_1[3];
  uVar4 = (&DAT_00563e90)[bVar18 >> 4];
  *param_2 = (&DAT_00563e90)[bVar17 >> 4];
  param_2[6] = uVar4;
  uVar4 = (&DAT_00563e90)[bVar1 & 0xf];
  param_2[7] = (&DAT_00563e90)[bVar18 & 0xf];
  param_2[0x23] = uVar4;
  param_2[0x21] = (&DAT_00563e90)[bVar2 & 0xf];
  param_2[0x1f] = (&DAT_00563e90)[bVar3 & 0xf];
  param_2[0x1d] = (&DAT_00563e90)[bVar6 & 0xf];
  uVar4 = (&DAT_00563e90)[bVar17 & 0xf];
  param_2[0x1b] = (&DAT_00563e90)[bVar7 & 0xf];
  param_2[1] = uVar4;
  param_2[0x19] = (&DAT_00563e90)[bVar8 & 0xf];
  uVar4 = (&DAT_00563e90)[bVar12 & 0xf];
  param_2[0x16] = (&DAT_00563e90)[bVar9 & 0xf];
  param_2[10] = uVar4;
  uVar4 = (&DAT_00563e90)[bVar13 & 0xf];
  param_2[0x14] = (&DAT_00563e90)[bVar10 & 0xf];
  param_2[5] = uVar4;
  uVar4 = (&DAT_00563e90)[bVar15 & 0xf];
  param_2[0x11] = (&DAT_00563e90)[bVar11 & 0xf];
  param_2[3] = uVar4;
  param_2[0xc] = (&DAT_00563e90)[bVar16 & 0xf];
  param_2[0xf] = (&DAT_00563e90)[bVar14 & 0xf];
  return param_2;
}

