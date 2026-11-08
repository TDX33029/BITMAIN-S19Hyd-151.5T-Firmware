// FUN_0128d904 @ 0128d904 size=1532 calls_out=8 calls_in=0
// strings: 

undefined4 FUN_0128d904(int *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  
  iVar18 = param_1[3];
  uVar15 = iVar18 + 1;
  if (iVar18 != -1) {
    uVar19 = param_1[1];
    uVar6 = uVar19 + 1;
    uVar12 = uVar19;
    if (7 < uVar19) {
      uVar12 = (uVar6 & 0xfffffff8) - (uVar6 >> 3);
    }
    if (uVar15 <= uVar12 >> 1) {
      if (uVar6 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = uVar6 >> 2;
        puVar16 = (uint *)*param_1;
        if ((uVar6 & 3) != 0) {
          uVar15 = (uVar6 >> 2) + 1;
        }
        iVar18 = 0;
        do {
          puVar16[-iVar18] =
               (~(puVar16[-iVar18] >> 7) & 0x1010101) + (puVar16[-iVar18] | 0x7f7f7f7f);
          iVar18 = iVar18 + -1;
        } while (-iVar18 != uVar15);
        if (uVar6 < 4) {
          FUN_016dd52c(puVar16 + 1,puVar16);
        }
        else {
          *(uint *)((int)puVar16 + uVar6) = *puVar16;
        }
        uVar9 = param_2[2];
        uVar10 = param_2[3];
        uVar7 = *param_2;
        uVar8 = param_2[1];
        uVar15 = 0;
        do {
          if (*(char *)((int)puVar16 + uVar15) == -0x80) {
            puVar4 = puVar16 + ~uVar15 * 9;
            puVar17 = puVar16;
            while( true ) {
              uVar6 = FUN_006a526c(uVar7,uVar8,uVar9,uVar10,puVar17[uVar15 * -9 + -8],
                                   puVar17[uVar15 * -9 + -7]);
              uVar5 = param_1[1];
              uVar13 = uVar5 & uVar6;
              uVar14 = *(uint *)((int)puVar17 + uVar13) & 0x80808080;
              uVar12 = uVar13;
              if (uVar14 == 0) {
                iVar18 = 4;
                do {
                  uVar12 = uVar12 + iVar18 & uVar5;
                  iVar18 = iVar18 + 4;
                  uVar14 = *(uint *)((int)puVar17 + uVar12) & 0x80808080;
                } while (uVar14 == 0);
              }
              uVar12 = uVar12 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                               (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3)
                       & uVar5;
              if (-1 < *(char *)((int)puVar17 + uVar12)) {
                uVar12 = *puVar17 & 0x80808080;
                uVar12 = (uint)LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                       (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar6 >> 0x18);
              if (((uVar12 - uVar13 ^ uVar15 - uVar13) & uVar5) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar17 + uVar15) = bVar2;
                puVar16 = (uint *)*param_1;
                *(byte *)((int)puVar16 + (uVar5 & uVar15 - 4) + 4) = bVar2;
                goto LAB_0128dbb8;
              }
              cVar1 = *(char *)((int)puVar17 + uVar12);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar17 + uVar12) = bVar2;
              puVar16 = (uint *)*param_1;
              *(byte *)((int)puVar16 + (uVar12 - 4 & uVar5) + 4) = bVar2;
              puVar17 = puVar17 + ~uVar12 * 9;
              if (cVar1 == -1) break;
              uVar12 = *puVar4;
              *puVar4 = *puVar17;
              *puVar17 = uVar12;
              uVar12 = puVar17[1];
              puVar17[1] = puVar4[1];
              puVar4[1] = uVar12;
              uVar12 = puVar4[2];
              puVar4[2] = puVar17[2];
              puVar17[2] = uVar12;
              uVar12 = puVar17[3];
              puVar17[3] = puVar4[3];
              puVar4[3] = uVar12;
              uVar12 = puVar4[4];
              puVar4[4] = puVar17[4];
              puVar17[4] = uVar12;
              uVar12 = puVar17[5];
              puVar17[5] = puVar4[5];
              puVar4[5] = uVar12;
              uVar12 = puVar4[6];
              puVar4[6] = puVar17[6];
              puVar17[6] = uVar12;
              uVar12 = puVar17[7];
              puVar17[7] = puVar4[7];
              puVar4[7] = uVar12;
              uVar12 = puVar4[8];
              puVar4[8] = puVar17[8];
              puVar17[8] = uVar12;
              puVar17 = (uint *)*param_1;
            }
            uVar12 = param_1[1];
            *(undefined1 *)((int)puVar16 + uVar15) = 0xff;
            *(undefined1 *)((int)puVar16 + (uVar12 & uVar15 - 4) + 4) = 0xff;
            FUN_016dd1aa(puVar17,puVar4,0x24);
          }
LAB_0128dbb8:
          bVar21 = uVar15 != uVar19;
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
    if (uVar15 < uVar12 + 1) {
      uVar15 = uVar12 + 1;
    }
    if (uVar15 < 0xf) {
      uVar12 = (uVar15 & 8) + 8;
      if (uVar15 < 4) {
        uVar12 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar15) goto LAB_0128de44;
      iVar3 = (int)((ulonglong)(uVar15 << 3) * 0x24924925 >> 0x20);
      uVar12 = (0xffffffffU >> LZCOUNT((iVar3 + (uVar15 * 8 - iVar3 >> 1) >> 2) - 1)) + 1;
    }
    uVar15 = (uint)((ulonglong)uVar12 * 0x24);
    if ((int)((ulonglong)uVar12 * 0x24 >> 0x20) == 0) {
      uVar6 = uVar12 + 4;
      uVar19 = uVar15 + uVar6;
      if ((!CARRY4(uVar15,uVar6)) && (uVar19 < 0x7ffffffd)) {
        iVar3 = thunk_FUN_016d4a50(uVar19);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar19);
        }
        puVar16 = (uint *)(iVar3 + uVar15);
        FUN_016dd606(puVar16,0xff,uVar6);
        uVar6 = uVar12 - 1;
        uVar15 = uVar6;
        if (7 < uVar6) {
          uVar15 = (uVar12 & 0xfffffff8) - (uVar12 >> 3);
        }
        if (iVar18 == 0) {
          iVar18 = 0;
        }
        else {
          uVar7 = *param_2;
          puVar4 = (uint *)*param_1;
          iVar20 = 0;
          uVar8 = param_2[1];
          uVar9 = param_2[2];
          uVar10 = param_2[3];
          uVar12 = ~*puVar4 & 0x80808080;
          iVar3 = iVar18;
          puVar17 = puVar4;
          do {
            if (uVar12 == 0) {
              do {
                puVar17 = puVar17 + 1;
                iVar20 = iVar20 + 4;
              } while ((*puVar17 & 0x80808080) == 0x80808080);
              uVar12 = *puVar17 & 0x80808080 ^ 0x80808080;
            }
            uVar14 = iVar20 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                             (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3);
            uVar19 = FUN_006a526c(uVar7,uVar8,uVar9,uVar10,puVar4[uVar14 * -9 + -8],
                                  puVar4[uVar14 * -9 + -7]);
            uVar5 = uVar6 & uVar19;
            uVar13 = *(uint *)((int)puVar16 + uVar5) & 0x80808080;
            if (uVar13 == 0) {
              iVar11 = 4;
              do {
                uVar5 = uVar5 + iVar11;
                iVar11 = iVar11 + 4;
                uVar5 = uVar5 & uVar6;
                uVar13 = *(uint *)((int)puVar16 + uVar5) & 0x80808080;
              } while (uVar13 == 0);
            }
            uVar5 = uVar5 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                           (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                    uVar6;
            if (-1 < *(char *)((int)puVar16 + uVar5)) {
              uVar5 = *puVar16 & 0x80808080;
              uVar5 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                    (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
            }
            uVar12 = uVar12 - 1 & uVar12;
            bVar2 = (byte)(uVar19 >> 0x19);
            *(byte *)((int)puVar16 + uVar5) = bVar2;
            iVar3 = iVar3 + -1;
            *(byte *)((int)puVar16 + (uVar5 - 4 & uVar6) + 4) = bVar2;
            FUN_016dd1aa(puVar16 + ~uVar5 * 9,puVar4 + ~uVar14 * 9,0x24);
          } while (iVar3 != 0);
        }
        iVar3 = *param_1;
        iVar20 = param_1[1];
        *param_1 = (int)puVar16;
        param_1[1] = uVar6;
        param_1[2] = uVar15 - iVar18;
        param_1[3] = iVar18;
        if (iVar20 == 0) {
          return 0x80000001;
        }
        iVar18 = iVar20 * 0x24 + 0x24;
        if (iVar20 + iVar18 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar3 - iVar18);
        return 0x80000001;
      }
    }
  }
LAB_0128de44:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

