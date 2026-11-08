// FUN_01802d28 @ 01802d28 size=2596 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_01802d28(int param_1,uint param_2,uint param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  uint *puVar41;
  uint uVar42;
  uint *puVar43;
  uint *puVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  int iVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint local_e4;
  uint local_a0;
  uint local_88;
  int *local_78;
  int local_74;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_44 [4];
  uint local_34;
  int local_2c;
  
  uVar13 = *(uint *)(param_4 + 0x10);
  uVar40 = *(uint *)(param_4 + 0xc);
  local_2c = DAT_018ddaf8;
  uVar20 = uVar40;
  if (0x3f < uVar40) {
    uVar20 = 0x40;
  }
  iVar10 = *(int *)(param_4 + 4);
  uVar51 = uVar20 - uVar13;
  iVar27 = 1 << (uVar13 & 0xff);
  local_44[3] = iVar27 - 1;
  local_34 = (1 << (uVar13 - 0x20 & 0xff) | 1U >> (0x20 - uVar13 & 0xff)) - (uint)(iVar27 == 0);
  uVar21 = local_44[3] << (uVar51 - 0x20 & 0xff);
  uVar33 = (uint)local_44[3] >> (0x20 - uVar51 & 0xff);
  if (uVar13 - 1 < uVar20) {
    local_44[3] = local_44[3] << (uVar51 & 0xff);
  }
  iVar27 = *(int *)(param_1 + 4);
  if (uVar13 - 1 < uVar20) {
    local_34 = local_34 << (uVar51 & 0xff) | uVar21 | uVar33;
  }
  iVar14 = *(int *)(param_4 + 8);
  local_44[1] = 0xffffffff;
  local_44[2] = 0;
  if (param_2 < param_3) {
    uVar20 = uVar40 & 0x1f;
    local_a0 = 0x165667c5;
    local_e4 = 0x27d4eb4f;
    local_88 = param_2;
    do {
      local_44[0] = 0;
      iVar11 = FUN_018027a8(local_44 + 1,local_88,param_3 - local_88,param_1 + 0x24,local_44);
      if (local_44[0] != 0) {
        local_74 = 0;
        local_78 = (int *)(param_1 + 0x20);
        do {
          local_78 = local_78 + 1;
          if (param_2 + uVar40 <= local_88 + *local_78) {
            puVar41 = (uint *)(local_88 + (*local_78 - uVar40));
            if (puVar41 == (uint *)0x0) {
              uVar21 = 0x27d4eb2f;
              uVar13 = local_a0;
            }
            else {
              if (uVar40 < 0x20) {
                uVar13 = uVar40 + 0x165667c5;
                uVar21 = (0xe9a9983a < uVar40) + 0x27d4eb2f;
                puVar43 = puVar41;
                if ((uVar40 & 0x18) != 0) goto LAB_01802f30;
LAB_018036d4:
                uVar33 = uVar20;
              }
              else {
                uVar33 = 0xc2b2ae3d;
                local_5c = 0x61c8864e;
                iVar36 = 0x60ea27ee;
                uVar21 = 0xadc0b5d6;
                puVar28 = (uint *)((int)puVar41 + (uVar40 - 0x1f));
                local_58 = 0x7a143579;
                local_50 = 0;
                local_54 = 0;
                puVar43 = puVar41;
                local_4c = local_e4;
                do {
                  puVar44 = puVar43 + 8;
                  lVar2 = (ulonglong)*puVar43 * 0x27d4eb4f;
                  uVar13 = (uint)lVar2;
                  uVar52 = uVar13 + uVar21;
                  uVar47 = puVar43[1] * 0x27d4eb4f + *puVar43 * -0x3d4d51c3 +
                           (int)((ulonglong)lVar2 >> 0x20) + iVar36 + (uint)CARRY4(uVar13,uVar21);
                  lVar2 = (ulonglong)puVar43[2] * 0x27d4eb4f;
                  uVar13 = (uint)lVar2;
                  uVar21 = uVar13 + local_4c;
                  uVar51 = puVar43[3] * 0x27d4eb4f + puVar43[2] * -0x3d4d51c3 +
                           (int)((ulonglong)lVar2 >> 0x20) + uVar33 + (uint)CARRY4(uVar13,local_4c);
                  lVar2 = (ulonglong)puVar43[4] * 0x27d4eb4f;
                  uVar13 = (uint)lVar2;
                  uVar33 = uVar13 + local_50;
                  uVar30 = puVar43[5] * 0x27d4eb4f + puVar43[4] * -0x3d4d51c3 +
                           (int)((ulonglong)lVar2 >> 0x20) + local_54 +
                           (uint)CARRY4(uVar13,local_50);
                  lVar2 = (ulonglong)puVar43[6] * 0x27d4eb4f;
                  uVar13 = (uint)lVar2;
                  uVar45 = uVar33 * -0x80000000 + (uVar30 >> 1);
                  uVar34 = uVar13 + local_58;
                  uVar37 = puVar43[7] * 0x27d4eb4f + puVar43[6] * -0x3d4d51c3 +
                           (int)((ulonglong)lVar2 >> 0x20) + local_5c +
                           (uint)CARRY4(uVar13,local_58);
                  uVar42 = uVar52 * -0x80000000 + (uVar47 >> 1);
                  uVar13 = uVar21 * -0x80000000 + (uVar51 >> 1);
                  iVar12 = uVar51 * -0x80000000 + (uVar21 >> 1);
                  iVar48 = uVar47 * -0x80000000 + (uVar52 >> 1);
                  uVar51 = uVar34 * -0x80000000 + (uVar37 >> 1);
                  iVar38 = uVar37 * -0x80000000 + (uVar34 >> 1);
                  iVar15 = uVar30 * -0x80000000 + (uVar33 >> 1);
                  uVar21 = (uint)((ulonglong)uVar42 * 0x85ebca87);
                  iVar36 = iVar48 * -0x7a143579 + uVar42 * -0x61c8864f +
                           (int)((ulonglong)uVar42 * 0x85ebca87 >> 0x20);
                  local_4c = (uint)((ulonglong)uVar13 * 0x85ebca87);
                  uVar33 = iVar12 * -0x7a143579 + uVar13 * -0x61c8864f +
                           (int)((ulonglong)uVar13 * 0x85ebca87 >> 0x20);
                  local_50 = (uint)((ulonglong)uVar45 * 0x85ebca87);
                  local_54 = iVar15 * -0x7a143579 + uVar45 * -0x61c8864f +
                             (int)((ulonglong)uVar45 * 0x85ebca87 >> 0x20);
                  local_58 = (uint)((ulonglong)uVar51 * 0x85ebca87);
                  local_5c = iVar38 * -0x7a143579 + uVar51 * -0x61c8864f +
                             (int)((ulonglong)uVar51 * 0x85ebca87 >> 0x20);
                  puVar43 = puVar44;
                } while (puVar44 < puVar28);
                uVar47 = uVar21 * 2 - (iVar36 >> 0x1f);
                uVar30 = (uint)((ulonglong)uVar42 * 0xf796ca9);
                uVar42 = iVar48 * 0xf796ca9 + uVar42 * -0x210ca4ff +
                         (int)((ulonglong)uVar42 * 0xf796ca9 >> 0x20);
                uVar34 = local_4c * 0x80 + (uVar33 >> 0x19);
                uVar37 = uVar30 * -0x80000000 + (uVar42 >> 1);
                if (puVar28 < (uint *)((int)puVar41 + 1)) {
                  iVar48 = 0;
                }
                else {
                  iVar48 = (uVar40 & 0xffffffe0) - 0x20;
                }
                uVar52 = uVar47 + uVar34;
                puVar43 = (uint *)((int)puVar41 + iVar48 + 0x20);
                uVar22 = local_50 * 0x1000 + (local_54 >> 0x14);
                uVar16 = uVar52 + uVar22;
                uVar39 = (uint)((ulonglong)uVar13 * 0xf796ca9);
                uVar29 = iVar12 * 0xf796ca9 + uVar13 * -0x210ca4ff +
                         (int)((ulonglong)uVar13 * 0xf796ca9 >> 0x20);
                uVar23 = local_58 * 0x40000 + (local_5c >> 0xe);
                lVar2 = (ulonglong)uVar37 * 0x85ebca87;
                uVar24 = uVar16 + uVar23 ^ (uint)lVar2;
                uVar17 = uVar39 * -0x80000000 + (uVar29 >> 1);
                uVar46 = (uint)((ulonglong)uVar45 * 0xf796ca9);
                uVar35 = iVar15 * 0xf796ca9 + uVar45 * -0x210ca4ff +
                         (int)((ulonglong)uVar45 * 0xf796ca9 >> 0x20);
                lVar3 = (ulonglong)uVar24 * 0x85ebca87;
                uVar31 = (uint)lVar3;
                uVar49 = (uint)((ulonglong)uVar51 * 0xf796ca9);
                uVar53 = iVar38 * 0xf796ca9 + uVar51 * -0x210ca4ff +
                         (int)((ulonglong)uVar51 * 0xf796ca9 >> 0x20);
                lVar4 = (ulonglong)uVar17 * 0x85ebca87;
                uVar32 = uVar31 + 0xc2b2ae63 ^ (uint)lVar4;
                uVar45 = uVar46 * -0x80000000 + (uVar35 >> 1);
                lVar5 = (ulonglong)uVar32 * 0x85ebca87;
                uVar25 = (uint)lVar5;
                lVar6 = (ulonglong)uVar45 * 0x85ebca87;
                uVar26 = uVar25 + 0xc2b2ae63 ^ (uint)lVar6;
                uVar18 = uVar49 * -0x80000000 + (uVar53 >> 1);
                lVar7 = (ulonglong)uVar26 * 0x85ebca87;
                uVar51 = (uint)lVar7;
                lVar8 = (ulonglong)uVar18 * 0x85ebca87;
                uVar19 = (uint)lVar8 ^ uVar51 + 0xc2b2ae63;
                lVar9 = (ulonglong)uVar19 * 0x85ebca87;
                uVar50 = (uint)lVar9;
                uVar13 = uVar50 + uVar40 + 0xc2b2ae63;
                uVar21 = ((uVar53 * -0x80000000 + (uVar49 >> 1)) * -0x7a143579 +
                          uVar18 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) ^
                         ((uVar35 * -0x80000000 + (uVar46 >> 1)) * -0x7a143579 +
                          uVar45 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) ^
                         (((uVar42 * -0x80000000 + (uVar30 >> 1)) * -0x7a143579 +
                           uVar37 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) ^
                          (iVar36 * 2 - ((int)uVar21 >> 0x1f)) + uVar33 * 0x80 + (local_4c >> 0x19)
                          + (uint)CARRY4(uVar47,uVar34) + local_54 * 0x1000 + (local_50 >> 0x14) +
                          (uint)CARRY4(uVar52,uVar22) + local_5c * 0x40000 + (local_58 >> 0xe) +
                          (uint)CARRY4(uVar16,uVar23)) * -0x7a143579 + uVar24 * -0x61c8864f +
                          (int)((ulonglong)lVar3 >> 0x20) + -0x7a143589 +
                          (uint)(0x3d4d519c < uVar31) ^
                         (uVar29 * -0x80000000 + (uVar39 >> 1)) * -0x7a143579 + uVar17 * -0x61c8864f
                         + (int)((ulonglong)lVar4 >> 0x20)) * -0x7a143579 + uVar32 * -0x61c8864f +
                         (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 + (uint)(0x3d4d519c < uVar25)
                         ) * -0x7a143579 + uVar26 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                         -0x7a143589 + (uint)(0x3d4d519c < uVar51)) * -0x7a143579 +
                         uVar19 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) +
                         (0x3d4d519c < uVar40) + 0x85ebca77 +
                         (uint)CARRY4(uVar50,uVar40 + 0xc2b2ae63);
                if ((uVar40 & 0x18) == 0) goto LAB_018036d4;
LAB_01802f30:
                lVar2 = (ulonglong)*puVar43 * 0x27d4eb4f;
                uVar30 = (uint)lVar2;
                uVar34 = puVar43[1] * 0x27d4eb4f + *puVar43 * -0x3d4d51c3 +
                         (int)((ulonglong)lVar2 >> 0x20);
                uVar33 = uVar30 * -0x80000000 + (uVar34 >> 1);
                lVar2 = (ulonglong)uVar33 * 0x85ebca87;
                uVar51 = (uint)lVar2 ^ uVar13;
                uVar21 = (uVar34 * -0x80000000 + (uVar30 >> 1)) * -0x7a143579 + uVar33 * -0x61c8864f
                         + (int)((ulonglong)lVar2 >> 0x20) ^ uVar21;
                uVar33 = uVar51 * 0x8000000 + (uVar21 >> 5);
                lVar2 = (ulonglong)uVar33 * 0x85ebca87;
                uVar30 = (uint)lVar2;
                uVar13 = uVar30 + 0xc2b2ae63;
                uVar21 = (uVar21 * 0x8000000 + (uVar51 >> 5)) * -0x7a143579 + uVar33 * -0x61c8864f +
                         (int)((ulonglong)lVar2 >> 0x20) + -0x7a143589 + (uint)(0x3d4d519c < uVar30)
                ;
                if (7 < uVar20 - 8) {
                  lVar2 = (ulonglong)puVar43[2] * 0x27d4eb4f;
                  uVar30 = (uint)lVar2;
                  uVar34 = puVar43[3] * 0x27d4eb4f + puVar43[2] * -0x3d4d51c3 +
                           (int)((ulonglong)lVar2 >> 0x20);
                  uVar33 = uVar30 * -0x80000000 + (uVar34 >> 1);
                  lVar2 = (ulonglong)uVar33 * 0x85ebca87;
                  uVar51 = (uint)lVar2 ^ uVar13;
                  uVar21 = (uVar34 * -0x80000000 + (uVar30 >> 1)) * -0x7a143579 +
                           uVar33 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) ^ uVar21;
                  uVar33 = uVar51 * 0x8000000 + (uVar21 >> 5);
                  lVar2 = (ulonglong)uVar33 * 0x85ebca87;
                  uVar30 = (uint)lVar2;
                  uVar13 = uVar30 + 0xc2b2ae63;
                  uVar21 = (uVar21 * 0x8000000 + (uVar51 >> 5)) * -0x7a143579 + uVar33 * -0x61c8864f
                           + (int)((ulonglong)lVar2 >> 0x20) + -0x7a143589 +
                           (uint)(0x3d4d519c < uVar30);
                  if (7 < uVar20 - 0x10) {
                    lVar2 = (ulonglong)puVar43[4] * 0x27d4eb4f;
                    uVar30 = (uint)lVar2;
                    uVar34 = puVar43[5] * 0x27d4eb4f + puVar43[4] * -0x3d4d51c3 +
                             (int)((ulonglong)lVar2 >> 0x20);
                    uVar33 = uVar30 * -0x80000000 + (uVar34 >> 1);
                    lVar2 = (ulonglong)uVar33 * 0x85ebca87;
                    uVar51 = (uint)lVar2 ^ uVar13;
                    uVar21 = (uVar34 * -0x80000000 + (uVar30 >> 1)) * -0x7a143579 +
                             uVar33 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) ^ uVar21;
                    uVar33 = uVar51 * 0x8000000 + (uVar21 >> 5);
                    lVar2 = (ulonglong)uVar33 * 0x85ebca87;
                    uVar30 = (uint)lVar2;
                    uVar13 = uVar30 + 0xc2b2ae63;
                    uVar21 = (uVar21 * 0x8000000 + (uVar51 >> 5)) * -0x7a143579 +
                             uVar33 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) + -0x7a143589 +
                             (uint)(0x3d4d519c < uVar30);
                  }
                }
                puVar43 = (uint *)((int)puVar43 + (uVar20 - 8 & 0xfffffff8) + 8);
                uVar33 = uVar40 & 7;
              }
              puVar28 = puVar43;
              if (3 < uVar33) {
                puVar28 = puVar43 + 1;
                uVar33 = uVar33 - 4;
                lVar2 = (ulonglong)*puVar43 * 0x85ebca87;
                uVar34 = (uint)lVar2 ^ uVar13;
                uVar21 = *puVar43 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) ^ uVar21;
                uVar51 = uVar34 * 0x800000 + (uVar21 >> 9);
                lVar2 = (ulonglong)uVar51 * 0x27d4eb4f;
                uVar30 = (uint)lVar2;
                uVar13 = uVar30 + 0x9e3779f9;
                uVar21 = (uVar21 * 0x800000 + (uVar34 >> 9)) * 0x27d4eb4f + uVar51 * -0x3d4d51c3 +
                         (int)((ulonglong)lVar2 >> 0x20) + 0x165667b1 + (uint)(0x61c88606 < uVar30);
              }
              if (uVar33 != 0) {
                lVar2 = (ulonglong)(uint)(byte)*puVar28 * 0x165667c5;
                uVar30 = (uint)lVar2 ^ uVar13;
                uVar21 = (uint)(byte)*puVar28 * 0x27d4eb2f + (int)((ulonglong)lVar2 >> 0x20) ^
                         uVar21;
                uVar51 = uVar30 * 0x800 + (uVar21 >> 0x15);
                lVar2 = (ulonglong)uVar51 * 0x85ebca87;
                uVar13 = (uint)lVar2;
                uVar21 = (uVar21 * 0x800 + (uVar30 >> 0x15)) * -0x7a143579 + uVar51 * -0x61c8864f +
                         (int)((ulonglong)lVar2 >> 0x20);
                if (uVar33 != 1) {
                  lVar2 = (ulonglong)(uint)*(byte *)((int)puVar28 + 1) * 0x165667c5;
                  uVar51 = (uint)lVar2 ^ uVar13;
                  uVar21 = (uint)*(byte *)((int)puVar28 + 1) * 0x27d4eb2f +
                           (int)((ulonglong)lVar2 >> 0x20) ^ uVar21;
                  uVar30 = uVar51 * 0x800 + (uVar21 >> 0x15);
                  lVar2 = (ulonglong)uVar30 * 0x85ebca87;
                  uVar13 = (uint)lVar2;
                  uVar21 = (uVar21 * 0x800 + (uVar51 >> 0x15)) * -0x7a143579 + uVar30 * -0x61c8864f
                           + (int)((ulonglong)lVar2 >> 0x20);
                  if (uVar33 != 2) {
                    lVar2 = (ulonglong)(uint)*(byte *)((int)puVar28 + 2) * 0x165667c5;
                    uVar13 = (uint)lVar2 ^ uVar13;
                    uVar21 = (uint)*(byte *)((int)puVar28 + 2) * 0x27d4eb2f +
                             (int)((ulonglong)lVar2 >> 0x20) ^ uVar21;
                    uVar33 = uVar13 * 0x800 + (uVar21 >> 0x15);
                    lVar2 = (ulonglong)uVar33 * 0x85ebca87;
                    uVar21 = (uVar21 * 0x800 + (uVar13 >> 0x15)) * -0x7a143579 +
                             uVar33 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20);
                    uVar13 = (uint)lVar2;
                  }
                }
              }
            }
            uVar13 = uVar13 ^ uVar21 >> 1;
            iVar12 = *(int *)(param_1 + 0x20);
            lVar2 = (ulonglong)uVar13 * 0x27d4eb4f;
            uVar33 = (uint)lVar2;
            uVar13 = uVar21 * 0x27d4eb4f + uVar13 * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20);
            uVar51 = *(uint *)(param_4 + 8);
            uVar33 = uVar33 ^ (uVar33 >> 0x1d | uVar13 * 8);
            iVar15 = *(int *)(param_1 + 0x18);
            lVar2 = (ulonglong)uVar33 * 0x9e3779f9;
            uVar13 = (uVar13 ^ uVar13 >> 0x1d) * -0x61c88607 + uVar33 * 0x165667b1 +
                     (int)((ulonglong)lVar2 >> 0x20);
            uVar21 = ((uint)lVar2 ^ uVar13) & ~(-1 << (iVar10 - iVar14 & 0xffU));
            bVar1 = *(byte *)(iVar12 + uVar21);
            iVar36 = (uint)bVar1 + (uVar21 << (uVar51 & 0xff));
            *(int *)(iVar15 + iVar36 * 8) = (int)puVar41 - iVar27;
            *(uint *)(iVar15 + iVar36 * 8 + 4) = uVar13;
            *(byte *)(iVar12 + uVar21) = bVar1 + 1 & ~(byte)(-1 << (uVar51 & 0xff));
          }
          local_74 = local_74 + 1;
        } while (local_74 != local_44[0]);
      }
      local_88 = local_88 + iVar11;
    } while (local_88 < param_3);
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

