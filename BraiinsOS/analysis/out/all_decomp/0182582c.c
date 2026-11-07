// FUN_0182582c @ 0182582c size=620 calls_out=0 calls_in=6
// strings: 

undefined8 FUN_0182582c(uint *param_1,uint *param_2,uint *param_3)

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
  bool bVar12;
  bool bVar13;
  
  uVar5 = param_2[7];
  uVar6 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  *param_1 = uVar6;
  uVar5 = param_2[6];
  uVar7 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  param_1[1] = uVar7;
  uVar5 = param_2[5];
  uVar2 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  param_1[2] = uVar2;
  uVar3 = param_2[4];
  uVar9 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
  param_1[3] = uVar9;
  uVar5 = param_2[3];
  uVar8 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  param_1[4] = uVar8;
  uVar10 = param_2[2];
  uVar10 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18;
  param_1[5] = uVar10;
  if (0xfffffffd < uVar8) {
    uVar3 = 0;
  }
  uVar11 = param_2[1];
  if (uVar8 < 0xfffffffe) {
    uVar3 = 1;
  }
  uVar4 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18;
  param_1[6] = uVar4;
  uVar11 = *param_2;
  uVar11 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18;
  uVar3 = (uVar10 & uVar4 & uVar11) != 0xffffffff | uVar3;
  uVar5 = (uint)(uVar5 == 0xffffffff) & ~uVar3;
  bVar13 = 0xd036413f < uVar6;
  bVar12 = uVar6 == 0xd0364140;
  if (uVar6 < 0xd0364141) {
    bVar13 = 0xbfd25e8b < uVar7;
    bVar12 = uVar7 == 0xbfd25e8c;
  }
  if (uVar9 < 0xbaaedce6) {
    uVar1 = ~uVar5 & 1;
  }
  else {
    uVar1 = 0;
  }
  uVar1 = uVar1 | uVar3;
  if (uVar9 < 0xbaaedce7) {
    uVar3 = 0;
  }
  else {
    uVar3 = ~uVar1 & 1;
  }
  uVar3 = uVar3 | uVar5;
  if (uVar2 < 0xaf48a03b) {
    uVar5 = ~uVar3 & 1;
  }
  else {
    uVar5 = 0;
  }
  uVar5 = uVar5 | uVar1;
  if (uVar2 < 0xaf48a03c) {
    uVar1 = 0;
  }
  else {
    uVar1 = ~uVar5 & 1;
  }
  uVar1 = uVar1 | uVar3;
  if (uVar7 < 0xbfd25e8c) {
    uVar3 = ~uVar1 & 1;
  }
  else {
    uVar3 = 0;
  }
  uVar1 = (uint)(bVar13 && !bVar12) & ~(uVar3 | uVar5) | uVar1;
  uVar3 = -uVar1;
  *param_1 = uVar6 + (uVar3 & 0x2fc9bebf);
  uVar5 = (uint)CARRY4(uVar6,uVar3 & 0x2fc9bebf);
  uVar6 = (uVar3 & 0x402da173) + uVar7;
  param_1[1] = uVar6 + uVar5;
  uVar7 = (uint)CARRY4(uVar3 & 0x402da173,uVar7) + (uint)CARRY4(uVar6,uVar5);
  uVar6 = (uVar3 & 0x50b75fc4) + uVar2;
  uVar5 = (uint)CARRY4(uVar3 & 0x50b75fc4,uVar2) + (uint)CARRY4(uVar6,uVar7);
  uVar2 = (uVar3 & 0x45512319) + uVar9;
  param_1[3] = uVar2 + uVar5;
  uVar5 = (uint)CARRY4(uVar3 & 0x45512319,uVar9) + (uint)CARRY4(uVar2,uVar5);
  param_1[2] = uVar6 + uVar7;
  param_1[4] = uVar8 + uVar1 + uVar5;
  uVar2 = (uint)CARRY4(uVar8,uVar1) + (uint)CARRY4(uVar8 + uVar1,uVar5);
  uVar5 = (uint)CARRY4(uVar10,uVar2);
  param_1[5] = uVar10 + uVar2;
  param_1[6] = uVar4 + uVar5;
  param_1[7] = uVar11 + CARRY4(uVar4,uVar5);
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar1;
  }
  return 0;
}

