// FUN_0181e4fc @ 0181e4fc size=720 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_0181e4fc(uint *param_1,int param_2,uint *param_3)

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
  int iVar19;
  
  uVar1 = param_2 >> 0x1f;
  uVar11 = param_3[1];
  uVar13 = param_3[2];
  uVar15 = param_3[3];
  uVar6 = param_3[4];
  uVar10 = (int)param_1[8] >> 0x1f;
  uVar18 = (uVar1 ^ (uVar10 & *param_3) + *param_1) - uVar1;
  uVar17 = param_3[6];
  uVar2 = param_3[5];
  uVar3 = param_3[7];
  uVar4 = param_3[8];
  uVar5 = (((uVar10 & uVar11) + param_1[1] ^ uVar1) - uVar1) + ((int)uVar18 >> 0x1e);
  uVar7 = (((uVar10 & uVar13) + param_1[2] ^ uVar1) - uVar1) + ((int)uVar5 >> 0x1e);
  uVar16 = (((uVar10 & uVar15) + param_1[3] ^ uVar1) - uVar1) + ((int)uVar7 >> 0x1e);
  uVar8 = ((uVar1 ^ (uVar10 & uVar6) + param_1[4]) - uVar1) + ((int)uVar16 >> 0x1e);
  uVar14 = (((uVar10 & uVar2) + param_1[5] ^ uVar1) - uVar1) + ((int)uVar8 >> 0x1e);
  uVar12 = (((uVar10 & uVar17) + param_1[6] ^ uVar1) - uVar1) + ((int)uVar14 >> 0x1e);
  uVar9 = ((uVar1 ^ (uVar10 & uVar3) + param_1[7]) - uVar1) + ((int)uVar12 >> 0x1e);
  iVar19 = (((uVar10 & uVar4) + param_1[8] ^ uVar1) - uVar1) + ((int)uVar9 >> 0x1e);
  uVar1 = iVar19 >> 0x1f;
  uVar10 = (uVar1 & *param_3) + (uVar18 & 0x3fffffff);
  *param_1 = uVar10 & 0x3fffffff;
  uVar10 = (uVar1 & uVar11) + (uVar5 & 0x3fffffff) + ((int)uVar10 >> 0x1e);
  uVar5 = (uVar1 & uVar13) + (uVar7 & 0x3fffffff) + ((int)uVar10 >> 0x1e);
  param_1[1] = uVar10 & 0x3fffffff;
  uVar10 = (uVar1 & uVar15) + (uVar16 & 0x3fffffff) + ((int)uVar5 >> 0x1e);
  param_1[2] = uVar5 & 0x3fffffff;
  uVar5 = (uVar6 & uVar1) + (uVar8 & 0x3fffffff) + ((int)uVar10 >> 0x1e);
  param_1[3] = uVar10 & 0x3fffffff;
  uVar10 = (uVar2 & uVar1) + (uVar14 & 0x3fffffff) + ((int)uVar5 >> 0x1e);
  uVar2 = (uVar1 & uVar17) + (uVar12 & 0x3fffffff) + ((int)uVar10 >> 0x1e);
  param_1[5] = uVar10 & 0x3fffffff;
  param_1[4] = uVar5 & 0x3fffffff;
  uVar10 = (uVar3 & uVar1) + (uVar9 & 0x3fffffff) + ((int)uVar2 >> 0x1e);
  param_1[6] = uVar2 & 0x3fffffff;
  param_1[8] = (uVar4 & uVar1) + iVar19 + ((int)uVar10 >> 0x1e);
  param_1[7] = uVar10 & 0x3fffffff;
  return 0;
}

