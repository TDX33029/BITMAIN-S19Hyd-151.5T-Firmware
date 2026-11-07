// FUN_0170068c @ 0170068c size=584 calls_out=0 calls_in=0
// strings: 

undefined8 FUN_0170068c(uint *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
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
  int iVar21;
  uint uVar22;
  
  iVar3 = *param_3;
  iVar21 = *param_2;
  uVar16 = param_2[1] + param_3[1] + ((uint)(iVar21 + iVar3) >> 0x1c);
  uVar4 = param_2[2] + param_3[2] + (uVar16 >> 0x1b);
  uVar14 = param_2[3] + param_3[3] + (uVar4 >> 0x1c);
  uVar17 = param_2[4] + param_3[4] + (uVar14 >> 0x1b);
  uVar5 = param_2[5] + param_3[5] + (uVar17 >> 0x1c);
  uVar18 = param_2[6] + param_3[6] + (uVar5 >> 0x1b);
  uVar6 = param_2[7] + param_3[7] + (uVar18 >> 0x1b);
  uVar19 = param_2[8] + param_3[8] + (uVar6 >> 0x1c);
  uVar7 = param_2[9] + param_3[9] + (uVar19 >> 0x1b);
  uVar13 = param_2[10] + param_3[10] + (uVar7 >> 0x1c);
  uVar12 = param_2[0xb] + param_3[0xb] + (uVar13 >> 0x1b);
  uVar11 = param_2[0xc] + param_3[0xc] + (uVar12 >> 0x1c);
  uVar10 = param_2[0xd] + param_3[0xd] + (uVar11 >> 0x1b);
  uVar9 = param_2[0xe] + param_3[0xe] + (uVar10 >> 0x1b);
  iVar15 = param_2[0x11];
  uVar22 = param_2[0xf] + param_3[0xf] + (uVar9 >> 0x1c);
  iVar1 = param_2[0x12];
  iVar8 = param_3[0x11];
  uVar20 = param_2[0x10] + param_3[0x10] + (uVar22 >> 0x1b);
  iVar2 = param_3[0x12];
  param_1[3] = uVar14 & 0x7ffffff;
  param_1[5] = uVar5 & 0x7ffffff;
  uVar14 = iVar15 + iVar8 + (uVar20 >> 0x1c);
  param_1[6] = uVar18 & 0x7ffffff;
  uVar5 = iVar1 + iVar2 + (uVar14 >> 0x1b);
  param_1[7] = uVar6 & 0xfffffff;
  param_1[4] = uVar17 & 0xfffffff;
  param_1[8] = uVar19 & 0x7ffffff;
  param_1[9] = uVar7 & 0xfffffff;
  param_1[10] = uVar13 & 0x7ffffff;
  param_1[0xf] = uVar22 & 0x7ffffff;
  param_1[0x10] = uVar20 & 0xfffffff;
  param_1[0x11] = uVar14 & 0x7ffffff;
  uVar6 = (iVar21 + iVar3 & 0xfffffffU) + (uVar5 >> 0x1b);
  param_1[0x12] = uVar5 & 0x7ffffff;
  *param_1 = uVar6 & 0xfffffff;
  uVar5 = (uVar16 & 0x7ffffff) + (uVar6 >> 0x1c);
  param_1[0xb] = uVar12 & 0xfffffff;
  param_1[1] = uVar5 & 0x7ffffff;
  param_1[0xc] = uVar11 & 0x7ffffff;
  param_1[0xd] = uVar10 & 0x7ffffff;
  param_1[0xe] = uVar9 & 0xfffffff;
  param_1[2] = (uVar4 & 0xfffffff) + (uVar5 >> 0x1b);
  return 0;
}

