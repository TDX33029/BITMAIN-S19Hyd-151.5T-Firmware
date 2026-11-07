// FUN_01b8620c @ 01b8620c size=1016 calls_out=0 calls_in=1
// strings: 

uint FUN_01b8620c(uint *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  
  uVar17 = *param_1;
  uVar39 = param_1[7];
  uVar18 = param_1[1];
  uVar19 = param_1[6];
  if (uVar18 == 0 && (0x1f < uVar17) <= uVar18) {
    uVar24 = uVar19 + 0x165667c5;
    iVar16 = uVar39 + 0x27d4eb2f + (uint)(0xe9a9983a < uVar19);
  }
  else {
    uVar9 = param_1[2];
    uVar27 = param_1[3];
    uVar34 = param_1[4];
    uVar41 = (uint)((ulonglong)uVar9 * 0x27d4eb4f);
    uVar11 = uVar27 * 0x27d4eb4f + uVar9 * -0x3d4d51c3 +
             (int)((ulonglong)uVar9 * 0x27d4eb4f >> 0x20);
    uVar29 = uVar9 * 2 - ((int)uVar27 >> 0x1f);
    uVar36 = uVar41 * -0x80000000 + (uVar11 >> 1);
    uVar42 = uVar34 * 0x80 + (param_1[5] >> 0x19);
    uVar30 = uVar29 + uVar42;
    uVar43 = uVar19 * 0x1000 + (uVar39 >> 0x14);
    uVar31 = uVar30 + uVar43;
    uVar44 = param_1[8] * 0x40000 + (param_1[9] >> 0xe);
    lVar1 = (ulonglong)uVar36 * 0x85ebca87;
    uVar37 = (uint)lVar1 ^ uVar31 + uVar44;
    lVar2 = (ulonglong)uVar37 * 0x85ebca87;
    uVar32 = (uint)lVar2;
    uVar28 = (uint)((ulonglong)uVar34 * 0x27d4eb4f);
    uVar35 = param_1[5] * 0x27d4eb4f + uVar34 * -0x3d4d51c3 +
             (int)((ulonglong)uVar34 * 0x27d4eb4f >> 0x20);
    uVar12 = uVar28 * -0x80000000 + (uVar35 >> 1);
    lVar3 = (ulonglong)uVar12 * 0x85ebca87;
    uVar33 = uVar32 + 0xc2b2ae63 ^ (uint)lVar3;
    lVar4 = (ulonglong)uVar33 * 0x85ebca87;
    uVar13 = (uint)lVar4;
    uVar40 = (uint)((ulonglong)uVar19 * 0x27d4eb4f);
    uVar20 = uVar39 * 0x27d4eb4f + uVar19 * -0x3d4d51c3 +
             (int)((ulonglong)uVar19 * 0x27d4eb4f >> 0x20);
    uVar38 = uVar40 * -0x80000000 + (uVar20 >> 1);
    lVar5 = (ulonglong)uVar38 * 0x85ebca87;
    uVar14 = uVar13 + 0xc2b2ae63 ^ (uint)lVar5;
    lVar6 = (ulonglong)uVar14 * 0x85ebca87;
    uVar15 = (uint)lVar6;
    uVar25 = (uint)((ulonglong)param_1[8] * 0x27d4eb4f);
    uVar45 = param_1[9] * 0x27d4eb4f + param_1[8] * -0x3d4d51c3 +
             (int)((ulonglong)param_1[8] * 0x27d4eb4f >> 0x20);
    uVar21 = uVar25 * -0x80000000 + (uVar45 >> 1);
    lVar7 = (ulonglong)uVar21 * 0x85ebca87;
    uVar22 = (uint)lVar7 ^ uVar15 + 0xc2b2ae63;
    lVar8 = (ulonglong)uVar22 * 0x85ebca87;
    uVar23 = (uint)lVar8;
    uVar24 = uVar23 + 0xc2b2ae63;
    iVar16 = (((uVar20 * -0x80000000 + (uVar40 >> 1)) * -0x7a143579 + uVar38 * -0x61c8864f +
               (int)((ulonglong)lVar5 >> 0x20) ^
              ((uVar35 * -0x80000000 + (uVar28 >> 1)) * -0x7a143579 + uVar12 * -0x61c8864f +
               (int)((ulonglong)lVar3 >> 0x20) ^
              ((uVar11 * -0x80000000 + (uVar41 >> 1)) * -0x7a143579 + uVar36 * -0x61c8864f +
               (int)((ulonglong)lVar1 >> 0x20) ^
              (uVar27 * 2 - ((int)uVar9 >> 0x1f)) + param_1[5] * 0x80 + (uVar34 >> 0x19) +
              (uint)CARRY4(uVar29,uVar42) + uVar39 * 0x1000 + (uVar19 >> 0x14) +
              (uint)CARRY4(uVar30,uVar43) + param_1[9] * 0x40000 + (param_1[8] >> 0xe) +
              (uint)CARRY4(uVar31,uVar44)) * -0x7a143579 + uVar37 * -0x61c8864f +
              (int)((ulonglong)lVar2 >> 0x20) + -0x7a143589 + (uint)(0x3d4d519c < uVar32)) *
              -0x7a143579 + uVar33 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
              (uint)(0x3d4d519c < uVar13)) * -0x7a143579 + uVar14 * -0x61c8864f +
              (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589 + (uint)(0x3d4d519c < uVar15) ^
             (uVar45 * -0x80000000 + (uVar25 >> 1)) * -0x7a143579 + uVar21 * -0x61c8864f +
             (int)((ulonglong)lVar7 >> 0x20)) * -0x7a143579 + uVar22 * -0x61c8864f +
             (int)((ulonglong)lVar8 >> 0x20) + -0x7a143589 + (uint)(0x3d4d519c < uVar23);
  }
  uVar39 = uVar17 + uVar24;
  uVar19 = uVar18 + iVar16 + (uint)CARRY4(uVar17,uVar24);
  uVar17 = uVar17 & 0x1f;
  puVar10 = param_1 + 10;
  for (uVar18 = uVar17; 7 < uVar18; uVar18 = uVar18 - 8) {
    lVar1 = (ulonglong)*puVar10 * 0x27d4eb4f;
    uVar24 = (uint)lVar1;
    uVar12 = puVar10[1] * 0x27d4eb4f + *puVar10 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
    uVar9 = uVar24 * -0x80000000 + (uVar12 >> 1);
    lVar1 = (ulonglong)uVar9 * 0x85ebca87;
    uVar11 = (uint)lVar1 ^ uVar39;
    uVar19 = (uVar12 * -0x80000000 + (uVar24 >> 1)) * -0x7a143579 + uVar9 * -0x61c8864f +
             (int)((ulonglong)lVar1 >> 0x20) ^ uVar19;
    uVar9 = uVar11 * 0x8000000 + (uVar19 >> 5);
    lVar1 = (ulonglong)uVar9 * 0x85ebca87;
    uVar24 = (uint)lVar1;
    uVar39 = uVar24 + 0xc2b2ae63;
    uVar19 = (uVar19 * 0x8000000 + (uVar11 >> 5)) * -0x7a143579 + uVar9 * -0x61c8864f +
             (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 + (uint)(0x3d4d519c < uVar24);
    puVar10 = puVar10 + 2;
  }
  uVar18 = (uVar17 >> 3) * -8 + uVar17;
  puVar26 = param_1 + 10 + (uVar17 >> 3) * 2;
  puVar10 = puVar26;
  if (3 < uVar18) {
    puVar10 = puVar26 + 1;
    uVar18 = uVar18 - 4;
    lVar1 = (ulonglong)*puVar26 * 0x85ebca87;
    uVar9 = (uint)lVar1 ^ uVar39;
    uVar19 = uVar19 ^ *puVar26 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
    uVar17 = uVar9 * 0x800000 + (uVar19 >> 9);
    lVar1 = (ulonglong)uVar17 * 0x27d4eb4f;
    uVar24 = (uint)lVar1;
    uVar39 = uVar24 + 0x9e3779f9;
    uVar19 = (uVar19 * 0x800000 + (uVar9 >> 9)) * 0x27d4eb4f + uVar17 * -0x3d4d51c3 +
             (int)((ulonglong)lVar1 >> 0x20) + 0x165667b1 + (uint)(0x61c88606 < uVar24);
  }
  puVar26 = (uint *)((int)puVar10 + uVar18);
  for (; puVar10 != puVar26; puVar10 = (uint *)((int)puVar10 + 1)) {
    lVar1 = (ulonglong)(uint)(byte)*puVar10 * 0x165667c5;
    uVar18 = (uint)lVar1 ^ uVar39;
    uVar19 = (uint)(byte)*puVar10 * 0x27d4eb2f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar19;
    uVar17 = uVar18 * 0x800 + (uVar19 >> 0x15);
    lVar1 = (ulonglong)uVar17 * 0x85ebca87;
    uVar39 = (uint)lVar1;
    uVar19 = (uVar19 * 0x800 + (uVar18 >> 0x15)) * -0x7a143579 + uVar17 * -0x61c8864f +
             (int)((ulonglong)lVar1 >> 0x20);
  }
  uVar39 = uVar39 ^ uVar19 >> 1;
  lVar1 = (ulonglong)uVar39 * 0x27d4eb4f;
  uVar17 = (uint)lVar1;
  uVar18 = uVar19 * 0x27d4eb4f + uVar39 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
  uVar17 = uVar17 ^ (uVar17 >> 0x1d | uVar18 * 8);
  lVar1 = (ulonglong)uVar17 * 0x9e3779f9;
  return (uint)lVar1 ^
         (uVar18 ^ uVar18 >> 0x1d) * -0x61c88607 + uVar17 * 0x165667b1 +
         (int)((ulonglong)lVar1 >> 0x20);
}

