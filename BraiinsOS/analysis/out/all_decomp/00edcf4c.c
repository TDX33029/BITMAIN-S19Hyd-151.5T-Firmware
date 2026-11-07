// FUN_00edcf4c @ 00edcf4c size=2772 calls_out=11 calls_in=1
// strings: getrandom::getrandom() failed.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00edcf4c(uint *param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  undefined4 uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  bool bVar31;
  uint *local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int local_28;
  
  uVar16 = param_1[3] + 1;
  if (0xfffffffe < param_1[3]) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_0187c1ec);
  }
  uVar5 = param_1[1];
  uVar14 = uVar5 + 1;
  if (7 < uVar5) {
    uVar5 = (uVar14 & 0xfffffff8) - (uVar14 >> 3);
  }
  if (uVar5 >> 1 < uVar16) {
    if (uVar16 < uVar5 + 1) {
      uVar16 = uVar5 + 1;
    }
    FUN_00eddad8(&local_68,0xc,uVar16);
    uVar16 = local_64;
    puVar12 = local_68;
    if (local_68 == (uint *)0x0) {
      return local_64;
    }
    uVar5 = param_1[3];
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      puVar25 = (uint *)*param_1;
      iVar28 = 0;
      uVar14 = ~*puVar25 & 0x80808080;
      do {
        if (uVar14 == 0) {
          do {
            puVar25 = puVar25 + 1;
            iVar28 = iVar28 + 4;
          } while ((*puVar25 & 0x80808080) == 0x80808080);
          uVar14 = *puVar25 & 0x80808080 ^ 0x80808080;
        }
        uVar9 = iVar28 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                        (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3);
        iVar6 = *param_1 + uVar9 * -0xc;
        uVar20 = *(undefined4 *)(iVar6 + -8);
        uVar26 = *(undefined4 *)(iVar6 + -4);
        puVar7 = (uint *)FUN_011e4df8();
        local_54 = puVar7[3];
        local_50 = *puVar7;
        uStack_4c = puVar7[1];
        local_58 = puVar7[2];
        local_64 = puVar7[5];
        local_68 = (uint *)puVar7[4];
        FUN_01352290(&local_68,uVar20,uVar26);
        uVar10 = uStack_4c << 0x18 | (uStack_4c >> 8 & 0xff) << 0x10 |
                 (uStack_4c >> 0x10 & 0xff) << 8 | uStack_4c >> 0x18;
        lVar3 = (ulonglong)local_58 * (ulonglong)uVar10;
        uVar17 = local_54 << 0x18 | (local_54 >> 8 & 0xff) << 0x10 | (local_54 >> 0x10 & 0xff) << 8
                 | local_54 >> 0x18;
        lVar4 = (ulonglong)~local_50 * (ulonglong)uVar17;
        uVar29 = (uint)lVar4;
        uVar17 = (local_58 << 0x18 | (local_58 >> 8 & 0xff) << 0x10 | (local_58 >> 0x10 & 0xff) << 8
                 | local_58 >> 0x18) * ~local_50 +
                 uVar17 * ~uStack_4c + (int)((ulonglong)lVar4 >> 0x20);
        uVar17 = (uint)lVar3 ^
                 (uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                 uVar17 >> 0x18);
        uVar29 = (local_50 << 0x18 | (local_50 >> 8 & 0xff) << 0x10 | (local_50 >> 0x10 & 0xff) << 8
                 | local_50 >> 0x18) * local_58 +
                 uVar10 * local_54 + (int)((ulonglong)lVar3 >> 0x20) ^
                 (uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                 uVar29 >> 0x18);
        uVar10 = uVar29;
        if ((local_58 & 0x20) != 0) {
          uVar10 = uVar17;
          uVar17 = uVar29;
        }
        uVar17 = uVar17 << (local_58 & 0x1f) | (uVar10 >> 1) >> (~local_58 & 0x1f);
        uVar10 = uVar16 & uVar17;
        uVar29 = *(uint *)((int)puVar12 + uVar10) & 0x80808080;
        if (uVar29 == 0) {
          iVar6 = 4;
          do {
            uVar10 = uVar10 + iVar6;
            iVar6 = iVar6 + 4;
            uVar10 = uVar10 & uVar16;
            uVar29 = *(uint *)((int)puVar12 + uVar10) & 0x80808080;
          } while (uVar29 == 0);
        }
        uVar10 = uVar10 + ((uint)LZCOUNT(uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 |
                                         (uVar29 >> 0x10 & 0xff) << 8 | uVar29 >> 0x18) >> 3) &
                 uVar16;
        bVar31 = -1 < *(char *)((int)puVar12 + uVar10);
        if (bVar31) {
          uVar10 = *puVar12;
        }
        uVar14 = uVar14 - 1 & uVar14;
        if (bVar31) {
          uVar10 = uVar10 & 0x80808080;
          uVar10 = (uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                 (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
        }
        bVar2 = (byte)(uVar17 >> 0x19);
        *(byte *)((int)puVar12 + uVar10) = bVar2;
        *(byte *)((int)puVar12 + (uVar10 - 4 & uVar16) + 4) = bVar2;
        uVar5 = uVar5 - 1;
        puVar7 = (uint *)(*param_1 + ~uVar9 * 0xc);
        uVar29 = puVar7[1];
        uVar17 = puVar7[2];
        puVar8 = puVar12 + ~uVar10 * 3;
        *puVar8 = *puVar7;
        puVar8[2] = uVar17;
        puVar8[1] = uVar29;
      } while (uVar5 != 0);
      uVar5 = param_1[3];
    }
    uVar14 = *param_1;
    uVar17 = param_1[1];
    *param_1 = (uint)puVar12;
    param_1[1] = uVar16;
    param_1[2] = local_60 - uVar5;
    if (uVar17 == 0) {
      return 0x80000001;
    }
    iVar28 = uVar17 * 0xc + 0xc;
    if (uVar17 + iVar28 == -5) {
      return 0x80000001;
    }
    thunk_FUN_016d3fb4(uVar14 - iVar28);
    return 0x80000001;
  }
  puVar11 = (undefined4 *)*param_1;
  if (uVar14 == 0) {
LAB_00edd290:
    FUN_016dd52c(puVar11 + 1);
  }
  else {
    uVar16 = uVar14 >> 2;
    if ((uVar14 & 3) != 0) {
      uVar16 = (uVar14 >> 2) + 1;
    }
    iVar28 = 0;
    do {
      puVar11[-iVar28] =
           (~((uint)puVar11[-iVar28] >> 7) & 0x1010101) + (puVar11[-iVar28] | 0x7f7f7f7f);
      iVar28 = iVar28 + -1;
    } while (-iVar28 != uVar16);
    if (uVar14 < 4) goto LAB_00edd290;
    *(undefined4 *)((int)puVar11 + uVar14) = *puVar11;
  }
  uVar5 = param_1[1];
  uVar16 = 0;
  if (uVar5 != 0xffffffff) {
LAB_00edd314:
    uVar14 = *param_1;
    if (*(char *)(uVar14 + uVar16) == -0x80) {
      puVar12 = (uint *)(uVar14 + ~uVar16 * 0xc);
      do {
        iVar28 = uVar14 + uVar16 * -0xc;
        puVar7 = *(uint **)(iVar28 + -8);
        uVar14 = *(uint *)(iVar28 + -4);
        DataMemoryBarrier(0xb);
        puVar25 = DAT_018dd8e8;
        if (DAT_018dd8e8 == (uint *)0x0) {
          FUN_016dd606(&local_68,0,0x40);
          local_28 = FUN_0100fa18(&local_68,0x40);
          if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8("getrandom::getrandom() failed.",0x1e,&local_28,&DAT_018920d4,&DAT_018920e4
                        );
          }
          puVar8 = (uint *)thunk_FUN_016d4a50(0x40);
          if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x40);
          }
          *puVar8 = (uint)local_68;
          puVar8[1] = local_64;
          puVar8[2] = local_60;
          puVar8[3] = local_5c;
          puVar8[4] = local_58;
          puVar8[5] = local_54;
          puVar8[6] = local_50;
          puVar8[7] = uStack_4c;
          puVar8[8] = uStack_48;
          puVar8[9] = uStack_44;
          puVar8[10] = local_40;
          puVar8[0xb] = uStack_3c;
          puVar8[0xc] = uStack_38;
          puVar8[0xd] = uStack_34;
          puVar8[0xe] = uStack_30;
          puVar8[0xf] = uStack_2c;
          puVar25 = DAT_018dd8e8;
          if (DAT_018dd8e8 == (uint *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              bVar31 = (bool)hasExclusiveAccess(0x18dd8e8);
            } while (!bVar31);
            DataMemoryBarrier(0xb);
            puVar25 = puVar8;
            DAT_018dd8e8 = puVar8;
          }
          else {
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
            thunk_FUN_016d3fb4();
          }
        }
        uVar17 = puVar25[1];
        uVar9 = puVar25[4];
        uVar10 = puVar25[2] + uVar14;
        uVar27 = *puVar25;
        uVar24 = puVar25[5];
        lVar3 = (ulonglong)uVar10 * 0x4c957f2d;
        uVar30 = (uint)lVar3;
        uVar21 = puVar25[6];
        uVar29 = puVar25[7];
        iVar28 = (puVar25[3] + (uint)CARRY4(puVar25[2],uVar14)) * 0x4c957f2d +
                 uVar10 * 0x5851f42d + (int)((ulonglong)lVar3 >> 0x20);
        if (uVar14 < 9) {
          if (uVar14 < 2) {
            if (uVar14 == 1) {
              uVar10 = (uint)(byte)*puVar7;
              uVar14 = uVar10;
            }
            else {
              uVar10 = 0;
              uVar14 = 0;
            }
          }
          else if (uVar14 < 4) {
            uVar14 = (uint)*(byte *)((int)puVar7 + (uVar14 - 1));
            uVar10 = (uint)(ushort)*puVar7;
          }
          else {
            uVar14 = *(uint *)((int)puVar7 + (uVar14 - 4));
            uVar10 = *puVar7;
          }
          uVar10 = uVar10 ^ uVar9;
          uVar9 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                  uVar29 >> 0x18;
          uVar13 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
                   uVar24 >> 0x18;
          lVar3 = (ulonglong)uVar10 * (ulonglong)uVar9;
          uVar14 = uVar14 ^ uVar21;
          lVar4 = (ulonglong)~uVar14 * (ulonglong)uVar13;
          uVar21 = (uint)lVar4;
          uVar29 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                   uVar10 >> 0x18) * ~uVar14 + uVar13 * ~uVar29 + (int)((ulonglong)lVar4 >> 0x20);
          uVar10 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                   uVar21 >> 0x18) ^ iVar28 + uVar17 + (uint)CARRY4(uVar30,uVar27) ^
                   (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                   uVar14 >> 0x18) * uVar10 + uVar9 * uVar24 + (int)((ulonglong)lVar3 >> 0x20);
          uVar14 = (uVar29 * 0x1000000 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8
                   | uVar29 >> 0x18) ^ uVar30 + uVar27 ^ (uint)lVar3;
