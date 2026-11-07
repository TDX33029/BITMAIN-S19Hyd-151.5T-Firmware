// FUN_01b1c208 @ 01b1c208 size=536 calls_out=0 calls_in=0
// strings: 

undefined8 FUN_01b1c208(uint *param_1,int *param_2)

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
  int iVar17;
  uint uVar18;
  int iVar19;
  
  iVar19 = *param_2;
  uVar18 = (0xffffffe - param_2[1]) + (0x1ffffffeU - iVar19 >> 0x1c);
  uVar3 = (0x1ffffffe - param_2[2]) + (uVar18 >> 0x1b);
  uVar4 = (0xffffffe - param_2[3]) + (uVar3 >> 0x1c);
  uVar5 = (0x1ffffffe - param_2[4]) + (uVar4 >> 0x1b);
  uVar6 = (0xffffffe - param_2[5]) + (uVar5 >> 0x1c);
  uVar7 = (0xffffffe - param_2[6]) + (uVar6 >> 0x1b);
  uVar8 = (0x1ffffffe - param_2[7]) + (uVar7 >> 0x1b);
  uVar9 = (0xffffffe - param_2[8]) + (uVar8 >> 0x1c);
  uVar10 = (0x1ffffffe - param_2[9]) + (uVar9 >> 0x1b);
  uVar11 = (0xffffffe - param_2[10]) + (uVar10 >> 0x1c);
  uVar16 = (0x1ffffffe - param_2[0xb]) + (uVar11 >> 0x1b);
  uVar15 = (0xffffffe - param_2[0xc]) + (uVar16 >> 0x1c);
  uVar14 = (0xffffffe - param_2[0xd]) + (uVar15 >> 0x1b);
  iVar17 = param_2[0x11];
  uVar13 = (0x1ffffffe - param_2[0xe]) + (uVar14 >> 0x1b);
  iVar1 = param_2[0x12];
  uVar12 = (0xffffffe - param_2[0xf]) + (uVar13 >> 0x1c);
  uVar2 = (0x1ffffffe - param_2[0x10]) + (uVar12 >> 0x1b);
  param_1[0xb] = uVar16 & 0xfffffff;
  param_1[0xc] = uVar15 & 0x7ffffff;
  uVar15 = (0xffffffe - iVar17) + (uVar2 >> 0x1c);
  param_1[0xd] = uVar14 & 0x7ffffff;
  param_1[0xe] = uVar13 & 0xfffffff;
  uVar13 = (0xffffffe - iVar1) + (uVar15 >> 0x1b);
  param_1[0xf] = uVar12 & 0x7ffffff;
  param_1[0x10] = uVar2 & 0xfffffff;
  uVar12 = (0x1ffffffeU - iVar19 & 0xfffffff) + (uVar13 >> 0x1b);
  param_1[0x11] = uVar15 & 0x7ffffff;
  uVar2 = (uVar18 & 0x7ffffff) + (uVar12 >> 0x1c);
  param_1[1] = uVar2 & 0x7ffffff;
  *param_1 = uVar12 & 0xfffffff;
  param_1[3] = uVar4 & 0x7ffffff;
  param_1[2] = (uVar3 & 0xfffffff) + (uVar2 >> 0x1b);
  param_1[4] = uVar5 & 0xfffffff;
  param_1[5] = uVar6 & 0x7ffffff;
  param_1[6] = uVar7 & 0x7ffffff;
  param_1[7] = uVar8 & 0xfffffff;
  param_1[8] = uVar9 & 0x7ffffff;
  param_1[9] = uVar10 & 0xfffffff;
  param_1[10] = uVar11 & 0x7ffffff;
  param_1[0x12] = uVar13 & 0x7ffffff;
  return 0;
}

