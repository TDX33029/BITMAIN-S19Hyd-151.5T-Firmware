// FUN_0169f9cc @ 0169f9cc size=1484 calls_out=8 calls_in=1
// strings: 

undefined4 FUN_0169f9cc(int *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  
  iVar17 = param_1[3];
  uVar14 = iVar17 + 1;
  if (iVar17 != -1) {
    uVar18 = param_1[1];
    uVar7 = uVar18 + 1;
    uVar12 = uVar18;
    if (7 < uVar18) {
      uVar12 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
    }
    if (uVar14 <= uVar12 >> 1) {
      if (uVar7 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar7 >> 2;
        puVar16 = (uint *)*param_1;
        if ((uVar7 & 3) != 0) {
          uVar14 = (uVar7 >> 2) + 1;
        }
        iVar17 = 0;
        do {
          puVar16[-iVar17] =
               (~(puVar16[-iVar17] >> 7) & 0x1010101) + (puVar16[-iVar17] | 0x7f7f7f7f);
          iVar17 = iVar17 + -1;
        } while (-iVar17 != uVar14);
        if (uVar7 < 4) {
          FUN_016dd52c(puVar16 + 1,puVar16);
        }
        else {
          *(uint *)((int)puVar16 + uVar7) = *puVar16;
        }
        uVar10 = param_2[2];
        uVar11 = param_2[3];
        uVar8 = *param_2;
        uVar9 = param_2[1];
        uVar14 = 0;
        do {
          if (*(char *)((int)puVar16 + uVar14) == -0x80) {
            puVar4 = puVar16 + ~uVar14 * 6;
            puVar15 = puVar16;
            while( true ) {
              uVar7 = FUN_016a7474(uVar8,uVar9,uVar10,uVar11,puVar15[uVar14 * -6 + -6],
                                   puVar15[uVar14 * -6 + -5]);
              uVar5 = param_1[1];
              uVar13 = uVar5 & uVar7;
              uVar19 = *(uint *)((int)puVar15 + uVar13) & 0x80808080;
              uVar12 = uVar13;
              if (uVar19 == 0) {
                iVar17 = 4;
                do {
                  uVar12 = uVar12 + iVar17 & uVar5;
                  iVar17 = iVar17 + 4;
                  uVar19 = *(uint *)((int)puVar15 + uVar12) & 0x80808080;
                } while (uVar19 == 0);
              }
              uVar12 = uVar12 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                               (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3)
                       & uVar5;
              if (-1 < *(char *)((int)puVar15 + uVar12)) {
                uVar12 = *puVar15 & 0x80808080;
                uVar12 = (uint)LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                       (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar7 >> 0x18);
              if (((uVar12 - uVar13 ^ uVar14 - uVar13) & uVar5) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar15 + uVar14) = bVar2;
                puVar16 = (uint *)*param_1;
                *(byte *)((int)puVar16 + (uVar5 & uVar14 - 4) + 4) = bVar2;
                goto LAB_0169fc50;
              }
              cVar1 = *(char *)((int)puVar15 + uVar12);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar15 + uVar12) = bVar2;
              puVar16 = (uint *)*param_1;
              *(byte *)((int)puVar16 + (uVar12 - 4 & uVar5) + 4) = bVar2;
              puVar15 = puVar15 + ~uVar12 * 6;
              if (cVar1 == -1) break;
              uVar12 = *puVar4;
              *puVar4 = *puVar15;
              *puVar15 = uVar12;
              uVar12 = puVar15[1];
              puVar15[1] = puVar4[1];
              puVar4[1] = uVar12;
              uVar12 = puVar4[2];
              puVar4[2] = puVar15[2];
              puVar15[2] = uVar12;
              uVar12 = puVar15[3];
              puVar15[3] = puVar4[3];
              puVar4[3] = uVar12;
              uVar12 = puVar4[4];
              puVar4[4] = puVar15[4];
              puVar15[4] = uVar12;
              uVar12 = puVar15[5];
              puVar15[5] = puVar4[5];
              puVar4[5] = uVar12;
              puVar15 = (uint *)*param_1;
            }
            uVar12 = param_1[1];
            *(undefined1 *)((int)puVar16 + uVar14) = 0xff;
            *(undefined1 *)((int)puVar16 + (uVar12 & uVar14 - 4) + 4) = 0xff;
            FUN_016dd1aa(puVar15,puVar4,0x18);
          }
LAB_0169fc50:
          bVar20 = uVar14 != uVar18;
          uVar14 = uVar14 + 1;
        } while (bVar20);
        uVar14 = param_1[1];
        if (7 < uVar14) {
          uVar14 = (uVar14 + 1 & 0xfffffff8) - (uVar14 + 1 >> 3);
        }
      }
      param_1[2] = uVar14 - param_1[3];
      return 0x80000001;
    }
    if (uVar14 < uVar12 + 1) {
      uVar14 = uVar12 + 1;
    }
    if (uVar14 < 0xf) {
      uVar12 = (uVar14 & 8) + 8;
      if (uVar14 < 4) {
        uVar12 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar14) goto LAB_0169fed4;
      iVar3 = (int)((ulonglong)(uVar14 << 3) * 0x24924925 >> 0x20);
      uVar12 = (0xffffffffU >> LZCOUNT((iVar3 + (uVar14 * 8 - iVar3 >> 1) >> 2) - 1)) + 1;
    }
    uVar14 = (uint)((ulonglong)uVar12 * 0x18);
    if ((int)((ulonglong)uVar12 * 0x18 >> 0x20) == 0) {
      uVar7 = uVar12 + 4;
      uVar18 = uVar14 + uVar7;
      if ((!CARRY4(uVar14,uVar7)) && (uVar18 < 0x7ffffffd)) {
        iVar3 = thunk_FUN_016d4a50(uVar18);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar18);
        }
        puVar16 = (uint *)(iVar3 + uVar14);
        FUN_016dd606(puVar16,0xff,uVar7);
        uVar7 = uVar12 - 1;
        uVar14 = uVar7;
        if (7 < uVar7) {
          uVar14 = (uVar12 & 0xfffffff8) - (uVar12 >> 3);
        }
        if (iVar17 == 0) {
          iVar17 = 0;
        }
        else {
          uVar8 = *param_2;
          iVar3 = 0;
          puVar4 = (uint *)*param_1;
          uVar9 = param_2[1];
          uVar10 = param_2[2];
          uVar12 = ~*puVar4 & 0x80808080;
          uVar11 = param_2[3];
          puVar15 = puVar4;
          do {
            if (uVar12 == 0) {
              do {
                puVar15 = puVar15 + 1;
                iVar3 = iVar3 + 4;
              } while ((*puVar15 & 0x80808080) == 0x80808080);
              uVar12 = *puVar15 & 0x80808080 ^ 0x80808080;
            }
            uVar19 = iVar3 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                            (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3);
            uVar18 = FUN_016a7474(uVar8,uVar9,uVar10,uVar11,puVar4[uVar19 * -6 + -6],
                                  puVar4[uVar19 * -6 + -5]);
            uVar5 = uVar7 & uVar18;
            uVar13 = *(uint *)((int)puVar16 + uVar5) & 0x80808080;
            if (uVar13 == 0) {
              iVar6 = 4;
              do {
                uVar5 = uVar5 + iVar6;
                iVar6 = iVar6 + 4;
                uVar5 = uVar5 & uVar7;
                uVar13 = *(uint *)((int)puVar16 + uVar5) & 0x80808080;
              } while (uVar13 == 0);
            }
            uVar5 = uVar5 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                           (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                    uVar7;
            if (-1 < *(char *)((int)puVar16 + uVar5)) {
              uVar5 = *puVar16 & 0x80808080;
              uVar5 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                    (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
            }
            uVar12 = uVar12 - 1 & uVar12;
            bVar2 = (byte)(uVar18 >> 0x19);
            *(byte *)((int)puVar16 + uVar5) = bVar2;
            iVar17 = iVar17 + -1;
            *(byte *)((int)puVar16 + (uVar5 - 4 & uVar7) + 4) = bVar2;
            FUN_016dd1aa(puVar16 + ~uVar5 * 6,puVar4 + ~uVar19 * 6,0x18);
          } while (iVar17 != 0);
          iVar17 = param_1[3];
        }
        iVar3 = *param_1;
        iVar6 = param_1[1];
        *param_1 = (int)puVar16;
        param_1[1] = uVar7;
        param_1[2] = uVar14 - iVar17;
        param_1[3] = iVar17;
        if (iVar6 == 0) {
          return 0x80000001;
        }
        iVar17 = iVar6 * 0x18 + 0x18;
        if (iVar6 + iVar17 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar3 - iVar17);
        return 0x80000001;
      }
    }
  }
LAB_0169fed4:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

