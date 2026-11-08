// FUN_012fe028 @ 012fe028 size=2520 calls_out=5 calls_in=2
// strings: assertion failed: d.mant > 0 | assertion failed: d.minus > 0 | assertion failed: d.plus > 0 | assertion failed: d.mant.checked_add(d.plus).is_some() | assertion failed: d.mant.checked_sub(d.minus).is_some() | assertion failed: d.mant + d.plus < (1 << 61)

void FUN_012fe028(int *param_1,uint *param_2,int param_3)

{
  short sVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 *puVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  bool bVar36;
  uint local_80;
  int local_7c;
  uint local_40;
  uint local_3c;
  ushort local_38;
  uint local_30;
  uint local_2c;
  
  uVar28 = *param_2;
  uVar29 = param_2[1];
  if (uVar28 != 0 || uVar29 != 0) {
    uVar15 = param_2[2];
    uVar16 = param_2[3];
    if (uVar15 == 0 && uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: d.minus > 0",0x1d,&DAT_01ce4800);
    }
    uVar18 = param_2[4];
    uVar20 = param_2[5];
    if (uVar18 == 0 && uVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: d.plus > 0",0x1c,&DAT_01ce4810);
    }
    uVar26 = uVar18 + uVar28;
    uVar23 = uVar20 + uVar29 + (uint)CARRY4(uVar18,uVar28);
    if (CARRY4(uVar20,uVar29) || CARRY4(uVar20 + uVar29,(uint)CARRY4(uVar18,uVar28))) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: d.mant.checked_add(d.plus).is_some()",0x36,&DAT_01ce4860);
    }
    if (uVar29 <= uVar16 && (uint)(uVar15 <= uVar28) <= uVar29 - uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: d.mant.checked_sub(d.minus).is_some()",0x37,&DAT_01ce4850);
    }
    if (0x1fffffff < uVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: d.mant + d.plus < (1 << 61)",0x2d,&DAT_01ce4820);
    }
    iVar21 = LZCOUNT(uVar26) + 0x20;
    if (uVar23 != 0) {
      iVar21 = LZCOUNT(uVar23);
    }
    local_40 = uVar28 - uVar15;
    local_3c = uVar29 - (uVar16 + (uVar28 < uVar15));
    uVar18 = 0x20 - iVar21;
    uVar20 = iVar21 - 0x20;
    bVar36 = -1 < (int)uVar20;
    uVar15 = local_40 << iVar21;
    uVar16 = local_40 >> (uVar18 & 0xff) | local_3c << iVar21;
    if (bVar36) {
      uVar16 = local_40 << (uVar20 & 0xff);
      uVar15 = 0;
    }
    local_30 = uVar15 >> iVar21 | uVar16 << (uVar18 & 0xff);
    if (bVar36) {
      local_30 = uVar16 >> (uVar20 & 0xff);
    }
    local_38 = (ushort)param_2[6];
    local_2c = uVar16 >> iVar21;
    if (bVar36) {
      local_2c = 0;
    }
    if (local_30 == local_40 && local_2c == local_3c) {
      uVar31 = uVar28 << iVar21;
      uVar27 = uVar28 >> (uVar18 & 0xff) | uVar29 << iVar21;
      if (-1 < (int)uVar20) {
        uVar31 = 0;
        uVar27 = uVar28 << (uVar20 & 0xff);
      }
      local_2c = uVar27 >> iVar21;
      local_30 = uVar31 >> iVar21 | uVar27 << (uVar18 & 0xff);
      if (-1 < (int)uVar20) {
        local_2c = 0;
        local_30 = uVar27 >> (uVar20 & 0xff);
      }
      local_40 = uVar28;
      local_3c = uVar29;
      if (local_30 == uVar28 && local_2c == uVar29) {
        uVar28 = ((short)(-0x60 - (short)((uint)local_38 - iVar21)) * 0x50 + 0x153b0) / 0x84e;
        if (0x50 < uVar28) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar28,0x51,&DAT_01ce47c0);
        }
        iVar35 = uVar28 * 0x10;
        uVar24 = *(uint *)(&DAT_00425460 + iVar35);
        uVar29 = *(uint *)(&DAT_00425464 + iVar35);
        lVar2 = (ulonglong)uVar31 * (ulonglong)uVar29 +
                ((ulonglong)uVar31 * (ulonglong)uVar24 >> 0x20);
        uVar28 = (uint)((ulonglong)lVar2 >> 0x20);
        lVar4 = (ulonglong)uVar27 * (ulonglong)uVar24;
        uVar31 = (uint)((ulonglong)lVar4 >> 0x20);
        lVar2 = (ulonglong)uVar27 * (ulonglong)uVar29 +
                (ulonglong)
                CONCAT14(CARRY4(uVar28,uVar31) ||
                         CARRY4(uVar28 + uVar31,(uint)CARRY4((uint)lVar4,(uint)lVar2)),
                         (int)((ulonglong)(lVar2 + lVar4) >> 0x20)) +
                (ulonglong)(uint)-((int)(lVar2 + lVar4) >> 0x1f);
        uVar28 = uVar26 << iVar21;
        if (-1 < (int)uVar20) {
          uVar28 = 0;
        }
        lVar4 = (ulonglong)uVar28 * (ulonglong)uVar29 +
                ((ulonglong)uVar28 * (ulonglong)uVar24 >> 0x20);
        uVar31 = (uint)((ulonglong)lVar4 >> 0x20);
        uVar28 = uVar26 >> (uVar18 & 0xff) | uVar23 << iVar21;
        if (-1 < (int)uVar20) {
          uVar28 = uVar26 << (uVar20 & 0xff);
        }
        lVar5 = (ulonglong)uVar28 * (ulonglong)uVar24;
        uVar18 = (uint)((ulonglong)lVar5 >> 0x20);
        lVar8 = (ulonglong)uVar28 * (ulonglong)uVar29 +
                (ulonglong)
                CONCAT14(CARRY4(uVar31,uVar18) ||
                         CARRY4(uVar31 + uVar18,(uint)CARRY4((uint)lVar5,(uint)lVar4)),
                         (int)((ulonglong)(lVar4 + lVar5) >> 0x20)) +
                (ulonglong)(uint)-((int)(lVar4 + lVar5) >> 0x1f) + 1;
        uVar31 = (uint)lVar8;
        uVar26 = (uint)((ulonglong)lVar8 >> 0x20);
        uVar18 = -(((uint)local_38 - iVar21) + (uint)*(ushort *)(&DAT_00425468 + iVar35)) & 0x3f;
        uVar20 = 0x20 - uVar18;
        puVar32 = (undefined1 *)(uVar31 >> uVar18 | uVar26 << (uVar20 & 0xff));
        lVar4 = (ulonglong)uVar15 * (ulonglong)uVar29 +
                ((ulonglong)uVar15 * (ulonglong)uVar24 >> 0x20);
        uVar28 = (uint)((ulonglong)lVar4 >> 0x20);
        lVar6 = (ulonglong)uVar16 * (ulonglong)uVar24;
        uVar15 = (uint)((ulonglong)lVar6 >> 0x20);
        uVar23 = uVar18 - 0x20;
        lVar5 = (ulonglong)uVar16 * (ulonglong)uVar29 +
                (ulonglong)
                CONCAT14(CARRY4(uVar28,uVar15) ||
                         CARRY4(uVar28 + uVar15,(uint)CARRY4((uint)lVar6,(uint)lVar4)),
                         (int)((ulonglong)(lVar4 + lVar6) >> 0x20));
        uVar29 = (uint)lVar5;
        uVar28 = 1 >> (uVar20 & 0xff);
        if (-1 < (int)uVar23) {
          uVar28 = 1 << (uVar23 & 0xff);
        }
        uVar15 = 1 << uVar18;
        if (-1 < (int)uVar23) {
          puVar32 = (undefined1 *)(uVar26 >> (uVar23 & 0xff));
          uVar15 = 0;
        }
        uVar27 = uVar15 - 1;
        uVar16 = (int)(lVar4 + lVar6) >> 0x1f;
        uVar24 = uVar28 - (uVar15 == 0);
        if (puVar32 < (undefined1 *)0x2710) {
          if (puVar32 < (undefined1 *)0x64) {
            puVar25 = (undefined1 *)0x1;
            uVar33 = (uint)((undefined1 *)0x9 < puVar32);
            if ((undefined1 *)0x9 < puVar32) {
              puVar25 = (undefined1 *)0xa;
            }
          }
          else {
            uVar33 = 3;
            puVar25 = (undefined1 *)0x3e8;
            if (puVar32 < (undefined1 *)0x3e8) {
              uVar33 = 2;
              puVar25 = (undefined1 *)0x64;
            }
          }
        }
        else if (puVar32 < (undefined1 *)0xf4240) {
          uVar33 = 5;
          puVar25 = (undefined1 *)0x186a0;
          if (puVar32 < (undefined1 *)0x186a0) {
            uVar33 = 4;
            puVar25 = (undefined1 *)0x2710;
          }
        }
        else {
          puVar25 = (undefined1 *)0x5f5e100;
          if (puVar32 < (undefined1 *)0x5f5e100) {
            uVar33 = 7;
            if ((undefined1 *)((int)&DAT_0098967c + 3) < puVar32) {
              puVar25 = (undefined1 *)0x989680;
            }
            else {
              uVar33 = 6;
              puVar25 = (undefined1 *)0xf4240;
            }
          }
          else {
            uVar33 = 9;
            if (&DAT_3b9ac9ff < puVar32) {
              puVar25 = &DAT_3b9aca00;
            }
            else {
              uVar33 = 8;
            }
          }
        }
        lVar4 = lVar8 + CONCAT44(uVar16 - ((int)((ulonglong)lVar5 >> 0x20) + (uint)(uVar16 < uVar29)
                                          ),uVar16 - uVar29) + 1;
        uVar13 = (uint)lVar4;
        uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
        uVar10 = uVar9 & uVar24;
        uVar11 = uVar13 & uVar27;
        uVar29 = uVar31 & uVar27;
        uVar16 = uVar26 & uVar24;
        sVar1 = ((short)uVar33 - *(short *)(&DAT_0042546a + iVar35)) + 1;
        uVar30 = 0;
        while( true ) {
          iVar21 = FUN_01bf1250(puVar32,puVar25);
          puVar32 = puVar32 + -(iVar21 * (int)puVar25);
          iVar21 = iVar21 + 0x30;
          *(char *)(param_3 + uVar30) = (char)iVar21;
          uVar19 = (uint)puVar32 >> (uVar20 & 0xff);
          if (-1 < (int)uVar23) {
            uVar19 = (int)puVar32 << (uVar23 & 0xff);
          }
          uVar14 = (int)puVar32 << uVar18;
          if (-1 < (int)uVar23) {
            uVar14 = 0;
          }
          uVar22 = uVar14 + uVar29;
          uVar19 = uVar19 + uVar16 + (uint)CARRY4(uVar14,uVar29);
          uVar14 = uVar30 + 1;
          local_80 = (uint)lVar2;
          local_7c = (int)((ulonglong)lVar2 >> 0x20);
          if (uVar19 <= uVar9 && (uint)(uVar13 <= uVar22) <= uVar19 - uVar9) {
            uVar29 = uVar9 - (uVar19 + (uVar13 < uVar22));
            uVar28 = (uint)puVar25 >> (uVar20 & 0xff);
            if (-1 < (int)uVar23) {
              uVar28 = (int)puVar25 << (uVar23 & 0xff);
            }
            uVar18 = (int)puVar25 << uVar18;
            if (-1 < (int)uVar23) {
              uVar18 = 0;
            }
            bVar36 = uVar29 <= uVar28 && (uint)(uVar18 <= uVar13 - uVar22) <= uVar29 - uVar28;
            uVar15 = uVar31 - local_80;
            iVar35 = uVar26 - (local_7c + (uint)(uVar31 < local_80));
            uVar20 = uVar15 + 1;
            uVar16 = iVar35 + (uint)(0xfffffffe < uVar15);
            uVar23 = uVar15 - 1;
            uVar15 = iVar35 - (uint)(uVar15 == 0);
            if (uVar15 < uVar19 || uVar19 - uVar15 < (uint)(uVar23 <= uVar22)) {
              uVar29 = uVar19;
              uVar26 = uVar22;
              goto LAB_012fe7b8;
            }
            if (uVar29 <= uVar28 && (uint)(uVar18 <= uVar13 - uVar22) <= uVar29 - uVar28)
            goto LAB_012fe7b0;
            goto LAB_012fe514;
          }
          if (uVar33 == uVar30) break;
          bVar36 = puVar25 < (undefined1 *)0xa;
          puVar25 = (undefined1 *)((uint)puVar25 / 10);
          uVar30 = uVar14;
          if (bVar36) {
                    /* WARNING: Subroutine does not return */
            FUN_012ffdf4(&DAT_01ce4830);
          }
        }
        iVar35 = uVar30 + 1;
        uVar33 = 1;
        iVar21 = 0;
        do {
          iVar34 = iVar21;
          uVar30 = uVar33;
          if (iVar35 == 0x11) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(0x11,0x11,&DAT_01ce4840);
          }
          uVar9 = (uint)((ulonglong)uVar29 * 10);
          uVar7 = (ulonglong)uVar30 * 10;
          uVar33 = (uint)uVar7;
          uVar16 = (int)((ulonglong)uVar29 * 10 >> 0x20) + uVar16 * 10;
          iVar21 = (int)(uVar7 >> 0x20) + iVar34 * 10;
          uVar3 = (ulonglong)uVar11;
          uVar11 = (uint)(uVar3 * 10);
          uVar29 = uVar9 >> uVar18 | uVar16 << (uVar20 & 0xff);
          if (-1 < (int)uVar23) {
            uVar29 = uVar16 >> (uVar23 & 0xff);
          }
          iVar17 = uVar29 + 0x30;
          *(char *)(param_3 + iVar35) = (char)iVar17;
          iVar35 = iVar35 + 1;
          uVar10 = (int)(uVar3 * 10 >> 0x20) + uVar10 * 10;
          uVar16 = uVar16 & uVar24;
          uVar29 = uVar9 & uVar27;
        } while (uVar10 < uVar16 || uVar16 - uVar10 < (uint)(uVar11 <= uVar29));
        uVar18 = uVar10 - (uVar16 + (uVar11 < uVar29));
        bVar36 = uVar18 <= uVar28 && (uint)(uVar15 <= uVar11 - uVar29) <= uVar18 - uVar28;
        lVar2 = (ulonglong)(uVar31 - local_80) * (uVar7 & 0xffffffff);
        uVar27 = (uint)lVar2;
        iVar12 = iVar21 * (uVar31 - local_80) +
                 uVar33 * (uVar26 - (local_7c + (uint)(uVar31 < local_80))) +
                 (int)((ulonglong)lVar2 >> 0x20);
        uVar20 = uVar27 + uVar33;
        uVar23 = iVar12 + iVar21 + (uint)CARRY4(uVar27,uVar33);
        uVar31 = uVar27 - uVar33;
        uVar26 = iVar12 - (iVar21 + (uint)(uVar27 < uVar33));
        if (uVar26 < uVar16 || uVar16 - uVar26 < (uint)(uVar31 <= uVar29)) {
LAB_012fe85c:
          uVar18 = uVar29;
          uVar27 = uVar16;
        }
        else if (uVar28 < uVar18 || uVar18 - uVar28 < (uint)(uVar15 <= uVar11 - uVar29)) {
          do {
            uVar18 = uVar29 + uVar15;
            uVar27 = uVar16 + uVar28 + (uint)CARRY4(uVar29,uVar15);
            if ((uVar26 < uVar27 || uVar27 - uVar26 < (uint)(uVar31 <= uVar18)) &&
               (uVar33 = uVar27 - (uVar26 + (uVar18 < uVar31)),
               uVar24 = uVar26 - (uVar16 + (uVar31 < uVar29)),
               uVar24 <= uVar33 && (uint)(uVar18 - uVar31 <= uVar31 - uVar29) <= uVar24 - uVar33)) {
              bVar36 = false;
              goto LAB_012fe85c;
            }
            iVar17 = iVar17 + -1;
            *(char *)(param_3 + iVar35 + -1) = (char)iVar17;
            uVar24 = uVar10 - (uVar27 + (uVar11 < uVar18));
            bVar36 = uVar24 <= uVar28 && (uint)(uVar15 <= uVar11 - uVar18) <= uVar24 - uVar28;
            if (uVar26 < uVar27 || uVar27 - uVar26 < (uint)(uVar31 <= uVar18)) {
              break;
            }
            uVar29 = uVar18;
            uVar16 = uVar27;
          } while (uVar28 < uVar24 || uVar24 - uVar28 < (uint)(uVar15 <= uVar11 - uVar18));
        }
        else {
          uVar18 = uVar29;
          uVar27 = uVar16;
        }
        if ((uVar27 <= uVar23 && (uint)(uVar20 <= uVar18) <= uVar27 - uVar23) && (!bVar36)) {
          uVar29 = uVar18 + uVar15;
          uVar28 = uVar27 + uVar28 + (uint)CARRY4(uVar18,uVar15);
          if ((uVar28 <= uVar23 && (uint)(uVar20 <= uVar29) <= uVar28 - uVar23) ||
             (uVar28 = uVar28 - (uVar23 + (uVar29 < uVar20)),
             uVar23 = uVar23 - (uVar27 + (uVar20 < uVar18)),
             uVar28 < uVar23 || uVar23 - uVar28 < (uint)(uVar29 - uVar20 <= uVar20 - uVar18)))
          goto LAB_012fe924;
        }
        uVar28 = (uint)((ulonglong)uVar30 * 0xffffffd8);
        uVar15 = uVar10 + ((int)((ulonglong)uVar30 * 0xffffffd8 >> 0x20) - uVar30) + iVar34 * -0x28
                 + (uint)CARRY4(uVar11,uVar28);
        uVar29 = (int)((ulonglong)uVar30 * 0x14 >> 0x20) + iVar34 * 0x14;
        if ((uVar29 < uVar27 || uVar27 - uVar29 < (uint)((uint)((ulonglong)uVar30 * 0x14) <= uVar18)
            ) && (uVar27 < uVar15 || uVar15 - uVar27 < (uint)(uVar18 <= uVar11 + uVar28))) {
          *(short *)(param_1 + 2) = sVar1;
          *param_1 = param_3;
          param_1[1] = iVar35;
          return;
        }
        goto LAB_012fe924;
      }
    }
    FUN_012ffdbc(&local_30,&local_40,&DAT_01ce4990);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0ec("assertion failed: d.mant > 0",0x1c,&DAT_01ce47f0);
