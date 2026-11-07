// FUN_00752cb8 @ 00752cb8 size=1604 calls_out=8 calls_in=1
// strings: 

undefined4 FUN_00752cb8(int *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  bool bVar21;
  
  iVar17 = param_1[3];
  uVar3 = iVar17 + 1;
  if (iVar17 != -1) {
    uVar19 = param_1[1];
    uVar10 = uVar19 + 1;
    uVar12 = uVar19;
    if (7 < uVar19) {
      uVar12 = (uVar10 & 0xfffffff8) - (uVar10 >> 3);
    }
    if (uVar3 <= uVar12 >> 1) {
      if (uVar10 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar10 >> 2;
        puVar15 = (uint *)*param_1;
        if ((uVar10 & 3) != 0) {
          uVar3 = (uVar10 >> 2) + 1;
        }
        iVar17 = 0;
        do {
          puVar15[-iVar17] =
               (~(puVar15[-iVar17] >> 7) & 0x1010101) + (puVar15[-iVar17] | 0x7f7f7f7f);
          iVar17 = iVar17 + -1;
        } while (-iVar17 != uVar3);
        if (uVar10 < 4) {
          FUN_016dd52c(puVar15 + 1,puVar15);
        }
        else {
          *(uint *)((int)puVar15 + uVar10) = *puVar15;
        }
        uVar7 = param_2[2];
        uVar8 = param_2[3];
        uVar5 = *param_2;
        uVar6 = param_2[1];
        uVar3 = 0;
        do {
          if (*(char *)((int)puVar15 + uVar3) == -0x80) {
            puVar20 = puVar15 + ~uVar3 * 0xe;
            puVar16 = puVar15;
            while( true ) {
              uVar10 = FUN_009bd354(uVar5,uVar6,uVar7,uVar8,puVar16[uVar3 * -0xe + -0xe]);
              uVar9 = param_1[1];
              uVar13 = uVar9 & uVar10;
              uVar18 = *(uint *)((int)puVar16 + uVar13) & 0x80808080;
              uVar12 = uVar13;
              if (uVar18 == 0) {
                iVar17 = 4;
                do {
                  uVar12 = uVar12 + iVar17 & uVar9;
                  iVar17 = iVar17 + 4;
                  uVar18 = *(uint *)((int)puVar16 + uVar12) & 0x80808080;
                } while (uVar18 == 0);
              }
              uVar12 = uVar12 + ((uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                               (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3)
                       & uVar9;
              if (-1 < *(char *)((int)puVar16 + uVar12)) {
                uVar12 = *puVar16 & 0x80808080;
                uVar12 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                       (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar10 >> 0x18);
              if (((uVar12 - uVar13 ^ uVar3 - uVar13) & uVar9) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar16 + uVar3) = bVar2;
                puVar15 = (uint *)*param_1;
                *(byte *)((int)puVar15 + (uVar9 & uVar3 - 4) + 4) = bVar2;
                goto LAB_00752fbc;
              }
              cVar1 = *(char *)((int)puVar16 + uVar12);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar16 + uVar12) = bVar2;
              puVar15 = (uint *)*param_1;
              *(byte *)((int)puVar15 + (uVar12 - 4 & uVar9) + 4) = bVar2;
              puVar16 = puVar16 + ~uVar12 * 0xe;
              if (cVar1 == -1) break;
              uVar12 = *puVar16;
              *puVar16 = *puVar20;
              *puVar20 = uVar12;
              uVar12 = puVar20[1];
              puVar20[1] = puVar16[1];
              puVar16[1] = uVar12;
              uVar12 = puVar16[2];
              puVar16[2] = puVar20[2];
              puVar20[2] = uVar12;
              uVar12 = puVar20[3];
              puVar20[3] = puVar16[3];
              puVar16[3] = uVar12;
              uVar12 = puVar16[4];
              puVar16[4] = puVar20[4];
              puVar20[4] = uVar12;
              uVar12 = puVar20[5];
              puVar20[5] = puVar16[5];
              puVar16[5] = uVar12;
              uVar12 = puVar16[6];
              puVar16[6] = puVar20[6];
              puVar20[6] = uVar12;
              uVar12 = puVar20[7];
              puVar20[7] = puVar16[7];
              puVar16[7] = uVar12;
              uVar12 = puVar16[8];
              puVar16[8] = puVar20[8];
              puVar20[8] = uVar12;
              uVar12 = puVar20[9];
              puVar20[9] = puVar16[9];
              puVar16[9] = uVar12;
              uVar12 = puVar16[10];
              puVar16[10] = puVar20[10];
              puVar20[10] = uVar12;
              uVar12 = puVar20[0xb];
              puVar20[0xb] = puVar16[0xb];
              puVar16[0xb] = uVar12;
              uVar12 = puVar16[0xc];
              puVar16[0xc] = puVar20[0xc];
              puVar20[0xc] = uVar12;
              uVar12 = puVar20[0xd];
              puVar20[0xd] = puVar16[0xd];
              puVar16[0xd] = uVar12;
              puVar16 = (uint *)*param_1;
            }
            uVar12 = param_1[1];
            *(undefined1 *)((int)puVar15 + uVar3) = 0xff;
            *(undefined1 *)((int)puVar15 + (uVar12 & uVar3 - 4) + 4) = 0xff;
            FUN_016dd1aa(puVar16,puVar20,0x38);
          }
LAB_00752fbc:
          bVar21 = uVar3 != uVar19;
          uVar3 = uVar3 + 1;
        } while (bVar21);
        uVar3 = param_1[1];
        if (7 < uVar3) {
          uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
        }
      }
      param_1[2] = uVar3 - param_1[3];
      return 0x80000001;
    }
    if (uVar3 < uVar12 + 1) {
      uVar3 = uVar12 + 1;
    }
    if (uVar3 < 0xf) {
      uVar12 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar12 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_00753248;
      iVar4 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      uVar12 = (0xffffffffU >> LZCOUNT((iVar4 + (uVar3 * 8 - iVar4 >> 1) >> 2) - 1)) + 1;
    }
    uVar3 = (uint)((ulonglong)uVar12 * 0x38);
    if ((int)((ulonglong)uVar12 * 0x38 >> 0x20) == 0) {
      uVar10 = uVar12 + 4;
      uVar19 = uVar3 + uVar10;
      if ((!CARRY4(uVar3,uVar10)) && (uVar19 < 0x7ffffffd)) {
        iVar4 = thunk_FUN_016d4a50(uVar19);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar19);
        }
        puVar15 = (uint *)(iVar4 + uVar3);
        FUN_016dd606(puVar15,0xff,uVar10);
        uVar10 = uVar12 - 1;
        uVar3 = uVar10;
        if (7 < uVar10) {
          uVar3 = (uVar12 & 0xfffffff8) - (uVar12 >> 3);
        }
        if (iVar17 == 0) {
          iVar17 = 0;
        }
        else {
          iVar14 = 0;
          puVar20 = (uint *)*param_1;
          uVar12 = ~*puVar20 & 0x80808080;
          uVar5 = *param_2;
          uVar6 = param_2[1];
          uVar7 = param_2[2];
          uVar8 = param_2[3];
          iVar4 = iVar17;
          puVar16 = puVar20;
          do {
            if (uVar12 == 0) {
              do {
                puVar16 = puVar16 + 1;
                iVar14 = iVar14 + 4;
              } while ((*puVar16 & 0x80808080) == 0x80808080);
              uVar12 = *puVar16 & 0x80808080 ^ 0x80808080;
            }
            uVar18 = iVar14 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                             (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3);
            uVar19 = FUN_009bd354(uVar5,uVar6,uVar7,uVar8,puVar20[uVar18 * -0xe + -0xe]);
            uVar9 = uVar10 & uVar19;
            uVar13 = *(uint *)((int)puVar15 + uVar9) & 0x80808080;
            if (uVar13 == 0) {
              iVar11 = 4;
              do {
                uVar9 = uVar9 + iVar11;
                iVar11 = iVar11 + 4;
                uVar9 = uVar9 & uVar10;
                uVar13 = *(uint *)((int)puVar15 + uVar9) & 0x80808080;
              } while (uVar13 == 0);
            }
            uVar9 = uVar9 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                           (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                    uVar10;
            if (-1 < *(char *)((int)puVar15 + uVar9)) {
              uVar9 = *puVar15 & 0x80808080;
              uVar9 = (uint)LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                    (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
            }
            uVar12 = uVar12 - 1 & uVar12;
            bVar2 = (byte)(uVar19 >> 0x19);
            *(byte *)((int)puVar15 + uVar9) = bVar2;
            iVar4 = iVar4 + -1;
            *(byte *)((int)puVar15 + (uVar9 - 4 & uVar10) + 4) = bVar2;
            FUN_016dd1aa(puVar15 + ~uVar9 * 0xe,puVar20 + ~uVar18 * 0xe,0x38);
          } while (iVar4 != 0);
        }
        iVar4 = *param_1;
        iVar14 = param_1[1];
        *param_1 = (int)puVar15;
        param_1[1] = uVar10;
        param_1[2] = uVar3 - iVar17;
        param_1[3] = iVar17;
        if (iVar14 == 0) {
          return 0x80000001;
        }
        iVar17 = iVar14 * 0x38 + 0x38;
        if (iVar14 + iVar17 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar4 - iVar17);
        return 0x80000001;
      }
    }
  }
LAB_00753248:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

