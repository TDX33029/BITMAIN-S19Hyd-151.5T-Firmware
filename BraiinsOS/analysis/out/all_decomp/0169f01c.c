// FUN_0169f01c @ 0169f01c size=816 calls_out=0 calls_in=0
// strings: 

undefined8 FUN_0169f01c(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
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
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  puVar4 = *(uint **)*param_1;
  iVar2 = *param_2 + param_3 * -0x18;
  uVar13 = *(uint *)(iVar2 + -0x18);
  uVar14 = *(uint *)(iVar2 + -0x14);
  uVar6 = *puVar4 ^ 0x6e657261;
  uVar3 = puVar4[3] ^ uVar14 ^ 0x74656462;
  uVar1 = puVar4[2] ^ uVar13 ^ 0x79746573;
  uVar16 = uVar1 + uVar6;
  uVar7 = uVar16 ^ (uVar1 << 0x10 | uVar3 >> 0x10);
  uVar15 = uVar3 + (puVar4[1] ^ 0x6c796765) + (uint)CARRY4(uVar1,uVar6);
  uVar6 = uVar15 ^ (uVar3 << 0x10 | uVar1 >> 0x10);
  uVar3 = puVar4[2] ^ 0x6e646f6d;
  uVar5 = puVar4[3] ^ 0x646f7261;
  uVar1 = *puVar4 ^ 0x70736575;
  uVar10 = uVar3 + uVar1;
  uVar9 = uVar5 + (puVar4[1] ^ 0x736f6d65) + (uint)CARRY4(uVar3,uVar1);
  uVar1 = uVar6 + uVar10 + (uint)CARRY4(uVar7,uVar9);
  uVar11 = (uVar6 << 0x15 | uVar7 >> 0xb) ^ uVar1;
  uVar8 = (uVar7 << 0x15 | uVar6 >> 0xb) ^ uVar7 + uVar9;
  uVar12 = uVar11 ^ 0x8000000;
  uVar6 = uVar9 ^ (uVar5 << 0xd | uVar3 >> 0x13);
  uVar10 = uVar10 ^ (uVar3 << 0xd | uVar5 >> 0x13);
  uVar3 = uVar6 + uVar15 + (uint)CARRY4(uVar10,uVar16);
  uVar17 = uVar8 + uVar3;
  uVar15 = uVar12 + uVar10 + uVar16 + (uint)CARRY4(uVar8,uVar3);
  uVar5 = (uVar11 << 0x10 | uVar8 >> 0x10) ^ uVar15;
  uVar8 = (uVar8 << 0x10 | uVar12 >> 0x10) ^ uVar17;
  uVar3 = uVar3 ^ (uVar6 << 0x11 | uVar10 >> 0xf);
  uVar6 = uVar10 + uVar16 ^ (uVar10 << 0x11 | uVar6 >> 0xf);
  uVar13 = uVar7 + uVar9 ^ uVar13;
  uVar10 = uVar13 + uVar6;
  uVar7 = (uVar1 ^ uVar14) + uVar3 + (uint)CARRY4(uVar13,uVar6);
  uVar14 = uVar8 + uVar7;
  uVar9 = uVar5 + uVar10 + (uint)CARRY4(uVar8,uVar7);
  uVar1 = (uVar5 << 0x15 | uVar8 >> 0xb) ^ uVar9;
  uVar5 = (uVar8 << 0x15 | uVar5 >> 0xb) ^ uVar14;
  uVar7 = uVar7 ^ (uVar3 << 0xd | uVar6 >> 0x13);
  uVar10 = uVar10 ^ (uVar6 << 0xd | uVar3 >> 0x13);
  uVar3 = uVar15 + uVar7 + (uint)CARRY4(uVar17,uVar10);
  uVar6 = uVar3 ^ 0xff;
  uVar13 = uVar5 + uVar6;
  uVar11 = uVar1 + uVar17 + uVar10 + (uint)CARRY4(uVar5,uVar6);
  uVar6 = (uVar1 << 0x10 | uVar5 >> 0x10) ^ uVar11;
  uVar1 = (uVar5 << 0x10 | uVar1 >> 0x10) ^ uVar13;
  uVar3 = uVar3 ^ (uVar7 << 0x11 | uVar10 >> 0xf);
  uVar5 = uVar17 + uVar10 ^ (uVar10 << 0x11 | uVar7 >> 0xf);
  uVar8 = (uVar9 ^ 0x8000000) + uVar3 + (uint)CARRY4(uVar14,uVar5);
  uVar12 = uVar1 + uVar8;
  uVar15 = uVar6 + uVar14 + uVar5 + (uint)CARRY4(uVar1,uVar8);
  uVar8 = uVar8 ^ (uVar3 << 0xd | uVar5 >> 0x13);
  uVar7 = uVar14 + uVar5 ^ (uVar5 << 0xd | uVar3 >> 0x13);
  uVar3 = (uVar6 << 0x15 | uVar1 >> 0xb) ^ uVar15;
  uVar1 = (uVar1 << 0x15 | uVar6 >> 0xb) ^ uVar12;
  uVar6 = uVar8 + uVar11 + (uint)CARRY4(uVar7,uVar13);
  uVar14 = uVar1 + uVar6;
  uVar10 = uVar3 + uVar7 + uVar13 + (uint)CARRY4(uVar1,uVar6);
  uVar9 = uVar7 + uVar13 ^ (uVar7 << 0x11 | uVar8 >> 0xf);
  uVar5 = (uVar3 << 0x10 | uVar1 >> 0x10) ^ uVar10;
  uVar1 = (uVar1 << 0x10 | uVar3 >> 0x10) ^ uVar14;
  uVar6 = uVar6 ^ (uVar8 << 0x11 | uVar7 >> 0xf);
  uVar7 = uVar6 + uVar15 + (uint)CARRY4(uVar9,uVar12);
  uVar11 = uVar1 + uVar7;
  uVar13 = uVar5 + uVar9 + uVar12 + (uint)CARRY4(uVar1,uVar7);
  uVar3 = (uVar1 << 0x15 | uVar5 >> 0xb) ^ uVar11;
  uVar8 = (uVar5 << 0x15 | uVar1 >> 0xb) ^ uVar13;
  uVar7 = (uVar6 << 0xd | uVar9 >> 0x13) ^ uVar7;
  uVar5 = (uVar9 << 0xd | uVar6 >> 0x13) ^ uVar9 + uVar12;
  uVar9 = uVar7 + uVar10 + (uint)CARRY4(uVar5,uVar14);
  uVar1 = uVar3 + uVar9;
  uVar10 = (uVar7 << 0x11 | uVar5 >> 0xf) ^ uVar9;
  uVar6 = (uVar5 << 0x11 | uVar7 >> 0xf) ^ uVar5 + uVar14;
  uVar7 = uVar8 + uVar5 + uVar14 + (uint)CARRY4(uVar3,uVar9);
  uVar5 = (uVar6 << 0xd | uVar10 >> 0x13) ^ uVar6 + uVar11;
  uVar9 = (uVar3 << 0x10 | uVar8 >> 0x10) ^ uVar1;
  uVar3 = (uVar8 << 0x10 | uVar3 >> 0x10) ^ uVar7;
  uVar8 = (uVar10 << 0xd | uVar6 >> 0x13) ^ uVar10 + uVar13 + (uint)CARRY4(uVar6,uVar11);
  uVar6 = uVar8 + uVar7 + (uint)CARRY4(uVar5,uVar1);
  return CONCAT44((uVar3 << 0x15 | uVar9 >> 0xb) ^ (uVar8 << 0x11 | uVar5 >> 0xf) ^ uVar5 + uVar1 ^
                  uVar6,(uVar9 << 0x15 | uVar3 >> 0xb) ^ (uVar5 << 0x11 | uVar8 >> 0xf) ^ uVar6 ^
                        uVar5 + uVar1);
}

