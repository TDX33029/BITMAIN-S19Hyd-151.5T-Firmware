// FUN_019e9e08 @ 019e9e08 size=736 calls_out=2 calls_in=13
// strings: 

undefined8 FUN_019e9e08(undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
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
  undefined8 uVar16;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar16 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar5 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  if ((char)puVar5[4] == '\0') {
    FUN_019ae6ac(&local_38);
    *puVar5 = local_38;
    puVar5[1] = uStack_34;
    puVar5[2] = uStack_30;
    puVar5[3] = uStack_2c;
    *(undefined1 *)(puVar5 + 4) = 1;
  }
  uVar3 = *puVar5;
  uVar4 = puVar5[1];
  *puVar5 = uVar3 + 1;
  puVar5[1] = uVar4 + (0xfffffffe < uVar3);
  uVar2 = DAT_01d50450;
  do {
    bVar1 = (bool)hasExclusiveAccess(0x1d50450);
  } while (!bVar1);
  DAT_01d50450 = DAT_01d50450 + 1;
  uVar7 = puVar5[3] ^ 0x70656462;
  uVar9 = puVar5[2] ^ uVar2 ^ 0x79746573;
  uVar12 = uVar9 + (uVar3 ^ 0x6e657261);
  uVar11 = (uVar9 << 0x10 | uVar7 >> 0x10) ^ uVar12;
  uVar13 = uVar7 + (uVar4 ^ 0x6c796765) + (uint)CARRY4(uVar9,uVar3 ^ 0x6e657261);
  uVar8 = (uVar7 << 0x10 | uVar9 >> 0x10) ^ uVar13;
  uVar9 = puVar5[3] ^ 0x646f7261;
  uVar10 = puVar5[2] ^ 0x6e646f6d;
  uVar7 = uVar10 + (uVar3 ^ 0x70736575);
  uVar3 = uVar9 + (uVar4 ^ 0x736f6d65) + (uint)CARRY4(uVar10,uVar3 ^ 0x70736575);
  uVar14 = uVar8 + uVar7 + (uint)CARRY4(uVar11,uVar3);
  uVar6 = (uVar8 << 0x15 | uVar11 >> 0xb) ^ uVar14;
  uVar8 = (uVar11 << 0x15 | uVar8 >> 0xb) ^ uVar11 + uVar3;
  uVar2 = uVar11 + uVar3 ^ uVar2;
  uVar3 = (uVar9 << 0xd | uVar10 >> 0x13) ^ uVar3;
  uVar7 = (uVar10 << 0xd | uVar9 >> 0x13) ^ uVar7;
  uVar4 = uVar3 + uVar13 + (uint)CARRY4(uVar7,uVar12);
  uVar9 = uVar4 ^ 0xff;
  uVar11 = uVar9 + uVar8;
  uVar13 = uVar7 + uVar12 + uVar6 + (uint)CARRY4(uVar9,uVar8);
  uVar9 = uVar13 ^ (uVar6 << 0x10 | uVar8 >> 0x10);
  uVar6 = uVar11 ^ (uVar8 << 0x10 | uVar6 >> 0x10);
  uVar4 = uVar4 ^ (uVar3 << 0x11 | uVar7 >> 0xf);
  uVar3 = uVar7 + uVar12 ^ (uVar7 << 0x11 | uVar3 >> 0xf);
  uVar10 = uVar2 + uVar3;
  uVar8 = (uVar14 ^ 0x4000000) + uVar4 + (uint)CARRY4(uVar2,uVar3);
  uVar14 = uVar6 + uVar8;
  uVar15 = uVar9 + uVar10 + (uint)CARRY4(uVar6,uVar8);
  uVar2 = (uVar9 << 0x15 | uVar6 >> 0xb) ^ uVar15;
  uVar6 = (uVar6 << 0x15 | uVar9 >> 0xb) ^ uVar14;
  uVar8 = uVar8 ^ (uVar4 << 0xd | uVar3 >> 0x13);
  uVar10 = uVar10 ^ (uVar3 << 0xd | uVar4 >> 0x13);
  uVar3 = uVar8 + uVar13 + (uint)CARRY4(uVar10,uVar11);
  uVar12 = uVar6 + uVar3;
  uVar7 = uVar3 ^ (uVar8 << 0x11 | uVar10 >> 0xf);
  uVar13 = uVar2 + uVar10 + uVar11 + (uint)CARRY4(uVar6,uVar3);
  uVar9 = uVar10 + uVar11 ^ (uVar10 << 0x11 | uVar8 >> 0xf);
  uVar4 = (uVar2 << 0x10 | uVar6 >> 0x10) ^ uVar13;
  uVar2 = (uVar6 << 0x10 | uVar2 >> 0x10) ^ uVar12;
  uVar10 = uVar7 + uVar15 + (uint)CARRY4(uVar9,uVar14);
  uVar11 = uVar2 + uVar10;
  uVar15 = uVar4 + uVar9 + uVar14 + (uint)CARRY4(uVar2,uVar10);
  uVar3 = (uVar2 << 0x15 | uVar4 >> 0xb) ^ uVar11;
  uVar6 = (uVar4 << 0x15 | uVar2 >> 0xb) ^ uVar15;
  uVar10 = (uVar7 << 0xd | uVar9 >> 0x13) ^ uVar10;
  uVar4 = (uVar9 << 0xd | uVar7 >> 0x13) ^ uVar9 + uVar14;
  uVar9 = uVar10 + uVar13 + (uint)CARRY4(uVar4,uVar12);
  uVar8 = (uVar10 << 0x11 | uVar4 >> 0xf) ^ uVar9;
  uVar2 = uVar3 + uVar9;
  uVar7 = (uVar4 << 0x11 | uVar10 >> 0xf) ^ uVar4 + uVar12;
  uVar10 = uVar6 + uVar4 + uVar12 + (uint)CARRY4(uVar3,uVar9);
  uVar9 = (uVar8 << 0xd | uVar7 >> 0x13) ^ uVar8 + uVar15 + (uint)CARRY4(uVar7,uVar11);
  uVar12 = (uVar3 << 0x10 | uVar6 >> 0x10) ^ uVar2;
  uVar4 = (uVar7 << 0xd | uVar8 >> 0x13) ^ uVar7 + uVar11;
  uVar7 = (uVar6 << 0x10 | uVar3 >> 0x10) ^ uVar10;
  uVar3 = uVar9 + uVar10 + (uint)CARRY4(uVar4,uVar2);
  return CONCAT44((uVar9 << 0x11 | uVar4 >> 0xf) ^ (uVar7 << 0x15 | uVar12 >> 0xb) ^ uVar4 + uVar2 ^
                  uVar3,(uVar4 << 0x11 | uVar9 >> 0xf) ^ (uVar12 << 0x15 | uVar7 >> 0xb) ^ uVar3 ^
                        uVar4 + uVar2);
}

