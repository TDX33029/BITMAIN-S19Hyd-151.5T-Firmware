// FUN_01700b68 @ 01700b68 size=504 calls_out=0 calls_in=0
// strings: 

undefined8 FUN_01700b68(uint *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  iVar9 = *param_2;
  uVar17 = (0xffffffe - param_2[1]) + (0x1ffffffeU - iVar9 >> 0x1c);
  uVar10 = (0x1ffffffe - param_2[2]) + (uVar17 >> 0x1b);
  uVar8 = (0xffffffe - param_2[3]) + (uVar10 >> 0x1c);
  uVar11 = (0x1ffffffe - param_2[4]) + (uVar8 >> 0x1b);
  uVar18 = (0xffffffe - param_2[5]) + (uVar11 >> 0x1c);
  uVar12 = (0xffffffe - param_2[6]) + (uVar18 >> 0x1b);
  uVar19 = (0x1ffffffe - param_2[7]) + (uVar12 >> 0x1b);
  uVar13 = (0xffffffe - param_2[8]) + (uVar19 >> 0x1c);
  uVar7 = (0x1ffffffe - param_2[9]) + (uVar13 >> 0x1b);
  uVar6 = (0xffffffe - param_2[10]) + (uVar7 >> 0x1c);
  uVar5 = (0x1ffffffe - param_2[0xb]) + (uVar6 >> 0x1b);
  uVar4 = (0xffffffe - param_2[0xc]) + (uVar5 >> 0x1c);
  uVar3 = (0xffffffe - param_2[0xd]) + (uVar4 >> 0x1b);
  uVar20 = (0x1ffffffe - param_2[0xe]) + (uVar3 >> 0x1b);
  uVar14 = (0xffffffe - param_2[0xf]) + (uVar20 >> 0x1c);
  uVar2 = (0x1ffffffe - param_2[0x10]) + (uVar14 >> 0x1b);
  iVar15 = param_2[0x11];
  iVar1 = param_2[0x12];
  param_1[3] = uVar8 & 0x7ffffff;
  uVar16 = (0xffffffe - iVar15) + (uVar2 >> 0x1c);
  uVar8 = (0xffffffe - iVar1) + (uVar16 >> 0x1b);
  param_1[0xc] = uVar4 & 0x7ffffff;
  param_1[4] = uVar11 & 0xfffffff;
  uVar11 = (0x1ffffffeU - iVar9 & 0xfffffff) + (uVar8 >> 0x1b);
  param_1[5] = uVar18 & 0x7ffffff;
  uVar4 = (uVar17 & 0x7ffffff) + (uVar11 >> 0x1c);
  *param_1 = uVar11 & 0xfffffff;
  param_1[6] = uVar12 & 0x7ffffff;
  param_1[7] = uVar19 & 0xfffffff;
  param_1[8] = uVar13 & 0x7ffffff;
  param_1[9] = uVar7 & 0xfffffff;
  param_1[10] = uVar6 & 0x7ffffff;
  param_1[0xb] = uVar5 & 0xfffffff;
  param_1[2] = (uVar10 & 0xfffffff) + (uVar4 >> 0x1b);
  param_1[1] = uVar4 & 0x7ffffff;
  param_1[0xd] = uVar3 & 0x7ffffff;
  param_1[0xe] = uVar20 & 0xfffffff;
  param_1[0xf] = uVar14 & 0x7ffffff;
  param_1[0x10] = uVar2 & 0xfffffff;
  param_1[0x11] = uVar16 & 0x7ffffff;
  param_1[0x12] = uVar8 & 0x7ffffff;
  return 0;
}

