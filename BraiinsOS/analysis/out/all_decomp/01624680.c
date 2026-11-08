// FUN_01624680 @ 01624680 size=664 calls_out=0 calls_in=0
// strings: 

undefined8 FUN_01624680(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
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
  uint uVar15;
  uint uVar16;
  
  puVar3 = *(uint **)*param_1;
  uVar14 = *(uint *)(*param_2 + param_3 * -8 + -8);
  uVar6 = puVar3[3] ^ 0x70656462;
  uVar8 = puVar3[2] ^ uVar14 ^ 0x79746573;
  uVar1 = *puVar3 ^ 0x6e657261;
  uVar11 = uVar8 + uVar1;
  uVar10 = (uVar8 << 0x10 | uVar6 >> 0x10) ^ uVar11;
  uVar12 = uVar6 + (puVar3[1] ^ 0x6c796765) + (uint)CARRY4(uVar8,uVar1);
  uVar2 = puVar3[3] ^ 0x646f7261;
  uVar1 = *puVar3 ^ 0x70736575;
  uVar6 = (uVar6 << 0x10 | uVar8 >> 0x10) ^ uVar12;
  uVar5 = puVar3[2] ^ 0x6e646f6d;
  uVar8 = uVar5 + uVar1;
  uVar1 = uVar2 + (puVar3[1] ^ 0x736f6d65) + (uint)CARRY4(uVar5,uVar1);
  uVar9 = uVar6 + uVar8 + (uint)CARRY4(uVar10,uVar1);
  uVar4 = (uVar6 << 0x15 | uVar10 >> 0xb) ^ uVar9;
  uVar7 = (uVar10 << 0x15 | uVar6 >> 0xb) ^ uVar10 + uVar1;
  uVar6 = (uVar2 << 0xd | uVar5 >> 0x13) ^ uVar1;
  uVar8 = (uVar5 << 0xd | uVar2 >> 0x13) ^ uVar8;
  uVar2 = uVar12 + uVar6 + (uint)CARRY4(uVar11,uVar8);
  uVar5 = uVar2 ^ 0xff;
  uVar12 = uVar7 + uVar5;
  uVar13 = uVar4 + uVar11 + uVar8 + (uint)CARRY4(uVar7,uVar5);
  uVar5 = (uVar4 << 0x10 | uVar7 >> 0x10) ^ uVar13;
  uVar4 = (uVar7 << 0x10 | uVar4 >> 0x10) ^ uVar12;
  uVar2 = uVar2 ^ (uVar6 << 0x11 | uVar8 >> 0xf);
  uVar6 = uVar11 + uVar8 ^ (uVar8 << 0x11 | uVar6 >> 0xf);
  uVar14 = uVar10 + uVar1 ^ uVar14;
  uVar10 = uVar14 + uVar6;
  uVar7 = (uVar9 ^ 0x4000000) + uVar2 + (uint)CARRY4(uVar14,uVar6);
  uVar15 = uVar4 + uVar7;
  uVar16 = uVar5 + uVar10 + (uint)CARRY4(uVar4,uVar7);
  uVar1 = (uVar5 << 0x15 | uVar4 >> 0xb) ^ uVar16;
  uVar8 = (uVar4 << 0x15 | uVar5 >> 0xb) ^ uVar15;
  uVar7 = uVar7 ^ (uVar2 << 0xd | uVar6 >> 0x13);
  uVar10 = uVar10 ^ (uVar6 << 0xd | uVar2 >> 0x13);
  uVar6 = uVar7 + uVar13 + (uint)CARRY4(uVar10,uVar12);
  uVar9 = uVar8 + uVar6;
  uVar14 = uVar6 ^ (uVar7 << 0x11 | uVar10 >> 0xf);
  uVar11 = uVar1 + uVar10 + uVar12 + (uint)CARRY4(uVar8,uVar6);
  uVar4 = uVar10 + uVar12 ^ (uVar10 << 0x11 | uVar7 >> 0xf);
  uVar2 = (uVar1 << 0x10 | uVar8 >> 0x10) ^ uVar11;
  uVar1 = (uVar8 << 0x10 | uVar1 >> 0x10) ^ uVar9;
  uVar8 = uVar14 + uVar16 + (uint)CARRY4(uVar4,uVar15);
  uVar10 = uVar1 + uVar8;
  uVar12 = uVar2 + uVar4 + uVar15 + (uint)CARRY4(uVar1,uVar8);
  uVar6 = (uVar1 << 0x15 | uVar2 >> 0xb) ^ uVar10;
  uVar5 = (uVar2 << 0x15 | uVar1 >> 0xb) ^ uVar12;
  uVar8 = (uVar14 << 0xd | uVar4 >> 0x13) ^ uVar8;
  uVar2 = (uVar4 << 0xd | uVar14 >> 0x13) ^ uVar4 + uVar15;
  uVar7 = uVar8 + uVar11 + (uint)CARRY4(uVar2,uVar9);
  uVar4 = (uVar8 << 0x11 | uVar2 >> 0xf) ^ uVar7;
  uVar1 = uVar6 + uVar7;
  uVar14 = (uVar2 << 0x11 | uVar8 >> 0xf) ^ uVar2 + uVar9;
  uVar8 = uVar5 + uVar2 + uVar9 + (uint)CARRY4(uVar6,uVar7);
  uVar2 = (uVar14 << 0xd | uVar4 >> 0x13) ^ uVar14 + uVar10;
  uVar7 = (uVar6 << 0x10 | uVar5 >> 0x10) ^ uVar1;
  uVar4 = (uVar4 << 0xd | uVar14 >> 0x13) ^ uVar4 + uVar12 + (uint)CARRY4(uVar14,uVar10);
  uVar14 = uVar4 + uVar8 + (uint)CARRY4(uVar2,uVar1);
  uVar8 = (uVar5 << 0x10 | uVar6 >> 0x10) ^ uVar8;
  return CONCAT44((uVar8 << 0x15 | uVar7 >> 0xb) ^ (uVar4 << 0x11 | uVar2 >> 0xf) ^ uVar2 + uVar1 ^
                  uVar14,(uVar7 << 0x15 | uVar8 >> 0xb) ^ (uVar2 << 0x11 | uVar4 >> 0xf) ^ uVar14 ^
                         uVar2 + uVar1);
}

