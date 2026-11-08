// FUN_01b1bf54 @ 01b1bf54 size=692 calls_out=0 calls_in=0
// strings: 

undefined8 FUN_01b1bf54(uint *param_1,int *param_2,int *param_3)

{
  uint uVar1;
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
  
  uVar18 = (*param_2 - *param_3) + 0x1ffffffe;
  uVar2 = (param_2[1] - param_3[1]) + 0xffffffe + (uVar18 >> 0x1c);
  uVar19 = (param_2[2] - param_3[2]) + 0x1ffffffe + (uVar2 >> 0x1b);
  uVar3 = (param_2[3] - param_3[3]) + 0xffffffe + (uVar19 >> 0x1c);
  uVar4 = (param_2[4] - param_3[4]) + 0x1ffffffe + (uVar3 >> 0x1b);
  uVar5 = (param_2[5] - param_3[5]) + 0xffffffe + (uVar4 >> 0x1c);
  uVar6 = (param_2[6] - param_3[6]) + 0xffffffe + (uVar5 >> 0x1b);
  uVar7 = (param_2[7] - param_3[7]) + 0x1ffffffe + (uVar6 >> 0x1b);
  uVar8 = (param_2[8] - param_3[8]) + 0xffffffe + (uVar7 >> 0x1c);
  uVar9 = (param_2[9] - param_3[9]) + 0x1ffffffe + (uVar8 >> 0x1b);
  uVar10 = (param_2[10] - param_3[10]) + 0xffffffe + (uVar9 >> 0x1c);
  uVar17 = (param_2[0xb] - param_3[0xb]) + 0x1ffffffe + (uVar10 >> 0x1b);
  uVar16 = (param_2[0xc] - param_3[0xc]) + 0xffffffe + (uVar17 >> 0x1c);
  uVar15 = (param_2[0xd] - param_3[0xd]) + 0xffffffe + (uVar16 >> 0x1b);
  uVar14 = (param_2[0xe] - param_3[0xe]) + 0x1ffffffe + (uVar15 >> 0x1b);
  uVar13 = (param_2[0xf] - param_3[0xf]) + 0xffffffe + (uVar14 >> 0x1c);
  uVar12 = (param_2[0x10] - param_3[0x10]) + 0x1ffffffe + (uVar13 >> 0x1b);
  uVar11 = (param_2[0x11] - param_3[0x11]) + 0xffffffe + (uVar12 >> 0x1c);
  uVar1 = (param_2[0x12] - param_3[0x12]) + 0xffffffe + (uVar11 >> 0x1b);
  uVar18 = (uVar18 & 0xfffffff) + (uVar1 >> 0x1b);
  uVar2 = (uVar2 & 0x7ffffff) + (uVar18 >> 0x1c);
  *param_1 = uVar18 & 0xfffffff;
  param_1[1] = uVar2 & 0x7ffffff;
  param_1[2] = (uVar19 & 0xfffffff) + (uVar2 >> 0x1b);
  param_1[3] = uVar3 & 0x7ffffff;
  param_1[0xc] = uVar16 & 0x7ffffff;
  param_1[4] = uVar4 & 0xfffffff;
  param_1[0xd] = uVar15 & 0x7ffffff;
  param_1[5] = uVar5 & 0x7ffffff;
  param_1[0xe] = uVar14 & 0xfffffff;
  param_1[6] = uVar6 & 0x7ffffff;
  param_1[0xf] = uVar13 & 0x7ffffff;
  param_1[7] = uVar7 & 0xfffffff;
  param_1[0x10] = uVar12 & 0xfffffff;
  param_1[8] = uVar8 & 0x7ffffff;
  param_1[0x11] = uVar11 & 0x7ffffff;
  param_1[9] = uVar9 & 0xfffffff;
  param_1[0x12] = uVar1 & 0x7ffffff;
  param_1[10] = uVar10 & 0x7ffffff;
  param_1[0xb] = uVar17 & 0xfffffff;
  return 0;
}

