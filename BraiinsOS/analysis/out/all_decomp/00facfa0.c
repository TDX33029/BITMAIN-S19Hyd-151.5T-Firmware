// FUN_00facfa0 @ 00facfa0 size=3792 calls_out=5 calls_in=4
// strings: assertion failed: d.mant > 0 | assertion failed: d.minus > 0 | assertion failed: d.plus > 0 | assertion failed: d.mant.checked_add(d.plus).is_some() | assertion failed: d.mant.checked_sub(d.minus).is_some() | assertion failed: d.mant + d.plus < (1 << 61)

void FUN_00facfa0(undefined4 *param_1,uint *param_2,undefined1 *param_3)

{
  short sVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  undefined1 *puVar28;
  int iVar29;
  ushort uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint local_7c;
  int local_78;
  int local_70;
  uint local_40;
  uint local_3c;
  ushort local_38;
  uint local_30;
  uint local_2c;
  
  uVar27 = *param_2;
  uVar31 = param_2[1];
  if (uVar27 == 0 && uVar31 == 0) goto LAB_00fadda0;
  uVar14 = param_2[2];
  uVar16 = param_2[3];
  if (uVar14 == 0 && uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: d.minus > 0",0x1d,&DAT_01880fcc);
  }
  uVar17 = param_2[4];
  uVar20 = param_2[5];
  if (uVar17 == 0 && uVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: d.plus > 0",0x1c,&DAT_01880fdc);
  }
  uVar24 = uVar17 + uVar27;
  uVar33 = uVar20 + uVar31 + (uint)CARRY4(uVar17,uVar27);
  if (CARRY4(uVar20,uVar31) || CARRY4(uVar20 + uVar31,(uint)CARRY4(uVar17,uVar27))) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: d.mant.checked_add(d.plus).is_some()",0x36,&DAT_0188102c);
  }
  if (uVar31 <= uVar16 && (uint)(uVar14 <= uVar27) <= uVar31 - uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: d.mant.checked_sub(d.minus).is_some()",0x37,&DAT_0188101c);
  }
  if (0x1fffffff < uVar33) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: d.mant + d.plus < (1 << 61)",0x2d,&DAT_01880fec);
  }
  iVar25 = LZCOUNT(uVar24) + 0x20;
  if (uVar33 != 0) {
    iVar25 = LZCOUNT(uVar33);
  }
  local_40 = uVar27 - uVar14;
  uVar17 = 0x20 - iVar25;
  local_3c = uVar31 - (uVar16 + (uVar27 < uVar14));
  uVar20 = iVar25 - 0x20;
  uVar16 = local_40 >> (uVar17 & 0xff) | local_3c << iVar25;
  uVar14 = local_40 << iVar25;
  if (-1 < (int)uVar20) {
    uVar16 = local_40 << (uVar20 & 0xff);
    uVar14 = 0;
  }
  local_2c = uVar16 >> iVar25;
  local_30 = uVar14 >> iVar25 | uVar16 << (uVar17 & 0xff);
  local_38 = (ushort)param_2[6];
  if (-1 < (int)uVar20) {
    local_2c = 0;
    local_30 = uVar16 >> (uVar20 & 0xff);
  }
  if (local_30 == local_40 && local_2c == local_3c) {
    uVar34 = uVar27 << iVar25;
    uVar26 = uVar27 >> (uVar17 & 0xff) | uVar31 << iVar25;
    if (-1 < (int)uVar20) {
      uVar34 = 0;
      uVar26 = uVar27 << (uVar20 & 0xff);
    }
    local_2c = uVar26 >> iVar25;
    local_30 = uVar34 >> iVar25 | uVar26 << (uVar17 & 0xff);
    if (-1 < (int)uVar20) {
      local_2c = 0;
      local_30 = uVar26 >> (uVar20 & 0xff);
    }
    local_40 = uVar27;
    local_3c = uVar31;
    if (local_30 == uVar27 && local_2c == uVar31) {
      uVar27 = ((short)(-0x60 - (short)((uint)local_38 - iVar25)) * 0x50 + 0x153b0) / 0x84e;
      if (0x50 < uVar27) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar27,0x51,&DAT_01880f8c);
      }
      iVar23 = uVar27 * 0x10;
      uVar21 = *(uint *)(&DAT_00362630 + iVar23);
      uVar31 = *(uint *)(&DAT_00362634 + iVar23);
      lVar2 = (ulonglong)uVar34 * (ulonglong)uVar31 +
              ((ulonglong)uVar34 * (ulonglong)uVar21 >> 0x20);
      uVar27 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar4 = (ulonglong)uVar26 * (ulonglong)uVar21;
      uVar34 = (uint)((ulonglong)lVar4 >> 0x20);
      lVar2 = (ulonglong)uVar26 * (ulonglong)uVar31 +
              (ulonglong)
              CONCAT14(CARRY4(uVar27,uVar34) ||
                       CARRY4(uVar27 + uVar34,(uint)CARRY4((uint)lVar4,(uint)lVar2)),
                       (int)((ulonglong)(lVar2 + lVar4) >> 0x20)) +
              (ulonglong)(uint)-((int)(lVar2 + lVar4) >> 0x1f);
      uVar27 = uVar24 << iVar25;
      if (-1 < (int)uVar20) {
        uVar27 = 0;
      }
      lVar4 = (ulonglong)uVar27 * (ulonglong)uVar31 +
              ((ulonglong)uVar27 * (ulonglong)uVar21 >> 0x20);
      uVar34 = (uint)((ulonglong)lVar4 >> 0x20);
      uVar27 = uVar24 >> (uVar17 & 0xff) | uVar33 << iVar25;
      if (-1 < (int)uVar20) {
        uVar27 = uVar24 << (uVar20 & 0xff);
      }
      lVar5 = (ulonglong)uVar27 * (ulonglong)uVar21;
      uVar17 = (uint)((ulonglong)lVar5 >> 0x20);
      lVar9 = (ulonglong)uVar27 * (ulonglong)uVar31 +
              (ulonglong)
              CONCAT14(CARRY4(uVar34,uVar17) ||
                       CARRY4(uVar34 + uVar17,(uint)CARRY4((uint)lVar5,(uint)lVar4)),
                       (int)((ulonglong)(lVar4 + lVar5) >> 0x20)) +
              (ulonglong)(uint)-((int)(lVar4 + lVar5) >> 0x1f) + 1;
      uVar26 = (uint)lVar9;
      uVar24 = (uint)((ulonglong)lVar9 >> 0x20);
      uVar17 = -(((uint)local_38 - iVar25) + (uint)*(ushort *)(&DAT_00362638 + iVar23)) & 0x3f;
      uVar34 = 0x20 - uVar17;
      uVar20 = uVar26 >> uVar17 | uVar24 << (uVar34 & 0xff);
      lVar4 = (ulonglong)uVar14 * (ulonglong)uVar31 +
              ((ulonglong)uVar14 * (ulonglong)uVar21 >> 0x20);
      uVar27 = (uint)((ulonglong)lVar4 >> 0x20);
      lVar6 = (ulonglong)uVar16 * (ulonglong)uVar21;
      uVar33 = (uint)((ulonglong)lVar6 >> 0x20);
      uVar14 = uVar17 - 0x20;
      lVar5 = (ulonglong)uVar16 * (ulonglong)uVar31 +
              (ulonglong)
              CONCAT14(CARRY4(uVar27,uVar33) ||
                       CARRY4(uVar27 + uVar33,(uint)CARRY4((uint)lVar6,(uint)lVar4)),
                       (int)((ulonglong)(lVar4 + lVar6) >> 0x20));
      uVar31 = (uint)lVar5;
      uVar27 = 1 >> (uVar34 & 0xff);
      if (-1 < (int)uVar14) {
        uVar27 = 1 << (uVar14 & 0xff);
        uVar20 = uVar24 >> (uVar14 & 0xff);
      }
      uVar16 = (int)(lVar4 + lVar6) >> 0x1f;
      uVar33 = 1 << uVar17;
      sVar1 = *(short *)(&DAT_0036263a + iVar23);
      if (-1 < (int)uVar14) {
        uVar33 = 0;
      }
      uVar10 = uVar33 - 1;
      uVar15 = uVar26 & uVar10;
      uVar11 = uVar27 - (uVar33 == 0);
      uVar21 = uVar24 & uVar11;
      if (uVar20 < 10000) {
        if (uVar20 < 100) {
          puVar28 = (undefined1 *)0x1;
          uVar30 = (ushort)(9 < uVar20);
          if (9 < uVar20) {
            puVar28 = (undefined1 *)0xa;
          }
        }
        else {
          uVar30 = 3;
          puVar28 = (undefined1 *)0x3e8;
          if (uVar20 < 1000) {
            uVar30 = 2;
            puVar28 = (undefined1 *)0x64;
          }
        }
      }
      else if (uVar20 < 1000000) {
        uVar30 = 5;
        puVar28 = (undefined1 *)0x186a0;
        if (uVar20 < 100000) {
          uVar30 = 4;
          puVar28 = (undefined1 *)0x2710;
        }
      }
      else {
        puVar28 = (undefined1 *)0x5f5e100;
        if (uVar20 < 100000000) {
          uVar30 = 7;
          if (uVar20 < 10000000) {
            uVar30 = 6;
            puVar28 = &DAT_000f4240;
          }
          else {
            puVar28 = &LAB_00989680;
          }
        }
        else {
          uVar30 = 9;
          if (uVar20 < 1000000000) {
            uVar30 = 8;
          }
          else {
            puVar28 = &DAT_3b9aca00;
          }
        }
      }
      iVar25 = FUN_018462e8(uVar20,puVar28);
      uVar12 = iVar25 + 0x30;
      uVar20 = uVar20 - iVar25 * (int)puVar28;
      *param_3 = (char)uVar12;
      lVar4 = lVar9 + CONCAT44(uVar16 - ((int)((ulonglong)lVar5 >> 0x20) + (uint)(uVar16 < uVar31)),
                               uVar16 - uVar31) + 1;
      uVar35 = (uint)lVar4;
      uVar16 = (uint)((ulonglong)lVar4 >> 0x20);
      uVar31 = uVar20 >> (uVar34 & 0xff);
      if (-1 < (int)uVar14) {
        uVar31 = uVar20 << (uVar14 & 0xff);
      }
      uVar13 = uVar20 << uVar17;
      if (-1 < (int)uVar14) {
        uVar13 = 0;
      }
      uVar31 = uVar31 + uVar21 + (uint)CARRY4(uVar13,uVar15);
      sVar1 = (uVar30 - sVar1) + 1;
      local_70 = 1;
      local_7c = (uint)lVar2;
      local_78 = (int)((ulonglong)lVar2 >> 0x20);
      if (uVar31 <= uVar16 && (uint)(uVar35 <= uVar13 + uVar15) <= uVar31 - uVar16) {
        puVar18 = puVar28;
        uVar32 = uVar13 + uVar15;
LAB_00fad448:
        uVar20 = uVar16 - (uVar31 + (uVar35 < uVar32));
        uVar27 = (uint)puVar18 >> (uVar34 & 0xff);
        if (-1 < (int)uVar14) {
          uVar27 = (int)puVar18 << (uVar14 & 0xff);
        }
        uVar17 = (int)puVar18 << uVar17;
        if (-1 < (int)uVar14) {
          uVar17 = 0;
        }
        bVar8 = uVar20 <= uVar27 && (uint)(uVar17 <= uVar35 - uVar32) <= uVar20 - uVar27;
        uVar14 = uVar26 - local_7c;
        iVar25 = uVar24 - (local_78 + (uint)(uVar26 < local_7c));
        uVar21 = uVar14 + 1;
        uVar34 = iVar25 + (uint)(0xfffffffe < uVar14);
        uVar33 = uVar14 - 1;
        uVar26 = iVar25 - (uint)(uVar14 == 0);
        uVar14 = uVar31;
        uVar24 = uVar32;
        if ((!(uVar26 < uVar31 || uVar31 - uVar26 < (uint)(uVar33 <= uVar32))) &&
           (!(uVar20 <= uVar27 && (uint)(uVar17 <= uVar35 - uVar32) <= uVar20 - uVar27))) {
          do {
            uVar24 = uVar32 + uVar17;
            uVar14 = uVar31 + uVar27 + (uint)CARRY4(uVar32,uVar17);
            if ((uVar26 < uVar14 || uVar14 - uVar26 < (uint)(uVar33 <= uVar24)) &&
               (uVar20 = uVar14 - (uVar26 + (uVar24 < uVar33)),
               uVar15 = uVar26 - (uVar31 + (uVar33 < uVar32)),
               uVar15 <= uVar20 && (uint)(uVar24 - uVar33 <= uVar33 - uVar32) <= uVar15 - uVar20)) {
              bVar8 = false;
              uVar14 = uVar31;
              uVar24 = uVar32;
              break;
            }
            uVar12 = uVar12 - 1;
            param_3[local_70 + -1] = (char)uVar12;
            uVar20 = uVar16 - (uVar14 + (uVar35 < uVar24));
            bVar8 = uVar20 <= uVar27 && (uint)(uVar17 <= uVar35 - uVar24) <= uVar20 - uVar27;
            if (!(uVar14 <= uVar26 && (uint)(uVar33 <= uVar24) <= uVar14 - uVar26)) break;
            uVar31 = uVar14;
            uVar32 = uVar24;
          } while (uVar27 < uVar20 || uVar20 - uVar27 < (uint)(uVar17 <= uVar35 - uVar24));
        }
        if ((uVar14 <= uVar34 && (uint)(uVar21 <= uVar24) <= uVar14 - uVar34) && (!bVar8)) {
          uVar31 = uVar24 + uVar17;
          uVar27 = uVar14 + uVar27 + (uint)CARRY4(uVar24,uVar17);
          if ((uVar27 <= uVar34 && (uint)(uVar21 <= uVar31) <= uVar27 - uVar34) ||
             (uVar27 = uVar27 - (uVar34 + (uVar31 < uVar21)),
             uVar34 = uVar34 - (uVar14 + (uVar21 < uVar24)),
             uVar27 < uVar34 || uVar34 - uVar27 < (uint)(uVar31 - uVar21 <= uVar21 - uVar24)))
          goto LAB_00fadd68;
        }
        uVar16 = uVar16 - (uVar35 < 4);
        if ((uVar14 == 0 && (1 < uVar24) <= uVar14) ||
           (uVar16 <= uVar14 && (uint)(uVar24 <= uVar35 - 4) <= uVar16 - uVar14)) {
          *param_1 = 0;
          return;
        }
        *(short *)(param_1 + 2) = sVar1;
        *param_1 = param_3;
        param_1[1] = local_70;
        return;
      }
      iVar25 = 1;
      if (uVar30 != 0) {
        if (puVar28 < (undefined1 *)0xa) {
LAB_00fade64:
                    /* WARNING: Subroutine does not return */
          FUN_00faf2a4(&DAT_01880ffc);
        }
        puVar18 = (undefined1 *)((uint)puVar28 / 10);
        iVar25 = FUN_018462e8(uVar20,puVar18);
        uVar20 = uVar20 - iVar25 * (int)puVar18;
        uVar12 = iVar25 + 0x30;
        param_3[1] = (char)uVar12;
        uVar31 = uVar20 >> (uVar34 & 0xff);
        if (-1 < (int)uVar14) {
          uVar31 = uVar20 << (uVar14 & 0xff);
        }
        uVar13 = uVar20 << uVar17;
        if (-1 < (int)uVar14) {
          uVar13 = 0;
        }
        uVar31 = uVar31 + uVar21 + (uint)CARRY4(uVar13,uVar15);
        local_70 = 2;
        uVar32 = uVar13 + uVar15;
        if (uVar31 <= uVar16 && (uint)(uVar35 <= uVar13 + uVar15) <= uVar31 - uVar16)
        goto LAB_00fad448;
        iVar25 = 2;
        if (uVar30 != 1) {
          if (puVar28 < (undefined1 *)0x64) goto LAB_00fade64;
          puVar18 = (undefined1 *)((uint)puVar28 / 100);
          iVar25 = FUN_018462e8(uVar20,puVar18);
          uVar20 = uVar20 - iVar25 * (int)puVar18;
          uVar12 = iVar25 + 0x30;
          param_3[2] = (char)uVar12;
          uVar31 = uVar20 >> (uVar34 & 0xff);
          if (-1 < (int)uVar14) {
            uVar31 = uVar20 << (uVar14 & 0xff);
          }
          uVar13 = uVar20 << uVar17;
          if (-1 < (int)uVar14) {
            uVar13 = 0;
          }
          uVar31 = uVar31 + uVar21 + (uint)CARRY4(uVar13,uVar15);
          local_70 = 3;
          uVar32 = uVar13 + uVar15;
          if (uVar31 <= uVar16 && (uint)(uVar35 <= uVar13 + uVar15) <= uVar31 - uVar16)
          goto LAB_00fad448;
          iVar25 = 3;
          if (uVar30 != 2) {
            if (puVar28 < (undefined1 *)0x3e8) goto LAB_00fade64;
            puVar18 = (undefined1 *)((uint)puVar28 / 1000);
            iVar25 = FUN_018462e8(uVar20,puVar18);
            uVar20 = uVar20 - iVar25 * (int)puVar18;
            uVar12 = iVar25 + 0x30;
            param_3[3] = (char)uVar12;
            uVar31 = uVar20 >> (uVar34 & 0xff);
            if (-1 < (int)uVar14) {
              uVar31 = uVar20 << (uVar14 & 0xff);
            }
            uVar13 = uVar20 << uVar17;
            if (-1 < (int)uVar14) {
              uVar13 = 0;
            }
            uVar31 = uVar31 + uVar21 + (uint)CARRY4(uVar13,uVar15);
            local_70 = 4;
            uVar32 = uVar13 + uVar15;
            if (uVar31 <= uVar16 && (uint)(uVar35 <= uVar13 + uVar15) <= uVar31 - uVar16)
            goto LAB_00fad448;
            iVar25 = 4;
            if (uVar30 != 3) {
              if (puVar28 < (undefined1 *)0x2710) goto LAB_00fade64;
              puVar18 = (undefined1 *)((uint)puVar28 / 10000);
              iVar25 = FUN_018462e8(uVar20,puVar18);
              uVar20 = uVar20 - iVar25 * (int)puVar18;
              uVar12 = iVar25 + 0x30;
              param_3[4] = (char)uVar12;
              uVar31 = uVar20 >> (uVar34 & 0xff);
              if (-1 < (int)uVar14) {
                uVar31 = uVar20 << (uVar14 & 0xff);
              }
              uVar13 = uVar20 << uVar17;
              if (-1 < (int)uVar14) {
                uVar13 = 0;
              }
              uVar31 = uVar31 + uVar21 + (uint)CARRY4(uVar13,uVar15);
              local_70 = 5;
              uVar32 = uVar13 + uVar15;
              if (uVar31 <= uVar16 && (uint)(uVar35 <= uVar13 + uVar15) <= uVar31 - uVar16)
              goto LAB_00fad448;
              iVar25 = 5;
              if (uVar30 != 4) {
                if (puVar28 < (undefined1 *)0x186a0) goto LAB_00fade64;
                puVar18 = (undefined1 *)((uint)puVar28 / 100000);
                iVar25 = FUN_018462e8(uVar20,puVar18);
                uVar20 = uVar20 - iVar25 * (int)puVar18;
                uVar12 = iVar25 + 0x30;
                param_3[5] = (char)uVar12;
                uVar31 = uVar20 >> (uVar34 & 0xff);
                if (-1 < (int)uVar14) {
                  uVar31 = uVar20 << (uVar14 & 0xff);
                }
                uVar13 = uVar20 << uVar17;
                if (-1 < (int)uVar14) {
                  uVar13 = 0;
                }
                uVar31 = uVar31 + uVar21 + (uint)CARRY4(uVar13,uVar15);
                local_70 = 6;
                uVar32 = uVar13 + uVar15;
                if (uVar31 <= uVar16 && (uint)(uVar35 <= uVar13 + uVar15) <= uVar31 - uVar16)
                goto LAB_00fad448;
                iVar25 = 6;
                if (uVar30 != 5) {
                  if (puVar28 < &DAT_000f4240) goto LAB_00fade64;
                  puVar18 = (undefined1 *)((uint)puVar28 / 1000000);
                  iVar25 = FUN_018462e8(uVar20,puVar18);
                  uVar20 = uVar20 - iVar25 * (int)puVar18;
                  uVar12 = iVar25 + 0x30;
                  param_3[6] = (char)uVar12;
                  uVar31 = uVar20 >> (uVar34 & 0xff);
                  if (-1 < (int)uVar14) {
                    uVar31 = uVar20 << (uVar14 & 0xff);
                  }
                  uVar13 = uVar20 << uVar17;
                  if (-1 < (int)uVar14) {
                    uVar13 = 0;
                  }
                  uVar31 = uVar31 + uVar21 + (uint)CARRY4(uVar13,uVar15);
                  local_70 = 7;
                  uVar32 = uVar13 + uVar15;
                  if (uVar31 <= uVar16 && (uint)(uVar35 <= uVar13 + uVar15) <= uVar31 - uVar16)
                  goto LAB_00fad448;
                  iVar25 = 7;
                  if (uVar30 != 6) {
                    if (puVar28 < &LAB_00989680) goto LAB_00fade64;
                    puVar18 = (undefined1 *)((uint)puVar28 / 10000000);
                    iVar25 = FUN_018462e8(uVar20,puVar18);
                    uVar20 = uVar20 - iVar25 * (int)puVar18;
                    uVar12 = iVar25 + 0x30;
                    param_3[7] = (char)uVar12;
                    uVar31 = uVar20 >> (uVar34 & 0xff);
                    if (-1 < (int)uVar14) {
                      uVar31 = uVar20 << (uVar14 & 0xff);
                    }
                    uVar13 = uVar20 << uVar17;
                    if (-1 < (int)uVar14) {
                      uVar13 = 0;
                    }
                    uVar31 = uVar31 + uVar21 + (uint)CARRY4(uVar13,uVar15);
                    local_70 = 8;
                    uVar32 = uVar13 + uVar15;
                    if (uVar31 <= uVar16 && (uint)(uVar35 <= uVar13 + uVar15) <= uVar31 - uVar16)
                    goto LAB_00fad448;
                    iVar25 = 8;
                    if (uVar30 != 7) {
                      if (puVar28 < (undefined1 *)0x5f5e100) goto LAB_00fade64;
                      puVar18 = (undefined1 *)((uint)puVar28 / 100000000);
                      iVar25 = FUN_018462e8(uVar20,puVar18);
                      uVar20 = uVar20 - iVar25 * (int)puVar18;
                      uVar12 = iVar25 + 0x30;
                      param_3[8] = (char)uVar12;
                      uVar31 = uVar20 >> (uVar34 & 0xff);
                      if (-1 < (int)uVar14) {
                        uVar31 = uVar20 << (uVar14 & 0xff);
                      }
                      uVar13 = uVar20 << uVar17;
                      if (-1 < (int)uVar14) {
                        uVar13 = 0;
                      }
                      uVar31 = uVar31 + uVar21 + (uint)CARRY4(uVar13,uVar15);
                      local_70 = 9;
                      uVar32 = uVar13 + uVar15;
                      if (uVar31 <= uVar16 && (uint)(uVar35 <= uVar13 + uVar15) <= uVar31 - uVar16)
                      goto LAB_00fad448;
                      iVar25 = 9;
                      if (uVar30 != 8) {
                        if (puVar28 < &DAT_3b9aca00) goto LAB_00fade64;
                        uVar12 = uVar20 | 0x30;
                        param_3[9] = (char)uVar12;
                        local_70 = 10;
                        if (uVar21 <= uVar16 && (uint)(uVar35 <= uVar15) <= uVar21 - uVar16) {
                          puVar18 = (undefined1 *)((uint)puVar28 / 1000000000);
                          uVar31 = uVar21;
                          uVar32 = uVar15;
                          goto LAB_00fad448;
                        }
                        iVar25 = 10;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar16 = uVar16 & uVar11;
      uVar35 = uVar35 & uVar10;
      iVar23 = 0;
      uVar31 = 1;
      do {
        uVar20 = uVar31;
        iVar29 = iVar25;
        iVar22 = iVar23;
        if (iVar29 == 0x11) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(0x11,0x11,&DAT_0188100c);
        }
        uVar12 = (uint)((ulonglong)uVar15 * 10);
        uVar7 = (ulonglong)uVar20 * 10;
        uVar31 = (uint)uVar7;
        uVar21 = (int)((ulonglong)uVar15 * 10 >> 0x20) + uVar21 * 10;
        uVar15 = uVar12 >> uVar17 | uVar21 << (uVar34 & 0xff);
        if (-1 < (int)uVar14) {
          uVar15 = uVar21 >> (uVar14 & 0xff);
        }
        iVar19 = uVar15 + 0x30;
        param_3[iVar29] = (char)iVar19;
        iVar23 = (int)(uVar7 >> 0x20) + iVar22 * 10;
        uVar3 = (ulonglong)uVar35;
        uVar35 = (uint)(uVar3 * 10);
        uVar16 = (int)(uVar3 * 10 >> 0x20) + uVar16 * 10;
        uVar21 = uVar21 & uVar11;
        uVar15 = uVar12 & uVar10;
        iVar25 = iVar29 + 1;
      } while (uVar16 < uVar21 || uVar21 - uVar16 < (uint)(uVar35 <= uVar15));
      uVar34 = uVar16 - (uVar21 + (uVar35 < uVar15));
      bVar8 = uVar34 <= uVar27 && (uint)(uVar33 <= uVar35 - uVar15) <= uVar34 - uVar27;
      lVar2 = (ulonglong)(uVar26 - local_7c) * (uVar7 & 0xffffffff);
      uVar14 = (uint)lVar2;
      uVar10 = uVar14 + uVar31;
      iVar25 = iVar23 * (uVar26 - local_7c) +
               uVar31 * (uVar24 - (local_78 + (uint)(uVar26 < local_7c))) +
               (int)((ulonglong)lVar2 >> 0x20);
      uVar17 = iVar25 + iVar23 + (uint)CARRY4(uVar14,uVar31);
      uVar24 = uVar14 - uVar31;
      uVar31 = iVar25 - (iVar23 + (uint)(uVar14 < uVar31));
      if ((!(uVar31 < uVar21 || uVar21 - uVar31 < (uint)(uVar24 <= uVar15))) &&
         (uVar27 < uVar34 || uVar34 - uVar27 < (uint)(uVar33 <= uVar35 - uVar15))) {
        uVar14 = uVar21;
        uVar34 = uVar15;
        do {
          uVar15 = uVar34 + uVar33;
          uVar21 = uVar14 + uVar27 + (uint)CARRY4(uVar34,uVar33);
          if ((uVar31 < uVar21 || uVar21 - uVar31 < (uint)(uVar24 <= uVar15)) &&
             (uVar26 = uVar21 - (uVar31 + (uVar15 < uVar24)),
             uVar11 = uVar31 - (uVar14 + (uVar24 < uVar34)),
             uVar11 <= uVar26 && (uint)(uVar15 - uVar24 <= uVar24 - uVar34) <= uVar11 - uVar26)) {
            bVar8 = false;
            uVar21 = uVar14;
            uVar15 = uVar34;
            break;
          }
          iVar19 = iVar19 + -1;
          param_3[iVar29] = (char)iVar19;
          uVar26 = uVar16 - (uVar21 + (uVar35 < uVar15));
          bVar8 = uVar26 <= uVar27 && (uint)(uVar33 <= uVar35 - uVar15) <= uVar26 - uVar27;
          if (uVar31 < uVar21 || uVar21 - uVar31 < (uint)(uVar24 <= uVar15)) {
            break;
          }
          uVar14 = uVar21;
          uVar34 = uVar15;
        } while (uVar27 < uVar26 || uVar26 - uVar27 < (uint)(uVar33 <= uVar35 - uVar15));
      }
      if ((uVar21 <= uVar17 && (uint)(uVar10 <= uVar15) <= uVar21 - uVar17) && (!bVar8)) {
        uVar31 = uVar15 + uVar33;
        uVar27 = uVar21 + uVar27 + (uint)CARRY4(uVar15,uVar33);
        if ((uVar27 <= uVar17 && (uint)(uVar10 <= uVar31) <= uVar27 - uVar17) ||
           (uVar27 = uVar27 - (uVar17 + (uVar31 < uVar10)),
           uVar17 = uVar17 - (uVar21 + (uVar10 < uVar15)),
           uVar27 < uVar17 || uVar17 - uVar27 < (uint)(uVar31 - uVar10 <= uVar10 - uVar15))) {
LAB_00fadd68:
          *param_1 = 0;
          return;
        }
      }
      uVar27 = (uint)((ulonglong)uVar20 * 0xffffffd8);
      uVar14 = uVar16 + ((int)((ulonglong)uVar20 * 0xffffffd8 >> 0x20) - uVar20) + iVar22 * -0x28 +
               (uint)CARRY4(uVar35,uVar27);
      uVar31 = (int)((ulonglong)uVar20 * 0x14 >> 0x20) + iVar22 * 0x14;
      if ((uVar31 < uVar21 || uVar21 - uVar31 < (uint)((uint)((ulonglong)uVar20 * 0x14) <= uVar15))
         && (uVar21 < uVar14 || uVar14 - uVar21 < (uint)(uVar15 <= uVar35 + uVar27))) {
        *(short *)(param_1 + 2) = sVar1;
        *param_1 = param_3;
        param_1[1] = iVar29 + 1;
        return;
      }
      *param_1 = 0;
      return;
    }
  }
  FUN_00faf26c(&local_30,&local_40,&DAT_0188115c);
LAB_00fadda0:
                    /* WARNING: Subroutine does not return */
  FUN_00faa464("assertion failed: d.mant > 0",0x1c,&DAT_01880fbc);
}

