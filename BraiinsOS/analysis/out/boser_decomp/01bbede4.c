// FUN_01bbede4 @ 01bbede4 size=1540 calls_out=0 calls_in=2
// strings: 

uint FUN_01bbede4(uint *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
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
  uint *puVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint *puVar42;
  int iVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint local_48;
  uint local_3c;
  uint local_38;
  int local_30;
  uint *local_2c;
  
  local_2c = param_1;
  if (param_1 == (uint *)0x0) {
    uVar12 = 0x165667c5;
    uVar11 = 0x27d4eb2f;
  }
  else if (param_2 < 0x20) {
    uVar12 = param_2 + 0x165667c5;
    uVar11 = (0xe9a9983a < param_2) + 0x27d4eb2f;
  }
  else {
    uVar41 = 0;
    uVar13 = 0;
    uVar11 = 0xc2b2ae3d;
    puVar42 = (uint *)((int)param_1 + (param_2 - 0x1f));
    local_48 = 0x7a143579;
    local_3c = 0x27d4eb4f;
    uVar14 = 0x61c8864e;
    local_38 = 0xadc0b5d6;
    local_30 = 0x60ea27ee;
    puVar10 = param_1;
    do {
      puVar38 = puVar10 + 8;
      lVar1 = (ulonglong)*puVar10 * 0x27d4eb4f;
      uVar12 = (uint)lVar1;
      uVar37 = uVar12 + local_38;
      uVar40 = puVar10[1] * 0x27d4eb4f + *puVar10 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20) +
               local_30 + (uint)CARRY4(uVar12,local_38);
      uVar12 = uVar37 * -0x80000000 + (uVar40 >> 1);
      iVar18 = uVar40 * -0x80000000 + (uVar37 >> 1);
      local_38 = (uint)((ulonglong)uVar12 * 0x85ebca87);
      local_30 = iVar18 * -0x7a143579 + uVar12 * -0x61c8864f +
                 (int)((ulonglong)uVar12 * 0x85ebca87 >> 0x20);
      lVar1 = (ulonglong)puVar10[2] * 0x27d4eb4f;
      uVar37 = (uint)lVar1;
      uVar40 = uVar37 + local_3c;
      uVar11 = puVar10[3] * 0x27d4eb4f + puVar10[2] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20)
               + uVar11 + (uint)CARRY4(uVar37,local_3c);
      uVar24 = uVar40 * -0x80000000 + (uVar11 >> 1);
      iVar19 = uVar11 * -0x80000000 + (uVar40 >> 1);
      local_3c = (uint)((ulonglong)uVar24 * 0x85ebca87);
      uVar11 = iVar19 * -0x7a143579 + uVar24 * -0x61c8864f +
               (int)((ulonglong)uVar24 * 0x85ebca87 >> 0x20);
      lVar1 = (ulonglong)puVar10[4] * 0x27d4eb4f;
      uVar37 = (uint)lVar1;
      uVar40 = uVar37 + uVar41;
      uVar41 = puVar10[5] * 0x27d4eb4f + puVar10[4] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20)
               + uVar13 + (uint)CARRY4(uVar37,uVar41);
      uVar34 = uVar40 * -0x80000000 + (uVar41 >> 1);
      iVar20 = uVar41 * -0x80000000 + (uVar40 >> 1);
      uVar41 = (uint)((ulonglong)uVar34 * 0x85ebca87);
      uVar13 = iVar20 * -0x7a143579 + uVar34 * -0x61c8864f +
               (int)((ulonglong)uVar34 * 0x85ebca87 >> 0x20);
      lVar1 = (ulonglong)puVar10[6] * 0x27d4eb4f;
      uVar37 = (uint)lVar1;
      uVar40 = uVar37 + local_48;
      uVar14 = puVar10[7] * 0x27d4eb4f + puVar10[6] * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20)
               + uVar14 + (uint)CARRY4(uVar37,local_48);
      uVar37 = uVar40 * -0x80000000 + (uVar14 >> 1);
      iVar43 = uVar14 * -0x80000000 + (uVar40 >> 1);
      local_48 = (uint)((ulonglong)uVar37 * 0x85ebca87);
      uVar14 = iVar43 * -0x7a143579 + uVar37 * -0x61c8864f +
               (int)((ulonglong)uVar37 * 0x85ebca87 >> 0x20);
      puVar10 = puVar38;
    } while (puVar38 < puVar42);
    if (puVar42 < (uint *)((int)param_1 + 1)) {
      iVar9 = 0;
    }
    else {
      iVar9 = (param_2 & 0xffffffe0) - 0x20;
    }
    local_2c = (uint *)((int)param_1 + iVar9 + 0x20);
    uVar27 = (uint)((ulonglong)uVar12 * 0xf796ca9);
    uVar40 = iVar18 * 0xf796ca9 + uVar12 * -0x210ca4ff +
             (int)((ulonglong)uVar12 * 0xf796ca9 >> 0x20);
    uVar21 = uVar27 * -0x80000000 + (uVar40 >> 1);
    uVar36 = local_38 * 2 - (local_30 >> 0x1f);
    uVar30 = local_3c * 0x80 + (uVar11 >> 0x19);
    uVar31 = uVar36 + uVar30;
    uVar28 = uVar41 * 0x1000 + (uVar13 >> 0x14);
    uVar29 = uVar31 + uVar28;
    uVar25 = local_48 * 0x40000 + (uVar14 >> 0xe);
    lVar1 = (ulonglong)uVar21 * 0x85ebca87;
    uVar22 = (uint)lVar1 ^ uVar29 + uVar25;
    lVar2 = (ulonglong)uVar22 * 0x85ebca87;
    uVar32 = (uint)lVar2;
    uVar23 = (uint)((ulonglong)uVar24 * 0xf796ca9);
    uVar24 = iVar19 * 0xf796ca9 + uVar24 * -0x210ca4ff +
             (int)((ulonglong)uVar24 * 0xf796ca9 >> 0x20);
    uVar44 = uVar23 * -0x80000000 + (uVar24 >> 1);
    lVar3 = (ulonglong)uVar44 * 0x85ebca87;
    uVar45 = (uint)lVar3 ^ uVar32 + 0xc2b2ae63;
    lVar4 = (ulonglong)uVar45 * 0x85ebca87;
    uVar33 = (uint)lVar4;
    uVar35 = (uint)((ulonglong)uVar34 * 0xf796ca9);
    uVar34 = iVar20 * 0xf796ca9 + uVar34 * -0x210ca4ff +
             (int)((ulonglong)uVar34 * 0xf796ca9 >> 0x20);
    uVar46 = uVar35 * -0x80000000 + (uVar34 >> 1);
    lVar5 = (ulonglong)uVar46 * 0x85ebca87;
    uVar47 = (uint)lVar5 ^ uVar33 + 0xc2b2ae63;
    lVar6 = (ulonglong)uVar47 * 0x85ebca87;
    uVar15 = (uint)lVar6;
    uVar39 = (uint)((ulonglong)uVar37 * 0xf796ca9);
    uVar37 = iVar43 * 0xf796ca9 + uVar37 * -0x210ca4ff +
             (int)((ulonglong)uVar37 * 0xf796ca9 >> 0x20);
    uVar26 = uVar39 * -0x80000000 + (uVar37 >> 1);
    lVar7 = (ulonglong)uVar26 * 0x85ebca87;
    uVar16 = uVar15 + 0xc2b2ae63 ^ (uint)lVar7;
    lVar8 = (ulonglong)uVar16 * 0x85ebca87;
    uVar17 = (uint)lVar8;
    uVar12 = uVar17 + param_2 + 0xc2b2ae63;
    uVar11 = ((((uVar24 * -0x80000000 + (uVar23 >> 1)) * -0x7a143579 + uVar44 * -0x61c8864f +
                (int)((ulonglong)lVar3 >> 0x20) ^
               ((local_30 * 2 - ((int)local_38 >> 0x1f)) + uVar11 * 0x80 + (local_3c >> 0x19) +
                (uint)CARRY4(uVar36,uVar30) + uVar13 * 0x1000 + (uVar41 >> 0x14) +
                (uint)CARRY4(uVar31,uVar28) + uVar14 * 0x40000 + (local_48 >> 0xe) +
                (uint)CARRY4(uVar29,uVar25) ^
               (uVar40 * -0x80000000 + (uVar27 >> 1)) * -0x7a143579 + uVar21 * -0x61c8864f +
               (int)((ulonglong)lVar1 >> 0x20)) * -0x7a143579 + uVar22 * -0x61c8864f +
               (int)((ulonglong)lVar2 >> 0x20) + -0x7a143589 + (uint)(0x3d4d519c < uVar32)) *
               -0x7a143579 + uVar45 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar33) ^
              (uVar34 * -0x80000000 + (uVar35 >> 1)) * -0x7a143579 + uVar46 * -0x61c8864f +
              (int)((ulonglong)lVar5 >> 0x20)) * -0x7a143579 + uVar47 * -0x61c8864f +
              (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589 + (uint)(0x3d4d519c < uVar15) ^
             (uVar37 * -0x80000000 + (uVar39 >> 1)) * -0x7a143579 + uVar26 * -0x61c8864f +
             (int)((ulonglong)lVar7 >> 0x20)) * -0x7a143579 + uVar16 * -0x61c8864f +
             (int)((ulonglong)lVar8 >> 0x20) + (0x3d4d519c < param_2) + 0x85ebca77 +
             (uint)CARRY4(uVar17,param_2 + 0xc2b2ae63);
  }
  param_2 = param_2 & 0x1f;
  for (uVar41 = param_2; 7 < uVar41; uVar41 = uVar41 - 8) {
    puVar10 = (uint *)((int)local_2c + (param_2 - uVar41));
    uVar13 = *puVar10;
    lVar1 = (ulonglong)uVar13 * 0x27d4eb4f;
    uVar37 = (uint)lVar1;
    uVar40 = puVar10[1] * 0x27d4eb4f + uVar13 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
    uVar13 = uVar37 * -0x80000000 + (uVar40 >> 1);
    lVar1 = (ulonglong)uVar13 * 0x85ebca87;
    uVar14 = (uint)lVar1 ^ uVar12;
    uVar11 = (uVar40 * -0x80000000 + (uVar37 >> 1)) * -0x7a143579 + uVar13 * -0x61c8864f +
             (int)((ulonglong)lVar1 >> 0x20) ^ uVar11;
    uVar37 = uVar14 * 0x8000000 + (uVar11 >> 5);
    lVar1 = (ulonglong)uVar37 * 0x85ebca87;
    uVar13 = (uint)lVar1;
    uVar12 = uVar13 + 0xc2b2ae63;
    uVar11 = (uVar11 * 0x8000000 + (uVar14 >> 5)) * -0x7a143579 + uVar37 * -0x61c8864f +
             (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 + (uint)(0x3d4d519c < uVar13);
  }
  uVar41 = param_2 + (param_2 >> 3) * -8;
  local_2c = local_2c + (param_2 >> 3) * 2;
  puVar10 = local_2c;
  if (3 < uVar41) {
    puVar10 = local_2c + 1;
    uVar41 = uVar41 - 4;
    lVar1 = (ulonglong)*local_2c * 0x85ebca87;
    uVar37 = (uint)lVar1 ^ uVar12;
    uVar11 = uVar11 ^ *local_2c * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20);
    uVar13 = uVar37 * 0x800000 + (uVar11 >> 9);
    lVar1 = (ulonglong)uVar13 * 0x27d4eb4f;
    uVar14 = (uint)lVar1;
    uVar12 = uVar14 + 0x9e3779f9;
    uVar11 = (uVar11 * 0x800000 + (uVar37 >> 9)) * 0x27d4eb4f + uVar13 * -0x3d4d51c3 +
             (int)((ulonglong)lVar1 >> 0x20) + 0x165667b1 + (uint)(0x61c88606 < uVar14);
  }
  puVar42 = (uint *)((int)puVar10 + uVar41);
  for (; puVar10 != puVar42; puVar10 = (uint *)((int)puVar10 + 1)) {
    lVar1 = (ulonglong)(uint)(byte)*puVar10 * 0x165667c5;
    uVar13 = (uint)lVar1 ^ uVar12;
    uVar11 = (uint)(byte)*puVar10 * 0x27d4eb2f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar11;
    uVar41 = uVar13 * 0x800 + (uVar11 >> 0x15);
    lVar1 = (ulonglong)uVar41 * 0x85ebca87;
    uVar12 = (uint)lVar1;
    uVar11 = (uVar11 * 0x800 + (uVar13 >> 0x15)) * -0x7a143579 + uVar41 * -0x61c8864f +
             (int)((ulonglong)lVar1 >> 0x20);
  }
  uVar12 = uVar12 ^ uVar11 >> 1;
  lVar1 = (ulonglong)uVar12 * 0x27d4eb4f;
  uVar41 = (uint)lVar1;
  uVar11 = uVar11 * 0x27d4eb4f + uVar12 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
  uVar41 = uVar41 ^ (uVar41 >> 0x1d | uVar11 * 8);
  lVar1 = (ulonglong)uVar41 * 0x9e3779f9;
  return (uint)lVar1 ^
         (uVar11 ^ uVar11 >> 0x1d) * -0x61c88607 + uVar41 * 0x165667b1 +
         (int)((ulonglong)lVar1 >> 0x20);
}

