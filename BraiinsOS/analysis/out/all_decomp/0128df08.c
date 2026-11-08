// FUN_0128df08 @ 0128df08 size=1488 calls_out=8 calls_in=1
// strings: 

undefined4 FUN_0128df08(int *param_1,undefined4 *param_2)

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
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  bool bVar21;
  
  iVar17 = param_1[3];
  uVar15 = iVar17 + 1;
  if (iVar17 != -1) {
    uVar18 = param_1[1];
    uVar9 = uVar18 + 1;
    uVar11 = uVar18;
    if (7 < uVar18) {
      uVar11 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
    }
    if (uVar15 <= uVar11 >> 1) {
      if (uVar9 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = uVar9 >> 2;
        puVar14 = (uint *)*param_1;
        if ((uVar9 & 3) != 0) {
          uVar15 = (uVar9 >> 2) + 1;
        }
        iVar17 = 0;
        do {
          puVar14[-iVar17] =
               (~(puVar14[-iVar17] >> 7) & 0x1010101) + (puVar14[-iVar17] | 0x7f7f7f7f);
          iVar17 = iVar17 + -1;
        } while (-iVar17 != uVar15);
        if (uVar9 < 4) {
          FUN_016dd52c(puVar14 + 1,puVar14);
        }
        else {
          *(uint *)((int)puVar14 + uVar9) = *puVar14;
        }
        uVar6 = param_2[2];
        uVar7 = param_2[3];
        uVar4 = *param_2;
        uVar5 = param_2[1];
        uVar15 = 0;
        do {
          if (*(char *)((int)puVar14 + uVar15) == -0x80) {
            puVar20 = puVar14 + ~uVar15 * 6;
            puVar13 = puVar14;
            while( true ) {
              uVar9 = FUN_006a526c(uVar4,uVar5,uVar6,uVar7,puVar13[uVar15 * -6 + -5],
                                   puVar13[uVar15 * -6 + -4]);
              uVar8 = param_1[1];
              uVar12 = uVar8 & uVar9;
              uVar16 = *(uint *)((int)puVar13 + uVar12) & 0x80808080;
              uVar11 = uVar12;
              if (uVar16 == 0) {
                iVar17 = 4;
                do {
                  uVar11 = uVar11 + iVar17 & uVar8;
                  iVar17 = iVar17 + 4;
                  uVar16 = *(uint *)((int)puVar13 + uVar11) & 0x80808080;
                } while (uVar16 == 0);
              }
              uVar11 = uVar11 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                               (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3)
                       & uVar8;
              if (-1 < *(char *)((int)puVar13 + uVar11)) {
                uVar11 = *puVar13 & 0x80808080;
                uVar11 = (uint)LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                       (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar9 >> 0x18);
              if (((uVar11 - uVar12 ^ uVar15 - uVar12) & uVar8) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar13 + uVar15) = bVar2;
                puVar14 = (uint *)*param_1;
                *(byte *)((int)puVar14 + (uVar8 & uVar15 - 4) + 4) = bVar2;
                goto LAB_0128e18c;
              }
              cVar1 = *(char *)((int)puVar13 + uVar11);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar13 + uVar11) = bVar2;
              puVar14 = (uint *)*param_1;
              *(byte *)((int)puVar14 + (uVar11 - 4 & uVar8) + 4) = bVar2;
              puVar13 = puVar13 + ~uVar11 * 6;
              if (cVar1 == -1) break;
              uVar11 = *puVar20;
              *puVar20 = *puVar13;
              *puVar13 = uVar11;
              uVar11 = puVar13[1];
              puVar13[1] = puVar20[1];
              puVar20[1] = uVar11;
              uVar11 = puVar20[2];
              puVar20[2] = puVar13[2];
              puVar13[2] = uVar11;
              uVar11 = puVar13[3];
              puVar13[3] = puVar20[3];
              puVar20[3] = uVar11;
              uVar11 = puVar20[4];
              puVar20[4] = puVar13[4];
              puVar13[4] = uVar11;
              uVar11 = puVar13[5];
              puVar13[5] = puVar20[5];
              puVar20[5] = uVar11;
              puVar13 = (uint *)*param_1;
            }
            uVar11 = param_1[1];
            *(undefined1 *)((int)puVar14 + uVar15) = 0xff;
            *(undefined1 *)((int)puVar14 + (uVar11 & uVar15 - 4) + 4) = 0xff;
            FUN_016dd1aa(puVar13,puVar20,0x18);
          }
LAB_0128e18c:
          bVar21 = uVar15 != uVar18;
          uVar15 = uVar15 + 1;
        } while (bVar21);
        uVar15 = param_1[1];
        if (7 < uVar15) {
          uVar15 = (uVar15 + 1 & 0xfffffff8) - (uVar15 + 1 >> 3);
        }
      }
      param_1[2] = uVar15 - param_1[3];
      return 0x80000001;
    }
    if (uVar15 < uVar11 + 1) {
      uVar15 = uVar11 + 1;
    }
    if (uVar15 < 0xf) {
      uVar11 = (uVar15 & 8) + 8;
      if (uVar15 < 4) {
        uVar11 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar15) goto LAB_0128e414;
      iVar3 = (int)((ulonglong)(uVar15 << 3) * 0x24924925 >> 0x20);
      uVar11 = (0xffffffffU >> LZCOUNT((iVar3 + (uVar15 * 8 - iVar3 >> 1) >> 2) - 1)) + 1;
    }
    uVar15 = (uint)((ulonglong)uVar11 * 0x18);
    if ((int)((ulonglong)uVar11 * 0x18 >> 0x20) == 0) {
      uVar18 = uVar11 + 4;
      uVar9 = uVar15 + uVar18;
      if ((!CARRY4(uVar15,uVar18)) && (uVar9 < 0x7ffffff9)) {
        iVar3 = thunk_FUN_016d4a50(uVar9);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,uVar9);
        }
        puVar14 = (uint *)(iVar3 + uVar15);
        FUN_016dd606(puVar14,0xff,uVar18);
        uVar9 = uVar11 - 1;
        uVar15 = uVar9;
        if (7 < uVar9) {
          uVar15 = (uVar11 & 0xfffffff8) - (uVar11 >> 3);
        }
        if (iVar17 == 0) {
          iVar17 = 0;
        }
        else {
          uVar4 = *param_2;
          puVar20 = (uint *)*param_1;
          iVar19 = 0;
          uVar5 = param_2[1];
          uVar6 = param_2[2];
          uVar7 = param_2[3];
          uVar11 = ~*puVar20 & 0x80808080;
          iVar3 = iVar17;
          puVar13 = puVar20;
          do {
            if (uVar11 == 0) {
              do {
                puVar13 = puVar13 + 1;
                iVar19 = iVar19 + 4;
              } while ((*puVar13 & 0x80808080) == 0x80808080);
              uVar11 = *puVar13 & 0x80808080 ^ 0x80808080;
            }
            uVar16 = iVar19 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                             (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3);
            uVar18 = FUN_006a526c(uVar4,uVar5,uVar6,uVar7,puVar20[uVar16 * -6 + -5],
                                  puVar20[uVar16 * -6 + -4]);
            uVar8 = uVar9 & uVar18;
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
            bVar2 = (byte)(uVar18 >> 0x19);
            *(byte *)((int)puVar14 + uVar8) = bVar2;
            iVar3 = iVar3 + -1;
            *(byte *)((int)puVar14 + (uVar8 - 4 & uVar9) + 4) = bVar2;
            FUN_016dd1aa(puVar14 + ~uVar8 * 6,puVar20 + ~uVar16 * 6,0x18);
          } while (iVar3 != 0);
        }
        iVar3 = *param_1;
        iVar19 = param_1[1];
        *param_1 = (int)puVar14;
        param_1[1] = uVar9;
        param_1[2] = uVar15 - iVar17;
        param_1[3] = iVar17;
        if (iVar19 == 0) {
          return 0x80000001;
        }
        iVar17 = iVar19 * 0x18 + 0x18;
        if (iVar19 + iVar17 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar3 - iVar17);
        return 0x80000001;
      }
    }
  }
LAB_0128e414:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

