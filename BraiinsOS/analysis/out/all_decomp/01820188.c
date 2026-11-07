// FUN_01820188 @ 01820188 size=416 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01820188(uint *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
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
  
  uVar8 = *param_1;
  uVar11 = param_1[1];
  uVar5 = param_1[2];
  uVar4 = param_1[3];
  uVar14 = param_1[4];
  uVar13 = param_1[5];
  uVar3 = param_1[6];
  uVar1 = -param_2;
  uVar10 = param_1[7];
  uVar9 = (uVar8 ^ uVar1) + (uVar1 & 0xd0364142);
  uVar12 = (uint)CARRY4(uVar8 ^ uVar1,uVar1 & 0xd0364142);
  if (((((((uVar11 == 0 && uVar8 == 0) && uVar5 == 0) && uVar4 == 0) && uVar14 == 0) && uVar13 == 0)
      && uVar3 == 0) && uVar10 == 0) {
    uVar9 = 0;
  }
  uVar6 = (uVar11 ^ uVar1) + (uVar1 & 0xbfd25e8c);
  uVar7 = uVar6 + uVar12;
  uVar12 = (uint)CARRY4(uVar11 ^ uVar1,uVar1 & 0xbfd25e8c) + (uint)CARRY4(uVar6,uVar12);
  if (((((((uVar11 == 0 && uVar8 == 0) && uVar5 == 0) && uVar4 == 0) && uVar14 == 0) && uVar13 == 0)
      && uVar3 == 0) && uVar10 == 0) {
    uVar7 = 0;
  }
  param_1[1] = uVar7;
  *param_1 = uVar9;
  uVar9 = (uVar5 ^ uVar1) + (uVar1 & 0xaf48a03b);
  uVar6 = uVar9 + uVar12;
  uVar12 = (uint)CARRY4(uVar5 ^ uVar1,uVar1 & 0xaf48a03b) + (uint)CARRY4(uVar9,uVar12);
  if (((((((uVar11 == 0 && uVar8 == 0) && uVar5 == 0) && uVar4 == 0) && uVar14 == 0) && uVar13 == 0)
      && uVar3 == 0) && uVar10 == 0) {
    uVar6 = 0;
  }
  uVar9 = (uVar4 ^ uVar1) + (uVar1 & 0xbaaedce6);
  param_1[2] = uVar6;
  uVar6 = uVar9 + uVar12;
  uVar12 = (uint)CARRY4(uVar4 ^ uVar1,uVar1 & 0xbaaedce6) + (uint)CARRY4(uVar9,uVar12);
  if (((((((uVar11 == 0 && uVar8 == 0) && uVar5 == 0) && uVar4 == 0) && uVar14 == 0) && uVar13 == 0)
      && uVar3 == 0) && uVar10 == 0) {
    uVar6 = 0;
  }
  param_1[3] = uVar6;
  uVar9 = (uVar14 ^ uVar1) + (uVar1 & 0xfffffffe);
  uVar6 = uVar9 + uVar12;
  uVar12 = (uint)CARRY4(uVar14 ^ uVar1,uVar1 & 0xfffffffe) + (uint)CARRY4(uVar9,uVar12);
  if (((((((uVar11 == 0 && uVar8 == 0) && uVar5 == 0) && uVar4 == 0) && uVar14 == 0) && uVar13 == 0)
      && uVar3 == 0) && uVar10 == 0) {
    uVar6 = 0;
  }
  uVar9 = (uVar13 ^ uVar1) + uVar1;
  param_1[4] = uVar6;
  uVar6 = uVar9 + uVar12;
  uVar12 = (uint)CARRY4(uVar13 ^ uVar1,uVar1) + (uint)CARRY4(uVar9,uVar12);
  if (((((((uVar11 == 0 && uVar8 == 0) && uVar5 == 0) && uVar4 == 0) && uVar14 == 0) && uVar13 == 0)
      && uVar3 == 0) && uVar10 == 0) {
    uVar6 = 0;
  }
  param_1[5] = uVar6;
  uVar9 = (uVar1 ^ uVar3) + uVar1;
  uVar6 = uVar9 + uVar12;
  if (((((((uVar11 == 0 && uVar8 == 0) && uVar5 == 0) && uVar4 == 0) && uVar14 == 0) && uVar13 == 0)
      && uVar3 == 0) && uVar10 == 0) {
    uVar6 = 0;
  }
  uVar7 = (uVar10 ^ uVar1) + uVar1;
  param_1[6] = uVar6;
  if (((((((uVar11 != 0 || uVar8 != 0) || uVar5 != 0) || uVar4 != 0) || uVar14 != 0) || uVar13 != 0)
      || uVar3 != 0) || uVar10 != 0) {
    uVar7 = uVar7 + (uint)CARRY4(uVar1 ^ uVar3,uVar1) + (uint)CARRY4(uVar9,uVar12);
  }
  if (((((((uVar11 == 0 && uVar8 == 0) && uVar5 == 0) && uVar4 == 0) && uVar14 == 0) && uVar13 == 0)
      && uVar3 == 0) && uVar10 == 0) {
    uVar7 = 0;
  }
  param_1[7] = uVar7;
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

