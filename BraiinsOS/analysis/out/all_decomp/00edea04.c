// FUN_00edea04 @ 00edea04 size=1928 calls_out=11 calls_in=1
// strings: getrandom::getrandom() failed.

uint FUN_00edea04(uint *param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  uint *local_78;
  undefined1 *local_74;
  int local_70;
  undefined4 local_6c;
  uint *local_68;
  uint local_64;
  uint local_60;
  uint *local_5c;
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
  
  uVar15 = param_1[3] + 1;
  if (0xfffffffe < param_1[3]) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_0187c1ec);
  }
  uVar5 = param_1[1];
  uVar11 = uVar5 + 1;
  if (7 < uVar5) {
    uVar5 = (uVar11 & 0xfffffff8) - (uVar11 >> 3);
  }
  if (uVar5 >> 1 < uVar15) {
    if (uVar15 < uVar5 + 1) {
      uVar15 = uVar5 + 1;
    }
    FUN_00eddad8(&local_78,0x14,uVar15);
    if (local_78 == (uint *)0x0) {
      return (uint)local_74;
    }
    local_68 = param_1 + 4;
    uVar15 = param_1[3];
    puVar17 = (uint *)*param_1;
    local_50 = local_6c;
    local_54 = local_70;
    local_58 = (uint)local_74;
    local_5c = local_78;
    local_60 = 4;
    local_64 = 0x14;
    if (uVar15 == 0) {
      uVar15 = 0;
    }
    else {
      iVar18 = 0;
      uVar5 = ~*puVar17 & 0x80808080;
      do {
        if (uVar5 == 0) {
          do {
            puVar17 = puVar17 + 1;
            iVar18 = iVar18 + 4;
          } while ((*puVar17 & 0x80808080) == 0x80808080);
          uVar5 = *puVar17 & 0x80808080 ^ 0x80808080;
        }
        uVar9 = iVar18 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                        (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3);
        uVar19 = *(uint *)(*param_1 + uVar9 * -0x14 + -0x14);
        puVar6 = (uint *)FUN_011e4df8();
        uVar12 = puVar6[1];
        uVar19 = puVar6[2] ^ uVar19;
        uVar20 = *puVar6;
        uVar11 = puVar6[3];
        uVar7 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                uVar11 >> 0x18;
        lVar3 = (ulonglong)uVar7 * 0xb36a80d2;
        uVar16 = (uint)lVar3;
        uVar7 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                uVar19 >> 0x18) * -0x4c957f2e +
                uVar7 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
        uVar13 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                 uVar12 >> 0x18;
        uVar16 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                 uVar16 >> 0x18) ^
                 uVar11 * 0x2df45158 +
                 uVar19 * 0x2d7f954c + (int)((ulonglong)uVar19 * 0x2df45158 >> 0x20);
        uVar19 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                 uVar7 >> 0x18) ^ (uint)((ulonglong)uVar19 * 0x2df45158);
        lVar3 = (ulonglong)uVar13 * (ulonglong)uVar19;
        uVar11 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                 uVar16 >> 0x18;
        lVar4 = (ulonglong)~uVar20 * (ulonglong)uVar11;
        uVar7 = (uint)lVar4;
        uVar11 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                 uVar19 >> 0x18) * ~uVar20 + uVar11 * ~uVar12 + (int)((ulonglong)lVar4 >> 0x20);
        uVar11 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                 uVar11 >> 0x18) ^ (uint)lVar3;
        uVar16 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                 uVar7 >> 0x18) ^
                 uVar16 * uVar13 +
                 uVar19 * (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                           (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) +
                 (int)((ulonglong)lVar3 >> 0x20);
        uVar7 = uVar16;
        if ((uVar19 & 0x20) != 0) {
          uVar7 = uVar11;
          uVar11 = uVar16;
        }
        uVar11 = uVar11 << (uVar19 & 0x1f) | (uVar7 >> 1) >> (~uVar19 & 0x1f);
        uVar7 = (uint)local_74 & uVar11;
        uVar19 = *(uint *)((int)local_78 + uVar7) & 0x80808080;
        if (uVar19 == 0) {
          iVar14 = 4;
          do {
            uVar7 = uVar7 + iVar14;
            iVar14 = iVar14 + 4;
            uVar7 = uVar7 & (uint)local_74;
            uVar19 = *(uint *)((int)local_78 + uVar7) & 0x80808080;
          } while (uVar19 == 0);
        }
        uVar15 = uVar15 - 1;
        uVar7 = uVar7 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                       (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) &
                (uint)local_74;
        bVar21 = -1 < *(char *)((int)local_78 + uVar7);
        if (bVar21) {
          uVar7 = *local_78;
        }
        uVar5 = uVar5 - 1 & uVar5;
        if (bVar21) {
          uVar7 = uVar7 & 0x80808080;
          uVar7 = (uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
        }
        bVar2 = (byte)(uVar11 >> 0x19);
        *(byte *)((int)local_78 + uVar7) = bVar2;
        *(byte *)((int)local_78 + (uVar7 - 4 & (uint)local_74) + 4) = bVar2;
        FUN_016dd1aa(local_78 + ~uVar7 * 5,*param_1 + ~uVar9 * 0x14,0x14);
      } while (uVar15 != 0);
      puVar17 = (uint *)*param_1;
      uVar15 = param_1[3];
    }
    uVar5 = param_1[1];
    *param_1 = (uint)local_78;
    param_1[2] = local_70 - uVar15;
    param_1[1] = (uint)local_74;
    if (uVar5 == 0) {
      return 0x80000001;
    }
    iVar18 = uVar5 * 0x14 + 0x14;
    if (uVar5 + iVar18 == -5) {
      return 0x80000001;
    }
    thunk_FUN_016d3fb4((int)puVar17 - iVar18);
    return 0x80000001;
  }
  puVar10 = (undefined4 *)*param_1;
  if (uVar11 != 0) {
    uVar15 = uVar11 >> 2;
    if ((uVar11 & 3) != 0) {
      uVar15 = (uVar11 >> 2) + 1;
    }
    iVar18 = 0;
    do {
      puVar10[-iVar18] =
           (~((uint)puVar10[-iVar18] >> 7) & 0x1010101) + (puVar10[-iVar18] | 0x7f7f7f7f);
      iVar18 = iVar18 + -1;
    } while (-iVar18 != uVar15);
    if (3 < uVar11) {
      *(undefined4 *)((int)puVar10 + uVar11) = *puVar10;
      goto LAB_00eded4c;
    }
  }
  FUN_016dd52c(puVar10 + 1);
