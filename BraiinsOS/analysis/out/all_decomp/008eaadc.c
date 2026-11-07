// FUN_008eaadc @ 008eaadc size=1500 calls_out=8 calls_in=0
// strings: 

undefined4 FUN_008eaadc(int *param_1,uint param_2,undefined4 *param_3)

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
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  
  uVar17 = param_1[3];
  uVar3 = uVar17 + param_2;
  if (!CARRY4(uVar17,param_2)) {
    uVar19 = param_1[1];
    uVar20 = uVar19 + 1;
    uVar10 = uVar19;
    if (7 < uVar19) {
      uVar10 = (uVar20 & 0xfffffff8) - (uVar20 >> 3);
    }
    if (uVar3 <= uVar10 >> 1) {
      if (uVar20 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar20 >> 2;
        puVar15 = (uint *)*param_1;
        if ((uVar20 & 3) != 0) {
          uVar3 = (uVar20 >> 2) + 1;
        }
        iVar4 = 0;
        do {
          puVar15[-iVar4] = (~(puVar15[-iVar4] >> 7) & 0x1010101) + (puVar15[-iVar4] | 0x7f7f7f7f);
          iVar4 = iVar4 + -1;
        } while (-iVar4 != uVar3);
        if (uVar20 < 4) {
          FUN_016dd52c(puVar15 + 1,puVar15,uVar20);
        }
        else {
          *(uint *)((int)puVar15 + uVar20) = *puVar15;
        }
        uVar5 = *param_3;
        uVar8 = param_3[3];
        uVar6 = param_3[1];
        uVar7 = param_3[2];
        uVar3 = 0;
        do {
          if (*(char *)((int)puVar15 + uVar3) == -0x80) {
            puVar11 = puVar15 + (uVar3 + 1) * -6;
            puVar16 = puVar15;
            while( true ) {
              uVar10 = FUN_006a526c(uVar5,uVar6,uVar7,uVar8,puVar16[uVar3 * -6 + -5],
                                    puVar16[uVar3 * -6 + -4]);
              uVar20 = param_1[1];
              uVar9 = uVar20 & uVar10;
              uVar12 = *(uint *)((int)puVar16 + uVar9) & 0x80808080;
              uVar17 = uVar9;
              if (uVar12 == 0) {
                iVar4 = 4;
                do {
                  uVar17 = uVar17 + iVar4 & uVar20;
                  iVar4 = iVar4 + 4;
                  uVar12 = *(uint *)((int)puVar16 + uVar17) & 0x80808080;
                } while (uVar12 == 0);
              }
              uVar17 = uVar17 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                               (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3)
                       & uVar20;
              if (-1 < *(char *)((int)puVar16 + uVar17)) {
                uVar17 = *puVar16 & 0x80808080;
                uVar17 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                       (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar10 >> 0x18);
              if (((uVar17 - uVar9 ^ uVar3 - uVar9) & uVar20) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar16 + uVar3) = bVar2;
                puVar15 = (uint *)*param_1;
                *(byte *)((int)puVar15 + (uVar20 & uVar3 - 4) + 4) = bVar2;
                goto LAB_008ead60;
              }
              cVar1 = *(char *)((int)puVar16 + uVar17);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar16 + uVar17) = bVar2;
              puVar15 = (uint *)*param_1;
              *(byte *)((int)puVar15 + (uVar17 - 4 & uVar20) + 4) = bVar2;
              if (cVar1 == -1) break;
              uVar10 = *puVar11;
              *puVar11 = puVar16[uVar17 * -6 + -6];
              puVar16[uVar17 * -6 + -6] = uVar10;
              uVar10 = puVar16[uVar17 * -6 + -5];
              puVar16[uVar17 * -6 + -5] = puVar11[1];
              puVar11[1] = uVar10;
              uVar10 = puVar11[2];
              puVar11[2] = puVar16[uVar17 * -6 + -4];
              puVar16[uVar17 * -6 + -4] = uVar10;
              uVar10 = puVar16[uVar17 * -6 + -3];
              puVar16[uVar17 * -6 + -3] = puVar11[3];
              puVar11[3] = uVar10;
              uVar10 = puVar11[4];
              puVar11[4] = puVar16[uVar17 * -6 + -2];
              puVar16[uVar17 * -6 + -2] = uVar10;
              uVar10 = puVar16[uVar17 * -6 + -1];
              puVar16[uVar17 * -6 + -1] = puVar11[5];
              puVar11[5] = uVar10;
              puVar16 = (uint *)*param_1;
            }
            uVar10 = param_1[1];
            *(undefined1 *)((int)puVar15 + uVar3) = 0xff;
            *(undefined1 *)((int)puVar15 + (uVar10 & uVar3 - 4) + 4) = 0xff;
            FUN_016dd1aa(puVar16 + uVar17 * -6 + -6,puVar11,0x18);
          }
LAB_008ead60:
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
    if (uVar3 < uVar10 + 1) {
      uVar3 = uVar10 + 1;
    }
    if (uVar3 < 0xf) {
      uVar10 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar10 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_008eaff8;
      iVar4 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      uVar10 = (0xffffffffU >> LZCOUNT((iVar4 + (uVar3 * 8 - iVar4 >> 1) >> 2) - 1)) + 1;
    }
    uVar3 = (uint)((ulonglong)uVar10 * 0x18);
    if ((int)((ulonglong)uVar10 * 0x18 >> 0x20) == 0) {
      uVar19 = uVar10 + 4;
      uVar20 = uVar3 + uVar19;
      if ((!CARRY4(uVar3,uVar19)) && (uVar20 < 0x7ffffff9)) {
        iVar4 = thunk_FUN_016d4a50(uVar20);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,uVar20);
        }
        puVar15 = (uint *)(iVar4 + uVar3);
        FUN_016dd606(puVar15,0xff,uVar19);
        uVar19 = uVar10 - 1;
        uVar3 = uVar19;
        if (7 < uVar19) {
          uVar3 = (uVar10 & 0xfffffff8) - (uVar10 >> 3);
        }
        if (uVar17 == 0) {
          uVar17 = 0;
        }
        else {
          iVar4 = 0;
          puVar11 = (uint *)*param_1;
          uVar20 = ~*puVar11 & 0x80808080;
          uVar5 = *param_3;
          uVar6 = param_3[1];
          uVar7 = param_3[2];
          uVar8 = param_3[3];
          uVar10 = uVar17;
          puVar16 = puVar11;
          do {
            if (uVar20 == 0) {
              do {
                puVar16 = puVar16 + 1;
                iVar4 = iVar4 + 4;
              } while ((*puVar16 & 0x80808080) == 0x80808080);
              uVar20 = *puVar16 & 0x80808080 ^ 0x80808080;
            }
            iVar18 = iVar4 + ((uint)LZCOUNT(uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                            (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3);
            uVar9 = FUN_006a526c(uVar5,uVar6,uVar7,uVar8,puVar11[iVar18 * -6 + -5],
                                 puVar11[iVar18 * -6 + -4]);
            uVar12 = uVar19 & uVar9;
            uVar14 = *(uint *)((int)puVar15 + uVar12) & 0x80808080;
            if (uVar14 == 0) {
              iVar13 = 4;
              do {
                uVar12 = uVar12 + iVar13;
                iVar13 = iVar13 + 4;
                uVar12 = uVar12 & uVar19;
                uVar14 = *(uint *)((int)puVar15 + uVar12) & 0x80808080;
              } while (uVar14 == 0);
            }
            uVar12 = uVar12 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                             (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                     uVar19;
            if (-1 < *(char *)((int)puVar15 + uVar12)) {
              uVar12 = *puVar15 & 0x80808080;
              uVar12 = (uint)LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                     (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
            }
            uVar20 = uVar20 - 1 & uVar20;
            bVar2 = (byte)(uVar9 >> 0x19);
            *(byte *)((int)puVar15 + uVar12) = bVar2;
            uVar10 = uVar10 - 1;
            *(byte *)((int)puVar15 + (uVar12 - 4 & uVar19) + 4) = bVar2;
            FUN_016dd1aa(puVar15 + uVar12 * -6 + -6,puVar11 + iVar18 * -6 + -6,0x18);
          } while (uVar10 != 0);
        }
        iVar4 = *param_1;
        iVar18 = param_1[1];
        *param_1 = (int)puVar15;
        param_1[1] = uVar19;
        param_1[2] = uVar3 - uVar17;
        param_1[3] = uVar17;
        if (iVar18 == 0) {
          return 0x80000001;
        }
        iVar13 = iVar18 * 0x18 + 0x18;
        if (iVar18 + iVar13 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar4 - iVar13);
        return 0x80000001;
      }
    }
  }
LAB_008eaff8:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

