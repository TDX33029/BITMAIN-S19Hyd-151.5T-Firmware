// FUN_0181e7cc @ 0181e7cc size=396 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_0181e7cc(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar1 = param_1[9] >> 0x16;
  uVar9 = uVar1 * 0x3d1 + *param_1;
  uVar2 = param_1[1] + uVar1 * 0x40 + (uVar9 >> 0x1a);
  uVar9 = uVar9 & 0x3ffffff;
  uVar7 = param_1[2] + (uVar2 >> 0x1a);
  uVar2 = uVar2 & 0x3ffffff;
  uVar6 = param_1[3] + (uVar7 >> 0x1a);
  uVar12 = param_1[4] + (uVar6 >> 0x1a);
  uVar6 = uVar6 & 0x3ffffff;
  uVar11 = param_1[5] + (uVar12 >> 0x1a);
  uVar8 = param_1[6] + (uVar11 >> 0x1a);
  uVar10 = param_1[7] + (uVar8 >> 0x1a);
  uVar3 = param_1[8] + (uVar10 >> 0x1a);
  uVar1 = (param_1[9] & 0x3fffff) + (uVar3 >> 0x1a);
  iVar4 = uVar2 + (uVar9 + 0x3d1 >> 0x1a);
  uVar5 = (uint)((0x3fffffe < iVar4 + 0x40U && iVar4 != 0x3ffffbf) &&
                (uVar1 == 0x3fffff &&
                (uVar7 & uVar6 & uVar12 & uVar11 & uVar8 & uVar10 & uVar3) == 0x3ffffff)) |
          uVar1 >> 0x16;
  uVar9 = (-uVar5 & 0x3d1) + uVar9;
  uVar2 = uVar2 + uVar5 * 0x40 + (uVar9 >> 0x1a);
  *param_1 = uVar9 & 0x3ffffff;
  uVar5 = (uVar7 & 0x3ffffff) + (uVar2 >> 0x1a);
  param_1[1] = uVar2 & 0x3ffffff;
  uVar6 = uVar6 + (uVar5 >> 0x1a);
  param_1[2] = uVar5 & 0x3ffffff;
  uVar2 = (uVar12 & 0x3ffffff) + (uVar6 >> 0x1a);
  param_1[3] = uVar6 & 0x3ffffff;
  uVar5 = (uVar11 & 0x3ffffff) + (uVar2 >> 0x1a);
  param_1[4] = uVar2 & 0x3ffffff;
  uVar2 = (uVar8 & 0x3ffffff) + (uVar5 >> 0x1a);
  param_1[6] = uVar2 & 0x3ffffff;
  uVar2 = (uVar10 & 0x3ffffff) + (uVar2 >> 0x1a);
  param_1[5] = uVar5 & 0x3ffffff;
  param_1[7] = uVar2 & 0x3ffffff;
  uVar2 = (uVar3 & 0x3ffffff) + (uVar2 >> 0x1a);
  param_1[8] = uVar2 & 0x3ffffff;
  param_1[9] = uVar1 + (uVar2 >> 0x1a) & 0x3fffff;
  return 0;
}

