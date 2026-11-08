// FUN_0169e47c @ 0169e47c size=1300 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_0169e47c(int *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar11 = param_1[3];
  uVar3 = iVar11 + 1;
  if (iVar11 != -1) {
    uVar13 = param_1[1];
    uVar6 = uVar13 + 1;
    uVar5 = uVar13;
    if (7 < uVar13) {
      uVar5 = (uVar6 & 0xfffffff8) - (uVar6 >> 3);
    }
    if (uVar3 <= uVar5 >> 1) {
      if (uVar6 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar6 >> 2;
        if ((uVar6 & 3) != 0) {
          uVar3 = (uVar6 >> 2) + 1;
        }
        puVar10 = (uint *)*param_1;
        iVar11 = 0;
        do {
          puVar10[-iVar11] =
               (~(puVar10[-iVar11] >> 7) & 0x1010101) + (puVar10[-iVar11] | 0x7f7f7f7f);
          iVar11 = iVar11 + -1;
        } while (-iVar11 != uVar3);
        if (uVar6 < 4) {
          FUN_016dd52c(puVar10 + 1,puVar10);
        }
        else {
          *(uint *)((int)puVar10 + uVar6) = *puVar10;
        }
        uVar3 = 0;
        do {
          if (*(char *)((int)puVar10 + uVar3) == -0x80) {
            puVar14 = puVar10 + ~uVar3 * 6;
            puVar9 = puVar10;
            while( true ) {
              uVar6 = param_1[1];
              uVar8 = uVar6 & puVar9[uVar3 * -6 + -4];
              uVar7 = *(uint *)((int)puVar9 + uVar8) & 0x80808080;
              uVar5 = uVar8;
              if (uVar7 == 0) {
                iVar11 = 4;
                do {
                  uVar5 = uVar5 + iVar11;
                  iVar11 = iVar11 + 4;
                  uVar5 = uVar5 & uVar6;
                  uVar7 = *(uint *)((int)puVar9 + uVar5) & 0x80808080;
                } while (uVar7 == 0);
              }
              uVar5 = uVar5 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                             (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                      uVar6;
              if (-1 < *(char *)((int)puVar9 + uVar5)) {
                uVar5 = *puVar9 & 0x80808080;
                uVar5 = (uint)LZCOUNT((*puVar9 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
              }
              bVar2 = (byte)(puVar9[uVar3 * -6 + -4] >> 0x18);
              if (((uVar5 - uVar8 ^ uVar3 - uVar8) & uVar6) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar9 + uVar3) = bVar2;
                puVar10 = (uint *)*param_1;
                *(byte *)((int)puVar10 + (uVar6 & uVar3 - 4) + 4) = bVar2;
                goto LAB_0169e6a8;
              }
              cVar1 = *(char *)((int)puVar9 + uVar5);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar9 + uVar5) = bVar2;
              puVar10 = (uint *)*param_1;
              *(byte *)((int)puVar10 + (uVar5 - 4 & uVar6) + 4) = bVar2;
              puVar9 = puVar9 + ~uVar5 * 6;
              if (cVar1 == -1) break;
              uVar5 = *puVar14;
              *puVar14 = *puVar9;
              *puVar9 = uVar5;
              uVar5 = puVar9[1];
              puVar9[1] = puVar14[1];
              puVar14[1] = uVar5;
              uVar5 = puVar14[2];
              puVar14[2] = puVar9[2];
              puVar9[2] = uVar5;
              uVar5 = puVar9[3];
              puVar9[3] = puVar14[3];
              puVar14[3] = uVar5;
              uVar5 = puVar14[4];
              puVar14[4] = puVar9[4];
              puVar9[4] = uVar5;
              uVar5 = puVar9[5];
              puVar9[5] = puVar14[5];
              puVar14[5] = uVar5;
              puVar9 = (uint *)*param_1;
            }
            uVar5 = param_1[1];
            *(undefined1 *)((int)puVar10 + uVar3) = 0xff;
            *(undefined1 *)((int)puVar10 + (uVar5 & uVar3 - 4) + 4) = 0xff;
            FUN_016dd1aa(puVar9,puVar14,0x18);
          }
LAB_0169e6a8:
          bVar16 = uVar3 != uVar13;
          uVar3 = uVar3 + 1;
        } while (bVar16);
        uVar3 = param_1[1];
        if (7 < uVar3) {
          uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
        }
      }
      param_1[2] = uVar3 - param_1[3];
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
      if (0x1fffffff < uVar3) goto LAB_0169e8e8;
      iVar4 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      uVar5 = (0xffffffffU >> LZCOUNT((iVar4 + (uVar3 * 8 - iVar4 >> 1) >> 2) - 1)) + 1;
    }
    uVar3 = (uint)((ulonglong)uVar5 * 0x18);
    if ((int)((ulonglong)uVar5 * 0x18 >> 0x20) == 0) {
      uVar13 = uVar5 + 4;
      uVar6 = uVar3 + uVar13;
      if ((!CARRY4(uVar3,uVar13)) && (uVar6 < 0x7ffffffd)) {
        iVar4 = thunk_FUN_016d4a50(uVar6);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar6);
        }
        puVar10 = (uint *)(iVar4 + uVar3);
        FUN_016dd606(puVar10,0xff,uVar13);
        uVar6 = uVar5 - 1;
        uVar3 = uVar6;
        if (7 < uVar6) {
          uVar3 = (uVar5 & 0xfffffff8) - (uVar5 >> 3);
        }
        if (iVar11 == 0) {
          iVar11 = 0;
        }
        else {
          puVar14 = (uint *)*param_1;
          iVar12 = 0;
          uVar5 = ~*puVar14 & 0x80808080;
          iVar4 = iVar11;
          puVar9 = puVar14;
          do {
            if (uVar5 == 0) {
              do {
                puVar9 = puVar9 + 1;
                iVar12 = iVar12 + 4;
              } while ((*puVar9 & 0x80808080) == 0x80808080);
              uVar5 = *puVar9 & 0x80808080 ^ 0x80808080;
            }
            uVar13 = iVar12 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                             (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3);
            uVar7 = uVar6 & puVar14[uVar13 * -6 + -4];
            uVar8 = *(uint *)((int)puVar10 + uVar7) & 0x80808080;
            if (uVar8 == 0) {
              iVar15 = 4;
              do {
                uVar7 = uVar7 + iVar15;
                iVar15 = iVar15 + 4;
                uVar7 = uVar7 & uVar6;
                uVar8 = *(uint *)((int)puVar10 + uVar7) & 0x80808080;
              } while (uVar8 == 0);
            }
            uVar7 = uVar7 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                           (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                    uVar6;
            if (-1 < *(char *)((int)puVar10 + uVar7)) {
              uVar7 = *puVar10 & 0x80808080;
              uVar7 = (uint)LZCOUNT((*puVar10 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                    (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
            }
            uVar5 = uVar5 - 1 & uVar5;
            bVar2 = (byte)(puVar14[uVar13 * -6 + -4] >> 0x19);
            *(byte *)((int)puVar10 + uVar7) = bVar2;
            iVar4 = iVar4 + -1;
            *(byte *)((int)puVar10 + (uVar7 - 4 & uVar6) + 4) = bVar2;
            FUN_016dd1aa(puVar10 + ~uVar7 * 6,puVar14 + ~uVar13 * 6,0x18);
          } while (iVar4 != 0);
        }
        iVar4 = *param_1;
        iVar12 = param_1[1];
        *param_1 = (int)puVar10;
        param_1[1] = uVar6;
        param_1[2] = uVar3 - iVar11;
        param_1[3] = iVar11;
        if (iVar12 == 0) {
          return 0x80000001;
        }
        iVar11 = iVar12 * 0x18 + 0x18;
        if (iVar12 + iVar11 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar4 - iVar11);
        return 0x80000001;
      }
    }
  }
LAB_0169e8e8:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

