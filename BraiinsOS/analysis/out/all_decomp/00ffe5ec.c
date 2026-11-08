// FUN_00ffe5ec @ 00ffe5ec size=1476 calls_out=7 calls_in=0
// strings: 

undefined4 FUN_00ffe5ec(int *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  
  iVar19 = param_1[3];
  uVar17 = iVar19 + 1;
  if (iVar19 != -1) {
    uVar20 = param_1[1];
    uVar10 = uVar20 + 1;
    uVar13 = uVar20;
    if (7 < uVar20) {
      uVar13 = (uVar10 & 0xfffffff8) - (uVar10 >> 3);
    }
    if (uVar17 <= uVar13 >> 1) {
      if (uVar10 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = uVar10 >> 2;
        puVar18 = (uint *)*param_1;
        if ((uVar10 & 3) != 0) {
          uVar17 = (uVar10 >> 2) + 1;
        }
        iVar19 = 0;
        do {
          puVar18[-iVar19] =
               (~(puVar18[-iVar19] >> 7) & 0x1010101) + (puVar18[-iVar19] | 0x7f7f7f7f);
          iVar19 = iVar19 + -1;
        } while (-iVar19 != uVar17);
        if (uVar10 < 4) {
          FUN_016dd52c(puVar18 + 1,puVar18);
        }
        else {
          *(uint *)((int)puVar18 + uVar10) = *puVar18;
        }
        uVar6 = param_2[2];
        uVar7 = param_2[3];
        uVar4 = *param_2;
        uVar5 = param_2[1];
        uVar17 = 0;
        do {
          if (*(char *)((int)puVar18 + uVar17) == -0x80) {
            puVar8 = puVar18 + ~uVar17 * 3;
            puVar15 = puVar18;
            while( true ) {
              uVar10 = FUN_010035e0(uVar4,uVar5,uVar6,uVar7,puVar15[uVar17 * -3 + -3]);
              uVar9 = param_1[1];
              uVar14 = uVar9 & uVar10;
              uVar21 = *(uint *)((int)puVar15 + uVar14) & 0x80808080;
              uVar13 = uVar14;
              if (uVar21 == 0) {
                iVar19 = 4;
                do {
                  uVar13 = uVar13 + iVar19 & uVar9;
                  iVar19 = iVar19 + 4;
                  uVar21 = *(uint *)((int)puVar15 + uVar13) & 0x80808080;
                } while (uVar21 == 0);
              }
              uVar13 = uVar13 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                               (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3)
                       & uVar9;
              if (-1 < *(char *)((int)puVar15 + uVar13)) {
                uVar13 = *puVar15 & 0x80808080;
                uVar13 = (uint)LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                       (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar10 >> 0x18);
              if (((uVar13 - uVar14 ^ uVar17 - uVar14) & uVar9) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar15 + uVar17) = bVar2;
                puVar18 = (uint *)*param_1;
                *(byte *)((int)puVar18 + (uVar9 & uVar17 - 4) + 4) = bVar2;
                goto LAB_00ffe840;
              }
              cVar1 = *(char *)((int)puVar15 + uVar13);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar15 + uVar13) = bVar2;
              puVar18 = (uint *)*param_1;
              *(byte *)((int)puVar18 + (uVar13 - 4 & uVar9) + 4) = bVar2;
              puVar15 = puVar15 + ~uVar13 * 3;
              if (cVar1 == -1) break;
              uVar13 = *puVar8;
              *puVar8 = *puVar15;
              *puVar15 = uVar13;
              uVar13 = puVar15[1];
              puVar15[1] = puVar8[1];
              puVar8[1] = uVar13;
              uVar13 = puVar8[2];
              puVar8[2] = puVar15[2];
              puVar15[2] = uVar13;
              puVar15 = (uint *)*param_1;
            }
            uVar13 = param_1[1];
            *(undefined1 *)((int)puVar18 + uVar17) = 0xff;
            *(undefined1 *)((int)puVar18 + (uVar13 & uVar17 - 4) + 4) = 0xff;
            uVar13 = *puVar8;
            uVar10 = puVar8[1];
            puVar15[2] = puVar8[2];
            puVar15[1] = uVar10;
            *puVar15 = uVar13;
          }
LAB_00ffe840:
          bVar23 = uVar17 != uVar20;
          uVar17 = uVar17 + 1;
        } while (bVar23);
        uVar17 = param_1[1];
        if (7 < uVar17) {
          uVar17 = (uVar17 + 1 & 0xfffffff8) - (uVar17 + 1 >> 3);
        }
      }
      param_1[2] = uVar17 - param_1[3];
      return 0x80000001;
    }
    if (uVar17 < uVar13 + 1) {
      uVar17 = uVar13 + 1;
    }
    if (uVar17 < 0xf) {
      uVar13 = (uVar17 & 8) + 8;
      if (uVar17 < 4) {
        uVar13 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar17) goto LAB_00ffeaf4;
      iVar3 = (int)((ulonglong)(uVar17 << 3) * 0x24924925 >> 0x20);
      uVar13 = (0xffffffffU >> LZCOUNT((iVar3 + (uVar17 * 8 - iVar3 >> 1) >> 2) - 1)) + 1;
    }
    uVar17 = (uint)((ulonglong)uVar13 * 0xc);
    if ((int)((ulonglong)uVar13 * 0xc >> 0x20) == 0) {
      uVar10 = uVar13 + 4;
      uVar20 = uVar17 + uVar10;
      if ((!CARRY4(uVar17,uVar10)) && (uVar20 < 0x7ffffffd)) {
        iVar3 = thunk_FUN_016d4a50(uVar20);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar20);
        }
        puVar18 = (uint *)(iVar3 + uVar17);
        FUN_016dd606(puVar18,0xff,uVar10);
        uVar10 = uVar13 - 1;
        uVar17 = uVar10;
        if (7 < uVar10) {
          uVar17 = (uVar13 & 0xfffffff8) - (uVar13 >> 3);
        }
        if (iVar19 == 0) {
          iVar19 = 0;
        }
        else {
          puVar8 = (uint *)*param_1;
          iVar22 = 0;
          uVar13 = ~*puVar8 & 0x80808080;
          uVar4 = *param_2;
          uVar5 = param_2[1];
          uVar6 = param_2[2];
          uVar7 = param_2[3];
          iVar3 = iVar19;
          puVar15 = puVar8;
          do {
            if (uVar13 == 0) {
              do {
                puVar15 = puVar15 + 1;
                iVar22 = iVar22 + 4;
              } while ((*puVar15 & 0x80808080) == 0x80808080);
              uVar13 = *puVar15 & 0x80808080 ^ 0x80808080;
            }
            uVar21 = iVar22 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                             (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3);
            uVar20 = FUN_010035e0(uVar4,uVar5,uVar6,uVar7,puVar8[uVar21 * -3 + -3]);
            uVar9 = uVar10 & uVar20;
            uVar14 = *(uint *)((int)puVar18 + uVar9) & 0x80808080;
            if (uVar14 == 0) {
              iVar12 = 4;
              do {
                uVar9 = uVar9 + iVar12;
                iVar12 = iVar12 + 4;
                uVar9 = uVar9 & uVar10;
                uVar14 = *(uint *)((int)puVar18 + uVar9) & 0x80808080;
              } while (uVar14 == 0);
            }
            uVar9 = uVar9 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                           (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                    uVar10;
            if (-1 < *(char *)((int)puVar18 + uVar9)) {
              uVar9 = *puVar18 & 0x80808080;
              uVar9 = (uint)LZCOUNT((*puVar18 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                    (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
            }
            uVar13 = uVar13 - 1 & uVar13;
            bVar2 = (byte)(uVar20 >> 0x19);
            *(byte *)((int)puVar18 + uVar9) = bVar2;
            *(byte *)((int)puVar18 + (uVar9 - 4 & uVar10) + 4) = bVar2;
            iVar3 = iVar3 + -1;
            puVar11 = puVar8 + ~uVar21 * 3;
            uVar14 = puVar11[1];
            uVar20 = puVar11[2];
            puVar16 = puVar18 + ~uVar9 * 3;
            *puVar16 = *puVar11;
            puVar16[2] = uVar20;
            puVar16[1] = uVar14;
          } while (iVar3 != 0);
        }
        iVar3 = *param_1;
        iVar22 = param_1[1];
        *param_1 = (int)puVar18;
        param_1[1] = uVar10;
        param_1[2] = uVar17 - iVar19;
        param_1[3] = iVar19;
        if (iVar22 == 0) {
          return 0x80000001;
        }
        iVar19 = iVar22 * 0xc + 0xc;
        if (iVar22 + iVar19 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar3 - iVar19);
        return 0x80000001;
      }
    }
  }
LAB_00ffeaf4:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

