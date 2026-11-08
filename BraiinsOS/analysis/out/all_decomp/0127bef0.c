// FUN_0127bef0 @ 0127bef0 size=1344 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_0127bef0(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  bool bVar17;
  
  iVar13 = param_1[3];
  uVar11 = iVar13 + 1;
  if (iVar13 != -1) {
    uVar14 = param_1[1];
    uVar6 = uVar14 + 1;
    uVar4 = uVar14;
    if (7 < uVar14) {
      uVar4 = (uVar6 & 0xfffffff8) - (uVar6 >> 3);
    }
    if (uVar11 <= uVar4 >> 1) {
      if (uVar6 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar6 >> 2;
        puVar15 = (uint *)*param_1;
        if ((uVar6 & 3) != 0) {
          uVar11 = (uVar6 >> 2) + 1;
        }
        iVar13 = 0;
        do {
          puVar15[-iVar13] =
               (~(puVar15[-iVar13] >> 7) & 0x1010101) + (puVar15[-iVar13] | 0x7f7f7f7f);
          iVar13 = iVar13 + -1;
        } while (-iVar13 != uVar11);
        if (uVar6 < 4) {
          FUN_016dd52c(puVar15 + 1,puVar15);
        }
        else {
          *(uint *)((int)puVar15 + uVar6) = *puVar15;
        }
        uVar11 = 0;
        do {
          if (*(char *)((int)puVar15 + uVar11) == -0x80) {
            puVar8 = puVar15 + (uVar11 + 1) * -6;
            puVar9 = puVar15;
            while( true ) {
              uVar6 = param_1[1];
              uVar10 = uVar6 & puVar9[uVar11 * -6 + -4];
              uVar7 = *(uint *)((int)puVar9 + uVar10) & 0x80808080;
              uVar4 = uVar10;
              if (uVar7 == 0) {
                iVar13 = 4;
                do {
                  uVar4 = uVar4 + iVar13;
                  iVar13 = iVar13 + 4;
                  uVar4 = uVar4 & uVar6;
                  uVar7 = *(uint *)((int)puVar9 + uVar4) & 0x80808080;
                } while (uVar7 == 0);
              }
              uVar4 = uVar4 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                             (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                      uVar6;
              if (-1 < *(char *)((int)puVar9 + uVar4)) {
                uVar4 = *puVar9 & 0x80808080;
                uVar4 = (uint)LZCOUNT((*puVar9 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3;
              }
              bVar2 = (byte)(puVar9[uVar11 * -6 + -4] >> 0x18);
              if (((uVar4 - uVar10 ^ uVar11 - uVar10) & uVar6) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar9 + uVar11) = bVar2;
                puVar15 = (uint *)*param_1;
                *(byte *)((int)puVar15 + (uVar6 & uVar11 - 4) + 4) = bVar2;
                goto LAB_0127c130;
              }
              cVar1 = *(char *)((int)puVar9 + uVar4);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar9 + uVar4) = bVar2;
              puVar15 = (uint *)*param_1;
              *(byte *)((int)puVar15 + (uVar4 - 4 & uVar6) + 4) = bVar2;
              if (cVar1 == -1) break;
              uVar6 = *puVar8;
              *puVar8 = puVar9[uVar4 * -6 + -6];
              puVar9[uVar4 * -6 + -6] = uVar6;
              uVar6 = puVar9[uVar4 * -6 + -5];
              puVar9[uVar4 * -6 + -5] = puVar8[1];
              puVar8[1] = uVar6;
              uVar6 = puVar8[2];
              puVar8[2] = puVar9[uVar4 * -6 + -4];
              puVar9[uVar4 * -6 + -4] = uVar6;
              uVar6 = puVar9[uVar4 * -6 + -3];
              puVar9[uVar4 * -6 + -3] = puVar8[3];
              puVar8[3] = uVar6;
              uVar6 = puVar8[4];
              puVar8[4] = puVar9[uVar4 * -6 + -2];
              puVar9[uVar4 * -6 + -2] = uVar6;
              uVar6 = puVar9[uVar4 * -6 + -1];
              puVar9[uVar4 * -6 + -1] = puVar8[5];
              puVar8[5] = uVar6;
              puVar9 = (uint *)*param_1;
            }
            uVar6 = param_1[1];
            *(undefined1 *)((int)puVar15 + uVar11) = 0xff;
            *(undefined1 *)((int)puVar15 + (uVar6 & uVar11 - 4) + 4) = 0xff;
            FUN_016dd1aa(puVar9 + uVar4 * -6 + -6,puVar8,0x18);
          }
LAB_0127c130:
          bVar17 = uVar11 != uVar14;
          uVar11 = uVar11 + 1;
        } while (bVar17);
        uVar11 = param_1[1];
        iVar13 = param_1[3];
        if (7 < uVar11) {
          uVar11 = (uVar11 + 1 & 0xfffffff8) - (uVar11 + 1 >> 3);
        }
      }
      param_1[2] = uVar11 - iVar13;
      return 0x80000001;
    }
    if (uVar11 < uVar4 + 1) {
      uVar11 = uVar4 + 1;
    }
    if (uVar11 < 0xf) {
      uVar4 = (uVar11 & 8) + 8;
      if (uVar11 < 4) {
        uVar4 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar11) goto LAB_0127c380;
      iVar3 = (int)((ulonglong)(uVar11 << 3) * 0x24924925 >> 0x20);
      uVar4 = (0xffffffffU >> LZCOUNT((iVar3 + (uVar11 * 8 - iVar3 >> 1) >> 2) - 1)) + 1;
    }
    uVar11 = (uint)((ulonglong)uVar4 * 0x18);
    if ((int)((ulonglong)uVar4 * 0x18 >> 0x20) == 0) {
      uVar14 = uVar4 + 4;
      uVar6 = uVar11 + uVar14;
      if ((!CARRY4(uVar11,uVar14)) && (uVar6 < 0x7ffffffd)) {
        iVar3 = thunk_FUN_016d4a50(uVar6);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar6);
        }
        puVar15 = (uint *)(iVar3 + uVar11);
        FUN_016dd606(puVar15,0xff,uVar14);
        uVar6 = uVar4 - 1;
        uVar11 = uVar6;
        if (7 < uVar6) {
          uVar11 = (uVar4 & 0xfffffff8) - (uVar4 >> 3);
        }
        if (iVar13 == 0) {
          iVar13 = 0;
        }
        else {
          iVar12 = 0;
          puVar8 = (uint *)*param_1;
          uVar4 = ~*puVar8 & 0x80808080;
          puVar9 = puVar8;
          iVar3 = iVar13;
          do {
            if (uVar4 == 0) {
              do {
                puVar9 = puVar9 + 1;
                iVar12 = iVar12 + 4;
              } while ((*puVar9 & 0x80808080) == 0x80808080);
              uVar4 = *puVar9 & 0x80808080 ^ 0x80808080;
            }
            iVar5 = iVar12 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                            (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3);
            uVar14 = uVar6 & puVar8[iVar5 * -6 + -4];
            uVar7 = *(uint *)((int)puVar15 + uVar14) & 0x80808080;
            if (uVar7 == 0) {
              iVar16 = 4;
              do {
                uVar14 = uVar14 + iVar16;
                iVar16 = iVar16 + 4;
                uVar14 = uVar14 & uVar6;
                uVar7 = *(uint *)((int)puVar15 + uVar14) & 0x80808080;
              } while (uVar7 == 0);
            }
            uVar14 = uVar14 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                             (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                     uVar6;
            if (-1 < *(char *)((int)puVar15 + uVar14)) {
              uVar14 = *puVar15 & 0x80808080;
              uVar14 = (uint)LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                     (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3;
            }
            uVar4 = uVar4 - 1 & uVar4;
            bVar2 = (byte)(puVar8[iVar5 * -6 + -4] >> 0x19);
            *(byte *)((int)puVar15 + uVar14) = bVar2;
            *(byte *)((int)puVar15 + (uVar14 - 4 & uVar6) + 4) = bVar2;
            iVar3 = iVar3 + -1;
            FUN_016dd1aa(puVar15 + uVar14 * -6 + -6,puVar8 + iVar5 * -6 + -6,0x18);
          } while (iVar3 != 0);
        }
        iVar3 = *param_1;
        iVar12 = param_1[1];
        *param_1 = (int)puVar15;
        param_1[1] = uVar6;
        param_1[2] = uVar11 - iVar13;
        param_1[3] = iVar13;
        if (iVar12 == 0) {
          return 0x80000001;
        }
        iVar13 = iVar12 * 0x18 + 0x18;
        if (iVar12 + iVar13 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar3 - iVar13);
        return 0x80000001;
      }
    }
  }
LAB_0127c380:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

