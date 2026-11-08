// FUN_007518f8 @ 007518f8 size=1532 calls_out=8 calls_in=1
// strings: 

undefined4 FUN_007518f8(int *param_1,undefined4 *param_2)

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
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  bool bVar21;
  
  iVar17 = param_1[3];
  uVar14 = iVar17 + 1;
  if (iVar17 != -1) {
    uVar19 = param_1[1];
    uVar9 = uVar19 + 1;
    uVar11 = uVar19;
    if (7 < uVar19) {
      uVar11 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
    }
    if (uVar14 <= uVar11 >> 1) {
      if (uVar9 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar9 >> 2;
        puVar15 = (uint *)*param_1;
        if ((uVar9 & 3) != 0) {
          uVar14 = (uVar9 >> 2) + 1;
        }
        iVar17 = 0;
        do {
          puVar15[-iVar17] =
               (~(puVar15[-iVar17] >> 7) & 0x1010101) + (puVar15[-iVar17] | 0x7f7f7f7f);
          iVar17 = iVar17 + -1;
        } while (-iVar17 != uVar14);
        if (uVar9 < 4) {
          FUN_016dd52c(puVar15 + 1,puVar15);
        }
        else {
          *(uint *)((int)puVar15 + uVar9) = *puVar15;
        }
        uVar6 = param_2[2];
        uVar7 = param_2[3];
        uVar4 = *param_2;
        uVar5 = param_2[1];
        uVar14 = 0;
        do {
          if (*(char *)((int)puVar15 + uVar14) == -0x80) {
            puVar20 = puVar15 + ~uVar14 * 9;
            puVar16 = puVar15;
            while( true ) {
              uVar9 = FUN_006a5594(uVar4,uVar5,uVar6,uVar7,(short)puVar16[uVar14 * -9 + -9]);
              uVar8 = param_1[1];
              uVar12 = uVar8 & uVar9;
              uVar18 = *(uint *)((int)puVar16 + uVar12) & 0x80808080;
              uVar11 = uVar12;
              if (uVar18 == 0) {
                iVar17 = 4;
                do {
                  uVar11 = uVar11 + iVar17 & uVar8;
                  iVar17 = iVar17 + 4;
                  uVar18 = *(uint *)((int)puVar16 + uVar11) & 0x80808080;
                } while (uVar18 == 0);
              }
              uVar11 = uVar11 + ((uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                               (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3)
                       & uVar8;
              if (-1 < *(char *)((int)puVar16 + uVar11)) {
                uVar11 = *puVar16 & 0x80808080;
                uVar11 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                       (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar9 >> 0x18);
              if (((uVar11 - uVar12 ^ uVar14 - uVar12) & uVar8) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar16 + uVar14) = bVar2;
                puVar15 = (uint *)*param_1;
                *(byte *)((int)puVar15 + (uVar8 & uVar14 - 4) + 4) = bVar2;
                goto LAB_00751bac;
              }
              cVar1 = *(char *)((int)puVar16 + uVar11);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar16 + uVar11) = bVar2;
              puVar15 = (uint *)*param_1;
              *(byte *)((int)puVar15 + (uVar11 - 4 & uVar8) + 4) = bVar2;
              puVar16 = puVar16 + ~uVar11 * 9;
              if (cVar1 == -1) break;
              uVar11 = *puVar20;
              *puVar20 = *puVar16;
              *puVar16 = uVar11;
              uVar11 = puVar16[1];
              puVar16[1] = puVar20[1];
              puVar20[1] = uVar11;
              uVar11 = puVar20[2];
              puVar20[2] = puVar16[2];
              puVar16[2] = uVar11;
              uVar11 = puVar16[3];
              puVar16[3] = puVar20[3];
              puVar20[3] = uVar11;
              uVar11 = puVar20[4];
              puVar20[4] = puVar16[4];
              puVar16[4] = uVar11;
              uVar11 = puVar16[5];
              puVar16[5] = puVar20[5];
              puVar20[5] = uVar11;
              uVar11 = puVar20[6];
              puVar20[6] = puVar16[6];
              puVar16[6] = uVar11;
              uVar11 = puVar16[7];
              puVar16[7] = puVar20[7];
              puVar20[7] = uVar11;
              uVar11 = puVar20[8];
              puVar20[8] = puVar16[8];
              puVar16[8] = uVar11;
              puVar16 = (uint *)*param_1;
            }
            uVar11 = param_1[1];
            *(undefined1 *)((int)puVar15 + uVar14) = 0xff;
            *(undefined1 *)((int)puVar15 + (uVar11 & uVar14 - 4) + 4) = 0xff;
            FUN_016dd1aa(puVar16,puVar20,0x24);
          }
LAB_00751bac:
          bVar21 = uVar14 != uVar19;
          uVar14 = uVar14 + 1;
        } while (bVar21);
        uVar14 = param_1[1];
        if (7 < uVar14) {
          uVar14 = (uVar14 + 1 & 0xfffffff8) - (uVar14 + 1 >> 3);
        }
      }
      param_1[2] = uVar14 - param_1[3];
      return 0x80000001;
    }
    if (uVar14 < uVar11 + 1) {
      uVar14 = uVar11 + 1;
    }
    if (uVar14 < 0xf) {
      uVar11 = (uVar14 & 8) + 8;
      if (uVar14 < 4) {
        uVar11 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar14) goto LAB_00751e3c;
      iVar3 = (int)((ulonglong)(uVar14 << 3) * 0x24924925 >> 0x20);
      uVar11 = (0xffffffffU >> LZCOUNT((iVar3 + (uVar14 * 8 - iVar3 >> 1) >> 2) - 1)) + 1;
    }
    uVar14 = (uint)((ulonglong)uVar11 * 0x24);
    if ((int)((ulonglong)uVar11 * 0x24 >> 0x20) == 0) {
      uVar9 = uVar11 + 4;
      uVar19 = uVar14 + uVar9;
      if ((!CARRY4(uVar14,uVar9)) && (uVar19 < 0x7ffffffd)) {
        iVar3 = thunk_FUN_016d4a50(uVar19);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar19);
        }
        puVar15 = (uint *)(iVar3 + uVar14);
        FUN_016dd606(puVar15,0xff,uVar9);
        uVar9 = uVar11 - 1;
        uVar14 = uVar9;
        if (7 < uVar9) {
          uVar14 = (uVar11 & 0xfffffff8) - (uVar11 >> 3);
        }
        if (iVar17 == 0) {
          iVar17 = 0;
        }
        else {
          iVar13 = 0;
          puVar20 = (uint *)*param_1;
          uVar11 = ~*puVar20 & 0x80808080;
          uVar4 = *param_2;
          uVar5 = param_2[1];
          uVar6 = param_2[2];
          uVar7 = param_2[3];
          iVar3 = iVar17;
          puVar16 = puVar20;
          do {
            if (uVar11 == 0) {
              do {
                puVar16 = puVar16 + 1;
                iVar13 = iVar13 + 4;
              } while ((*puVar16 & 0x80808080) == 0x80808080);
              uVar11 = *puVar16 & 0x80808080 ^ 0x80808080;
            }
            uVar18 = iVar13 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                             (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3);
            uVar19 = FUN_006a5594(uVar4,uVar5,uVar6,uVar7,(short)puVar20[uVar18 * -9 + -9]);
            uVar8 = uVar9 & uVar19;
            uVar12 = *(uint *)((int)puVar15 + uVar8) & 0x80808080;
            if (uVar12 == 0) {
              iVar10 = 4;
              do {
                uVar8 = uVar8 + iVar10;
                iVar10 = iVar10 + 4;
                uVar8 = uVar8 & uVar9;
                uVar12 = *(uint *)((int)puVar15 + uVar8) & 0x80808080;
              } while (uVar12 == 0);
            }
            uVar8 = uVar8 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                    uVar9;
            if (-1 < *(char *)((int)puVar15 + uVar8)) {
              uVar8 = *puVar15 & 0x80808080;
              uVar8 = (uint)LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                    (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
            }
            uVar11 = uVar11 - 1 & uVar11;
            bVar2 = (byte)(uVar19 >> 0x19);
            *(byte *)((int)puVar15 + uVar8) = bVar2;
            iVar3 = iVar3 + -1;
            *(byte *)((int)puVar15 + (uVar8 - 4 & uVar9) + 4) = bVar2;
            FUN_016dd1aa(puVar15 + ~uVar8 * 9,puVar20 + ~uVar18 * 9,0x24);
          } while (iVar3 != 0);
        }
        iVar3 = *param_1;
        iVar13 = param_1[1];
        *param_1 = (int)puVar15;
        param_1[1] = uVar9;
        param_1[2] = uVar14 - iVar17;
        param_1[3] = iVar17;
        if (iVar13 == 0) {
          return 0x80000001;
        }
        iVar17 = iVar13 * 0x24 + 0x24;
        if (iVar13 + iVar17 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar3 - iVar17);
        return 0x80000001;
      }
    }
  }
LAB_00751e3c:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

