// FUN_00652328 @ 00652328 size=368 calls_out=0 calls_in=2
// strings: 

void FUN_00652328(uint *param_1,uint *param_2,uint *param_3)

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
  
  uVar7 = param_2[1];
  uVar5 = param_2[2];
  uVar14 = param_2[3];
  uVar11 = (param_3[1] ^ uVar7 >> 1) & 0x55555555;
  uVar8 = (*param_3 ^ *param_2 >> 1) & 0x55555555;
  uVar3 = uVar8 ^ *param_3;
  uVar1 = uVar11 ^ param_3[1];
  uVar4 = (uVar1 ^ uVar3 >> 2) & 0x33333333;
  uVar1 = uVar4 ^ uVar1;
  uVar13 = (param_3[2] ^ uVar5 >> 1) & 0x55555555;
  uVar6 = (param_3[3] ^ uVar14 >> 1) & 0x55555555;
  uVar2 = uVar13 ^ param_3[2];
  uVar10 = uVar6 ^ param_3[3];
  uVar9 = (uVar10 ^ uVar2 >> 2) & 0x33333333;
  uVar10 = uVar9 ^ uVar10;
  uVar12 = *param_2 ^ uVar8 << 1;
  uVar15 = (uVar10 ^ uVar1 >> 4) & 0xf0f0f0f;
  param_1[7] = uVar15 ^ uVar10;
  uVar7 = uVar7 ^ uVar11 << 1;
  uVar8 = (uVar7 ^ uVar12 >> 2) & 0x33333333;
  uVar7 = uVar8 ^ uVar7;
  uVar5 = uVar5 ^ uVar13 << 1;
  uVar12 = uVar12 ^ uVar8 << 2;
  uVar14 = uVar14 ^ uVar6 << 1;
  uVar6 = (uVar14 ^ uVar5 >> 2) & 0x33333333;
  uVar14 = uVar6 ^ uVar14;
  uVar5 = uVar5 ^ uVar6 << 2;
  uVar6 = (uVar14 ^ uVar7 >> 4) & 0xf0f0f0f;
  param_1[6] = uVar6 ^ uVar14;
  uVar14 = (uVar5 ^ uVar12 >> 4) & 0xf0f0f0f;
  param_1[2] = uVar7 ^ uVar6 << 4;
  uVar3 = uVar3 ^ uVar4 << 2;
  param_1[4] = uVar14 ^ uVar5;
  uVar2 = uVar2 ^ uVar9 << 2;
  uVar6 = (uVar2 ^ uVar3 >> 4) & 0xf0f0f0f;
  param_1[5] = uVar6 ^ uVar2;
  param_1[1] = uVar3 ^ uVar6 << 4;
  param_1[3] = uVar1 ^ uVar15 << 4;
  *param_1 = uVar12 ^ uVar14 << 4;
  return;
}