LAB_00edd73c:
          uVar30 = uVar10 << 0x17 | uVar14 >> 9;
          uVar10 = uVar14 << 0x17 | uVar10 >> 9;
        }
        else {
          if (uVar14 < 0x11) {
            uVar9 = *puVar7 ^ uVar9;
            uVar24 = puVar7[1] ^ uVar24;
            uVar13 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
                     uVar24 >> 0x18;
            uVar29 = *(uint *)((int)puVar7 + (uVar14 - 4)) ^ uVar29;
            uVar10 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                     uVar29 >> 0x18;
            lVar3 = (ulonglong)uVar9 * (ulonglong)uVar10;
            uVar21 = *(uint *)((int)puVar7 + (uVar14 - 8)) ^ uVar21;
            lVar4 = (ulonglong)~uVar21 * (ulonglong)uVar13;
            uVar15 = (uint)lVar4;
            uVar14 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                     uVar9 >> 0x18) * ~uVar21 + uVar13 * ~uVar29 + (int)((ulonglong)lVar4 >> 0x20);
            uVar10 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                     uVar15 >> 0x18) ^ iVar28 + uVar17 + (uint)CARRY4(uVar30,uVar27) ^
                     (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                     uVar21 >> 0x18) * uVar9 + uVar10 * uVar24 + (int)((ulonglong)lVar3 >> 0x20);
            uVar14 = (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 |
                      (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) ^ uVar30 + uVar27 ^ (uint)lVar3
            ;
            goto LAB_00edd73c;
          }
          uVar13 = uVar9 ^ *(uint *)((int)puVar7 + (uVar14 - 0x10));
          uVar22 = uVar24 ^ *(uint *)((int)puVar7 + (uVar14 - 0xc));
          uVar10 = uVar29 ^ *(uint *)((int)puVar7 + (uVar14 - 4));
          uVar18 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                   uVar10 >> 0x18;
          lVar3 = (ulonglong)uVar13 * (ulonglong)uVar18;
          uVar19 = uVar21 ^ *(uint *)((int)puVar7 + (uVar14 - 8));
          uVar15 = uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                   uVar22 >> 0x18;
          lVar4 = (ulonglong)~uVar19 * (ulonglong)uVar15;
          uVar23 = (uint)lVar4;
          uVar10 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                   uVar13 >> 0x18) * ~uVar19 + uVar15 * ~uVar10 + (int)((ulonglong)lVar4 >> 0x20);
          uVar13 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                   uVar23 >> 0x18) ^ iVar28 + uVar17 + (uint)CARRY4(uVar30,uVar27) ^
                   (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18) * uVar13 + uVar18 * uVar22 + (int)((ulonglong)lVar3 >> 0x20);
          uVar10 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8
                   | uVar10 >> 0x18) ^ uVar30 + uVar27 ^ (uint)lVar3;
          uVar30 = uVar13 << 0x17 | uVar10 >> 9;
          uVar10 = uVar10 << 0x17 | uVar13 >> 9;
          do {
            uVar13 = puVar7[2] ^ ~uVar21;
            uVar19 = uVar24 ^ puVar7[1];
            uVar15 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                     uVar19 >> 0x18;
            lVar3 = (ulonglong)uVar13 * (ulonglong)uVar15;
            uVar23 = (uint)lVar3;
            uVar22 = uVar9 ^ *puVar7;
            uVar13 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                     uVar22 >> 0x18) * uVar13 +
                     uVar15 * (puVar7[3] ^ ~uVar29) + (int)((ulonglong)lVar3 >> 0x20);
            uVar15 = uVar29 ^ puVar7[3];
            uVar15 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                     uVar15 >> 0x18;
            lVar3 = (ulonglong)uVar22 * (ulonglong)uVar15;
            uVar18 = uVar21 ^ puVar7[2];
            uVar13 = (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 |
                      (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) ^ uVar10 + uVar27 ^ (uint)lVar3
            ;
            puVar7 = puVar7 + 4;
            uVar14 = uVar14 - 0x10;
            uVar10 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                     uVar23 >> 0x18) ^ uVar30 + uVar17 + (uint)CARRY4(uVar10,uVar27) ^
                     (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
                     uVar18 >> 0x18) * uVar22 + uVar15 * uVar19 + (int)((ulonglong)lVar3 >> 0x20);
            uVar30 = uVar10 << 0x17 | uVar13 >> 9;
            uVar10 = uVar13 << 0x17 | uVar10 >> 9;
          } while (0x10 < uVar14);
        }
        uVar14 = uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
                 uVar30 >> 0x18;
        lVar3 = (ulonglong)uVar14 * 0xb36a80d2;
        uVar9 = (uint)lVar3;
        uVar29 = uVar10 ^ 0xff;
        uVar14 = (uVar29 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                 uVar10 >> 0x18) * -0x4c957f2e +
                 uVar14 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
        uVar24 = (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                 uVar14 >> 0x18) ^ (uint)((ulonglong)uVar29 * 0x2df45158);
        uVar14 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                 uVar9 >> 0x18) ^
                 uVar30 * 0x2df45158 +
                 uVar29 * 0x2d7f954c + (int)((ulonglong)uVar29 * 0x2df45158 >> 0x20);
        uVar9 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                uVar17 >> 0x18;
        lVar3 = (ulonglong)uVar9 * (ulonglong)uVar24;
        uVar10 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                 uVar14 >> 0x18;
        lVar4 = (ulonglong)~uVar27 * (ulonglong)uVar10;
        uVar29 = (uint)lVar4;
        uVar17 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
                 uVar24 >> 0x18) * ~uVar27 + uVar10 * ~uVar17 + (int)((ulonglong)lVar4 >> 0x20);
        puVar25 = (uint *)*param_1;
        uVar10 = param_1[1];
        uVar29 = (uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                 uVar29 >> 0x18) ^
                 uVar14 * uVar9 +
                 uVar24 * (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 |
                           (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18) +
                 (int)((ulonglong)lVar3 >> 0x20);
        uVar14 = (uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                 uVar17 >> 0x18) ^ (uint)lVar3;
        uVar17 = uVar29;
        if ((uVar24 & 0x20) != 0) {
          uVar17 = uVar14;
          uVar14 = uVar29;
        }
        uVar17 = uVar14 << (uVar24 & 0x1f) | (uVar17 >> 1) >> (~uVar24 & 0x1f);
        uVar9 = uVar10 & uVar17;
        uVar29 = *(uint *)((int)puVar25 + uVar9) & 0x80808080;
        uVar14 = uVar9;
        if (uVar29 == 0) {
          iVar28 = 4;
          do {
            uVar14 = uVar14 + iVar28;
            iVar28 = iVar28 + 4;
            uVar14 = uVar14 & uVar10;
            uVar29 = *(uint *)((int)puVar25 + uVar14) & 0x80808080;
          } while (uVar29 == 0);
        }
        uVar14 = uVar14 + ((uint)LZCOUNT(uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 |
                                         (uVar29 >> 0x10 & 0xff) << 8 | uVar29 >> 0x18) >> 3) &
                 uVar10;
        if (-1 < *(char *)((int)puVar25 + uVar14)) {
          uVar14 = *puVar25 & 0x80808080;
          uVar14 = (uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                 (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3;
        }
        bVar2 = (byte)(uVar17 >> 0x18);
        if (((uVar14 - uVar9 ^ uVar16 - uVar9) & uVar10) < 4) {
          bVar2 = bVar2 >> 1;
          *(byte *)((int)puVar25 + uVar16) = bVar2;
          *(byte *)(*param_1 + (uVar10 & uVar16 - 4) + 4) = bVar2;
          break;
        }
        cVar1 = *(char *)((int)puVar25 + uVar14);
        bVar2 = bVar2 >> 1;
        *(byte *)((int)puVar25 + uVar14) = bVar2;
        *(byte *)(*param_1 + (uVar14 - 4 & uVar10) + 4) = bVar2;
        puVar25 = puVar25 + ~uVar14 * 3;
        if (cVar1 == -1) goto LAB_00edd914;
        uVar14 = *puVar12;
        *puVar12 = *puVar25;
        *puVar25 = uVar14;
        uVar14 = puVar25[1];
        puVar25[1] = puVar12[1];
        puVar12[1] = uVar14;
        uVar14 = puVar12[2];
        puVar12[2] = puVar25[2];
        puVar25[2] = uVar14;
        uVar14 = *param_1;
      } while( true );
    }
    goto LAB_00edd308;
  }
LAB_00edd96c:
  param_1[2] = uVar16 - param_1[3];
  return 0x80000001;
LAB_00edd914:
  uVar14 = param_1[1];
  *(undefined1 *)(*param_1 + uVar16) = 0xff;
  *(undefined1 *)(*param_1 + (uVar14 & uVar16 - 4) + 4) = 0xff;
  uVar14 = *puVar12;
  uVar17 = puVar12[1];
  puVar25[2] = puVar12[2];
  puVar25[1] = uVar17;
  *puVar25 = uVar14;
LAB_00edd308:
  bVar31 = uVar16 == uVar5;
  uVar16 = uVar16 + 1;
  if (bVar31) goto LAB_00edd954;
  goto LAB_00edd314;
LAB_00edd954:
  uVar16 = param_1[1];
  if (7 < uVar16) {
    uVar16 = (uVar16 + 1 & 0xfffffff8) - (uVar16 + 1 >> 3);
  }
  goto LAB_00edd96c;
}

