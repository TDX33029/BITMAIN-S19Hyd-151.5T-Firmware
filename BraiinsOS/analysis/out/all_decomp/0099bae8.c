// FUN_0099bae8 @ 0099bae8 size=2860 calls_out=7 calls_in=1
// strings: 

undefined4
FUN_0099bae8(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  bool bVar29;
  
  uVar19 = param_1[3];
  uVar3 = uVar19 + param_2;
  if (!CARRY4(uVar19,param_2)) {
    uVar23 = param_1[1];
    uVar27 = uVar23 + 1;
    uVar6 = uVar23;
    if (7 < uVar23) {
      uVar6 = (uVar27 & 0xfffffff8) - (uVar27 >> 3);
    }
    if (uVar3 <= uVar6 >> 1) {
      if (uVar27 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar27 >> 2;
        if ((uVar27 & 3) != 0) {
          uVar3 = (uVar27 >> 2) + 1;
        }
        puVar24 = (uint *)*param_1;
        iVar4 = 0;
        do {
          puVar24[-iVar4] = (~(puVar24[-iVar4] >> 7) & 0x1010101) + (puVar24[-iVar4] | 0x7f7f7f7f);
          iVar4 = iVar4 + -1;
        } while (-iVar4 != uVar3);
        if (uVar27 < 4) {
          FUN_016dd52c(puVar24 + 1,puVar24,uVar27);
        }
        else {
          *(uint *)((int)puVar24 + uVar27) = *puVar24;
        }
        uVar19 = param_5 ^ 0x6e646f6d;
        uVar3 = param_6 ^ 0x646f7261;
        uVar6 = uVar19 + (param_3 ^ 0x70736575);
        uVar9 = (uVar19 << 0xd | uVar3 >> 0x13) ^ uVar6;
        uVar27 = uVar3 + (param_4 ^ 0x736f6d65) + (uint)CARRY4(uVar19,param_3 ^ 0x70736575);
        uVar19 = (uVar3 << 0xd | uVar19 >> 0x13) ^ uVar27;
        param_3 = param_3 ^ 0x6e657261;
        uVar3 = 0;
        do {
          puVar16 = puVar24;
          if (*(char *)((int)puVar24 + uVar3) == -0x80) {
            puVar20 = puVar24 + (uVar3 + 1) * -5;
            while( true ) {
              uVar17 = (uint)(byte)puVar24[uVar3 * -5 + -5] ^ param_5 ^ 0x79746573;
              uVar10 = param_6 ^ 0x70656462;
              uVar12 = ((param_6 ^ 0x74656462) << 0x10 | (param_5 ^ 0x79746573) >> 0x10) ^
                       uVar10 + (param_4 ^ 0x6c796765) + (uint)CARRY4(uVar17,param_3);
              uVar14 = (uVar17 << 0x10 | uVar10 >> 0x10) ^ uVar17 + param_3;
              uVar8 = uVar12 + uVar6 + (uint)CARRY4(uVar14,uVar27);
              uVar13 = (uVar12 << 0x15 | uVar14 >> 0xb) ^ uVar8;
              uVar5 = uVar17 + param_3 + uVar9;
              uVar12 = (uVar14 << 0x15 | uVar12 >> 0xb) ^ uVar14 + uVar27;
              uVar15 = uVar10 + (param_4 ^ 0x6c796765) + uVar19 + (uint)CARRY4(param_3,uVar9) +
                       (uint)CARRY4(uVar17,param_3 + uVar9);
              uVar17 = uVar15 ^ 0xff;
              uVar21 = uVar12 + uVar17;
              uVar25 = uVar13 + uVar5 + (uint)CARRY4(uVar12,uVar17);
              uVar10 = (uVar13 << 0x10 | uVar12 >> 0x10) ^ uVar25;
              uVar12 = (uVar12 << 0x10 | uVar13 >> 0x10) ^ uVar21;
              uVar13 = uVar14 + uVar27 ^ (uint)(byte)puVar24[uVar3 * -5 + -5];
              uVar15 = uVar15 ^ (uVar19 << 0x11 | uVar9 >> 0xf);
              uVar5 = uVar5 ^ (uVar9 << 0x11 | uVar19 >> 0xf);
              uVar14 = uVar13 + uVar5;
              uVar17 = (uVar8 ^ 0x4000000) + uVar15 + (uint)CARRY4(uVar13,uVar5);
              uVar22 = uVar12 + uVar17;
              uVar18 = uVar10 + uVar14 + (uint)CARRY4(uVar12,uVar17);
              uVar13 = (uVar12 << 0x15 | uVar10 >> 0xb) ^ uVar22;
              uVar12 = (uVar10 << 0x15 | uVar12 >> 0xb) ^ uVar18;
              uVar17 = uVar17 ^ (uVar15 << 0xd | uVar5 >> 0x13);
              uVar14 = uVar14 ^ (uVar5 << 0xd | uVar15 >> 0x13);
              uVar5 = uVar17 + uVar25 + (uint)CARRY4(uVar14,uVar21);
              uVar25 = uVar13 + uVar5;
              uVar10 = uVar5 ^ (uVar17 << 0x11 | uVar14 >> 0xf);
              uVar8 = uVar14 + uVar21 ^ (uVar14 << 0x11 | uVar17 >> 0xf);
              uVar21 = uVar12 + uVar14 + uVar21 + (uint)CARRY4(uVar13,uVar5);
              uVar14 = (uVar13 << 0x10 | uVar12 >> 0x10) ^ uVar25;
              uVar17 = uVar10 + uVar18 + (uint)CARRY4(uVar8,uVar22);
              uVar18 = uVar14 + uVar17;
              uVar12 = (uVar12 << 0x10 | uVar13 >> 0x10) ^ uVar21;
              uVar5 = (uVar10 << 0xd | uVar8 >> 0x13) ^ uVar17;
              uVar15 = uVar12 + uVar8 + uVar22 + (uint)CARRY4(uVar14,uVar17);
              uVar8 = (uVar8 << 0xd | uVar10 >> 0x13) ^ uVar8 + uVar22;
              uVar13 = (uVar14 << 0x15 | uVar12 >> 0xb) ^ uVar18;
              uVar17 = uVar5 + uVar21 + (uint)CARRY4(uVar8,uVar25);
              uVar12 = (uVar12 << 0x15 | uVar14 >> 0xb) ^ uVar15;
              uVar10 = uVar13 + uVar17;
              uVar14 = uVar12 + uVar8 + uVar25 + (uint)CARRY4(uVar13,uVar17);
              uVar17 = (uVar5 << 0x11 | uVar8 >> 0xf) ^ uVar17;
              uVar5 = (uVar8 << 0x11 | uVar5 >> 0xf) ^ uVar8 + uVar25;
              uVar8 = (uVar5 << 0xd | uVar17 >> 0x13) ^ uVar5 + uVar18;
              uVar17 = (uVar17 << 0xd | uVar5 >> 0x13) ^
                       uVar17 + uVar15 + (uint)CARRY4(uVar5,uVar18);
              uVar17 = ((uVar12 >> 0x10 ^ uVar10) << 0x15 |
                       ((uVar12 << 0x10 | uVar13 >> 0x10) ^ uVar14) >> 0xb) ^
                       (uVar8 << 0x11 | uVar17 >> 0xf) ^
                       uVar17 + uVar14 + (uint)CARRY4(uVar8,uVar10) ^ uVar8 + uVar10;
              uVar13 = param_1[1];
              uVar5 = uVar13 & uVar17;
              uVar8 = *(uint *)((int)puVar24 + uVar5) & 0x80808080;
              uVar12 = uVar5;
              if (uVar8 == 0) {
                iVar4 = 4;
                do {
                  uVar12 = uVar12 + iVar4 & uVar13;
                  iVar4 = iVar4 + 4;
                  uVar8 = *(uint *)((int)puVar24 + uVar12) & 0x80808080;
                } while (uVar8 == 0);
              }
              uVar12 = uVar12 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                               (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                       uVar13;
              if (-1 < *(char *)((int)puVar24 + uVar12)) {
                uVar12 = *puVar24 & 0x80808080;
                uVar12 = (uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                       (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar17 >> 0x18);
              if (((uVar12 - uVar5 ^ uVar3 - uVar5) & uVar13) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar24 + uVar3) = bVar2;
                puVar16 = (uint *)*param_1;
                *(byte *)((int)puVar16 + (uVar13 & uVar3 - 4) + 4) = bVar2;
                goto LAB_0099bfe8;
              }
              cVar1 = *(char *)((int)puVar24 + uVar12);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar24 + uVar12) = bVar2;
              puVar16 = (uint *)*param_1;
              *(byte *)((int)puVar16 + (uVar12 - 4 & uVar13) + 4) = bVar2;
              if (cVar1 == -1) break;
              uVar13 = *puVar20;
              *puVar20 = puVar24[uVar12 * -5 + -5];
              puVar24[uVar12 * -5 + -5] = uVar13;
              uVar13 = puVar24[uVar12 * -5 + -4];
              puVar24[uVar12 * -5 + -4] = puVar20[1];
              puVar20[1] = uVar13;
              uVar13 = puVar20[2];
              puVar20[2] = puVar24[uVar12 * -5 + -3];
              puVar24[uVar12 * -5 + -3] = uVar13;
              uVar13 = puVar24[uVar12 * -5 + -2];
              puVar24[uVar12 * -5 + -2] = puVar20[3];
              puVar20[3] = uVar13;
              uVar13 = puVar24[uVar12 * -5 + -1];
              puVar24[uVar12 * -5 + -1] = puVar20[4];
              puVar20[4] = uVar13;
              puVar24 = (uint *)*param_1;
            }
            uVar13 = param_1[1];
            *(undefined1 *)((int)puVar16 + uVar3) = 0xff;
            *(undefined1 *)((int)puVar16 + (uVar13 & uVar3 - 4) + 4) = 0xff;
            FUN_016dd1aa(puVar24 + uVar12 * -5 + -5,puVar20,0x14);
          }
LAB_0099bfe8:
          bVar29 = uVar3 != uVar23;
          uVar3 = uVar3 + 1;
          puVar24 = puVar16;
        } while (bVar29);
        uVar3 = param_1[1];
        uVar19 = param_1[3];
        if (7 < uVar3) {
          uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
        }
      }
      param_1[2] = uVar3 - uVar19;
      return 0x80000001;
    }
    if (uVar3 < uVar6 + 1) {
      uVar3 = uVar6 + 1;
    }
    if (uVar3 < 0xf) {
      uVar6 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar6 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_0099c554;
      iVar4 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      uVar6 = (0xffffffffU >> LZCOUNT((iVar4 + (uVar3 * 8 - iVar4 >> 1) >> 2) - 1)) + 1;
    }
    uVar3 = (uint)((ulonglong)uVar6 * 0x14);
    if ((int)((ulonglong)uVar6 * 0x14 >> 0x20) == 0) {
      uVar23 = uVar6 + 4;
      uVar27 = uVar3 + uVar23;
      if ((!CARRY4(uVar3,uVar23)) && (uVar27 < 0x7ffffffd)) {
        iVar4 = thunk_FUN_016d4a50(uVar27);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar27);
        }
        puVar24 = (uint *)(iVar4 + uVar3);
        FUN_016dd606(puVar24,0xff,uVar23);
        uVar23 = uVar6 - 1;
        uVar3 = uVar23;
        if (7 < uVar23) {
          uVar3 = (uVar6 & 0xfffffff8) - (uVar6 >> 3);
        }
        if (uVar19 == 0) {
          uVar19 = 0;
        }
        else {
          uVar27 = param_5 ^ 0x6e646f6d;
          uVar6 = param_6 ^ 0x646f7261;
          uVar12 = uVar27 + (param_3 ^ 0x70736575);
          uVar9 = (uVar27 << 0xd | uVar6 >> 0x13) ^ uVar12;
          uVar13 = uVar6 + (param_4 ^ 0x736f6d65) + (uint)CARRY4(uVar27,param_3 ^ 0x70736575);
          uVar27 = (uVar6 << 0xd | uVar27 >> 0x13) ^ uVar13;
          param_3 = param_3 ^ 0x6e657261;
          puVar20 = (uint *)*param_1;
          iVar4 = 0;
          uVar17 = ~*puVar20 & 0x80808080;
          puVar16 = puVar20;
          uVar6 = uVar19;
          do {
            if (uVar17 == 0) {
              do {
                puVar16 = puVar16 + 1;
                iVar4 = iVar4 + 4;
              } while ((*puVar16 & 0x80808080) == 0x80808080);
              uVar17 = *puVar16 & 0x80808080 ^ 0x80808080;
            }
            iVar7 = iVar4 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                           (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3);
            uVar18 = param_6 ^ 0x70656462;
            uVar21 = (uint)(byte)puVar20[iVar7 * -5 + -5] ^ param_5 ^ 0x79746573;
            uVar14 = (uVar21 << 0x10 | uVar18 >> 0x10) ^ uVar21 + param_3;
            uVar8 = ((param_6 ^ 0x74656462) << 0x10 | (param_5 ^ 0x79746573) >> 0x10) ^
                    uVar18 + (param_4 ^ 0x6c796765) + (uint)CARRY4(uVar21,param_3);
            uVar5 = uVar8 + uVar12 + (uint)CARRY4(uVar14,uVar13);
            uVar15 = (uVar8 << 0x15 | uVar14 >> 0xb) ^ uVar5;
            uVar8 = (uVar14 << 0x15 | uVar8 >> 0xb) ^ uVar14 + uVar13;
            uVar28 = uVar14 + uVar13 ^ (uint)(byte)puVar20[iVar7 * -5 + -5];
            uVar10 = uVar21 + param_3 + uVar9;
            uVar21 = uVar18 + (param_4 ^ 0x6c796765) + uVar27 + (uint)CARRY4(param_3,uVar9) +
                     (uint)CARRY4(uVar21,param_3 + uVar9);
            uVar14 = uVar21 ^ 0xff;
            uVar22 = uVar8 + uVar14;
            uVar26 = uVar15 + uVar10 + (uint)CARRY4(uVar8,uVar14);
            uVar21 = uVar21 ^ (uVar27 << 0x11 | uVar9 >> 0xf);
            uVar25 = (uVar15 << 0x10 | uVar8 >> 0x10) ^ uVar26;
            uVar10 = uVar10 ^ (uVar9 << 0x11 | uVar27 >> 0xf);
            uVar14 = (uVar8 << 0x10 | uVar15 >> 0x10) ^ uVar22;
            uVar15 = uVar28 + uVar10;
            uVar18 = (uVar5 ^ 0x4000000) + uVar21 + (uint)CARRY4(uVar28,uVar10);
            uVar5 = uVar14 + uVar18;
            uVar28 = uVar25 + uVar15 + (uint)CARRY4(uVar14,uVar18);
            uVar8 = (uVar14 << 0x15 | uVar25 >> 0xb) ^ uVar5;
            uVar14 = (uVar25 << 0x15 | uVar14 >> 0xb) ^ uVar28;
            uVar15 = uVar15 ^ (uVar10 << 0xd | uVar21 >> 0x13);
            uVar18 = uVar18 ^ (uVar21 << 0xd | uVar10 >> 0x13);
            uVar8 = uVar18 + uVar26 + (uint)CARRY4(uVar15,uVar22);
            uVar8 = uVar8 + uVar8;
            uVar5 = uVar14 + uVar15 + uVar22 + (uint)CARRY4(uVar8,uVar8);
            uVar8 = (uVar8 << 0x10 | uVar14 >> 0x10) ^ uVar8;
            uVar5 = (uVar14 << 0x10 | uVar8 >> 0x10) ^ uVar5;
            uVar8 = uVar8 ^ (uVar18 << 0x11 | uVar15 >> 0xf);
            uVar5 = uVar15 + uVar22 ^ (uVar15 << 0x11 | uVar18 >> 0xf);
            uVar8 = uVar8 + uVar28 + (uint)CARRY4(uVar5,uVar5);
            uVar8 = uVar8 + uVar8;
            uVar5 = uVar5 + uVar5 + uVar5 + (uint)CARRY4(uVar8,uVar8);
            uVar8 = (uVar8 << 0x15 | uVar5 >> 0xb) ^ uVar8;
            uVar5 = (uVar5 << 0x15 | uVar8 >> 0xb) ^ uVar5;
            uVar8 = (uVar8 << 0xd | uVar5 >> 0x13) ^ uVar8;
            uVar5 = (uVar5 << 0xd | uVar8 >> 0x13) ^ uVar5 + uVar5;
            uVar8 = uVar8 + uVar5 + (uint)CARRY4(uVar5,uVar8);
            uVar8 = uVar8 + uVar8;
            uVar5 = uVar5 + uVar5 + uVar8 + (uint)CARRY4(uVar8,uVar8);
            uVar8 = (uVar8 << 0x11 | uVar5 >> 0xf) ^ uVar8;
            uVar5 = (uVar5 << 0x11 | uVar8 >> 0xf) ^ uVar5 + uVar8;
            uVar5 = (uVar5 << 0xd | uVar8 >> 0x13) ^ uVar5 + uVar8;
            uVar5 = (uVar8 << 0xd | uVar5 >> 0x13) ^ uVar8 + uVar5 + (uint)CARRY4(uVar5,uVar8);
            uVar5 = ((uVar5 >> 0x10 ^ uVar8) << 0x15 |
                    ((uVar5 << 0x10 | uVar8 >> 0x10) ^ uVar5) >> 0xb) ^
                    (uVar5 << 0x11 | uVar5 >> 0xf) ^ uVar5 + uVar5 + (uint)CARRY4(uVar5,uVar8) ^
                    uVar5 + uVar8;
            uVar14 = uVar23 & uVar5;
            uVar8 = *(uint *)((int)puVar24 + uVar14) & 0x80808080;
            if (uVar8 == 0) {
              iVar11 = 4;
              do {
                uVar14 = uVar14 + iVar11;
                iVar11 = iVar11 + 4;
                uVar14 = uVar14 & uVar23;
                uVar8 = *(uint *)((int)puVar24 + uVar14) & 0x80808080;
              } while (uVar8 == 0);
            }
            uVar8 = uVar14 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                            (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                    uVar23;
            if (-1 < *(char *)((int)puVar24 + uVar8)) {
              uVar8 = *puVar24 & 0x80808080;
              uVar8 = (uint)LZCOUNT((*puVar24 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                    (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
            }
            uVar17 = uVar17 - 1 & uVar17;
            bVar2 = (byte)(uVar5 >> 0x19);
            *(byte *)((int)puVar24 + uVar8) = bVar2;
            uVar6 = uVar6 - 1;
            *(byte *)((int)puVar24 + (uVar8 - 4 & uVar23) + 4) = bVar2;
            FUN_016dd1aa(puVar24 + uVar8 * -5 + -5,puVar20 + iVar7 * -5 + -5,0x14);
          } while (uVar6 != 0);
        }
        iVar4 = *param_1;
        iVar7 = param_1[1];
        *param_1 = (int)puVar24;
        param_1[1] = uVar23;
        param_1[2] = uVar3 - uVar19;
        param_1[3] = uVar19;
        if (iVar7 == 0) {
          return 0x80000001;
        }
        iVar11 = iVar7 * 0x14 + 0x14;
        if (iVar7 + iVar11 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar4 - iVar11);
        return 0x80000001;
      }
    }
  }
LAB_0099c554:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

