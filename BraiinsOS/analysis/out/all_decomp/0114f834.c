// FUN_0114f834 @ 0114f834 size=1468 calls_out=8 calls_in=1
// strings: 

undefined4
FUN_0114f834(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  
  iVar17 = param_1[3];
  uVar3 = iVar17 + 1;
  if (iVar17 != -1) {
    uVar14 = param_1[1];
    uVar7 = uVar14 + 1;
    uVar5 = uVar14;
    if (7 < uVar14) {
      uVar5 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
    }
    if (uVar3 <= uVar5 >> 1) {
      if (uVar7 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar7 >> 2;
        if ((uVar7 & 3) != 0) {
          uVar3 = (uVar7 >> 2) + 1;
        }
        puVar13 = (uint *)*param_1;
        iVar17 = 0;
        do {
          puVar13[-iVar17] =
               (~(puVar13[-iVar17] >> 7) & 0x1010101) + (puVar13[-iVar17] | 0x7f7f7f7f);
          iVar17 = iVar17 + -1;
        } while (-iVar17 != uVar3);
        if (uVar7 < 4) {
          FUN_016dd52c(puVar13 + 1,puVar13);
        }
        else {
          *(uint *)((int)puVar13 + uVar7) = *puVar13;
        }
        uVar3 = 0;
        do {
          if (*(char *)((int)puVar13 + uVar3) == -0x80) {
            puVar15 = puVar13 + (uVar3 + 1) * -10;
            puVar12 = puVar13;
            while( true ) {
              uVar7 = FUN_006a526c(param_3,param_4,param_5,param_6,puVar12[uVar3 * -10 + -9],
                                   puVar12[uVar3 * -10 + -8]);
              uVar6 = param_1[1];
              uVar9 = uVar6 & uVar7;
              uVar10 = *(uint *)((int)puVar12 + uVar9) & 0x80808080;
              uVar5 = uVar9;
              if (uVar10 == 0) {
                iVar17 = 4;
                do {
                  uVar5 = uVar5 + iVar17 & uVar6;
                  iVar17 = iVar17 + 4;
                  uVar10 = *(uint *)((int)puVar12 + uVar5) & 0x80808080;
                } while (uVar10 == 0);
              }
              uVar5 = uVar5 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                             (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                      uVar6;
              if (-1 < *(char *)((int)puVar12 + uVar5)) {
                uVar5 = *puVar12 & 0x80808080;
                uVar5 = (uint)LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar7 >> 0x18);
              if (((uVar5 - uVar9 ^ uVar3 - uVar9) & uVar6) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar12 + uVar3) = bVar2;
                puVar13 = (uint *)*param_1;
                *(byte *)((int)puVar13 + (uVar6 & uVar3 - 4) + 4) = bVar2;
                goto LAB_0114fad4;
              }
              cVar1 = *(char *)((int)puVar12 + uVar5);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar12 + uVar5) = bVar2;
              puVar13 = (uint *)*param_1;
              *(byte *)((int)puVar13 + (uVar5 - 4 & uVar6) + 4) = bVar2;
              if (cVar1 == -1) break;
              uVar7 = puVar12[uVar5 * -10 + -10];
              puVar12[uVar5 * -10 + -10] = *puVar15;
              *puVar15 = uVar7;
              uVar7 = puVar15[1];
              puVar15[1] = puVar12[uVar5 * -10 + -9];
              puVar12[uVar5 * -10 + -9] = uVar7;
              uVar7 = puVar12[uVar5 * -10 + -8];
              puVar12[uVar5 * -10 + -8] = puVar15[2];
              puVar15[2] = uVar7;
              uVar7 = puVar15[3];
              puVar15[3] = puVar12[uVar5 * -10 + -7];
              puVar12[uVar5 * -10 + -7] = uVar7;
              uVar7 = puVar12[uVar5 * -10 + -6];
              puVar12[uVar5 * -10 + -6] = puVar15[4];
              puVar15[4] = uVar7;
              uVar7 = puVar15[5];
              puVar15[5] = puVar12[uVar5 * -10 + -5];
              puVar12[uVar5 * -10 + -5] = uVar7;
              uVar7 = puVar12[uVar5 * -10 + -4];
              puVar12[uVar5 * -10 + -4] = puVar15[6];
              puVar15[6] = uVar7;
              uVar7 = puVar15[7];
              puVar15[7] = puVar12[uVar5 * -10 + -3];
              puVar12[uVar5 * -10 + -3] = uVar7;
              uVar7 = puVar12[uVar5 * -10 + -2];
              puVar12[uVar5 * -10 + -2] = puVar15[8];
              puVar15[8] = uVar7;
              uVar7 = puVar15[9];
              puVar15[9] = puVar12[uVar5 * -10 + -1];
              puVar12[uVar5 * -10 + -1] = uVar7;
              puVar12 = (uint *)*param_1;
            }
            uVar7 = param_1[1];
            *(undefined1 *)((int)puVar13 + uVar3) = 0xff;
            *(undefined1 *)((int)puVar13 + (uVar7 & uVar3 - 4) + 4) = 0xff;
            FUN_016dd1aa(puVar12 + uVar5 * -10 + -10,puVar15,0x28);
          }
LAB_0114fad4:
          bVar18 = uVar3 != uVar14;
          uVar3 = uVar3 + 1;
        } while (bVar18);
        uVar3 = param_1[1];
        iVar17 = param_1[3];
        if (7 < uVar3) {
          uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
        }
      }
      param_1[2] = uVar3 - iVar17;
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
      if (0x1fffffff < uVar3) goto LAB_0114fd44;
      iVar4 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      uVar5 = (0xffffffffU >> LZCOUNT((iVar4 + (uVar3 * 8 - iVar4 >> 1) >> 2) - 1)) + 1;
    }
    uVar3 = (uint)((ulonglong)uVar5 * 0x28);
    if ((int)((ulonglong)uVar5 * 0x28 >> 0x20) == 0) {
      uVar7 = uVar5 + 4;
      uVar14 = uVar3 + uVar7;
      if ((!CARRY4(uVar3,uVar7)) && (uVar14 < 0x7ffffff9)) {
        iVar4 = thunk_FUN_016d4a50(uVar14);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,uVar14);
        }
        puVar13 = (uint *)(iVar4 + uVar3);
        FUN_016dd606(puVar13,0xff,uVar7);
        uVar7 = uVar5 - 1;
        uVar3 = uVar7;
        if (7 < uVar7) {
          uVar3 = (uVar5 & 0xfffffff8) - (uVar5 >> 3);
        }
        if (iVar17 == 0) {
          iVar17 = 0;
        }
        else {
          puVar15 = (uint *)*param_1;
          iVar16 = 0;
          uVar5 = ~*puVar15 & 0x80808080;
          puVar12 = puVar15;
          iVar4 = iVar17;
          do {
            if (uVar5 == 0) {
              do {
                puVar12 = puVar12 + 1;
                iVar16 = iVar16 + 4;
              } while ((*puVar12 & 0x80808080) == 0x80808080);
              uVar5 = *puVar12 & 0x80808080 ^ 0x80808080;
            }
            iVar11 = iVar16 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                             (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3);
            uVar14 = FUN_006a526c(param_3,param_4,param_5,param_6,puVar15[iVar11 * -10 + -9],
                                  puVar15[iVar11 * -10 + -8]);
            uVar6 = uVar7 & uVar14;
            uVar9 = *(uint *)((int)puVar13 + uVar6) & 0x80808080;
            if (uVar9 == 0) {
              iVar8 = 4;
              do {
                uVar6 = uVar6 + iVar8;
                iVar8 = iVar8 + 4;
                uVar6 = uVar6 & uVar7;
                uVar9 = *(uint *)((int)puVar13 + uVar6) & 0x80808080;
              } while (uVar9 == 0);
            }
            uVar6 = uVar6 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                           (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                    uVar7;
            if (-1 < *(char *)((int)puVar13 + uVar6)) {
              uVar6 = *puVar13 & 0x80808080;
              uVar6 = (uint)LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                    (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
            }
            uVar5 = uVar5 - 1 & uVar5;
            bVar2 = (byte)(uVar14 >> 0x19);
            *(byte *)((int)puVar13 + uVar6) = bVar2;
            iVar4 = iVar4 + -1;
            *(byte *)((int)puVar13 + (uVar6 - 4 & uVar7) + 4) = bVar2;
            FUN_016dd1aa(puVar13 + uVar6 * -10 + -10,puVar15 + iVar11 * -10 + -10,0x28);
          } while (iVar4 != 0);
        }
        iVar4 = *param_1;
        iVar16 = param_1[1];
        *param_1 = (int)puVar13;
        param_1[1] = uVar7;
        param_1[2] = uVar3 - iVar17;
        param_1[3] = iVar17;
        if (iVar16 == 0) {
          return 0x80000001;
        }
        iVar17 = iVar16 * 0x28 + 0x28;
        if (iVar16 + iVar17 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar4 - iVar17);
        return 0x80000001;
      }
    }
  }
LAB_0114fd44:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

