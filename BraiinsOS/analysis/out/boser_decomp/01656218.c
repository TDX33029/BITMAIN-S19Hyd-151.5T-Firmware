// FUN_01656218 @ 01656218 size=636 calls_out=0 calls_in=40
// strings: 

undefined8 FUN_01656218(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

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
  
  uVar2 = param_4 ^ 0x70656462;
  uVar5 = param_3 ^ param_5 ^ 0x79746573;
  uVar11 = uVar5 + (param_1 ^ 0x6e657261);
  uVar7 = (uVar5 << 0x10 | uVar2 >> 0x10) ^ uVar11;
  uVar9 = uVar2 + (param_2 ^ 0x6c796765) + (uint)CARRY4(uVar5,param_1 ^ 0x6e657261);
  uVar3 = (uVar2 << 0x10 | uVar5 >> 0x10) ^ uVar9;
  param_4 = param_4 ^ 0x646f7261;
  param_3 = param_3 ^ 0x6e646f6d;
  uVar6 = param_3 + (param_1 ^ 0x70736575);
  uVar5 = param_4 + (param_2 ^ 0x736f6d65) + (uint)CARRY4(param_3,param_1 ^ 0x70736575);
  uVar2 = uVar3 + uVar6 + (uint)CARRY4(uVar7,uVar5);
  uVar1 = (uVar3 << 0x15 | uVar7 >> 0xb) ^ uVar2;
  uVar4 = (uVar7 << 0x15 | uVar3 >> 0xb) ^ uVar7 + uVar5;
  uVar8 = (param_4 << 0xd | param_3 >> 0x13) ^ uVar5;
  uVar6 = (param_3 << 0xd | param_4 >> 0x13) ^ uVar6;
  uVar3 = uVar9 + uVar8 + (uint)CARRY4(uVar11,uVar6);
  uVar9 = uVar3 ^ 0xff;
  uVar12 = uVar4 + uVar9;
  uVar10 = uVar1 + uVar11 + uVar6 + (uint)CARRY4(uVar4,uVar9);
  uVar9 = (uVar1 << 0x10 | uVar4 >> 0x10) ^ uVar10;
  uVar1 = (uVar4 << 0x10 | uVar1 >> 0x10) ^ uVar12;
  uVar3 = uVar3 ^ (uVar8 << 0x11 | uVar6 >> 0xf);
  uVar6 = uVar11 + uVar6 ^ (uVar6 << 0x11 | uVar8 >> 0xf);
  param_5 = uVar7 + uVar5 ^ param_5;
  uVar4 = param_5 + uVar6;
  uVar5 = (uVar2 ^ 0x4000000) + uVar3 + (uint)CARRY4(param_5,uVar6);
  uVar11 = uVar1 + uVar5;
  uVar8 = uVar9 + uVar4 + (uint)CARRY4(uVar1,uVar5);
  uVar5 = uVar5 ^ (uVar3 << 0xd | uVar6 >> 0x13);
  uVar4 = uVar4 ^ (uVar6 << 0xd | uVar3 >> 0x13);
  uVar2 = (uVar9 << 0x15 | uVar1 >> 0xb) ^ uVar8;
  uVar6 = (uVar1 << 0x15 | uVar9 >> 0xb) ^ uVar11;
  uVar3 = uVar5 + uVar10 + (uint)CARRY4(uVar4,uVar12);
  uVar13 = uVar6 + uVar3;
  uVar7 = uVar2 + uVar4 + uVar12 + (uint)CARRY4(uVar6,uVar3);
  uVar1 = uVar4 + uVar12 ^ (uVar4 << 0x11 | uVar5 >> 0xf);
  uVar9 = (uVar2 << 0x10 | uVar6 >> 0x10) ^ uVar7;
  uVar3 = uVar3 ^ (uVar5 << 0x11 | uVar4 >> 0xf);
  uVar2 = (uVar6 << 0x10 | uVar2 >> 0x10) ^ uVar13;
  uVar6 = uVar3 + uVar8 + (uint)CARRY4(uVar1,uVar11);
  uVar8 = uVar2 + uVar6;
  uVar10 = uVar9 + uVar1 + uVar11 + (uint)CARRY4(uVar2,uVar6);
  uVar5 = (uVar2 << 0x15 | uVar9 >> 0xb) ^ uVar8;
  uVar4 = (uVar9 << 0x15 | uVar2 >> 0xb) ^ uVar10;
  uVar6 = (uVar3 << 0xd | uVar1 >> 0x13) ^ uVar6;
  uVar9 = (uVar1 << 0xd | uVar3 >> 0x13) ^ uVar1 + uVar11;
  uVar7 = uVar6 + uVar7 + (uint)CARRY4(uVar9,uVar13);
  uVar1 = (uVar6 << 0x11 | uVar9 >> 0xf) ^ uVar7;
  uVar3 = (uVar9 << 0x11 | uVar6 >> 0xf) ^ uVar9 + uVar13;
  uVar2 = uVar5 + uVar7;
  uVar9 = uVar4 + uVar9 + uVar13 + (uint)CARRY4(uVar5,uVar7);
  uVar7 = (uVar1 << 0xd | uVar3 >> 0x13) ^ uVar1 + uVar10 + (uint)CARRY4(uVar3,uVar8);
  uVar3 = (uVar3 << 0xd | uVar1 >> 0x13) ^ uVar3 + uVar8;
  uVar1 = (uVar5 << 0x10 | uVar4 >> 0x10) ^ uVar2;
  uVar6 = uVar7 + uVar9 + (uint)CARRY4(uVar3,uVar2);
  uVar9 = (uVar4 << 0x10 | uVar5 >> 0x10) ^ uVar9;
  return CONCAT44((uVar9 << 0x15 | uVar1 >> 0xb) ^ (uVar7 << 0x11 | uVar3 >> 0xf) ^ uVar3 + uVar2 ^
                  uVar6,(uVar1 << 0x15 | uVar9 >> 0xb) ^ (uVar3 << 0x11 | uVar7 >> 0xf) ^ uVar6 ^
                        uVar3 + uVar2);
}

