// FUN_01825594 @ 01825594 size=664 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01825594(int *param_1,uint *param_2,uint *param_3)

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
  bool bVar14;
  bool bVar15;
  
  uVar2 = *param_2 + *param_3;
  uVar1 = (uint)CARRY4(*param_2,*param_3);
  uVar4 = param_2[1] + param_3[1];
  uVar5 = uVar4 + uVar1;
  uVar1 = (uint)CARRY4(param_2[1],param_3[1]) + (uint)CARRY4(uVar4,uVar1);
  uVar4 = param_2[2] + param_3[2];
  uVar3 = uVar4 + uVar1;
  uVar1 = (uint)CARRY4(param_2[2],param_3[2]) + (uint)CARRY4(uVar4,uVar1);
  uVar4 = param_2[3] + param_3[3];
  uVar13 = uVar4 + uVar1;
  uVar1 = (uint)CARRY4(param_2[3],param_3[3]) + (uint)CARRY4(uVar4,uVar1);
  uVar4 = param_2[4] + param_3[4];
  uVar12 = uVar4 + uVar1;
  uVar8 = (uint)CARRY4(param_2[4],param_3[4]) + (uint)CARRY4(uVar4,uVar1);
  uVar1 = param_2[5] + param_3[5];
  uVar4 = uVar1 + uVar8;
  uVar6 = (uint)CARRY4(param_2[5],param_3[5]) + (uint)CARRY4(uVar1,uVar8);
  uVar1 = param_2[6] + param_3[6];
  uVar8 = uVar1 + uVar6;
  uVar9 = (uint)CARRY4(param_2[6],param_3[6]) + (uint)CARRY4(uVar1,uVar6);
  uVar6 = param_2[7] + param_3[7];
  uVar7 = uVar6 + uVar9;
  uVar1 = (uint)((uVar4 & uVar8 & uVar7) != 0xffffffff || uVar12 < 0xfffffffe);
  uVar11 = (uint)(uVar12 == 0xffffffff) & ~uVar1;
  if (uVar13 < 0xbaaedce6) {
    uVar10 = ~uVar11 & 1;
  }
  else {
    uVar10 = 0;
  }
  uVar10 = uVar10 | uVar1;
  if (uVar13 < 0xbaaedce7) {
    uVar1 = 0;
  }
  else {
    uVar1 = ~uVar10 & 1;
  }
  uVar1 = uVar1 | uVar11;
  if (uVar3 < 0xaf48a03b) {
    uVar11 = ~uVar1 & 1;
  }
  else {
    uVar11 = 0;
  }
  uVar11 = uVar11 | uVar10;
  if (uVar3 < 0xaf48a03c) {
    uVar10 = 0;
  }
  else {
    uVar10 = ~uVar11 & 1;
  }
  uVar10 = uVar10 | uVar1;
  if (uVar5 < 0xbfd25e8c) {
    uVar1 = ~uVar10 & 1;
  }
  else {
    uVar1 = 0;
  }
  bVar15 = 0xd036413f < uVar2;
  bVar14 = uVar2 == 0xd0364140;
  if (uVar2 < 0xd0364141) {
    bVar15 = 0xbfd25e8b < uVar5;
    bVar14 = uVar5 == 0xbfd25e8c;
  }
  uVar9 = ((uint)(bVar15 && !bVar14) & ~(uVar1 | uVar11) | uVar10) +
          (uint)CARRY4(param_2[7],param_3[7]) + (uint)CARRY4(uVar6,uVar9);
  *param_1 = uVar9 * 0x2fc9bebf + uVar2;
  uVar1 = (uint)CARRY4(uVar9 * 0x2fc9bebf,uVar2);
  uVar6 = uVar9 * 0x402da173 + uVar5;
  uVar5 = (uint)CARRY4(uVar9 * 0x402da173,uVar5) + (uint)CARRY4(uVar6,uVar1);
  uVar2 = uVar3 + uVar9 * 0x50b75fc4;
  param_1[1] = uVar6 + uVar1;
  uVar1 = (uint)CARRY4(uVar3,uVar9 * 0x50b75fc4) + (uint)CARRY4(uVar2,uVar5);
  uVar3 = uVar13 + uVar9 * 0x45512319;
  param_1[2] = uVar2 + uVar5;
  param_1[3] = uVar3 + uVar1;
  uVar2 = (uint)CARRY4(uVar13,uVar9 * 0x45512319) + (uint)CARRY4(uVar3,uVar1);
  uVar1 = (uint)CARRY4(uVar12,uVar9) + (uint)CARRY4(uVar12 + uVar9,uVar2);
  param_1[4] = uVar12 + uVar9 + uVar2;
  param_1[5] = uVar4 + uVar1;
  uVar1 = (uint)CARRY4(uVar4,uVar1);
  param_1[6] = uVar8 + uVar1;
  param_1[7] = uVar7 + CARRY4(uVar8,uVar1);
  return 0;
}

