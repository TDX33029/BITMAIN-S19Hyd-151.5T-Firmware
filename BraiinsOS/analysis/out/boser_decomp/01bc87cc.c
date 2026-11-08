// FUN_01bc87cc @ 01bc87cc size=212 calls_out=0 calls_in=7
// strings: 

undefined8 FUN_01bc87cc(uint *param_1,uint *param_2)

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
  
  uVar2 = *param_2;
  uVar3 = param_2[1] + (uVar2 >> 0x1a);
  uVar6 = param_2[5];
  uVar9 = param_2[2] + (uVar3 >> 0x19);
  uVar5 = param_2[6];
  uVar4 = param_2[7];
  uVar8 = param_2[3] + (uVar9 >> 0x1a);
  uVar10 = param_2[8];
  uVar1 = param_2[9];
  uVar7 = param_2[4] + (uVar8 >> 0x19);
  param_1[3] = uVar8 & 0x1ffffff;
  uVar6 = uVar6 + (uVar7 >> 0x1a);
  param_1[4] = uVar7 & 0x3ffffff;
  uVar5 = uVar5 + (uVar6 >> 0x19);
  param_1[5] = uVar6 & 0x1ffffff;
  uVar4 = uVar4 + (uVar5 >> 0x1a);
  param_1[6] = uVar5 & 0x3ffffff;
  uVar10 = uVar10 + (uVar4 >> 0x19);
  param_1[7] = uVar4 & 0x1ffffff;
  uVar1 = uVar1 + (uVar10 >> 0x1a);
  param_1[8] = uVar10 & 0x3ffffff;
  param_1[9] = uVar1 & 0x1ffffff;
  uVar1 = (uVar1 >> 0x19) * 0x13 + (uVar2 & 0x3ffffff);
  uVar2 = (uVar3 & 0x1ffffff) + (uVar1 >> 0x1a);
  *param_1 = uVar1 & 0x3ffffff;
  param_1[1] = uVar2 & 0x1ffffff;
  param_1[2] = (uVar9 & 0x3ffffff) + (uVar2 >> 0x19);
  return 0;
}