LAB_012fe514:
  uVar26 = uVar22 + uVar18;
  uVar29 = uVar19 + uVar28 + (uint)CARRY4(uVar22,uVar18);
  if ((uVar15 < uVar29 || uVar29 - uVar15 < (uint)(uVar23 <= uVar26)) &&
     (uVar31 = uVar29 - (uVar15 + (uVar26 < uVar23)), uVar27 = uVar15 - (uVar19 + (uVar23 < uVar22))
     , uVar27 <= uVar31 && (uint)(uVar26 - uVar23 <= uVar23 - uVar22) <= uVar27 - uVar31)) {
    bVar36 = false;
LAB_012fe7b0:
    uVar29 = uVar19;
    uVar26 = uVar22;
LAB_012fe7b8:
    if ((uVar29 <= uVar16 && (uint)(uVar20 <= uVar26) <= uVar29 - uVar16) && (!bVar36)) {
      uVar15 = uVar26 + uVar18;
      uVar28 = uVar29 + uVar28 + (uint)CARRY4(uVar26,uVar18);
      if ((uVar28 <= uVar16 && (uint)(uVar20 <= uVar15) <= uVar28 - uVar16) ||
         (uVar28 = uVar28 - (uVar16 + (uVar15 < uVar20)),
         uVar16 = uVar16 - (uVar29 + (uVar20 < uVar26)),
         uVar28 < uVar16 || uVar16 - uVar28 < (uint)(uVar15 - uVar20 <= uVar20 - uVar26))) {
LAB_012fe924:
        *param_1 = 0;
        return;
      }
    }
    uVar9 = uVar9 - (uVar13 < 4);
    if ((uVar29 == 0 && (1 < uVar26) <= uVar29) ||
       (uVar9 <= uVar29 && (uint)(uVar26 <= uVar13 - 4) <= uVar9 - uVar29)) {
      *param_1 = 0;
      return;
    }
    *(short *)(param_1 + 2) = sVar1;
    *param_1 = param_3;
    param_1[1] = uVar14;
    return;
  }
  iVar21 = iVar21 + -1;
  *(char *)(param_3 + uVar14 + -1) = (char)iVar21;
  uVar31 = uVar9 - (uVar29 + (uVar13 < uVar26));
  bVar36 = uVar31 <= uVar28 && (uint)(uVar18 <= uVar13 - uVar26) <= uVar31 - uVar28;
  if (uVar15 < uVar29 || uVar29 - uVar15 < (uint)(uVar23 <= uVar26)) goto LAB_012fe7b8;
  uVar19 = uVar29;
  uVar22 = uVar26;
  if (uVar31 <= uVar28 && (uint)(uVar18 <= uVar13 - uVar26) <= uVar31 - uVar28) goto LAB_012fe7b8;
  goto LAB_012fe514;
}

