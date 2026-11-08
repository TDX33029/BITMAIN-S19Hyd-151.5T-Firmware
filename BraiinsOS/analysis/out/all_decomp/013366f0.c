// FUN_013366f0 @ 013366f0 size=1460 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_013366f0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  uint *puVar23;
  bool bVar24;
  
  iVar22 = param_1[3];
  uVar3 = iVar22 + 1;
  if (iVar22 != -1) {
    uVar17 = param_1[1];
    uVar11 = uVar17 + 1;
    uVar19 = (uVar11 & 0xfffffff8) - (uVar11 >> 3);
    uVar15 = uVar19;
    if (uVar17 < 8) {
      uVar15 = uVar17;
    }
    if (uVar3 <= uVar15 >> 1) {
      if (uVar11 == 0) {
        uVar19 = 0;
      }
      else {
        uVar3 = uVar11 >> 2;
        if ((uVar11 & 3) != 0) {
          uVar3 = (uVar11 >> 2) + 1;
        }
        puVar18 = (uint *)*param_1;
        iVar5 = 0;
        do {
          puVar18[-iVar5] = (~(puVar18[-iVar5] >> 7) & 0x1010101) + (puVar18[-iVar5] | 0x7f7f7f7f);
          iVar5 = iVar5 + -1;
        } while (-iVar5 != uVar3);
        puVar23 = puVar18 + 1;
        if (uVar11 < 4) {
          FUN_016dd52c(puVar23,puVar18);
        }
        else {
          *(uint *)((int)puVar18 + uVar11) = *puVar18;
        }
        uVar6 = *param_2;
        uVar9 = param_2[2];
        uVar8 = param_2[3];
        uVar7 = param_2[1];
        uVar3 = 0;
        do {
          if (*(char *)((int)puVar18 + uVar3) == -0x80) {
            puVar20 = puVar18 + ~uVar3 * 3;
            while( true ) {
              uVar11 = FUN_01333c64(uVar6,uVar7,uVar9,uVar8,puVar18[uVar3 * -3 + -3],
                                    puVar18[uVar3 * -3 + -2]);
              uVar10 = uVar17 & uVar11;
              uVar13 = *(uint *)((int)puVar18 + uVar10) & 0x80808080;
              uVar15 = uVar10;
              if (uVar13 == 0) {
                iVar5 = 4;
                do {
                  uVar15 = uVar15 + iVar5 & uVar17;
                  iVar5 = iVar5 + 4;
                  uVar13 = *(uint *)((int)puVar18 + uVar15) & 0x80808080;
                } while (uVar13 == 0);
              }
              uVar15 = uVar15 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                               (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3)
                       & uVar17;
              if (-1 < *(char *)((int)puVar18 + uVar15)) {
                uVar15 = *puVar18 & 0x80808080;
                uVar15 = (uint)LZCOUNT((*puVar18 & 0x80) << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                       (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar11 >> 0x18);
              if (((uVar15 - uVar10 ^ uVar3 - uVar10) & uVar17) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar18 + uVar3) = bVar2;
                *(byte *)((int)puVar23 + (uVar17 & uVar3 - 4)) = bVar2;
                goto LAB_01336930;
              }
              cVar1 = *(char *)((int)puVar18 + uVar15);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar18 + uVar15) = bVar2;
              *(byte *)((int)puVar23 + (uVar15 - 4 & uVar17)) = bVar2;
              puVar4 = puVar18 + ~uVar15 * 3;
              if (cVar1 == -1) break;
              uVar15 = *puVar20;
              *puVar20 = *puVar4;
              *puVar4 = uVar15;
              uVar15 = puVar4[1];
              puVar4[1] = puVar20[1];
              puVar20[1] = uVar15;
              uVar15 = puVar20[2];
              puVar20[2] = puVar4[2];
              puVar4[2] = uVar15;
            }
            *(undefined1 *)((int)puVar18 + uVar3) = 0xff;
            *(undefined1 *)((int)puVar23 + (uVar17 & uVar3 - 4)) = 0xff;
            uVar15 = *puVar20;
            uVar11 = puVar20[1];
            puVar4[2] = puVar20[2];
            puVar4[1] = uVar11;
            *puVar4 = uVar15;
          }
LAB_01336930:
          bVar24 = uVar3 != uVar17;
          uVar3 = uVar3 + 1;
        } while (bVar24);
        if (uVar17 < 8) {
          uVar19 = uVar17;
        }
      }
      param_1[2] = uVar19 - iVar22;
      return 0x80000001;
    }
    if (uVar3 < uVar15 + 1) {
      uVar3 = uVar15 + 1;
    }
    if (uVar3 < 0xf) {
      uVar19 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar19 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_01336be4;
      iVar5 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      uVar19 = (0xffffffffU >> LZCOUNT((iVar5 + (uVar3 * 8 - iVar5 >> 1) >> 2) - 1)) + 1;
    }
    uVar3 = (uint)((ulonglong)uVar19 * 0xc);
    if ((int)((ulonglong)uVar19 * 0xc >> 0x20) == 0) {
      uVar15 = uVar19 + 4;
      uVar11 = uVar3 + uVar15;
      if ((!CARRY4(uVar3,uVar15)) && (uVar11 < 0x7ffffffd)) {
        iVar5 = thunk_FUN_016d4a50(uVar11);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar11);
        }
        puVar18 = (uint *)(iVar5 + uVar3);
        FUN_016dd606(puVar18,0xff,uVar15);
        uVar15 = uVar19 - 1;
        uVar3 = uVar15;
        if (7 < uVar15) {
          uVar3 = (uVar19 & 0xfffffff8) - (uVar19 >> 3);
        }
        if (iVar22 == 0) {
          puVar23 = (uint *)*param_1;
          iVar22 = 0;
        }
        else {
          puVar23 = (uint *)*param_1;
          uVar6 = *param_2;
          uVar19 = ~*puVar23 & 0x80808080;
          uVar7 = param_2[1];
          uVar8 = param_2[2];
          uVar9 = param_2[3];
          iVar21 = 0;
          puVar20 = puVar23;
          iVar5 = iVar22;
          do {
            if (uVar19 == 0) {
              do {
                puVar20 = puVar20 + 1;
                iVar21 = iVar21 + 4;
              } while ((*puVar20 & 0x80808080) == 0x80808080);
              uVar19 = *puVar20 & 0x80808080 ^ 0x80808080;
            }
            uVar14 = iVar21 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                             (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3);
            uVar11 = FUN_01333c64(uVar6,uVar7,uVar8,uVar9,puVar23[uVar14 * -3 + -3],
                                  puVar23[uVar14 * -3 + -2]);
            uVar10 = uVar15 & uVar11;
            uVar13 = *(uint *)((int)puVar18 + uVar10) & 0x80808080;
            if (uVar13 == 0) {
              iVar12 = 4;
              do {
                uVar10 = uVar10 + iVar12;
                iVar12 = iVar12 + 4;
                uVar10 = uVar10 & uVar15;
                uVar13 = *(uint *)((int)puVar18 + uVar10) & 0x80808080;
              } while (uVar13 == 0);
            }
            uVar10 = uVar10 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                             (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                     uVar15;
            if (-1 < *(char *)((int)puVar18 + uVar10)) {
              uVar10 = *puVar18 & 0x80808080;
              uVar10 = (uint)LZCOUNT((*puVar18 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                     (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
            }
            uVar19 = uVar19 - 1 & uVar19;
            bVar2 = (byte)(uVar11 >> 0x19);
            *(byte *)((int)puVar18 + uVar10) = bVar2;
            *(byte *)((int)puVar18 + (uVar10 - 4 & uVar15) + 4) = bVar2;
            puVar4 = puVar23 + ~uVar14 * 3;
            iVar5 = iVar5 + -1;
            uVar13 = puVar4[1];
            uVar11 = puVar4[2];
            puVar16 = puVar18 + ~uVar10 * 3;
            *puVar16 = *puVar4;
            puVar16[2] = uVar11;
            puVar16[1] = uVar13;
          } while (iVar5 != 0);
        }
        *param_1 = puVar18;
        param_1[1] = uVar15;
        param_1[2] = uVar3 - iVar22;
        if (uVar17 == 0) {
          return 0x80000001;
        }
        iVar22 = uVar17 * 0xc + 0xc;
        if (uVar17 + iVar22 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4((int)puVar23 - iVar22);
        return 0x80000001;
      }
    }
  }
LAB_01336be4:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

