// FUN_0181ea1c @ 0181ea1c size=392 calls_out=0 calls_in=6
// strings: 

undefined8 FUN_0181ea1c(uint *param_1)

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
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint local_2c;
  
  uVar1 = param_1[9] >> 0x16;
  uVar10 = uVar1 * 0x3d1 + *param_1;
  uVar9 = param_1[1] + uVar1 * 0x40 + (uVar10 >> 0x1a);
  uVar10 = uVar10 & 0x3ffffff;
  uVar7 = param_1[2] + (uVar9 >> 0x1a);
  uVar9 = uVar9 & 0x3ffffff;
  uVar6 = param_1[3] + (uVar7 >> 0x1a);
  uVar4 = param_1[4] + (uVar6 >> 0x1a);
  uVar6 = uVar6 & 0x3ffffff;
  uVar8 = uVar7 & 0x3ffffff;
  uVar16 = param_1[5] + (uVar4 >> 0x1a);
  uVar5 = uVar4 & 0x3ffffff;
  uVar14 = param_1[6] + (uVar16 >> 0x1a);
  uVar17 = uVar16 & 0x3ffffff;
  uVar1 = param_1[7] + (uVar14 >> 0x1a);
  uVar15 = uVar14 & 0x3ffffff;
  uVar11 = param_1[8] + (uVar1 >> 0x1a);
  uVar2 = uVar1 & 0x3ffffff;
  uVar3 = (param_1[9] & 0x3fffff) + (uVar11 >> 0x1a);
  local_2c = uVar11 & 0x3ffffff;
  iVar12 = uVar9 + (uVar10 + 0x3d1 >> 0x1a);
  uVar13 = iVar12 + 0x40;
  if ((0x3fffffe < uVar13 && iVar12 != 0x3ffffbf) &&
      (uVar3 == 0x3fffff && (uVar7 & uVar6 & uVar4 & uVar16 & uVar14 & uVar1 & uVar11) == 0x3ffffff)
      || uVar3 >> 0x16 != 0) {
    uVar8 = uVar8 + (uVar13 >> 0x1a);
    uVar9 = uVar13 & 0x3ffffff;
    uVar6 = uVar6 + (uVar8 >> 0x1a);
    uVar8 = uVar8 & 0x3ffffff;
    uVar5 = uVar5 + (uVar6 >> 0x1a);
    uVar10 = uVar10 + 0x3d1 & 0x3ffffff;
    uVar6 = uVar6 & 0x3ffffff;
    uVar17 = uVar17 + (uVar5 >> 0x1a);
    uVar5 = uVar5 & 0x3ffffff;
    uVar15 = uVar15 + (uVar17 >> 0x1a);
    uVar17 = uVar17 & 0x3ffffff;
    uVar2 = uVar2 + (uVar15 >> 0x1a);
    uVar15 = uVar15 & 0x3ffffff;
    uVar1 = local_2c + (uVar2 >> 0x1a);
    uVar2 = uVar2 & 0x3ffffff;
    local_2c = uVar1 & 0x3ffffff;
    uVar3 = uVar3 + (uVar1 >> 0x1a) & 0x3fffff;
  }
  *param_1 = uVar10;
  param_1[1] = uVar9;
  param_1[2] = uVar8;
  param_1[3] = uVar6;
  param_1[4] = uVar5;
  param_1[5] = uVar17;
  param_1[6] = uVar15;
  param_1[7] = uVar2;
  param_1[8] = local_2c;
  param_1[9] = uVar3;
  return 0;
}

