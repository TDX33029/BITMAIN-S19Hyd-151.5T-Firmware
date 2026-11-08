// FUN_01744790 @ 01744790 size=896 calls_out=2 calls_in=5
// strings: 

undefined8 FUN_01744790(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
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
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  
  uVar18 = thunk_FUN_01bee35a(param_1,0x1d8);
  puVar5 = (uint *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
  uVar1 = (uint)(byte)puVar5[4];
  if (uVar1 == 0) {
    uVar1 = FUN_01885080(puVar5,0);
  }
  uVar18 = thunk_FUN_01bee35a(uVar1,0x1f0);
  puVar3 = (uint *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
  uVar16 = *puVar5;
  uVar1 = puVar5[1];
  uVar17 = puVar5[2];
  uVar6 = puVar5[3];
  if ((char)puVar3[2] == '\0') {
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined1 *)(puVar3 + 2) = 1;
  }
  uVar11 = *puVar3 + 1;
  uVar12 = puVar3[1] + (uint)(0xfffffffe < *puVar3);
  *puVar3 = uVar11;
  puVar3[1] = uVar12;
  uVar7 = uVar12 ^ uVar6 ^ 0x74656462;
  uVar8 = uVar11 ^ uVar17 ^ 0x79746573;
  uVar4 = uVar16 ^ 0x6e657261;
  uVar13 = uVar8 + uVar4;
  uVar2 = uVar13 ^ (uVar8 << 0x10 | uVar7 >> 0x10);
  uVar6 = uVar6 ^ 0x646f7261;
  uVar14 = uVar7 + (uVar1 ^ 0x6c796765) + (uint)CARRY4(uVar8,uVar4);
  uVar16 = uVar16 ^ 0x70736575;
  uVar17 = uVar17 ^ 0x6e646f6d;
  uVar8 = uVar14 ^ (uVar7 << 0x10 | uVar8 >> 0x10);
  uVar4 = uVar17 + uVar16;
  uVar16 = uVar6 + (uVar1 ^ 0x736f6d65) + (uint)CARRY4(uVar17,uVar16);
  uVar7 = uVar4 + uVar8 + (uint)CARRY4(uVar16,uVar2);
  uVar9 = (uVar8 << 0x15 | uVar2 >> 0xb) ^ uVar7;
  uVar1 = (uVar2 << 0x15 | uVar8 >> 0xb) ^ uVar16 + uVar2;
  uVar10 = uVar9 ^ 0x8000000;
  uVar8 = uVar16 ^ (uVar6 << 0xd | uVar17 >> 0x13);
  uVar4 = uVar4 ^ (uVar17 << 0xd | uVar6 >> 0x13);
  uVar17 = uVar8 + uVar14 + (uint)CARRY4(uVar4,uVar13);
  uVar15 = uVar1 + uVar17;
  uVar14 = uVar10 + uVar4 + uVar13 + (uint)CARRY4(uVar1,uVar17);
  uVar6 = (uVar9 << 0x10 | uVar1 >> 0x10) ^ uVar14;
  uVar9 = (uVar1 << 0x10 | uVar10 >> 0x10) ^ uVar15;
  uVar11 = uVar16 + uVar2 ^ uVar11;
  uVar16 = uVar4 + uVar13 ^ (uVar4 << 0x11 | uVar8 >> 0xf);
  uVar17 = uVar17 ^ (uVar8 << 0x11 | uVar4 >> 0xf);
  uVar8 = uVar16 + uVar11;
  uVar4 = uVar17 + (uVar7 ^ uVar12) + (uint)CARRY4(uVar16,uVar11);
  uVar10 = uVar9 + uVar4;
  uVar2 = uVar6 + uVar8 + (uint)CARRY4(uVar9,uVar4);
  uVar1 = (uVar6 << 0x15 | uVar9 >> 0xb) ^ uVar2;
  uVar6 = (uVar9 << 0x15 | uVar6 >> 0xb) ^ uVar10;
  uVar4 = (uVar17 << 0xd | uVar16 >> 0x13) ^ uVar4;
  uVar8 = (uVar16 << 0xd | uVar17 >> 0x13) ^ uVar8;
  uVar16 = uVar14 + uVar4 + (uint)CARRY4(uVar15,uVar8);
  uVar17 = uVar16 ^ 0xff;
  uVar7 = uVar6 + uVar17;
  uVar11 = uVar1 + uVar15 + uVar8 + (uint)CARRY4(uVar6,uVar17);
  uVar17 = (uVar1 << 0x10 | uVar6 >> 0x10) ^ uVar11;
  uVar1 = (uVar6 << 0x10 | uVar1 >> 0x10) ^ uVar7;
  uVar16 = uVar16 ^ (uVar4 << 0x11 | uVar8 >> 0xf);
  uVar6 = uVar15 + uVar8 ^ (uVar8 << 0x11 | uVar4 >> 0xf);
  uVar2 = (uVar2 ^ 0x8000000) + uVar16 + (uint)CARRY4(uVar10,uVar6);
  uVar9 = uVar1 + uVar2;
  uVar12 = uVar17 + uVar10 + uVar6 + (uint)CARRY4(uVar1,uVar2);
  uVar2 = uVar2 ^ (uVar16 << 0xd | uVar6 >> 0x13);
  uVar4 = uVar10 + uVar6 ^ (uVar6 << 0xd | uVar16 >> 0x13);
  uVar16 = (uVar17 << 0x15 | uVar1 >> 0xb) ^ uVar12;
  uVar1 = (uVar1 << 0x15 | uVar17 >> 0xb) ^ uVar9;
  uVar17 = uVar2 + uVar11 + (uint)CARRY4(uVar4,uVar7);
  uVar13 = uVar1 + uVar17;
  uVar8 = uVar16 + uVar4 + uVar7 + (uint)CARRY4(uVar1,uVar17);
  uVar7 = uVar4 + uVar7 ^ (uVar4 << 0x11 | uVar2 >> 0xf);
  uVar6 = (uVar16 << 0x10 | uVar1 >> 0x10) ^ uVar8;
  uVar1 = (uVar1 << 0x10 | uVar16 >> 0x10) ^ uVar13;
  uVar17 = uVar17 ^ (uVar2 << 0x11 | uVar4 >> 0xf);
  uVar2 = uVar17 + uVar12 + (uint)CARRY4(uVar7,uVar9);
  uVar11 = uVar1 + uVar2;
  uVar10 = uVar6 + uVar7 + uVar9 + (uint)CARRY4(uVar1,uVar2);
  uVar16 = (uVar1 << 0x15 | uVar6 >> 0xb) ^ uVar11;
  uVar4 = (uVar6 << 0x15 | uVar1 >> 0xb) ^ uVar10;
  uVar2 = (uVar17 << 0xd | uVar7 >> 0x13) ^ uVar2;
  uVar6 = (uVar7 << 0xd | uVar17 >> 0x13) ^ uVar7 + uVar9;
  uVar7 = uVar2 + uVar8 + (uint)CARRY4(uVar6,uVar13);
  uVar1 = uVar16 + uVar7;
  uVar8 = (uVar2 << 0x11 | uVar6 >> 0xf) ^ uVar7;
  uVar17 = (uVar6 << 0x11 | uVar2 >> 0xf) ^ uVar6 + uVar13;
  uVar2 = uVar4 + uVar6 + uVar13 + (uint)CARRY4(uVar16,uVar7);
  uVar6 = (uVar17 << 0xd | uVar8 >> 0x13) ^ uVar17 + uVar11;
  uVar7 = (uVar16 << 0x10 | uVar4 >> 0x10) ^ uVar1;
  uVar16 = (uVar4 << 0x10 | uVar16 >> 0x10) ^ uVar2;
  uVar4 = (uVar8 << 0xd | uVar17 >> 0x13) ^ uVar8 + uVar10 + (uint)CARRY4(uVar17,uVar11);
  uVar17 = uVar4 + uVar2 + (uint)CARRY4(uVar6,uVar1);
  return CONCAT44((uVar16 << 0x15 | uVar7 >> 0xb) ^ (uVar4 << 0x11 | uVar6 >> 0xf) ^ uVar6 + uVar1 ^
                  uVar17,(uVar7 << 0x15 | uVar16 >> 0xb) ^ (uVar6 << 0x11 | uVar4 >> 0xf) ^ uVar17 ^
                         uVar6 + uVar1);
}

