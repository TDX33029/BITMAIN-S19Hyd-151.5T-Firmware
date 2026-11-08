// FUN_00f5b6c8 @ 00f5b6c8 size=952 calls_out=0 calls_in=6
// strings: 

undefined8
FUN_00f5b6c8(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,uint param_8)

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
  
  uVar7 = param_4 ^ param_6 ^ 0x74656462;
  uVar9 = param_3 ^ param_5 ^ 0x79746573;
  uVar10 = uVar9 + (param_1 ^ 0x6e657261);
  uVar3 = uVar10 ^ (uVar9 << 0x10 | uVar7 >> 0x10);
  uVar12 = uVar7 + (param_2 ^ 0x6c796765) + (uint)CARRY4(uVar9,param_1 ^ 0x6e657261);
  uVar9 = uVar12 ^ (uVar7 << 0x10 | uVar9 >> 0x10);
  param_4 = param_4 ^ 0x646f7261;
  param_3 = param_3 ^ 0x6e646f6d;
  uVar7 = (param_1 ^ 0x70736575) + param_3;
  uVar1 = (param_2 ^ 0x736f6d65) + param_4 + (uint)CARRY4(param_1 ^ 0x70736575,param_3);
  uVar8 = uVar9 + uVar7 + (uint)CARRY4(uVar3,uVar1);
  uVar7 = uVar7 ^ (param_3 << 0xd | param_4 >> 0x13);
  uVar5 = param_8 ^ (uVar9 << 0x15 | uVar3 >> 0xb) ^ uVar8;
  uVar2 = uVar1 ^ (param_4 << 0xd | param_3 >> 0x13);
  uVar4 = param_7 ^ (uVar3 << 0x15 | uVar9 >> 0xb) ^ uVar3 + uVar1;
  uVar9 = uVar12 + uVar2 + (uint)CARRY4(uVar10,uVar7);
  uVar11 = uVar4 + uVar9;
  uVar13 = uVar5 + uVar10 + uVar7 + (uint)CARRY4(uVar4,uVar9);
  uVar12 = uVar13 ^ (uVar5 << 0x10 | uVar4 >> 0x10);
  uVar6 = uVar11 ^ (uVar4 << 0x10 | uVar5 >> 0x10);
  uVar9 = uVar9 ^ (uVar2 << 0x11 | uVar7 >> 0xf);
  uVar2 = uVar10 + uVar7 ^ (uVar7 << 0x11 | uVar2 >> 0xf);
  param_5 = uVar3 + uVar1 ^ param_5;
  uVar7 = param_5 + uVar2;
  uVar4 = (uVar8 ^ param_6) + uVar9 + (uint)CARRY4(param_5,uVar2);
  uVar10 = uVar12 + uVar7 + (uint)CARRY4(uVar6,uVar4);
  uVar1 = (uVar12 << 0x15 | uVar6 >> 0xb) ^ uVar10;
  uVar3 = (uVar6 << 0x15 | uVar12 >> 0xb) ^ uVar6 + uVar4;
  uVar12 = uVar1 ^ 0x10000000;
  uVar5 = uVar4 ^ (uVar9 << 0xd | uVar2 >> 0x13);
  uVar7 = uVar7 ^ (uVar2 << 0xd | uVar9 >> 0x13);
  uVar9 = uVar13 + uVar5 + (uint)CARRY4(uVar11,uVar7);
  uVar14 = uVar3 + uVar9;
  uVar13 = uVar12 + uVar11 + uVar7 + (uint)CARRY4(uVar3,uVar9);
  uVar8 = (uVar1 << 0x10 | uVar3 >> 0x10) ^ uVar13;
  uVar1 = (uVar3 << 0x10 | uVar12 >> 0x10) ^ uVar14;
  uVar9 = uVar9 ^ (uVar5 << 0x11 | uVar7 >> 0xf);
  uVar3 = uVar11 + uVar7 ^ (uVar7 << 0x11 | uVar5 >> 0xf);
  param_7 = uVar6 + uVar4 ^ param_7;
  uVar12 = param_7 + uVar3;
  uVar2 = (uVar10 ^ param_8) + uVar9 + (uint)CARRY4(param_7,uVar3);
  uVar10 = uVar1 + uVar2;
  uVar5 = uVar8 + uVar12 + (uint)CARRY4(uVar1,uVar2);
  uVar7 = (uVar8 << 0x15 | uVar1 >> 0xb) ^ uVar5;
  uVar4 = (uVar1 << 0x15 | uVar8 >> 0xb) ^ uVar10;
  uVar2 = uVar2 ^ (uVar9 << 0xd | uVar3 >> 0x13);
  uVar12 = uVar12 ^ (uVar3 << 0xd | uVar9 >> 0x13);
  uVar9 = uVar13 + uVar2 + (uint)CARRY4(uVar14,uVar12);
  uVar1 = uVar9 ^ 0xff;
  uVar11 = uVar4 + uVar1;
  uVar6 = uVar7 + uVar14 + uVar12 + (uint)CARRY4(uVar4,uVar1);
  uVar1 = (uVar7 << 0x10 | uVar4 >> 0x10) ^ uVar6;
  uVar3 = (uVar4 << 0x10 | uVar7 >> 0x10) ^ uVar11;
  uVar9 = uVar9 ^ (uVar2 << 0x11 | uVar12 >> 0xf);
  uVar7 = uVar14 + uVar12 ^ (uVar12 << 0x11 | uVar2 >> 0xf);
  uVar12 = (uVar5 ^ 0x10000000) + uVar9 + (uint)CARRY4(uVar10,uVar7);
  uVar2 = uVar12 ^ (uVar9 << 0xd | uVar7 >> 0x13);
  uVar5 = uVar3 + uVar12;
  uVar4 = uVar10 + uVar7 ^ (uVar7 << 0xd | uVar9 >> 0x13);
  uVar8 = uVar1 + uVar10 + uVar7 + (uint)CARRY4(uVar3,uVar12);
  uVar7 = (uVar1 << 0x15 | uVar3 >> 0xb) ^ uVar8;
  uVar12 = (uVar3 << 0x15 | uVar1 >> 0xb) ^ uVar5;
  uVar9 = uVar2 + uVar6 + (uint)CARRY4(uVar4,uVar11);
  uVar10 = uVar12 + uVar9;
  uVar1 = uVar9 ^ (uVar2 << 0x11 | uVar4 >> 0xf);
  uVar13 = uVar7 + uVar4 + uVar11 + (uint)CARRY4(uVar12,uVar9);
  uVar2 = uVar4 + uVar11 ^ (uVar4 << 0x11 | uVar2 >> 0xf);
  uVar3 = (uVar7 << 0x10 | uVar12 >> 0x10) ^ uVar13;
  uVar7 = (uVar12 << 0x10 | uVar7 >> 0x10) ^ uVar10;
  uVar12 = uVar1 + uVar8 + (uint)CARRY4(uVar2,uVar5);
  uVar8 = uVar7 + uVar12;
  uVar6 = uVar3 + uVar2 + uVar5 + (uint)CARRY4(uVar7,uVar12);
  uVar9 = (uVar7 << 0x15 | uVar3 >> 0xb) ^ uVar8;
  uVar4 = (uVar3 << 0x15 | uVar7 >> 0xb) ^ uVar6;
  uVar12 = (uVar1 << 0xd | uVar2 >> 0x13) ^ uVar12;
  uVar1 = (uVar2 << 0xd | uVar1 >> 0x13) ^ uVar2 + uVar5;
  uVar3 = uVar12 + uVar13 + (uint)CARRY4(uVar1,uVar10);
  uVar5 = (uVar12 << 0x11 | uVar1 >> 0xf) ^ uVar3;
  uVar7 = uVar9 + uVar3;
  uVar2 = (uVar1 << 0x11 | uVar12 >> 0xf) ^ uVar1 + uVar10;
  uVar3 = uVar4 + uVar1 + uVar10 + (uint)CARRY4(uVar9,uVar3);
  uVar12 = (uVar5 << 0xd | uVar2 >> 0x13) ^ uVar5 + uVar6 + (uint)CARRY4(uVar2,uVar8);
  uVar6 = (uVar9 << 0x10 | uVar4 >> 0x10) ^ uVar7;
  uVar1 = (uVar2 << 0xd | uVar5 >> 0x13) ^ uVar2 + uVar8;
  uVar9 = (uVar4 << 0x10 | uVar9 >> 0x10) ^ uVar3;
  uVar2 = uVar12 + uVar3 + (uint)CARRY4(uVar1,uVar7);
  return CONCAT44((uVar9 << 0x15 | uVar6 >> 0xb) ^ (uVar12 << 0x11 | uVar1 >> 0xf) ^ uVar1 + uVar7 ^
                  uVar2,(uVar6 << 0x15 | uVar9 >> 0xb) ^ (uVar1 << 0x11 | uVar12 >> 0xf) ^ uVar2 ^
                        uVar1 + uVar7);
}

