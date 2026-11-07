// FUN_01335dc8 @ 01335dc8 size=592 calls_out=0 calls_in=0
// strings: 

undefined8 FUN_01335dc8(undefined4 param_1,int *param_2,int param_3)

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
  
  uVar13 = *(uint *)(param_3 * -0x34 + *param_2 + -0x34);
  uVar2 = uVar13 ^ 0x79746573;
  uVar1 = (uVar2 >> 0x10 | 0x64620000) ^ (0x919a8d9e < uVar2) + 0xdcdecbc7;
  uVar3 = (uVar2 << 0x10 | 0x7065) ^ uVar2 + 0x6e657261;
  uVar5 = uVar1 + 0xded7d4e2 + (uint)(0x28212039 < uVar3);
  uVar6 = (uVar1 << 0x15 | uVar3 >> 0xb) ^ uVar5;
  uVar1 = (uVar3 << 0x15 | uVar1 >> 0xb) ^ uVar3 + 0xd7dedfc6;
  uVar13 = uVar3 + 0xd7dedfc6 ^ uVar13;
  uVar3 = (0x3e60152f < uVar2) + 0x1671bdd1;
  uVar4 = uVar3 ^ 0xff;
  uVar11 = uVar1 + uVar4;
  uVar3 = uVar3 ^ 0xe414a674;
  uVar9 = uVar6 + uVar2 + 0xc19fead0 + (uint)CARRY4(uVar1,uVar4);
  uVar4 = uVar2 + 0xc19fead0 ^ 0xf0de7325;
  uVar8 = uVar13 + uVar4;
  uVar7 = (uVar6 << 0x10 | uVar1 >> 0x10) ^ uVar9;
  uVar5 = (uVar5 ^ 0x4000000) + uVar3 + (uint)CARRY4(uVar13,uVar4);
  uVar1 = (uVar1 << 0x10 | uVar6 >> 0x10) ^ uVar11;
  uVar10 = uVar1 + uVar5;
  uVar2 = uVar5 ^ (uVar3 << 0xd | uVar4 >> 0x13);
  uVar3 = uVar8 ^ (uVar4 << 0xd | 0x1e4c);
  uVar8 = uVar7 + uVar8 + (uint)CARRY4(uVar1,uVar5);
  uVar6 = (uVar1 << 0x15 | uVar7 >> 0xb) ^ uVar10;
  uVar5 = uVar2 + uVar9 + (uint)CARRY4(uVar3,uVar11);
  uVar4 = (uVar7 << 0x15 | uVar1 >> 0xb) ^ uVar8;
  uVar9 = uVar6 + uVar5;
  uVar13 = uVar5 ^ (uVar2 << 0x11 | uVar3 >> 0xf);
  uVar1 = uVar3 + uVar11 ^ (uVar3 << 0x11 | uVar2 >> 0xf);
  uVar12 = uVar4 + uVar3 + uVar11 + (uint)CARRY4(uVar6,uVar5);
  uVar7 = uVar13 + uVar8 + (uint)CARRY4(uVar1,uVar10);
  uVar11 = (uVar4 << 0x10 | uVar6 >> 0x10) ^ uVar12;
  uVar3 = (uVar13 << 0xd | uVar1 >> 0x13) ^ uVar7;
  uVar5 = (uVar6 << 0x10 | uVar4 >> 0x10) ^ uVar9;
  uVar2 = (uVar1 << 0xd | uVar13 >> 0x13) ^ uVar1 + uVar10;
  uVar8 = uVar5 + uVar7;
  uVar7 = uVar11 + uVar1 + uVar10 + (uint)CARRY4(uVar5,uVar7);
  uVar6 = uVar3 + uVar12 + (uint)CARRY4(uVar2,uVar9);
  uVar4 = (uVar3 << 0x11 | uVar2 >> 0xf) ^ uVar6;
  uVar3 = (uVar2 << 0x11 | uVar3 >> 0xf) ^ uVar2 + uVar9;
  uVar13 = (uVar5 << 0x15 | uVar11 >> 0xb) ^ uVar8;
  uVar1 = (uVar11 << 0x15 | uVar5 >> 0xb) ^ uVar7;
  uVar5 = uVar13 + uVar6;
  uVar7 = (uVar4 << 0xd | uVar3 >> 0x13) ^ uVar4 + uVar7 + (uint)CARRY4(uVar3,uVar8);
  uVar6 = uVar1 + uVar2 + uVar9 + (uint)CARRY4(uVar13,uVar6);
  uVar2 = (uVar3 << 0xd | uVar4 >> 0x13) ^ uVar3 + uVar8;
  uVar4 = (uVar13 << 0x10 | uVar1 >> 0x10) ^ uVar5;
  uVar1 = (uVar1 << 0x10 | uVar13 >> 0x10) ^ uVar6;
  uVar3 = uVar7 + uVar6 + (uint)CARRY4(uVar2,uVar5);
  return CONCAT44((uVar1 << 0x15 | uVar4 >> 0xb) ^ (uVar7 << 0x11 | uVar2 >> 0xf) ^ uVar2 + uVar5 ^
                  uVar3,(uVar4 << 0x15 | uVar1 >> 0xb) ^ (uVar2 << 0x11 | uVar7 >> 0xf) ^ uVar3 ^
                        uVar2 + uVar5);
}

