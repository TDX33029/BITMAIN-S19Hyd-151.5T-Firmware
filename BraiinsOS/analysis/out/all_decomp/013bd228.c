// FUN_013bd228 @ 013bd228 size=1484 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_013bd228(int *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  
  iVar21 = param_1[3];
  uVar3 = iVar21 + 1;
  if (iVar21 != -1) {
    uVar23 = param_1[1];
    uVar11 = uVar23 + 1;
    uVar14 = uVar23;
    if (7 < uVar23) {
      uVar14 = (uVar11 & 0xfffffff8) - (uVar11 >> 3);
    }
    if (uVar3 <= uVar14 >> 1) {
      if (uVar11 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar11 >> 2;
        puVar19 = (uint *)*param_1;
        if ((uVar11 & 3) != 0) {
          uVar3 = (uVar11 >> 2) + 1;
        }
        iVar21 = 0;
        do {
          puVar19[-iVar21] =
               (~(puVar19[-iVar21] >> 7) & 0x1010101) + (puVar19[-iVar21] | 0x7f7f7f7f);
          iVar21 = iVar21 + -1;
        } while (-iVar21 != uVar3);
        if (uVar11 < 4) {
          FUN_016dd52c(puVar19 + 1,puVar19);
        }
        else {
          *(uint *)((int)puVar19 + uVar11) = *puVar19;
        }
        uVar5 = *param_2;
        uVar8 = param_2[3];
        uVar6 = param_2[1];
        uVar7 = param_2[2];
        uVar3 = 0;
        do {
          if (*(char *)((int)puVar19 + uVar3) == -0x80) {
            puVar9 = puVar19 + (uVar3 + 1) * -3;
            puVar18 = puVar19;
            while( true ) {
              uVar11 = FUN_013c3b20(uVar5,uVar6,uVar7,uVar8,puVar18[uVar3 * -3 + -3],
                                    puVar18[uVar3 * -3 + -2]);
              uVar10 = param_1[1];
              uVar15 = uVar10 & uVar11;
              uVar16 = *(uint *)((int)puVar18 + uVar15) & 0x80808080;
              uVar14 = uVar15;
              if (uVar16 == 0) {
                iVar21 = 4;
                do {
                  uVar14 = uVar14 + iVar21 & uVar10;
                  iVar21 = iVar21 + 4;
                  uVar16 = *(uint *)((int)puVar18 + uVar14) & 0x80808080;
                } while (uVar16 == 0);
              }
              uVar14 = uVar14 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                               (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3)
                       & uVar10;
              if (-1 < *(char *)((int)puVar18 + uVar14)) {
                uVar14 = *puVar18 & 0x80808080;
                uVar14 = (uint)LZCOUNT((*puVar18 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                       (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar11 >> 0x18);
              if (((uVar14 - uVar15 ^ uVar3 - uVar15) & uVar10) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar18 + uVar3) = bVar2;
                puVar19 = (uint *)*param_1;
                *(byte *)((int)puVar19 + (uVar10 & uVar3 - 4) + 4) = bVar2;
                goto LAB_013bd47c;
              }
              cVar1 = *(char *)((int)puVar18 + uVar14);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar18 + uVar14) = bVar2;
              puVar19 = (uint *)*param_1;
              *(byte *)((int)puVar19 + (uVar14 - 4 & uVar10) + 4) = bVar2;
              if (cVar1 == -1) break;
              uVar11 = *puVar9;
              *puVar9 = puVar18[uVar14 * -3 + -3];
              puVar18[uVar14 * -3 + -3] = uVar11;
              uVar11 = puVar18[uVar14 * -3 + -2];
              puVar18[uVar14 * -3 + -2] = puVar9[1];
              puVar9[1] = uVar11;
              uVar11 = puVar9[2];
              puVar9[2] = puVar18[uVar14 * -3 + -1];
              puVar18[uVar14 * -3 + -1] = uVar11;
              puVar18 = (uint *)*param_1;
            }
            uVar11 = param_1[1];
            *(undefined1 *)((int)puVar19 + uVar3) = 0xff;
            *(undefined1 *)((int)puVar19 + (uVar11 & uVar3 - 4) + 4) = 0xff;
            uVar11 = *puVar9;
            uVar10 = puVar9[1];
            puVar18[uVar14 * -3 + -1] = puVar9[2];
            puVar18[uVar14 * -3 + -2] = uVar10;
            puVar18[uVar14 * -3 + -3] = uVar11;
          }
LAB_013bd47c:
          bVar24 = uVar3 != uVar23;
          uVar3 = uVar3 + 1;
        } while (bVar24);
        uVar3 = param_1[1];
        if (7 < uVar3) {
          uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
        }
      }
      param_1[2] = uVar3 - param_1[3];
      return 0x80000001;
    }
    if (uVar3 < uVar14 + 1) {
      uVar3 = uVar14 + 1;
    }
    if (uVar3 < 0xf) {
      uVar14 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar14 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_013bd734;
      iVar4 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      uVar14 = (0xffffffffU >> LZCOUNT((iVar4 + (uVar3 * 8 - iVar4 >> 1) >> 2) - 1)) + 1;
    }
    uVar3 = (uint)((ulonglong)uVar14 * 0xc);
    if ((int)((ulonglong)uVar14 * 0xc >> 0x20) == 0) {
      uVar23 = uVar14 + 4;
      uVar11 = uVar3 + uVar23;
      if ((!CARRY4(uVar3,uVar23)) && (uVar11 < 0x7ffffffd)) {
        iVar4 = thunk_FUN_016d4a50(uVar11);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar11);
        }
        puVar19 = (uint *)(iVar4 + uVar3);
        FUN_016dd606(puVar19,0xff,uVar23);
        uVar11 = uVar14 - 1;
        uVar3 = uVar11;
        if (7 < uVar11) {
          uVar3 = (uVar14 & 0xfffffff8) - (uVar14 >> 3);
        }
        if (iVar21 == 0) {
          iVar21 = 0;
        }
        else {
          iVar17 = 0;
          puVar9 = (uint *)*param_1;
          uVar14 = ~*puVar9 & 0x80808080;
          uVar5 = *param_2;
          uVar6 = param_2[1];
          uVar7 = param_2[2];
          uVar8 = param_2[3];
          puVar18 = puVar9;
          iVar4 = iVar21;
          do {
            if (uVar14 == 0) {
              do {
                puVar18 = puVar18 + 1;
                iVar17 = iVar17 + 4;
              } while ((*puVar18 & 0x80808080) == 0x80808080);
              uVar14 = *puVar18 & 0x80808080 ^ 0x80808080;
            }
            iVar22 = iVar17 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                             (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3);
            uVar23 = FUN_013c3b20(uVar5,uVar6,uVar7,uVar8,puVar9[iVar22 * -3 + -3],
                                  puVar9[iVar22 * -3 + -2]);
            uVar10 = uVar11 & uVar23;
            uVar15 = *(uint *)((int)puVar19 + uVar10) & 0x80808080;
            if (uVar15 == 0) {
              iVar13 = 4;
              do {
                uVar10 = uVar10 + iVar13;
                iVar13 = iVar13 + 4;
                uVar10 = uVar10 & uVar11;
                uVar15 = *(uint *)((int)puVar19 + uVar10) & 0x80808080;
              } while (uVar15 == 0);
            }
            uVar10 = uVar10 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                             (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                     uVar11;
            if (-1 < *(char *)((int)puVar19 + uVar10)) {
              uVar10 = *puVar19 & 0x80808080;
              uVar10 = (uint)LZCOUNT((*puVar19 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                     (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
            }
            uVar14 = uVar14 - 1 & uVar14;
            bVar2 = (byte)(uVar23 >> 0x19);
            *(byte *)((int)puVar19 + uVar10) = bVar2;
            iVar4 = iVar4 + -1;
            *(byte *)((int)puVar19 + (uVar10 - 4 & uVar11) + 4) = bVar2;
            puVar12 = puVar9 + iVar22 * -3 + -3;
            uVar15 = puVar12[1];
            uVar23 = puVar12[2];
            puVar20 = puVar19 + uVar10 * -3 + -3;
            *puVar20 = *puVar12;
            puVar20[2] = uVar23;
            puVar20[1] = uVar15;
          } while (iVar4 != 0);
        }
        iVar4 = *param_1;
        iVar17 = param_1[1];
        *param_1 = (int)puVar19;
        param_1[1] = uVar11;
        param_1[2] = uVar3 - iVar21;
        param_1[3] = iVar21;
        if (iVar17 == 0) {
          return 0x80000001;
        }
        iVar21 = iVar17 * 0xc + 0xc;
        if (iVar17 + iVar21 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar4 - iVar21);
        return 0x80000001;
      }
    }
  }
LAB_013bd734:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

