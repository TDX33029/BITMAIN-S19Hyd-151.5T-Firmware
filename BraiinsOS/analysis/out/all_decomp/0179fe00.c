// FUN_0179fe00 @ 0179fe00 size=2040 calls_out=2 calls_in=1
// strings: 

uint FUN_0179fe00(int *param_1,int param_2,int param_3)

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
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
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
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint *local_38;
  uint *local_34;
  uint local_2c;
  
  uVar9 = FUN_0179eb28();
  if (0xffffff88 < uVar9) {
    return uVar9;
  }
  iVar22 = *param_1;
  if (iVar22 == 0) {
    return 0xffffffc4;
  }
  puVar20 = (uint *)(param_2 + uVar9);
  local_2c = param_3 - uVar9;
  if (iVar22 == 1) {
    uVar23 = FUN_0179841c(puVar20,local_2c,param_1 + 0x2f,uVar9,0,0,0);
    if (0xffffff88 < uVar23) {
      return 0xffffffba;
    }
    local_2c = local_2c - uVar23;
    puVar19 = (uint *)((int)puVar20 + uVar23);
    *param_1 = 2;
LAB_0179fe98:
    if (local_2c < 3) {
      return 0xffffffba;
    }
    *(undefined2 *)puVar19 = 1;
    *(undefined1 *)((int)puVar19 + 2) = 0;
    local_34 = (uint *)((int)puVar19 + 3);
    if (param_1[0x38] != 0) {
      local_2c = local_2c - 3;
      goto LAB_0179fed0;
    }
  }
  else {
    if (iVar22 != 3) {
      puVar19 = puVar20;
      goto LAB_0179fe98;
    }
    if (param_1[0x38] == 0) {
      *param_1 = 0;
      uVar23 = 0;
      goto LAB_017a04f0;
    }
    local_34 = puVar20;
LAB_0179fed0:
    uVar23 = param_1[0x9c];
    uVar24 = param_1[0x9d];
    uVar26 = param_1[0xa2];
    uVar27 = param_1[0xa3];
    if (uVar24 == 0 && (0x1f < uVar23) <= uVar24) {
      uVar25 = uVar26 + 0x165667c5;
      iVar22 = uVar27 + 0x27d4eb2f + (uint)(0xe9a9983a < uVar26);
    }
    else {
      uVar10 = param_1[0x9e];
      uVar41 = uVar10 * 2 - (param_1[0x9f] >> 0x1f);
      uVar30 = (uint)((ulonglong)uVar10 * 0x27d4eb4f);
      uVar21 = param_1[0x9f] * 0x27d4eb4f + uVar10 * -0x3d4d51c3 +
               (int)((ulonglong)uVar10 * 0x27d4eb4f >> 0x20);
      uVar11 = param_1[0xa0] * 0x80 + ((uint)param_1[0xa1] >> 0x19);
      uVar42 = uVar41 + uVar11;
      uVar12 = uVar30 * -0x80000000 + (uVar21 >> 1);
      uVar31 = uVar26 * 0x1000 + (uVar27 >> 0x14);
      uVar43 = uVar42 + uVar31;
      uVar32 = (uint)((ulonglong)(uint)param_1[0xa0] * 0x27d4eb4f);
      uVar34 = param_1[0xa1] * 0x27d4eb4f + param_1[0xa0] * -0x3d4d51c3 +
               (int)((ulonglong)(uint)param_1[0xa0] * 0x27d4eb4f >> 0x20);
      uVar13 = param_1[0xa4] * 0x40000 + ((uint)param_1[0xa5] >> 0xe);
      lVar1 = (ulonglong)uVar12 * 0x85ebca87;
      uVar14 = (uint)lVar1 ^ uVar43 + uVar13;
      uVar36 = uVar32 * -0x80000000 + (uVar34 >> 1);
      uVar28 = (uint)((ulonglong)uVar26 * 0x27d4eb4f);
      uVar33 = uVar27 * 0x27d4eb4f + uVar26 * -0x3d4d51c3 +
               (int)((ulonglong)uVar26 * 0x27d4eb4f >> 0x20);
      uVar37 = (uint)((ulonglong)(uint)param_1[0xa4] * 0x27d4eb4f);
      uVar44 = param_1[0xa5] * 0x27d4eb4f + param_1[0xa4] * -0x3d4d51c3 +
               (int)((ulonglong)(uint)param_1[0xa4] * 0x27d4eb4f >> 0x20);
      lVar2 = (ulonglong)uVar14 * 0x85ebca87;
      uVar15 = (uint)lVar2;
      lVar3 = (ulonglong)uVar36 * 0x85ebca87;
      uVar16 = uVar15 + 0xc2b2ae63 ^ (uint)lVar3;
      uVar35 = uVar28 * -0x80000000 + (uVar33 >> 1);
      lVar4 = (ulonglong)uVar16 * 0x85ebca87;
      uVar17 = (uint)lVar4;
      lVar5 = (ulonglong)uVar35 * 0x85ebca87;
      uVar29 = uVar17 + 0xc2b2ae63 ^ (uint)lVar5;
      uVar18 = uVar37 * -0x80000000 + (uVar44 >> 1);
      lVar6 = (ulonglong)uVar29 * 0x85ebca87;
      uVar38 = (uint)lVar6;
      lVar7 = (ulonglong)uVar18 * 0x85ebca87;
      uVar39 = uVar38 + 0xc2b2ae63 ^ (uint)lVar7;
      lVar8 = (ulonglong)uVar39 * 0x85ebca87;
      uVar40 = (uint)lVar8;
      uVar25 = uVar40 + 0xc2b2ae63;
      iVar22 = ((uVar44 * -0x80000000 + (uVar37 >> 1)) * -0x7a143579 + uVar18 * -0x61c8864f +
                (int)((ulonglong)lVar7 >> 0x20) ^
               ((((param_1[0x9f] * 2 - ((int)uVar10 >> 0x1f)) +
                  param_1[0xa1] * 0x80 + ((uint)param_1[0xa0] >> 0x19) + (uint)CARRY4(uVar41,uVar11)
                  + uVar27 * 0x1000 + (uVar26 >> 0x14) + (uint)CARRY4(uVar42,uVar31) +
                  param_1[0xa5] * 0x40000 + ((uint)param_1[0xa4] >> 0xe) +
                  (uint)CARRY4(uVar43,uVar13) ^
                 (uVar21 * -0x80000000 + (uVar30 >> 1)) * -0x7a143579 + uVar12 * -0x61c8864f +
                 (int)((ulonglong)lVar1 >> 0x20)) * -0x7a143579 + uVar14 * -0x61c8864f +
                 (int)((ulonglong)lVar2 >> 0x20) + -0x7a143589 + (uint)(0x3d4d519c < uVar15) ^
                (uVar34 * -0x80000000 + (uVar32 >> 1)) * -0x7a143579 + uVar36 * -0x61c8864f +
                (int)((ulonglong)lVar3 >> 0x20)) * -0x7a143579 + uVar16 * -0x61c8864f +
                (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 + (uint)(0x3d4d519c < uVar17) ^
               (uVar33 * -0x80000000 + (uVar28 >> 1)) * -0x7a143579 + uVar35 * -0x61c8864f +
               (int)((ulonglong)lVar5 >> 0x20)) * -0x7a143579 + uVar29 * -0x61c8864f +
               (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589 + (uint)(0x3d4d519c < uVar38)) *
               -0x7a143579 + uVar39 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar40);
    }
    uVar26 = uVar23 + uVar25;
    uVar27 = uVar23 & 0x1f;
    uVar24 = uVar24 + iVar22 + (uint)CARRY4(uVar23,uVar25);
    local_38 = (uint *)(param_1 + 0xa6);
    if ((uVar23 & 0x18) != 0) {
      lVar1 = (ulonglong)(uint)param_1[0xa6] * 0x27d4eb4f;
      uVar25 = (uint)lVar1;
      uVar10 = param_1[0xa7] * 0x27d4eb4f + param_1[0xa6] * -0x3d4d51c3 +
               (int)((ulonglong)lVar1 >> 0x20);
      uVar11 = uVar25 * -0x80000000 + (uVar10 >> 1);
      lVar1 = (ulonglong)uVar11 * 0x85ebca87;
      uVar12 = (uint)lVar1 ^ uVar26;
      uVar24 = (uVar10 * -0x80000000 + (uVar25 >> 1)) * -0x7a143579 + uVar11 * -0x61c8864f +
               (int)((ulonglong)lVar1 >> 0x20) ^ uVar24;
      uVar25 = uVar12 * 0x8000000 + (uVar24 >> 5);
      lVar1 = (ulonglong)uVar25 * 0x85ebca87;
      uVar10 = (uint)lVar1;
      uVar26 = uVar10 + 0xc2b2ae63;
      uVar24 = (uVar24 * 0x8000000 + (uVar12 >> 5)) * -0x7a143579 + uVar25 * -0x61c8864f +
               (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 + (uint)(0x3d4d519c < uVar10);
      if (7 < uVar27 - 8) {
        lVar1 = (ulonglong)(uint)param_1[0xa8] * 0x27d4eb4f;
        uVar25 = (uint)lVar1;
        uVar10 = param_1[0xa9] * 0x27d4eb4f + param_1[0xa8] * -0x3d4d51c3 +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar11 = uVar25 * -0x80000000 + (uVar10 >> 1);
        lVar1 = (ulonglong)uVar11 * 0x85ebca87;
        uVar12 = (uint)lVar1 ^ uVar26;
        uVar24 = (uVar10 * -0x80000000 + (uVar25 >> 1)) * -0x7a143579 + uVar11 * -0x61c8864f +
                 (int)((ulonglong)lVar1 >> 0x20) ^ uVar24;
        uVar25 = uVar12 * 0x8000000 + (uVar24 >> 5);
        lVar1 = (ulonglong)uVar25 * 0x85ebca87;
        uVar10 = (uint)lVar1;
        uVar26 = uVar10 + 0xc2b2ae63;
        uVar24 = (uVar24 * 0x8000000 + (uVar12 >> 5)) * -0x7a143579 + uVar25 * -0x61c8864f +
                 (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 + (uint)(0x3d4d519c < uVar10);
        if (7 < uVar27 - 0x10) {
          lVar1 = (ulonglong)(uint)param_1[0xaa] * 0x27d4eb4f;
          uVar25 = (uint)lVar1;
          uVar10 = param_1[0xab] * 0x27d4eb4f + param_1[0xaa] * -0x3d4d51c3 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar11 = uVar25 * -0x80000000 + (uVar10 >> 1);
          lVar1 = (ulonglong)uVar11 * 0x85ebca87;
          uVar12 = (uint)lVar1 ^ uVar26;
          uVar24 = (uVar10 * -0x80000000 + (uVar25 >> 1)) * -0x7a143579 + uVar11 * -0x61c8864f +
                   (int)((ulonglong)lVar1 >> 0x20) ^ uVar24;
          uVar10 = uVar12 * 0x8000000 + (uVar24 >> 5);
          lVar1 = (ulonglong)uVar10 * 0x85ebca87;
          uVar25 = (uint)lVar1;
          uVar26 = uVar25 + 0xc2b2ae63;
          uVar24 = (uVar24 * 0x8000000 + (uVar12 >> 5)) * -0x7a143579 + uVar10 * -0x61c8864f +
                   (int)((ulonglong)lVar1 >> 0x20) + -0x7a143589 + (uint)(0x3d4d519c < uVar25);
        }
      }
      local_38 = (uint *)((int)param_1 + (uVar27 - 8 & 0xfffffff8) + 0x2a0);
      uVar27 = uVar23 & 7;
    }
    if (3 < uVar27) {
      uVar27 = uVar27 - 4;
      lVar1 = (ulonglong)*local_38 * 0x85ebca87;
      uVar10 = (uint)lVar1 ^ uVar26;
      uVar24 = *local_38 * -0x61c8864f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar24;
      uVar23 = uVar10 * 0x800000 + (uVar24 >> 9);
      lVar1 = (ulonglong)uVar23 * 0x27d4eb4f;
      uVar25 = (uint)lVar1;
      uVar26 = uVar25 + 0x9e3779f9;
      uVar24 = (uVar24 * 0x800000 + (uVar10 >> 9)) * 0x27d4eb4f + uVar23 * -0x3d4d51c3 +
               (int)((ulonglong)lVar1 >> 0x20) + 0x165667b1 + (uint)(0x61c88606 < uVar25);
      local_38 = local_38 + 1;
    }
    if (uVar27 != 0) {
      lVar1 = (ulonglong)(uint)(byte)*local_38 * 0x165667c5;
      uVar25 = uVar26 ^ (uint)lVar1;
      uVar24 = (uint)(byte)*local_38 * 0x27d4eb2f + (int)((ulonglong)lVar1 >> 0x20) ^ uVar24;
      uVar23 = uVar25 * 0x800 + (uVar24 >> 0x15);
      lVar1 = (ulonglong)uVar23 * 0x85ebca87;
      uVar26 = (uint)lVar1;
      uVar24 = (uVar24 * 0x800 + (uVar25 >> 0x15)) * -0x7a143579 + uVar23 * -0x61c8864f +
               (int)((ulonglong)lVar1 >> 0x20);
      if (uVar27 != 1) {
        lVar1 = (ulonglong)(uint)*(byte *)((int)local_38 + 1) * 0x165667c5;
        uVar25 = uVar26 ^ (uint)lVar1;
        uVar24 = (uint)*(byte *)((int)local_38 + 1) * 0x27d4eb2f + (int)((ulonglong)lVar1 >> 0x20) ^
                 uVar24;
        uVar23 = uVar25 * 0x800 + (uVar24 >> 0x15);
        lVar1 = (ulonglong)uVar23 * 0x85ebca87;
        uVar26 = (uint)lVar1;
        uVar24 = (uVar24 * 0x800 + (uVar25 >> 0x15)) * -0x7a143579 + uVar23 * -0x61c8864f +
                 (int)((ulonglong)lVar1 >> 0x20);
        if (uVar27 != 2) {
          lVar1 = (ulonglong)(uint)*(byte *)((int)local_38 + 2) * 0x165667c5;
          uVar27 = (uint)lVar1 ^ uVar26;
          uVar24 = uVar24 ^ (uint)*(byte *)((int)local_38 + 2) * 0x27d4eb2f +
                            (int)((ulonglong)lVar1 >> 0x20);
          uVar23 = uVar27 * 0x800 + (uVar24 >> 0x15);
          lVar1 = (ulonglong)uVar23 * 0x85ebca87;
          uVar26 = (uint)lVar1;
          uVar24 = (uVar24 * 0x800 + (uVar27 >> 0x15)) * -0x7a143579 + uVar23 * -0x61c8864f +
                   (int)((ulonglong)lVar1 >> 0x20);
        }
      }
    }
    if (local_2c < 4) {
      return 0xffffffba;
    }
    uVar26 = uVar26 ^ uVar24 >> 1;
    lVar1 = (ulonglong)uVar26 * 0x27d4eb4f;
    uVar27 = (uint)lVar1;
    uVar23 = uVar24 * 0x27d4eb4f + uVar26 * -0x3d4d51c3 + (int)((ulonglong)lVar1 >> 0x20);
    uVar27 = uVar27 ^ (uVar27 >> 0x1d | uVar23 * 8);
    lVar1 = (ulonglong)uVar27 * 0x9e3779f9;
    *local_34 = (uint)lVar1 ^
                (uVar23 ^ uVar23 >> 0x1d) * -0x61c88607 + uVar27 * 0x165667b1 +
                (int)((ulonglong)lVar1 >> 0x20);
    local_34 = local_34 + 1;
  }
  uVar23 = (int)local_34 - (int)puVar20;
  *param_1 = 0;
  if (0xffffff88 < uVar23) {
    return uVar23;
  }
LAB_017a04f0:
  if ((param_1[0x96] == 0 && param_1[0x97] == 0) ||
     (param_1[0x97] == param_1[0x99] + (uint)(0xfffffffe < (uint)param_1[0x98]) &&
      param_1[0x96] == param_1[0x98] + 1U)) {
    return uVar9 + uVar23;
  }
  return 0xffffffb8;
}

