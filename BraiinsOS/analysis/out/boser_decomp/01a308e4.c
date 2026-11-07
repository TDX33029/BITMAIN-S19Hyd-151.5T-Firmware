// FUN_01a308e4 @ 01a308e4 size=824 calls_out=0 calls_in=16
// strings: 

undefined8 FUN_01a308e4(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar7 = param_4 ^ 0x74656462;
  param_4 = param_4 ^ 0x646f7261;
  uVar9 = param_3 ^ 0x79746573;
  param_3 = param_3 ^ 0x6e646f6d;
  uVar12 = param_2 ^ 0x6c796765;
  param_2 = param_2 ^ 0x736f6d65;
  uVar11 = param_1 ^ 0x6e657261;
  param_1 = param_1 ^ 0x70736575;
  iVar6 = 0;
  do {
    uVar5 = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
    uVar1 = *(uint *)(param_5 + iVar6);
    uVar2 = uVar5 ^ (param_4 << 0xd | param_3 >> 0x13);
    uVar3 = param_1 + param_3 ^ (param_3 << 0xd | param_4 >> 0x13);
    uVar4 = ((uint *)(param_5 + iVar6))[1];
    iVar6 = iVar6 + 8;
    uVar9 = uVar1 ^ uVar9;
    uVar7 = uVar4 ^ uVar7;
    uVar8 = uVar9 + uVar11;
    uVar10 = uVar7 + uVar12 + (uint)CARRY4(uVar9,uVar11);
    uVar12 = uVar8 + uVar3;
    uVar11 = uVar10 + uVar2 + (uint)CARRY4(uVar8,uVar3);
    param_4 = uVar11 ^ (uVar2 << 0x11 | uVar3 >> 0xf);
    uVar10 = uVar10 ^ (uVar7 << 0x10 | uVar9 >> 0x10);
    uVar8 = uVar8 ^ (uVar9 << 0x10 | uVar7 >> 0x10);
    param_2 = uVar10 + param_1 + param_3 + (uint)CARRY4(uVar8,uVar5);
    uVar9 = (uVar8 << 0x15 | uVar10 >> 0xb) ^ uVar8 + uVar5;
    uVar7 = (uVar10 << 0x15 | uVar8 >> 0xb) ^ param_2;
    param_2 = param_2 ^ uVar4;
    param_1 = uVar8 + uVar5 ^ uVar1;
    param_3 = uVar12 ^ (uVar3 << 0x11 | uVar2 >> 0xf);
  } while (iVar6 == 8);
  uVar1 = uVar9 + uVar11;
  uVar2 = (uVar7 ^ 0x10000000) + uVar12 + (uint)CARRY4(uVar9,uVar11);
  uVar11 = (uVar7 << 0x10 | uVar9 >> 0x10) ^ uVar2;
  uVar7 = (uVar9 << 0x10 | (uVar7 ^ 0x10000000) >> 0x10) ^ uVar1;
  uVar8 = param_4 + param_2 + (uint)CARRY4(param_3,param_1);
  uVar5 = uVar7 + uVar8;
  uVar3 = uVar11 + param_3 + param_1 + (uint)CARRY4(uVar7,uVar8);
  uVar9 = (uVar11 << 0x15 | uVar7 >> 0xb) ^ uVar3;
  uVar12 = (uVar7 << 0x15 | uVar11 >> 0xb) ^ uVar5;
  uVar8 = (param_4 << 0xd | param_3 >> 0x13) ^ uVar8;
  uVar11 = (param_3 << 0xd | param_4 >> 0x13) ^ param_3 + param_1;
  uVar2 = uVar2 + uVar8 + (uint)CARRY4(uVar1,uVar11);
  uVar7 = uVar2 ^ 0xff;
  uVar10 = uVar12 + uVar7;
  uVar4 = uVar9 + uVar1 + uVar11 + (uint)CARRY4(uVar12,uVar7);
  uVar7 = (uVar9 << 0x10 | uVar12 >> 0x10) ^ uVar4;
  uVar12 = (uVar12 << 0x10 | uVar9 >> 0x10) ^ uVar10;
  uVar2 = uVar2 ^ (uVar8 << 0x11 | uVar11 >> 0xf);
  uVar11 = uVar1 + uVar11 ^ (uVar11 << 0x11 | uVar8 >> 0xf);
  uVar9 = (uVar3 ^ 0x10000000) + uVar2 + (uint)CARRY4(uVar5,uVar11);
  uVar13 = uVar12 + uVar9;
  uVar1 = uVar9 ^ (uVar2 << 0xd | uVar11 >> 0x13);
  uVar3 = uVar7 + uVar5 + uVar11 + (uint)CARRY4(uVar12,uVar9);
  uVar2 = uVar5 + uVar11 ^ (uVar11 << 0xd | uVar2 >> 0x13);
  uVar9 = (uVar7 << 0x15 | uVar12 >> 0xb) ^ uVar3;
  uVar7 = (uVar12 << 0x15 | uVar7 >> 0xb) ^ uVar13;
  uVar12 = uVar1 + uVar4 + (uint)CARRY4(uVar2,uVar10);
  uVar4 = uVar7 + uVar12;
  uVar5 = uVar9 + uVar2 + uVar10 + (uint)CARRY4(uVar7,uVar12);
  uVar8 = uVar2 + uVar10 ^ (uVar2 << 0x11 | uVar1 >> 0xf);
  uVar11 = (uVar9 << 0x10 | uVar7 >> 0x10) ^ uVar5;
  uVar12 = uVar12 ^ (uVar1 << 0x11 | uVar2 >> 0xf);
  uVar9 = (uVar7 << 0x10 | uVar9 >> 0x10) ^ uVar4;
  uVar1 = uVar12 + uVar3 + (uint)CARRY4(uVar8,uVar13);
  uVar10 = uVar9 + uVar1;
  uVar14 = uVar11 + uVar8 + uVar13 + (uint)CARRY4(uVar9,uVar1);
  uVar7 = (uVar9 << 0x15 | uVar11 >> 0xb) ^ uVar10;
  uVar2 = (uVar11 << 0x15 | uVar9 >> 0xb) ^ uVar14;
  uVar1 = (uVar12 << 0xd | uVar8 >> 0x13) ^ uVar1;
  uVar11 = (uVar8 << 0xd | uVar12 >> 0x13) ^ uVar8 + uVar13;
  uVar3 = uVar1 + uVar5 + (uint)CARRY4(uVar11,uVar4);
  uVar8 = (uVar1 << 0x11 | uVar11 >> 0xf) ^ uVar3;
  uVar9 = uVar7 + uVar3;
  uVar12 = (uVar11 << 0x11 | uVar1 >> 0xf) ^ uVar11 + uVar4;
  uVar3 = uVar2 + uVar11 + uVar4 + (uint)CARRY4(uVar7,uVar3);
  uVar4 = (uVar7 << 0x10 | uVar2 >> 0x10) ^ uVar9;
  uVar1 = (uVar8 << 0xd | uVar12 >> 0x13) ^ uVar8 + uVar14 + (uint)CARRY4(uVar12,uVar10);
  uVar11 = (uVar12 << 0xd | uVar8 >> 0x13) ^ uVar12 + uVar10;
  uVar12 = (uVar2 << 0x10 | uVar7 >> 0x10) ^ uVar3;
  uVar7 = uVar1 + uVar3 + (uint)CARRY4(uVar11,uVar9);
  return CONCAT44((uVar12 << 0x15 | uVar4 >> 0xb) ^ (uVar1 << 0x11 | uVar11 >> 0xf) ^ uVar11 + uVar9
                  ^ uVar7,(uVar4 << 0x15 | uVar12 >> 0xb) ^ (uVar11 << 0x11 | uVar1 >> 0xf) ^ uVar7
                          ^ uVar11 + uVar9);
}

