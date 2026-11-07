// FUN_0169f398 @ 0169f398 size=1580 calls_out=8 calls_in=1
// strings: 

undefined4 FUN_0169f398(int *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  bool bVar21;
  
  uVar17 = param_1[3];
  uVar13 = uVar17 + param_2;
  if (!CARRY4(uVar17,param_2)) {
    uVar18 = param_1[1];
    uVar20 = uVar18 + 1;
    uVar5 = uVar18;
    if (7 < uVar18) {
      uVar5 = (uVar20 & 0xfffffff8) - (uVar20 >> 3);
    }
    if (uVar13 <= uVar5 >> 1) {
      if (uVar20 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar20 >> 2;
        puVar14 = (uint *)*param_1;
        if ((uVar20 & 3) != 0) {
          uVar13 = (uVar20 >> 2) + 1;
        }
        iVar3 = 0;
        do {
          puVar14[-iVar3] = (~(puVar14[-iVar3] >> 7) & 0x1010101) + (puVar14[-iVar3] | 0x7f7f7f7f);
          iVar3 = iVar3 + -1;
        } while (-iVar3 != uVar13);
        if (uVar20 < 4) {
          FUN_016dd52c(puVar14 + 1,puVar14,uVar20);
        }
        else {
          *(uint *)((int)puVar14 + uVar20) = *puVar14;
        }
        uVar8 = param_3[2];
        uVar9 = param_3[3];
        uVar6 = *param_3;
        uVar7 = param_3[1];
        uVar13 = 0;
        do {
          if (*(char *)((int)puVar14 + uVar13) == -0x80) {
            puVar19 = puVar14 + ~uVar13 * 0xc;
            puVar15 = puVar14;
            while( true ) {
              uVar5 = FUN_016a7780(uVar6,uVar7,uVar8,uVar9,puVar15 + uVar13 * -0xc + -0xc);
              uVar20 = param_1[1];
              uVar10 = uVar20 & uVar5;
              uVar12 = *(uint *)((int)puVar15 + uVar10) & 0x80808080;
              uVar17 = uVar10;
              if (uVar12 == 0) {
                iVar3 = 4;
                do {
                  uVar17 = uVar17 + iVar3 & uVar20;
                  iVar3 = iVar3 + 4;
                  uVar12 = *(uint *)((int)puVar15 + uVar17) & 0x80808080;
                } while (uVar12 == 0);
              }
              uVar17 = uVar17 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                               (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3)
                       & uVar20;
              if (-1 < *(char *)((int)puVar15 + uVar17)) {
                uVar17 = *puVar15 & 0x80808080;
                uVar17 = (uint)LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                       (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar5 >> 0x18);
              if (((uVar17 - uVar10 ^ uVar13 - uVar10) & uVar20) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar15 + uVar13) = bVar2;
                puVar14 = (uint *)*param_1;
                *(byte *)((int)puVar14 + (uVar20 & uVar13 - 4) + 4) = bVar2;
                goto LAB_0169f67c;
              }
              cVar1 = *(char *)((int)puVar15 + uVar17);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar15 + uVar17) = bVar2;
              puVar14 = (uint *)*param_1;
              *(byte *)((int)puVar14 + (uVar17 - 4 & uVar20) + 4) = bVar2;
              puVar15 = puVar15 + ~uVar17 * 0xc;
              if (cVar1 == -1) break;
              uVar17 = *puVar15;
              *puVar15 = *puVar19;
              *puVar19 = uVar17;
              uVar17 = puVar19[1];
              puVar19[1] = puVar15[1];
              puVar15[1] = uVar17;
              uVar17 = puVar15[2];
              puVar15[2] = puVar19[2];
              puVar19[2] = uVar17;
              uVar17 = puVar19[3];
              puVar19[3] = puVar15[3];
              puVar15[3] = uVar17;
              uVar17 = puVar15[4];
              puVar15[4] = puVar19[4];
              puVar19[4] = uVar17;
              uVar17 = puVar19[5];
              puVar19[5] = puVar15[5];
              puVar15[5] = uVar17;
              uVar17 = puVar15[6];
              puVar15[6] = puVar19[6];
              puVar19[6] = uVar17;
              uVar17 = puVar19[7];
              puVar19[7] = puVar15[7];
              puVar15[7] = uVar17;
              uVar17 = puVar15[8];
              puVar15[8] = puVar19[8];
              puVar19[8] = uVar17;
              uVar17 = puVar19[9];
              puVar19[9] = puVar15[9];
              puVar15[9] = uVar17;
              uVar17 = puVar15[10];
              puVar15[10] = puVar19[10];
              puVar19[10] = uVar17;
              uVar17 = puVar19[0xb];
              puVar19[0xb] = puVar15[0xb];
              puVar15[0xb] = uVar17;
              puVar15 = (uint *)*param_1;
            }
            uVar17 = param_1[1];
            *(undefined1 *)((int)puVar14 + uVar13) = 0xff;
            *(undefined1 *)((int)puVar14 + (uVar17 & uVar13 - 4) + 4) = 0xff;
            FUN_016dd1aa(puVar15,puVar19,0x30);
          }
LAB_0169f67c:
          bVar21 = uVar13 != uVar18;
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
    if (uVar13 < uVar5 + 1) {
      uVar13 = uVar5 + 1;
    }
    if (uVar13 < 0xf) {
      uVar5 = (uVar13 & 8) + 8;
      if (uVar13 < 4) {
        uVar5 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar13) goto LAB_0169f8fc;
      iVar3 = (int)((ulonglong)(uVar13 << 3) * 0x24924925 >> 0x20);
      uVar5 = (0xffffffffU >> LZCOUNT((iVar3 + (uVar13 * 8 - iVar3 >> 1) >> 2) - 1)) + 1;
    }
    uVar13 = (uint)((ulonglong)uVar5 * 0x30);
    if ((int)((ulonglong)uVar5 * 0x30 >> 0x20) == 0) {
      uVar18 = uVar5 + 4;
      uVar20 = uVar13 + uVar18;
      if ((!CARRY4(uVar13,uVar18)) && (uVar20 < 0x7ffffff9)) {
        iVar3 = thunk_FUN_016d4a50(uVar20);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,uVar20);
        }
        puVar14 = (uint *)(iVar3 + uVar13);
        FUN_016dd606(puVar14,0xff,uVar18);
        uVar18 = uVar5 - 1;
        uVar13 = uVar18;
        if (7 < uVar18) {
          uVar13 = (uVar5 & 0xfffffff8) - (uVar5 >> 3);
        }
        if (uVar17 == 0) {
          iVar3 = 0;
        }
        else {
          uVar6 = *param_3;
          iVar3 = 0;
          puVar19 = (uint *)*param_1;
          uVar7 = param_3[1];
          uVar8 = param_3[2];
          uVar9 = param_3[3];
          uVar5 = ~*puVar19 & 0x80808080;
          puVar15 = puVar19;
          do {
            if (uVar5 == 0) {
              do {
                puVar15 = puVar15 + 1;
                iVar3 = iVar3 + 4;
              } while ((*puVar15 & 0x80808080) == 0x80808080);
              uVar5 = *puVar15 & 0x80808080 ^ 0x80808080;
            }
            uVar16 = iVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                            (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3);
            uVar20 = FUN_016a7780(uVar6,uVar7,uVar8,uVar9,puVar19 + uVar16 * -0xc + -0xc);
            uVar10 = uVar18 & uVar20;
            uVar12 = *(uint *)((int)puVar14 + uVar10) & 0x80808080;
            if (uVar12 == 0) {
              iVar4 = 4;
              do {
                uVar10 = uVar10 + iVar4;
                iVar4 = iVar4 + 4;
                uVar10 = uVar10 & uVar18;
                uVar12 = *(uint *)((int)puVar14 + uVar10) & 0x80808080;
              } while (uVar12 == 0);
            }
            uVar10 = uVar10 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                             (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                     uVar18;
            if (-1 < *(char *)((int)puVar14 + uVar10)) {
              uVar10 = *puVar14 & 0x80808080;
              uVar10 = (uint)LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                     (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
            }
            uVar5 = uVar5 - 1 & uVar5;
            bVar2 = (byte)(uVar20 >> 0x19);
            *(byte *)((int)puVar14 + uVar10) = bVar2;
            uVar17 = uVar17 - 1;
            *(byte *)((int)puVar14 + (uVar10 - 4 & uVar18) + 4) = bVar2;
            FUN_016dd1aa(puVar14 + ~uVar10 * 0xc,puVar19 + ~uVar16 * 0xc,0x30);
          } while (uVar17 != 0);
          iVar3 = param_1[3];
        }
        iVar4 = *param_1;
        iVar11 = param_1[1];
        *param_1 = (int)puVar14;
        param_1[1] = uVar18;
        param_1[2] = uVar13 - iVar3;
        param_1[3] = iVar3;
        if (iVar11 == 0) {
          return 0x80000001;
        }
        iVar3 = iVar11 * 0x30 + 0x30;
        if (iVar11 + iVar3 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar4 - iVar3);
        return 0x80000001;
      }
    }
  }
LAB_0169f8fc:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