LAB_00eded4c:
  uVar5 = param_1[1];
  local_74 = &LAB_00edf480;
  uVar15 = 0;
  local_70 = 0x14;
  local_78 = param_1;
  if (uVar5 != 0xffffffff) {
    do {
      uVar11 = *param_1;
      if (*(char *)(uVar11 + uVar15) == -0x80) {
        puVar17 = (uint *)(uVar11 + ~uVar15 * 0x14);
        while( true ) {
          uVar11 = *(uint *)(uVar11 + uVar15 * -0x14 + -0x14);
          DataMemoryBarrier(0xb);
          puVar6 = DAT_018dd8e8;
          if (DAT_018dd8e8 == (uint *)0x0) {
            FUN_016dd606(&local_68,0,0x40);
            local_28 = FUN_0100fa18(&local_68,0x40);
            if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8("getrandom::getrandom() failed.",0x1e,&local_28,&DAT_018920d4,
                           &DAT_018920e4);
            }
            puVar8 = (uint *)thunk_FUN_016d4a50(0x40);
            if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x40);
            }
            *puVar8 = (uint)local_68;
            puVar8[1] = local_64;
            puVar8[2] = local_60;
            puVar8[3] = (uint)local_5c;
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
            puVar6 = DAT_018dd8e8;
            if (DAT_018dd8e8 == (uint *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                bVar21 = (bool)hasExclusiveAccess(0x18dd8e8);
              } while (!bVar21);
              DataMemoryBarrier(0xb);
              puVar6 = puVar8;
              DAT_018dd8e8 = puVar8;
            }
            else {
              ClearExclusiveLocal();
              DataMemoryBarrier(0xb);
              thunk_FUN_016d3fb4();
            }
          }
          uVar7 = *puVar6;
          uVar19 = puVar6[1];
          uVar12 = puVar6[3];
          uVar11 = puVar6[2] ^ uVar11;
          uVar16 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                   uVar12 >> 0x18;
          lVar3 = (ulonglong)uVar16 * 0xb36a80d2;
          uVar13 = (uint)lVar3;
          uVar9 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                  uVar19 >> 0x18;
          uVar16 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                   uVar11 >> 0x18) * -0x4c957f2e +
                   uVar16 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
          uVar13 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                   uVar13 >> 0x18) ^
                   uVar12 * 0x2df45158 +
                   uVar11 * 0x2d7f954c + (int)((ulonglong)uVar11 * 0x2df45158 >> 0x20);
          uVar12 = (uVar16 * 0x1000000 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8
                   | uVar16 >> 0x18) ^ (uint)((ulonglong)uVar11 * 0x2df45158);
          lVar3 = (ulonglong)uVar9 * (ulonglong)uVar12;
          uVar11 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                   uVar13 >> 0x18;
          lVar4 = (ulonglong)~uVar7 * (ulonglong)uVar11;
          uVar20 = (uint)lVar4;
          puVar6 = (uint *)*param_1;
          uVar16 = param_1[1];
          uVar11 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                   uVar12 >> 0x18) * ~uVar7 + uVar11 * ~uVar19 + (int)((ulonglong)lVar4 >> 0x20);
          uVar19 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                   uVar20 >> 0x18) ^
                   uVar13 * uVar9 +
                   uVar12 * (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                             (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) +
                   (int)((ulonglong)lVar3 >> 0x20);
          uVar11 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8
                   | uVar11 >> 0x18) ^ (uint)lVar3;
          uVar7 = uVar19;
          if ((uVar12 & 0x20) != 0) {
            uVar7 = uVar11;
            uVar11 = uVar19;
          }
          uVar7 = uVar11 << (uVar12 & 0x1f) | (uVar7 >> 1) >> (~uVar12 & 0x1f);
          uVar9 = uVar16 & uVar7;
          uVar19 = *(uint *)((int)puVar6 + uVar9) & 0x80808080;
          uVar11 = uVar9;
          if (uVar19 == 0) {
            iVar18 = 4;
            do {
              uVar11 = uVar11 + iVar18;
              iVar18 = iVar18 + 4;
              uVar11 = uVar11 & uVar16;
              uVar19 = *(uint *)((int)puVar6 + uVar11) & 0x80808080;
            } while (uVar19 == 0);
          }
          uVar11 = uVar11 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                           (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) &
                   uVar16;
          if (-1 < *(char *)((int)puVar6 + uVar11)) {
            uVar11 = *puVar6 & 0x80808080;
            uVar11 = (uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                   (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
          }
          bVar2 = (byte)(uVar7 >> 0x18);
          if (((uVar11 - uVar9 ^ uVar15 - uVar9) & uVar16) < 4) {
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar6 + uVar15) = bVar2;
            *(byte *)(*param_1 + (uVar16 & uVar15 - 4) + 4) = bVar2;
            goto LAB_00ededb0;
          }
          cVar1 = *(char *)((int)puVar6 + uVar11);
          bVar2 = bVar2 >> 1;
          *(byte *)((int)puVar6 + uVar11) = bVar2;
          *(byte *)(*param_1 + (uVar11 - 4 & uVar16) + 4) = bVar2;
          puVar6 = puVar6 + ~uVar11 * 5;
          if (cVar1 == -1) break;
          uVar11 = *puVar17;
          *puVar17 = *puVar6;
          *puVar6 = uVar11;
          uVar11 = puVar6[1];
          puVar6[1] = puVar17[1];
          puVar17[1] = uVar11;
          uVar11 = puVar17[2];
          puVar17[2] = puVar6[2];
          puVar6[2] = uVar11;
          uVar11 = puVar6[3];
          puVar6[3] = puVar17[3];
          puVar17[3] = uVar11;
          uVar11 = puVar17[4];
          puVar17[4] = puVar6[4];
          puVar6[4] = uVar11;
          uVar11 = *param_1;
        }
        uVar11 = param_1[1];
        *(undefined1 *)(*param_1 + uVar15) = 0xff;
        *(undefined1 *)(*param_1 + (uVar11 & uVar15 - 4) + 4) = 0xff;
        FUN_016dd1aa(puVar6,puVar17,0x14);
      }
LAB_00ededb0:
      bVar21 = uVar15 != uVar5;
      uVar15 = uVar15 + 1;
    } while (bVar21);
    uVar15 = param_1[1];
    if (7 < uVar15) {
      uVar15 = (uVar15 + 1 & 0xfffffff8) - (uVar15 + 1 >> 3);
    }
  }
  param_1[2] = uVar15 - param_1[3];
  return 0x80000001;
}

