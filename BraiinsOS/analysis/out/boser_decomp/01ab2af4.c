// FUN_01ab2af4 @ 01ab2af4 size=788 calls_out=0 calls_in=8
// strings: 

undefined8
FUN_01ab2af4(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

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
  
  uVar4 = param_4 ^ param_6 ^ 0x74656462;
  uVar7 = param_3 ^ param_5 ^ 0x79746573;
  uVar10 = uVar7 + (param_1 ^ 0x6e657261);
  uVar1 = uVar10 ^ (uVar7 << 0x10 | uVar4 >> 0x10);
  uVar11 = uVar4 + (param_2 ^ 0x6c796765) + (uint)CARRY4(uVar7,param_1 ^ 0x6e657261);
  param_4 = param_4 ^ 0x646f7261;
  uVar5 = uVar11 ^ (uVar4 << 0x10 | uVar7 >> 0x10);
  param_3 = param_3 ^ 0x6e646f6d;
  uVar3 = param_3 + (param_1 ^ 0x70736575);
  uVar7 = param_4 + (param_2 ^ 0x736f6d65) + (uint)CARRY4(param_3,param_1 ^ 0x70736575);
  uVar4 = uVar5 + uVar3 + (uint)CARRY4(uVar1,uVar7);
  uVar8 = (uVar5 << 0x15 | uVar1 >> 0xb) ^ uVar4;
  uVar2 = (uVar1 << 0x15 | uVar5 >> 0xb) ^ uVar1 + uVar7;
  uVar9 = uVar8 ^ 0x8000000;
  uVar6 = uVar7 ^ (param_4 << 0xd | param_3 >> 0x13);
  uVar3 = uVar3 ^ (param_3 << 0xd | param_4 >> 0x13);
  uVar5 = uVar11 + uVar6 + (uint)CARRY4(uVar10,uVar3);
  uVar11 = uVar2 + uVar5;
  uVar12 = uVar9 + uVar10 + uVar3 + (uint)CARRY4(uVar2,uVar5);
  uVar8 = (uVar8 << 0x10 | uVar2 >> 0x10) ^ uVar12;
  uVar9 = (uVar2 << 0x10 | uVar9 >> 0x10) ^ uVar11;
  uVar5 = uVar5 ^ (uVar6 << 0x11 | uVar3 >> 0xf);
  uVar2 = uVar10 + uVar3 ^ (uVar3 << 0x11 | uVar6 >> 0xf);
  param_5 = uVar1 + uVar7 ^ param_5;
  uVar1 = param_5 + uVar2;
  uVar3 = (uVar4 ^ param_6) + uVar5 + (uint)CARRY4(param_5,uVar2);
  uVar13 = uVar9 + uVar3;
  uVar6 = uVar8 + uVar1 + (uint)CARRY4(uVar9,uVar3);
  uVar4 = (uVar8 << 0x15 | uVar9 >> 0xb) ^ uVar6;
  uVar8 = (uVar9 << 0x15 | uVar8 >> 0xb) ^ uVar13;
  uVar3 = uVar3 ^ (uVar5 << 0xd | uVar2 >> 0x13);
  uVar1 = uVar1 ^ (uVar2 << 0xd | uVar5 >> 0x13);
  uVar7 = uVar12 + uVar3 + (uint)CARRY4(uVar11,uVar1);
  uVar5 = uVar7 ^ 0xff;
  uVar9 = uVar8 + uVar5;
  uVar10 = uVar4 + uVar11 + uVar1 + (uint)CARRY4(uVar8,uVar5);
  uVar2 = (uVar4 << 0x10 | uVar8 >> 0x10) ^ uVar10;
  uVar5 = (uVar8 << 0x10 | uVar4 >> 0x10) ^ uVar9;
  uVar7 = uVar7 ^ (uVar3 << 0x11 | uVar1 >> 0xf);
  uVar4 = uVar11 + uVar1 ^ (uVar1 << 0x11 | uVar3 >> 0xf);
  uVar3 = (uVar6 ^ 0x8000000) + uVar7 + (uint)CARRY4(uVar13,uVar4);
  uVar11 = uVar5 + uVar3;
  uVar8 = uVar3 ^ (uVar7 << 0xd | uVar4 >> 0x13);
  uVar1 = uVar2 + uVar13 + uVar4 + (uint)CARRY4(uVar5,uVar3);
  uVar3 = uVar13 + uVar4 ^ (uVar4 << 0xd | uVar7 >> 0x13);
  uVar4 = (uVar2 << 0x15 | uVar5 >> 0xb) ^ uVar1;
  uVar2 = (uVar5 << 0x15 | uVar2 >> 0xb) ^ uVar11;
  uVar7 = uVar8 + uVar10 + (uint)CARRY4(uVar3,uVar9);
  uVar13 = uVar2 + uVar7;
  uVar5 = uVar7 ^ (uVar8 << 0x11 | uVar3 >> 0xf);
  uVar6 = uVar4 + uVar3 + uVar9 + (uint)CARRY4(uVar2,uVar7);
  uVar8 = uVar3 + uVar9 ^ (uVar3 << 0x11 | uVar8 >> 0xf);
  uVar3 = (uVar4 << 0x10 | uVar2 >> 0x10) ^ uVar6;
  uVar4 = (uVar2 << 0x10 | uVar4 >> 0x10) ^ uVar13;
  uVar2 = uVar5 + uVar1 + (uint)CARRY4(uVar8,uVar11);
  uVar12 = uVar4 + uVar2;
  uVar10 = uVar3 + uVar8 + uVar11 + (uint)CARRY4(uVar4,uVar2);
  uVar7 = (uVar4 << 0x15 | uVar3 >> 0xb) ^ uVar12;
  uVar1 = (uVar3 << 0x15 | uVar4 >> 0xb) ^ uVar10;
  uVar2 = (uVar5 << 0xd | uVar8 >> 0x13) ^ uVar2;
  uVar5 = (uVar8 << 0xd | uVar5 >> 0x13) ^ uVar8 + uVar11;
  uVar3 = uVar2 + uVar6 + (uint)CARRY4(uVar5,uVar13);
  uVar4 = uVar7 + uVar3;
  uVar9 = (uVar2 << 0x11 | uVar5 >> 0xf) ^ uVar3;
  uVar8 = (uVar5 << 0x11 | uVar2 >> 0xf) ^ uVar5 + uVar13;
  uVar3 = uVar1 + uVar5 + uVar13 + (uint)CARRY4(uVar7,uVar3);
  uVar5 = (uVar8 << 0xd | uVar9 >> 0x13) ^ uVar8 + uVar12;
  uVar6 = (uVar7 << 0x10 | uVar1 >> 0x10) ^ uVar4;
  uVar2 = (uVar1 << 0x10 | uVar7 >> 0x10) ^ uVar3;
  uVar7 = (uVar9 << 0xd | uVar8 >> 0x13) ^ uVar9 + uVar10 + (uint)CARRY4(uVar8,uVar12);
  uVar8 = uVar7 + uVar3 + (uint)CARRY4(uVar5,uVar4);
  return CONCAT44((uVar2 << 0x15 | uVar6 >> 0xb) ^ (uVar7 << 0x11 | uVar5 >> 0xf) ^ uVar5 + uVar4 ^
                  uVar8,(uVar6 << 0x15 | uVar2 >> 0xb) ^ (uVar5 << 0x11 | uVar7 >> 0xf) ^ uVar8 ^
                        uVar5 + uVar4);
}

