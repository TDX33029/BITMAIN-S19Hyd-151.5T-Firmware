// FUN_01137544 @ 01137544 size=2908 calls_out=7 calls_in=1
// strings: 

undefined4
FUN_01137544(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  int iVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  bool bVar30;
  
  iVar18 = param_1[3];
  uVar3 = iVar18 + 1;
  if (iVar18 != -1) {
    uVar15 = param_1[1];
    uVar26 = uVar15 + 1;
    uVar5 = uVar15;
    if (7 < uVar15) {
      uVar5 = (uVar26 & 0xfffffff8) - (uVar26 >> 3);
    }
    if (uVar3 <= uVar5 >> 1) {
      if (uVar26 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar26 >> 2;
        if ((uVar26 & 3) != 0) {
          uVar3 = (uVar26 >> 2) + 1;
        }
        puVar24 = (uint *)*param_1;
        iVar18 = 0;
        do {
          puVar24[-iVar18] =
               (~(puVar24[-iVar18] >> 7) & 0x1010101) + (puVar24[-iVar18] | 0x7f7f7f7f);
          iVar18 = iVar18 + -1;
        } while (-iVar18 != uVar3);
        if (uVar26 < 4) {
          FUN_016dd52c(puVar24 + 1,puVar24,uVar26);
        }
        else {
          *(uint *)((int)puVar24 + uVar26) = *puVar24;
        }
        uVar5 = param_5 ^ 0x6e646f6d;
        uVar3 = param_6 ^ 0x646f7261;
        uVar26 = uVar5 + (param_3 ^ 0x70736575);
        uVar11 = (uVar5 << 0xd | uVar3 >> 0x13) ^ uVar26;
        uVar8 = uVar3 + (param_4 ^ 0x736f6d65) + (uint)CARRY4(uVar5,param_3 ^ 0x70736575);
        uVar5 = (uVar3 << 0xd | uVar5 >> 0x13) ^ uVar8;
        param_3 = param_3 ^ 0x6e657261;
        uVar3 = 0;
        do {
          puVar19 = puVar24;
          if (*(char *)((int)puVar24 + uVar3) == -0x80) {
            puVar22 = puVar24 + (uVar3 + 1) * -10;
            while( true ) {
              uVar21 = param_6 ^ 0x70656462;
              uVar7 = puVar24[uVar3 * -10 + -10] ^ param_5 ^ 0x79746573;
              uVar12 = ((param_6 ^ 0x74656462) << 0x10 | uVar7 >> 0x10) ^
                       uVar21 + (param_4 ^ 0x6c796765) + (uint)CARRY4(uVar7,param_3);
              uVar16 = (uVar7 << 0x10 | uVar21 >> 0x10) ^ uVar7 + param_3;
              uVar10 = uVar12 + uVar26 + (uint)CARRY4(uVar16,uVar8);
              uVar9 = (uVar12 << 0x15 | uVar16 >> 0xb) ^ uVar10;
              uVar13 = uVar7 + param_3 + uVar11;
              uVar12 = (uVar16 << 0x15 | uVar12 >> 0xb) ^ uVar16 + uVar8;
              uVar17 = uVar21 + (param_4 ^ 0x6c796765) + uVar5 + (uint)CARRY4(param_3,uVar11) +
                       (uint)CARRY4(uVar7,param_3 + uVar11);
              uVar7 = uVar17 ^ 0xff;
              uVar25 = uVar12 + uVar7;
              uVar29 = uVar9 + uVar13 + (uint)CARRY4(uVar12,uVar7);
              uVar14 = (uVar9 << 0x10 | uVar12 >> 0x10) ^ uVar29;
              uVar12 = (uVar12 << 0x10 | uVar9 >> 0x10) ^ uVar25;
              uVar9 = uVar16 + uVar8 ^ puVar24[uVar3 * -10 + -10];
              uVar17 = uVar17 ^ (uVar5 << 0x11 | uVar11 >> 0xf);
              uVar13 = uVar13 ^ (uVar11 << 0x11 | uVar5 >> 0xf);
              uVar21 = uVar9 + uVar13;
              uVar7 = (uVar10 ^ 0x4000000) + uVar17 + (uint)CARRY4(uVar9,uVar13);
              uVar27 = uVar12 + uVar7;
              uVar20 = uVar14 + uVar21 + (uint)CARRY4(uVar12,uVar7);
              uVar9 = (uVar12 << 0x15 | uVar14 >> 0xb) ^ uVar27;
              uVar12 = (uVar14 << 0x15 | uVar12 >> 0xb) ^ uVar20;
              uVar7 = uVar7 ^ (uVar17 << 0xd | uVar13 >> 0x13);
              uVar21 = uVar21 ^ (uVar13 << 0xd | uVar17 >> 0x13);
              uVar13 = uVar7 + uVar29 + (uint)CARRY4(uVar21,uVar25);
              uVar29 = uVar9 + uVar13;
              uVar14 = uVar13 ^ (uVar7 << 0x11 | uVar21 >> 0xf);
              uVar10 = uVar21 + uVar25 ^ (uVar21 << 0x11 | uVar7 >> 0xf);
              uVar16 = (uVar9 << 0x10 | uVar12 >> 0x10) ^ uVar29;
              uVar17 = uVar12 + uVar21 + uVar25 + (uint)CARRY4(uVar9,uVar13);
              uVar7 = uVar14 + uVar20 + (uint)CARRY4(uVar10,uVar27);
              uVar20 = uVar16 + uVar7;
              uVar12 = (uVar12 << 0x10 | uVar9 >> 0x10) ^ uVar17;
              uVar13 = (uVar14 << 0xd | uVar10 >> 0x13) ^ uVar7;
              uVar21 = uVar12 + uVar10 + uVar27 + (uint)CARRY4(uVar16,uVar7);
              uVar10 = (uVar10 << 0xd | uVar14 >> 0x13) ^ uVar10 + uVar27;
              uVar9 = (uVar16 << 0x15 | uVar12 >> 0xb) ^ uVar20;
              uVar7 = uVar13 + uVar17 + (uint)CARRY4(uVar10,uVar29);
              uVar12 = (uVar12 << 0x15 | uVar16 >> 0xb) ^ uVar21;
              uVar14 = uVar9 + uVar7;
              uVar16 = uVar12 + uVar10 + uVar29 + (uint)CARRY4(uVar9,uVar7);
              uVar7 = (uVar13 << 0x11 | uVar10 >> 0xf) ^ uVar7;
              uVar13 = (uVar10 << 0x11 | uVar13 >> 0xf) ^ uVar10 + uVar29;
              uVar10 = (uVar13 << 0xd | uVar7 >> 0x13) ^ uVar13 + uVar20;
              uVar7 = (uVar7 << 0xd | uVar13 >> 0x13) ^ uVar7 + uVar21 + (uint)CARRY4(uVar13,uVar20)
              ;
              uVar7 = ((uVar12 >> 0x10 ^ uVar14) << 0x15 |
                      ((uVar12 << 0x10 | uVar9 >> 0x10) ^ uVar16) >> 0xb) ^
                      (uVar10 << 0x11 | uVar7 >> 0xf) ^ uVar7 + uVar16 + (uint)CARRY4(uVar10,uVar14)
                      ^ uVar10 + uVar14;
              uVar9 = param_1[1];
              uVar13 = uVar9 & uVar7;
              uVar10 = *(uint *)((int)puVar24 + uVar13) & 0x80808080;
              uVar12 = uVar13;
              if (uVar10 == 0) {
                iVar18 = 4;
                do {
                  uVar12 = uVar12 + iVar18 & uVar9;
                  iVar18 = iVar18 + 4;
                  uVar10 = *(uint *)((int)puVar24 + uVar12) & 0x80808080;
                } while (uVar10 == 0);
              }
              uVar12 = uVar12 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                               (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3)
                       & uVar9;
              if (-1 < *(char *)((int)puVar24 + uVar12)) {
                uVar12 = *puVar24 & 0x80808080;
                uVar12 = (uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                       (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar7 >> 0x18);
              if (((uVar12 - uVar13 ^ uVar3 - uVar13) & uVar9) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar24 + uVar3) = bVar2;
                puVar19 = (uint *)*param_1;
                *(byte *)((int)puVar19 + (uVar9 & uVar3 - 4) + 4) = bVar2;
                goto LAB_01137a88;
              }
              cVar1 = *(char *)((int)puVar24 + uVar12);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar24 + uVar12) = bVar2;
              puVar19 = (uint *)*param_1;
              *(byte *)((int)puVar19 + (uVar12 - 4 & uVar9) + 4) = bVar2;
              if (cVar1 == -1) break;
              uVar9 = puVar24[uVar12 * -10 + -10];
              puVar24[uVar12 * -10 + -10] = *puVar22;
              *puVar22 = uVar9;
              uVar9 = puVar22[1];
              puVar22[1] = puVar24[uVar12 * -10 + -9];
              puVar24[uVar12 * -10 + -9] = uVar9;
              uVar9 = puVar24[uVar12 * -10 + -8];
              puVar24[uVar12 * -10 + -8] = puVar22[2];
              puVar22[2] = uVar9;
              uVar9 = puVar22[3];
              puVar22[3] = puVar24[uVar12 * -10 + -7];
              puVar24[uVar12 * -10 + -7] = uVar9;
              uVar9 = puVar24[uVar12 * -10 + -6];
              puVar24[uVar12 * -10 + -6] = puVar22[4];
              puVar22[4] = uVar9;
              uVar9 = puVar22[5];
              puVar22[5] = puVar24[uVar12 * -10 + -5];
              puVar24[uVar12 * -10 + -5] = uVar9;
              uVar9 = puVar24[uVar12 * -10 + -4];
              puVar24[uVar12 * -10 + -4] = puVar22[6];
              puVar22[6] = uVar9;
              uVar9 = puVar22[7];
              puVar22[7] = puVar24[uVar12 * -10 + -3];
              puVar24[uVar12 * -10 + -3] = uVar9;
              uVar9 = puVar24[uVar12 * -10 + -2];
              puVar24[uVar12 * -10 + -2] = puVar22[8];
              puVar22[8] = uVar9;
              uVar9 = puVar22[9];
              puVar22[9] = puVar24[uVar12 * -10 + -1];
              puVar24[uVar12 * -10 + -1] = uVar9;
              puVar24 = (uint *)*param_1;
            }
            uVar9 = param_1[1];
            *(undefined1 *)((int)puVar19 + uVar3) = 0xff;
            *(undefined1 *)((int)puVar19 + (uVar9 & uVar3 - 4) + 4) = 0xff;
            FUN_016dd1aa(puVar24 + uVar12 * -10 + -10,puVar22,0x28);
          }
LAB_01137a88:
          bVar30 = uVar3 != uVar15;
          uVar3 = uVar3 + 1;
          puVar24 = puVar19;
        } while (bVar30);
        uVar3 = param_1[1];
        iVar18 = param_1[3];
        if (7 < uVar3) {
          uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
        }
      }
      param_1[2] = uVar3 - iVar18;
      return 0x80000001;
    }
    if (uVar3 < uVar5 + 1) {
      uVar3 = uVar5 + 1;
    }
    if (uVar3 < 0xf) {
      uVar5 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar5 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_01137fe4;
      iVar4 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      uVar5 = (0xffffffffU >> LZCOUNT((iVar4 + (uVar3 * 8 - iVar4 >> 1) >> 2) - 1)) + 1;
    }
    uVar3 = (uint)((ulonglong)uVar5 * 0x28);
    if ((int)((ulonglong)uVar5 * 0x28 >> 0x20) == 0) {
      uVar15 = uVar5 + 4;
      uVar26 = uVar3 + uVar15;
      if ((!CARRY4(uVar3,uVar15)) && (uVar26 < 0x7ffffff9)) {
        iVar4 = thunk_FUN_016d4a50(uVar26);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,uVar26);
        }
        puVar24 = (uint *)(iVar4 + uVar3);
        FUN_016dd606(puVar24,0xff,uVar15);
        uVar15 = uVar5 - 1;
        uVar3 = uVar15;
        if (7 < uVar15) {
          uVar3 = (uVar5 & 0xfffffff8) - (uVar5 >> 3);
        }
        if (iVar18 == 0) {
          iVar18 = 0;
        }
        else {
          uVar26 = param_5 ^ 0x6e646f6d;
          uVar5 = param_6 ^ 0x646f7261;
          uVar11 = uVar26 + (param_3 ^ 0x70736575);
          uVar8 = (uVar26 << 0xd | uVar5 >> 0x13) ^ uVar11;
          uVar12 = uVar5 + (param_4 ^ 0x736f6d65) + (uint)CARRY4(uVar26,param_3 ^ 0x70736575);
          uVar5 = (uVar5 << 0xd | uVar26 >> 0x13) ^ uVar12;
          param_3 = param_3 ^ 0x6e657261;
          puVar22 = (uint *)*param_1;
          iVar23 = 0;
          uVar26 = ~*puVar22 & 0x80808080;
          iVar4 = iVar18;
          puVar19 = puVar22;
          do {
            if (uVar26 == 0) {
              do {
                puVar19 = puVar19 + 1;
                iVar23 = iVar23 + 4;
              } while ((*puVar19 & 0x80808080) == 0x80808080);
              uVar26 = *puVar19 & 0x80808080 ^ 0x80808080;
            }
            iVar6 = iVar23 + ((uint)LZCOUNT(uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 |
                                            (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18) >> 3);
            uVar13 = param_6 ^ 0x70656462;
            uVar9 = puVar22[iVar6 * -10 + -10] ^ param_5 ^ 0x79746573;
            uVar7 = ((param_6 ^ 0x74656462) << 0x10 | uVar9 >> 0x10) ^
                    uVar13 + (param_4 ^ 0x6c796765) + (uint)CARRY4(uVar9,param_3);
            uVar16 = (uVar9 << 0x10 | uVar13 >> 0x10) ^ uVar9 + param_3;
            uVar20 = uVar7 + uVar11 + (uint)CARRY4(uVar16,uVar12);
            uVar10 = uVar9 + param_3 + uVar8;
            uVar14 = uVar13 + (param_4 ^ 0x6c796765) + uVar5 + (uint)CARRY4(param_3,uVar8) +
                     (uint)CARRY4(uVar9,param_3 + uVar8);
            uVar9 = (uVar7 << 0x15 | uVar16 >> 0xb) ^ uVar20;
            uVar7 = (uVar16 << 0x15 | uVar7 >> 0xb) ^ uVar16 + uVar12;
            uVar13 = uVar14 ^ 0xff;
            uVar27 = uVar7 + uVar13;
            uVar25 = uVar9 + uVar10 + (uint)CARRY4(uVar7,uVar13);
            uVar17 = (uVar9 << 0x10 | uVar7 >> 0x10) ^ uVar25;
            uVar13 = (uVar7 << 0x10 | uVar9 >> 0x10) ^ uVar27;
            uVar14 = uVar14 ^ (uVar5 << 0x11 | uVar8 >> 0xf);
            uVar9 = uVar16 + uVar12 ^ puVar22[iVar6 * -10 + -10];
            uVar10 = uVar10 ^ (uVar8 << 0x11 | uVar5 >> 0xf);
            uVar21 = uVar9 + uVar10;
            uVar9 = (uVar20 ^ 0x4000000) + uVar14 + (uint)CARRY4(uVar9,uVar10);
            uVar7 = uVar13 + uVar9;
            uVar16 = uVar17 + uVar21 + (uint)CARRY4(uVar13,uVar9);
            uVar20 = (uVar17 << 0x15 | uVar13 >> 0xb) ^ uVar16;
            uVar9 = uVar9 ^ (uVar14 << 0xd | uVar10 >> 0x13);
            uVar21 = uVar21 ^ (uVar10 << 0xd | uVar14 >> 0x13);
            uVar7 = (uVar13 << 0x15 | uVar17 >> 0xb) ^ uVar7;
            uVar7 = uVar9 + uVar25 + (uint)CARRY4(uVar21,uVar27);
            uVar7 = uVar7 + uVar7;
            uVar7 = (uVar7 << 0x10 | uVar20 >> 0x10) ^ uVar7;
            uVar9 = uVar20 + uVar21 + uVar27 + (uint)CARRY4(uVar7,uVar7);
            uVar9 = (uVar20 << 0x10 | uVar7 >> 0x10) ^ uVar9;
            uVar7 = uVar7 ^ (uVar9 << 0x11 | uVar21 >> 0xf);
            uVar9 = uVar21 + uVar27 ^ (uVar21 << 0x11 | uVar9 >> 0xf);
            uVar7 = uVar7 + uVar16 + (uint)CARRY4(uVar9,uVar7);
            uVar7 = uVar7 + uVar7;
            uVar7 = (uVar7 << 0x15 | uVar9 >> 0xb) ^ uVar7;
            uVar9 = uVar9 + uVar9 + uVar7 + (uint)CARRY4(uVar7,uVar7);
            uVar9 = (uVar9 << 0x15 | uVar7 >> 0xb) ^ uVar9;
            uVar7 = (uVar7 << 0xd | uVar9 >> 0x13) ^ uVar7;
            uVar9 = (uVar9 << 0xd | uVar7 >> 0x13) ^ uVar9 + uVar7;
            uVar7 = uVar7 + uVar9 + (uint)CARRY4(uVar9,uVar7);
            uVar7 = uVar7 + uVar7;
            uVar9 = uVar9 + uVar9 + uVar7 + (uint)CARRY4(uVar7,uVar7);
            uVar7 = (uVar7 << 0x11 | uVar9 >> 0xf) ^ uVar7;
            uVar9 = (uVar9 << 0x11 | uVar7 >> 0xf) ^ uVar9 + uVar7;
            uVar9 = (uVar9 << 0xd | uVar7 >> 0x13) ^ uVar9 + uVar7;
            uVar9 = (uVar7 << 0xd | uVar9 >> 0x13) ^ uVar7 + uVar9 + (uint)CARRY4(uVar9,uVar7);
            uVar9 = ((uVar9 >> 0x10 ^ uVar7) << 0x15 |
                    ((uVar9 << 0x10 | uVar7 >> 0x10) ^ uVar9) >> 0xb) ^
                    (uVar9 << 0x11 | uVar9 >> 0xf) ^ uVar9 + uVar9 + (uint)CARRY4(uVar9,uVar7) ^
                    uVar9 + uVar7;
            uVar7 = uVar15 & uVar9;
            uVar13 = *(uint *)((int)puVar24 + uVar7) & 0x80808080;
            if (uVar13 == 0) {
              iVar28 = 4;
              do {
                uVar7 = uVar7 + iVar28;
                iVar28 = iVar28 + 4;
                uVar7 = uVar7 & uVar15;
                uVar13 = *(uint *)((int)puVar24 + uVar7) & 0x80808080;
              } while (uVar13 == 0);
            }
            uVar7 = uVar7 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                           (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                    uVar15;
            if (-1 < *(char *)((int)puVar24 + uVar7)) {
              uVar7 = *puVar24 & 0x80808080;
              uVar7 = (uint)LZCOUNT((*puVar24 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                    (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
            }
            iVar4 = iVar4 + -1;
            bVar2 = (byte)(uVar9 >> 0x19);
            *(byte *)((int)puVar24 + uVar7) = bVar2;
            uVar26 = uVar26 - 1 & uVar26;
            *(byte *)((int)puVar24 + (uVar7 - 4 & uVar15) + 4) = bVar2;
            FUN_016dd1aa(puVar24 + uVar7 * -10 + -10,puVar22 + iVar6 * -10 + -10,0x28);
          } while (iVar4 != 0);
        }
        iVar4 = *param_1;
        iVar23 = param_1[1];
        *param_1 = (int)puVar24;
        param_1[1] = uVar15;
        param_1[2] = uVar3 - iVar18;
        param_1[3] = iVar18;
        if (iVar23 == 0) {
          return 0x80000001;
        }
        iVar18 = iVar23 * 0x28 + 0x28;
        if (iVar23 + iVar18 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar4 - iVar18);
        return 0x80000001;
      }
    }
  }
LAB_01137fe4:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

