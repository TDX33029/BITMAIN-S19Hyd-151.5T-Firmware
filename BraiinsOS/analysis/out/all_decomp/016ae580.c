// FUN_016ae580 @ 016ae580 size=2856 calls_out=6 calls_in=1
// strings: 

undefined4
FUN_016ae580(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  bool bVar32;
  
  iVar15 = param_1[3];
  uVar6 = iVar15 + 1;
  if (iVar15 != -1) {
    uVar25 = param_1[1];
    uVar28 = uVar25 + 1;
    uVar19 = uVar25;
    if (7 < uVar25) {
      uVar19 = (uVar28 & 0xfffffff8) - (uVar28 >> 3);
    }
    if (uVar6 <= uVar19 >> 1) {
      if (uVar28 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar28 >> 2;
        if ((uVar28 & 3) != 0) {
          uVar6 = (uVar28 >> 2) + 1;
        }
        puVar24 = (uint *)*param_1;
        iVar15 = 0;
        do {
          puVar24[-iVar15] =
               (~(puVar24[-iVar15] >> 7) & 0x1010101) + (puVar24[-iVar15] | 0x7f7f7f7f);
          iVar15 = iVar15 + -1;
        } while (-iVar15 != uVar6);
        if (uVar28 < 4) {
          FUN_016dd52c(puVar24 + 1,puVar24,uVar28);
        }
        else {
          *(uint *)((int)puVar24 + uVar28) = *puVar24;
        }
        uVar10 = param_5 ^ 0x6e646f6d;
        uVar19 = uVar10 + (param_3 ^ 0x70736575);
        uVar6 = param_6 ^ 0x646f7261;
        uVar20 = (uVar10 << 0xd | uVar6 >> 0x13) ^ uVar19;
        uVar28 = uVar6 + (param_4 ^ 0x736f6d65) + (uint)CARRY4(uVar10,param_3 ^ 0x70736575);
        uVar10 = (uVar6 << 0xd | uVar10 >> 0x13) ^ uVar28;
        param_3 = param_3 ^ 0x6e657261;
        uVar6 = 0;
        do {
          puVar12 = puVar24;
          if (*(char *)((int)puVar24 + uVar6) == -0x80) {
            puVar31 = puVar24 + (uVar6 + 1) * -3;
            while( true ) {
              uVar21 = puVar24[uVar6 * -3 + -3] ^ param_5 ^ 0x79746573;
              uVar5 = param_6 ^ 0x70656462;
              uVar11 = ((param_6 ^ 0x74656462) << 0x10 | uVar21 >> 0x10) ^
                       uVar5 + (param_4 ^ 0x6c796765) + (uint)CARRY4(uVar21,param_3);
              uVar16 = (uVar21 << 0x10 | uVar5 >> 0x10) ^ uVar21 + param_3;
              uVar7 = uVar11 + uVar19 + (uint)CARRY4(uVar16,uVar28);
              uVar9 = uVar21 + param_3 + uVar20;
              uVar13 = uVar5 + (param_4 ^ 0x6c796765) + uVar10 + (uint)CARRY4(param_3,uVar20) +
                       (uint)CARRY4(uVar21,param_3 + uVar20);
              uVar21 = (uVar11 << 0x15 | uVar16 >> 0xb) ^ uVar7;
              uVar11 = (uVar16 << 0x15 | uVar11 >> 0xb) ^ uVar16 + uVar28;
              uVar5 = uVar13 ^ 0xff;
              uVar17 = uVar11 + uVar5;
              uVar26 = uVar21 + uVar9 + (uint)CARRY4(uVar11,uVar5);
              uVar29 = (uVar21 << 0x10 | uVar11 >> 0x10) ^ uVar26;
              uVar11 = (uVar11 << 0x10 | uVar21 >> 0x10) ^ uVar17;
              uVar13 = uVar13 ^ (uVar10 << 0x11 | uVar20 >> 0xf);
              uVar9 = uVar9 ^ (uVar20 << 0x11 | uVar10 >> 0xf);
              uVar21 = uVar16 + uVar28 ^ puVar24[uVar6 * -3 + -3];
              uVar16 = uVar21 + uVar9;
              uVar21 = (uVar7 ^ 0x4000000) + uVar13 + (uint)CARRY4(uVar21,uVar9);
              uVar14 = uVar11 + uVar21;
              uVar5 = uVar21 ^ (uVar13 << 0xd | uVar9 >> 0x13);
              uVar7 = uVar16 ^ (uVar9 << 0xd | uVar13 >> 0x13);
              uVar22 = uVar29 + uVar16 + (uint)CARRY4(uVar11,uVar21);
              uVar16 = (uVar11 << 0x15 | uVar29 >> 0xb) ^ uVar14;
              uVar21 = (uVar29 << 0x15 | uVar11 >> 0xb) ^ uVar22;
              uVar13 = uVar5 + uVar26 + (uint)CARRY4(uVar7,uVar17);
              uVar29 = uVar16 + uVar13;
              uVar9 = uVar13 ^ (uVar5 << 0x11 | uVar7 >> 0xf);
              uVar30 = uVar21 + uVar7 + uVar17 + (uint)CARRY4(uVar16,uVar13);
              uVar7 = uVar7 + uVar17 ^ (uVar7 << 0x11 | uVar5 >> 0xf);
              uVar11 = (uVar16 << 0x10 | uVar21 >> 0x10) ^ uVar29;
              uVar5 = uVar9 + uVar22 + (uint)CARRY4(uVar7,uVar14);
              uVar16 = (uVar21 << 0x10 | uVar16 >> 0x10) ^ uVar30;
              uVar26 = uVar11 + uVar5;
              uVar22 = uVar16 + uVar7 + uVar14 + (uint)CARRY4(uVar11,uVar5);
              uVar21 = (uVar11 << 0x15 | uVar16 >> 0xb) ^ uVar26;
              uVar13 = (uVar7 << 0xd | uVar9 >> 0x13) ^ uVar7 + uVar14;
              uVar16 = (uVar16 << 0x15 | uVar11 >> 0xb) ^ uVar22;
              uVar5 = (uVar9 << 0xd | uVar7 >> 0x13) ^ uVar5;
              uVar11 = uVar5 + uVar30 + (uint)CARRY4(uVar13,uVar29);
              uVar14 = uVar21 + uVar11;
              uVar7 = uVar16 + uVar13 + uVar29 + (uint)CARRY4(uVar21,uVar11);
              uVar11 = (uVar5 << 0x11 | uVar13 >> 0xf) ^ uVar11;
              uVar5 = (uVar13 << 0x11 | uVar5 >> 0xf) ^ uVar13 + uVar29;
              uVar9 = (uVar5 << 0xd | uVar11 >> 0x13) ^ uVar5 + uVar26;
              uVar5 = (uVar11 << 0xd | uVar5 >> 0x13) ^ uVar11 + uVar22 + (uint)CARRY4(uVar5,uVar26)
              ;
              uVar13 = param_1[1];
              uVar7 = ((uVar16 >> 0x10 ^ uVar14) << 0x15 |
                      ((uVar16 << 0x10 | uVar21 >> 0x10) ^ uVar7) >> 0xb) ^
                      (uVar9 << 0x11 | uVar5 >> 0xf) ^ uVar5 + uVar7 + (uint)CARRY4(uVar9,uVar14) ^
                      uVar9 + uVar14;
              uVar5 = uVar13 & uVar7;
              uVar9 = *(uint *)((int)puVar24 + uVar5) & 0x80808080;
              uVar21 = uVar5;
              if (uVar9 == 0) {
                iVar15 = 4;
                do {
                  uVar21 = uVar21 + iVar15 & uVar13;
                  iVar15 = iVar15 + 4;
                  uVar9 = *(uint *)((int)puVar24 + uVar21) & 0x80808080;
                } while (uVar9 == 0);
              }
              uVar21 = uVar21 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                               (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                       uVar13;
              if (-1 < *(char *)((int)puVar24 + uVar21)) {
                uVar21 = *puVar24 & 0x80808080;
                uVar21 = (uint)LZCOUNT((*puVar24 & 0x80) << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                       (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar7 >> 0x18);
              if (((uVar21 - uVar5 ^ uVar6 - uVar5) & uVar13) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar24 + uVar6) = bVar2;
                puVar12 = (uint *)*param_1;
                *(byte *)((int)puVar12 + (uVar13 & uVar6 - 4) + 4) = bVar2;
                goto LAB_016aea64;
              }
              cVar1 = *(char *)((int)puVar24 + uVar21);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar24 + uVar21) = bVar2;
              puVar12 = (uint *)*param_1;
              *(byte *)((int)puVar12 + (uVar21 - 4 & uVar13) + 4) = bVar2;
              if (cVar1 == -1) break;
              uVar5 = *puVar31;
              *puVar31 = puVar24[uVar21 * -3 + -3];
              puVar24[uVar21 * -3 + -3] = uVar5;
              uVar5 = puVar24[uVar21 * -3 + -2];
              puVar24[uVar21 * -3 + -2] = puVar31[1];
              puVar31[1] = uVar5;
              uVar5 = puVar24[uVar21 * -3 + -1];
              puVar24[uVar21 * -3 + -1] = puVar31[2];
              puVar31[2] = uVar5;
              puVar24 = (uint *)*param_1;
            }
            uVar5 = param_1[1];
            *(undefined1 *)((int)puVar12 + uVar6) = 0xff;
            *(undefined1 *)((int)puVar12 + (uVar5 & uVar6 - 4) + 4) = 0xff;
            uVar5 = *puVar31;
            uVar9 = puVar31[1];
            puVar24[uVar21 * -3 + -1] = puVar31[2];
            puVar24[uVar21 * -3 + -2] = uVar9;
            puVar24[uVar21 * -3 + -3] = uVar5;
          }
LAB_016aea64:
          bVar32 = uVar6 != uVar25;
          uVar6 = uVar6 + 1;
          puVar24 = puVar12;
        } while (bVar32);
        uVar6 = param_1[1];
        iVar15 = param_1[3];
        if (7 < uVar6) {
          uVar6 = (uVar6 + 1 & 0xfffffff8) - (uVar6 + 1 >> 3);
        }
      }
      param_1[2] = uVar6 - iVar15;
      return 0x80000001;
    }
    if (uVar6 < uVar19 + 1) {
      uVar6 = uVar19 + 1;
    }
    if (uVar6 < 0xf) {
      uVar19 = (uVar6 & 8) + 8;
      if (uVar6 < 4) {
        uVar19 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar6) goto LAB_016aefe8;
      iVar3 = (int)((ulonglong)(uVar6 << 3) * 0x24924925 >> 0x20);
      uVar19 = (0xffffffffU >> LZCOUNT((iVar3 + (uVar6 * 8 - iVar3 >> 1) >> 2) - 1)) + 1;
    }
    uVar6 = (uint)((ulonglong)uVar19 * 0xc);
    if ((int)((ulonglong)uVar19 * 0xc >> 0x20) == 0) {
      uVar28 = uVar19 + 4;
      uVar25 = uVar6 + uVar28;
      if ((!CARRY4(uVar6,uVar28)) && (uVar25 < 0x7ffffffd)) {
        iVar3 = thunk_FUN_016d4a50(uVar25);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar25);
        }
        puVar24 = (uint *)(iVar3 + uVar6);
        FUN_016dd606(puVar24,0xff,uVar28);
        uVar25 = uVar19 - 1;
        uVar6 = uVar25;
        if (7 < uVar25) {
          uVar6 = (uVar19 & 0xfffffff8) - (uVar19 >> 3);
        }
        if (iVar15 == 0) {
          iVar15 = 0;
        }
        else {
          uVar28 = param_5 ^ 0x6e646f6d;
          uVar19 = param_6 ^ 0x646f7261;
          uVar20 = uVar28 + (param_3 ^ 0x70736575);
          uVar10 = (uVar28 << 0xd | uVar19 >> 0x13) ^ uVar20;
          uVar21 = uVar19 + (param_4 ^ 0x736f6d65) + (uint)CARRY4(uVar28,param_3 ^ 0x70736575);
          uVar19 = (uVar19 << 0xd | uVar28 >> 0x13) ^ uVar21;
          param_3 = param_3 ^ 0x6e657261;
          puVar31 = (uint *)*param_1;
          iVar18 = 0;
          uVar28 = ~*puVar31 & 0x80808080;
          iVar3 = iVar15;
          puVar12 = puVar31;
          do {
            if (uVar28 == 0) {
              do {
                puVar12 = puVar12 + 1;
                iVar18 = iVar18 + 4;
              } while ((*puVar12 & 0x80808080) == 0x80808080);
              uVar28 = *puVar12 & 0x80808080 ^ 0x80808080;
            }
            uVar16 = param_6 ^ 0x70656462;
            iVar4 = iVar18 + ((uint)LZCOUNT(uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 |
                                            (uVar28 >> 0x10 & 0xff) << 8 | uVar28 >> 0x18) >> 3);
            uVar13 = puVar31[iVar4 * -3 + -3] ^ param_5 ^ 0x79746573;
            uVar9 = ((param_6 ^ 0x74656462) << 0x10 | uVar13 >> 0x10) ^
                    uVar16 + (param_4 ^ 0x6c796765) + (uint)CARRY4(uVar13,param_3);
            uVar5 = (uVar13 << 0x10 | uVar16 >> 0x10) ^ uVar13 + param_3;
            uVar22 = uVar9 + uVar20 + (uint)CARRY4(uVar5,uVar21);
            uVar14 = uVar13 + param_3 + uVar10;
            uVar7 = (uVar9 << 0x15 | uVar5 >> 0xb) ^ uVar22;
            uVar17 = uVar16 + (param_4 ^ 0x6c796765) + uVar19 + (uint)CARRY4(param_3,uVar10) +
                     (uint)CARRY4(uVar13,param_3 + uVar10);
            uVar9 = (uVar5 << 0x15 | uVar9 >> 0xb) ^ uVar5 + uVar21;
            uVar13 = uVar17 ^ 0xff;
            uVar11 = uVar9 + uVar13;
            uVar29 = uVar7 + uVar14 + (uint)CARRY4(uVar9,uVar13);
            uVar13 = (uVar9 << 0x10 | uVar7 >> 0x10) ^ uVar11;
            uVar16 = (uVar7 << 0x10 | uVar9 >> 0x10) ^ uVar29;
            uVar17 = uVar17 ^ (uVar19 << 0x11 | uVar10 >> 0xf);
            uVar5 = uVar5 + uVar21 ^ puVar31[iVar4 * -3 + -3];
            uVar14 = uVar14 ^ (uVar10 << 0x11 | uVar19 >> 0xf);
            uVar26 = uVar5 + uVar14;
            uVar7 = (uVar22 ^ 0x4000000) + uVar17 + (uint)CARRY4(uVar5,uVar14);
            uVar9 = uVar13 + uVar7;
            uVar22 = uVar16 + uVar26 + (uint)CARRY4(uVar13,uVar7);
            uVar5 = (uVar13 << 0x15 | uVar16 >> 0xb) ^ uVar9;
            uVar13 = (uVar16 << 0x15 | uVar13 >> 0xb) ^ uVar22;
            uVar26 = uVar26 ^ (uVar14 << 0xd | uVar17 >> 0x13);
            uVar7 = uVar7 ^ (uVar17 << 0xd | uVar14 >> 0x13);
            uVar5 = uVar7 + uVar29 + (uint)CARRY4(uVar26,uVar11);
            uVar5 = uVar5 + uVar5;
            uVar5 = (uVar5 << 0x10 | uVar13 >> 0x10) ^ uVar5;
            uVar5 = uVar13 + uVar26 + uVar11 + (uint)CARRY4(uVar5,uVar5);
            uVar5 = (uVar13 << 0x10 | uVar5 >> 0x10) ^ uVar5;
            uVar5 = uVar5 ^ (uVar7 << 0x11 | uVar26 >> 0xf);
            uVar5 = uVar26 + uVar11 ^ (uVar26 << 0x11 | uVar7 >> 0xf);
            uVar5 = uVar5 + uVar22 + (uint)CARRY4(uVar5,uVar9);
            uVar5 = uVar5 + uVar5;
            uVar5 = (uVar5 << 0x15 | uVar5 >> 0xb) ^ uVar5;
            uVar5 = uVar5 + uVar5 + uVar9 + (uint)CARRY4(uVar5,uVar5);
            uVar5 = (uVar5 << 0x15 | uVar5 >> 0xb) ^ uVar5;
            uVar5 = (uVar5 << 0xd | uVar5 >> 0x13) ^ uVar5;
            uVar5 = (uVar5 << 0xd | uVar5 >> 0x13) ^ uVar5 + uVar9;
            uVar5 = uVar5 + uVar5 + (uint)CARRY4(uVar5,uVar5);
            uVar5 = uVar5 + uVar5;
            uVar5 = uVar5 + uVar5 + uVar5 + (uint)CARRY4(uVar5,uVar5);
            uVar5 = (uVar5 << 0x11 | uVar5 >> 0xf) ^ uVar5;
            uVar5 = (uVar5 << 0x11 | uVar5 >> 0xf) ^ uVar5 + uVar5;
            uVar5 = (uVar5 << 0xd | uVar5 >> 0x13) ^ uVar5 + uVar5;
            uVar5 = (uVar5 << 0xd | uVar5 >> 0x13) ^ uVar5 + uVar5 + (uint)CARRY4(uVar5,uVar5);
            uVar13 = ((uVar5 >> 0x10 ^ uVar5) << 0x15 |
                     ((uVar5 << 0x10 | uVar5 >> 0x10) ^ uVar5) >> 0xb) ^
                     (uVar5 << 0x11 | uVar5 >> 0xf) ^ uVar5 + uVar5 + (uint)CARRY4(uVar5,uVar5) ^
                     uVar5 + uVar5;
            uVar9 = uVar25 & uVar13;
            uVar5 = *(uint *)((int)puVar24 + uVar9) & 0x80808080;
            if (uVar5 == 0) {
              iVar27 = 4;
              do {
                uVar9 = uVar9 + iVar27;
                iVar27 = iVar27 + 4;
                uVar9 = uVar9 & uVar25;
                uVar5 = *(uint *)((int)puVar24 + uVar9) & 0x80808080;
              } while (uVar5 == 0);
            }
            uVar5 = uVar9 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                           (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                    uVar25;
            if (-1 < *(char *)((int)puVar24 + uVar5)) {
              uVar5 = *puVar24 & 0x80808080;
              uVar5 = (uint)LZCOUNT((*puVar24 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                    (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
            }
            iVar3 = iVar3 + -1;
            uVar28 = uVar28 - 1 & uVar28;
            bVar2 = (byte)(uVar13 >> 0x19);
            *(byte *)((int)puVar24 + uVar5) = bVar2;
            *(byte *)((int)puVar24 + (uVar5 - 4 & uVar25) + 4) = bVar2;
            puVar8 = puVar31 + iVar4 * -3 + -3;
            uVar13 = puVar8[1];
            uVar9 = puVar8[2];
            puVar23 = puVar24 + uVar5 * -3 + -3;
            *puVar23 = *puVar8;
            puVar23[2] = uVar9;
            puVar23[1] = uVar13;
          } while (iVar3 != 0);
        }
        iVar3 = *param_1;
        iVar18 = param_1[1];
        *param_1 = (int)puVar24;
        param_1[1] = uVar25;
        param_1[2] = uVar6 - iVar15;
        param_1[3] = iVar15;
        if (iVar18 == 0) {
          return 0x80000001;
        }
        iVar15 = iVar18 * 0xc + 0xc;
        if (iVar18 + iVar15 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar3 - iVar15);
        return 0x80000001;
      }
    }
  }
LAB_016aefe8:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

