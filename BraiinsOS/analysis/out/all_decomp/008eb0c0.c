// FUN_008eb0c0 @ 008eb0c0 size=1488 calls_out=8 calls_in=0
// strings: 

undefined4 FUN_008eb0c0(int *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  bool bVar21;
  
  iVar15 = param_1[3];
  uVar13 = iVar15 + 1;
  if (iVar15 != -1) {
    uVar20 = param_1[1];
    uVar9 = uVar20 + 1;
    uVar11 = uVar20;
    if (7 < uVar20) {
      uVar11 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
    }
    if (uVar13 <= uVar11 >> 1) {
      if (uVar9 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar9 >> 2;
        puVar14 = (uint *)*param_1;
        if ((uVar9 & 3) != 0) {
          uVar13 = (uVar9 >> 2) + 1;
        }
        iVar15 = 0;
        do {
          puVar14[-iVar15] =
               (~(puVar14[-iVar15] >> 7) & 0x1010101) + (puVar14[-iVar15] | 0x7f7f7f7f);
          iVar15 = iVar15 + -1;
        } while (-iVar15 != uVar13);
        if (uVar9 < 4) {
          FUN_016dd52c(puVar14 + 1,puVar14);
        }
        else {
          *(uint *)((int)puVar14 + uVar9) = *puVar14;
        }
        uVar4 = *param_2;
        uVar7 = param_2[3];
        uVar5 = param_2[1];
        uVar6 = param_2[2];
        uVar13 = 0;
        do {
          if (*(char *)((int)puVar14 + uVar13) == -0x80) {
            puVar19 = puVar14 + (uVar13 + 1) * -6;
            puVar16 = puVar14;
            while( true ) {
              uVar9 = FUN_008ec2f8(uVar4,uVar5,uVar6,uVar7,puVar16 + uVar13 * -6 + -6);
              uVar8 = param_1[1];
              uVar12 = uVar8 & uVar9;
              uVar17 = *(uint *)((int)puVar16 + uVar12) & 0x80808080;
              uVar11 = uVar12;
              if (uVar17 == 0) {
                iVar15 = 4;
                do {
                  uVar11 = uVar11 + iVar15 & uVar8;
                  iVar15 = iVar15 + 4;
                  uVar17 = *(uint *)((int)puVar16 + uVar11) & 0x80808080;
                } while (uVar17 == 0);
              }
              uVar11 = uVar11 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                               (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3)
                       & uVar8;
              if (-1 < *(char *)((int)puVar16 + uVar11)) {
                uVar11 = *puVar16 & 0x80808080;
                uVar11 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                       (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar9 >> 0x18);
              if (((uVar11 - uVar12 ^ uVar13 - uVar12) & uVar8) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar16 + uVar13) = bVar2;
                puVar14 = (uint *)*param_1;
                *(byte *)((int)puVar14 + (uVar8 & uVar13 - 4) + 4) = bVar2;
                goto LAB_008eb344;
              }
              cVar1 = *(char *)((int)puVar16 + uVar11);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar16 + uVar11) = bVar2;
              puVar14 = (uint *)*param_1;
              *(byte *)((int)puVar14 + (uVar11 - 4 & uVar8) + 4) = bVar2;
              if (cVar1 == -1) break;
              uVar9 = *puVar19;
              *puVar19 = puVar16[uVar11 * -6 + -6];
              puVar16[uVar11 * -6 + -6] = uVar9;
              uVar9 = puVar16[uVar11 * -6 + -5];
              puVar16[uVar11 * -6 + -5] = puVar19[1];
              puVar19[1] = uVar9;
              uVar9 = puVar19[2];
              puVar19[2] = puVar16[uVar11 * -6 + -4];
              puVar16[uVar11 * -6 + -4] = uVar9;
              uVar9 = puVar16[uVar11 * -6 + -3];
              puVar16[uVar11 * -6 + -3] = puVar19[3];
              puVar19[3] = uVar9;
              uVar9 = puVar19[4];
              puVar19[4] = puVar16[uVar11 * -6 + -2];
              puVar16[uVar11 * -6 + -2] = uVar9;
              uVar9 = puVar16[uVar11 * -6 + -1];
              puVar16[uVar11 * -6 + -1] = puVar19[5];
              puVar19[5] = uVar9;
              puVar16 = (uint *)*param_1;
            }
            uVar9 = param_1[1];
            *(undefined1 *)((int)puVar14 + uVar13) = 0xff;
            *(undefined1 *)((int)puVar14 + (uVar9 & uVar13 - 4) + 4) = 0xff;
            FUN_016dd1aa(puVar16 + uVar11 * -6 + -6,puVar19,0x18);
          }
LAB_008eb344:
          bVar21 = uVar13 != uVar20;
          uVar13 = uVar13 + 1;
        } while (bVar21);
        uVar13 = param_1[1];
        if (7 < uVar13) {
          uVar13 = (uVar13 + 1 & 0xfffffff8) - (uVar13 + 1 >> 3);
        }
      }
      param_1[2] = uVar13 - param_1[3];
      return 0x80000001;
    }
    if (uVar13 < uVar11 + 1) {
      uVar13 = uVar11 + 1;
    }
    if (uVar13 < 0xf) {
      uVar11 = (uVar13 & 8) + 8;
      if (uVar13 < 4) {
        uVar11 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar13) goto LAB_008eb5d0;
      iVar3 = (int)((ulonglong)(uVar13 << 3) * 0x24924925 >> 0x20);
      uVar11 = (0xffffffffU >> LZCOUNT((iVar3 + (uVar13 * 8 - iVar3 >> 1) >> 2) - 1)) + 1;
    }
    uVar13 = (uint)((ulonglong)uVar11 * 0x18);
    if ((int)((ulonglong)uVar11 * 0x18 >> 0x20) == 0) {
      uVar9 = uVar11 + 4;
      uVar20 = uVar13 + uVar9;
      if ((!CARRY4(uVar13,uVar9)) && (uVar20 < 0x7ffffff9)) {
        iVar3 = thunk_FUN_016d4a50(uVar20);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,uVar20);
        }
        puVar14 = (uint *)(iVar3 + uVar13);
        FUN_016dd606(puVar14,0xff,uVar9);
        uVar9 = uVar11 - 1;
        uVar13 = uVar9;
        if (7 < uVar9) {
          uVar13 = (uVar11 & 0xfffffff8) - (uVar11 >> 3);
        }
        if (iVar15 == 0) {
          iVar15 = 0;
        }
        else {
          iVar3 = 0;
          puVar19 = (uint *)*param_1;
          uVar11 = ~*puVar19 & 0x80808080;
          uVar4 = *param_2;
          uVar5 = param_2[1];
          uVar6 = param_2[2];
          uVar7 = param_2[3];
          puVar16 = puVar19;
          do {
            if (uVar11 == 0) {
              do {
                puVar16 = puVar16 + 1;
                iVar3 = iVar3 + 4;
              } while ((*puVar16 & 0x80808080) == 0x80808080);
              uVar11 = *puVar16 & 0x80808080 ^ 0x80808080;
            }
            iVar18 = iVar3 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                            (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3);
            uVar20 = FUN_008ec2f8(uVar4,uVar5,uVar6,uVar7,puVar19 + iVar18 * -6 + -6);
            uVar8 = uVar9 & uVar20;
            uVar12 = *(uint *)((int)puVar14 + uVar8) & 0x80808080;
            if (uVar12 == 0) {
              iVar10 = 4;
              do {
                uVar8 = uVar8 + iVar10;
                iVar10 = iVar10 + 4;
                uVar8 = uVar8 & uVar9;
                uVar12 = *(uint *)((int)puVar14 + uVar8) & 0x80808080;
              } while (uVar12 == 0);
            }
            uVar8 = uVar8 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                    uVar9;
            if (-1 < *(char *)((int)puVar14 + uVar8)) {
              uVar8 = *puVar14 & 0x80808080;
              uVar8 = (uint)LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                    (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
            }
            uVar11 = uVar11 - 1 & uVar11;
            bVar2 = (byte)(uVar20 >> 0x19);
            *(byte *)((int)puVar14 + uVar8) = bVar2;
            iVar15 = iVar15 + -1;
            *(byte *)((int)puVar14 + (uVar8 - 4 & uVar9) + 4) = bVar2;
            FUN_016dd1aa(puVar14 + uVar8 * -6 + -6,puVar19 + iVar18 * -6 + -6,0x18);
          } while (iVar15 != 0);
          iVar15 = param_1[3];
        }
        iVar3 = *param_1;
        iVar18 = param_1[1];
        *param_1 = (int)puVar14;
        param_1[1] = uVar9;
        param_1[2] = uVar13 - iVar15;
        param_1[3] = iVar15;
        if (iVar18 == 0) {
          return 0x80000001;
        }
        iVar15 = iVar18 * 0x18 + 0x18;
        if (iVar18 + iVar15 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar3 - iVar15);
        return 0x80000001;
      }
    }
  }
LAB_008eb5d0:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

