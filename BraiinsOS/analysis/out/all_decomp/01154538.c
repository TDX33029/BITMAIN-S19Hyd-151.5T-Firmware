// FUN_01154538 @ 01154538 size=1452 calls_out=8 calls_in=1
// strings: 

undefined4 FUN_01154538(int *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  
  uVar20 = param_1[3];
  uVar3 = uVar20 + param_2;
  if (!CARRY4(uVar20,param_2)) {
    uVar19 = param_1[1];
    uVar22 = uVar19 + 1;
    uVar7 = uVar19;
    if (7 < uVar19) {
      uVar7 = (uVar22 & 0xfffffff8) - (uVar22 >> 3);
    }
    if (uVar3 <= uVar7 >> 1) {
      if (uVar22 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar22 >> 2;
        if ((uVar22 & 3) != 0) {
          uVar3 = (uVar22 >> 2) + 1;
        }
        puVar16 = (uint *)*param_1;
        iVar5 = 0;
        do {
          puVar16[-iVar5] = (~(puVar16[-iVar5] >> 7) & 0x1010101) + (puVar16[-iVar5] | 0x7f7f7f7f);
          iVar5 = iVar5 + -1;
        } while (-iVar5 != uVar3);
        puVar18 = puVar16 + 1;
        if (uVar22 < 4) {
          FUN_016dd52c(puVar18,puVar16,uVar22);
        }
        else {
          *(uint *)((int)puVar16 + uVar22) = *puVar16;
        }
        uVar8 = *param_3;
        uVar10 = param_3[2];
        uVar11 = param_3[3];
        uVar7 = param_1[1];
        uVar9 = param_3[1];
        uVar3 = 0;
        do {
          if (*(char *)((int)puVar16 + uVar3) == -0x80) {
            puVar17 = puVar16 + ~uVar3 * 6;
            while( true ) {
              uVar6 = FUN_006a526c(uVar8,uVar9,uVar10,uVar11,puVar16[uVar3 * -6 + -5],
                                   puVar16[uVar3 * -6 + -4]);
              uVar12 = uVar7 & uVar6;
              uVar15 = *(uint *)((int)puVar16 + uVar12) & 0x80808080;
              uVar22 = uVar12;
              if (uVar15 == 0) {
                iVar5 = 4;
                do {
                  uVar22 = uVar22 + iVar5 & uVar7;
                  iVar5 = iVar5 + 4;
                  uVar15 = *(uint *)((int)puVar16 + uVar22) & 0x80808080;
                } while (uVar15 == 0);
              }
              uVar22 = uVar22 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                               (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3)
                       & uVar7;
              if (-1 < *(char *)((int)puVar16 + uVar22)) {
                uVar22 = *puVar16 & 0x80808080;
                uVar22 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                       (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3;
              }
              bVar2 = (byte)(uVar6 >> 0x18);
              if (((uVar22 - uVar12 ^ uVar3 - uVar12) & uVar7) < 4) {
                bVar2 = bVar2 >> 1;
                *(byte *)((int)puVar16 + uVar3) = bVar2;
                *(byte *)((int)puVar18 + (uVar7 & uVar3 - 4)) = bVar2;
                goto LAB_011547a4;
              }
              cVar1 = *(char *)((int)puVar16 + uVar22);
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar16 + uVar22) = bVar2;
              *(byte *)((int)puVar18 + (uVar22 - 4 & uVar7)) = bVar2;
              puVar4 = puVar16 + ~uVar22 * 6;
              if (cVar1 == -1) break;
              uVar22 = *puVar17;
              uVar6 = puVar17[1];
              uVar12 = puVar4[1];
              *puVar17 = *puVar4;
              *puVar4 = uVar22;
              puVar4[1] = uVar6;
              puVar17[1] = uVar12;
              uVar22 = puVar17[2];
              uVar12 = puVar17[3];
              uVar6 = puVar4[3];
              puVar17[2] = puVar4[2];
              puVar17[3] = uVar6;
              puVar4[2] = uVar22;
              puVar4[3] = uVar12;
              uVar6 = puVar17[4];
              uVar22 = puVar4[5];
              puVar17[4] = puVar4[4];
              puVar4[5] = puVar17[5];
              puVar17[5] = uVar22;
              puVar4[4] = uVar6;
            }
            *(undefined1 *)((int)puVar16 + uVar3) = 0xff;
            *(undefined1 *)((int)puVar18 + (uVar19 & uVar3 - 4)) = 0xff;
            FUN_016dd1aa(puVar4,puVar17,0x18);
          }
LAB_011547a4:
          bVar23 = uVar3 != uVar19;
          uVar3 = uVar3 + 1;
        } while (bVar23);
        uVar3 = param_1[1];
        if (7 < uVar3) {
          uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
        }
      }
      param_1[2] = uVar3 - uVar20;
      return 0x80000001;
    }
    if (uVar3 < uVar7 + 1) {
      uVar3 = uVar7 + 1;
    }
    if (uVar3 < 0xf) {
      uVar7 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar7 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_01154a30;
      iVar5 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      uVar7 = (0xffffffffU >> LZCOUNT((iVar5 + (uVar3 * 8 - iVar5 >> 1) >> 2) - 1)) + 1;
    }
    uVar3 = (uint)((ulonglong)uVar7 * 0x18);
    if ((int)((ulonglong)uVar7 * 0x18 >> 0x20) == 0) {
      uVar19 = uVar7 + 4;
      uVar22 = uVar3 + uVar19;
      if ((!CARRY4(uVar3,uVar19)) && (uVar22 < 0x7ffffffd)) {
        iVar5 = thunk_FUN_016d4a50(uVar22);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar22);
        }
        puVar16 = (uint *)(iVar5 + uVar3);
        FUN_016dd606(puVar16,0xff,uVar19);
        uVar19 = uVar7 - 1;
        uVar3 = uVar19;
        if (7 < uVar19) {
          uVar3 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
        }
        if (uVar20 == 0) {
          uVar20 = 0;
        }
        else {
          puVar17 = (uint *)*param_1;
          uVar8 = *param_3;
          uVar9 = param_3[1];
          uVar22 = ~*puVar17 & 0x80808080;
          uVar10 = param_3[2];
          uVar11 = param_3[3];
          iVar5 = 0;
          uVar7 = uVar20;
          puVar18 = puVar17;
          do {
            if (uVar22 == 0) {
              do {
                puVar18 = puVar18 + 1;
                iVar5 = iVar5 + 4;
              } while ((*puVar18 & 0x80808080) == 0x80808080);
              uVar22 = *puVar18 & 0x80808080 ^ 0x80808080;
            }
            uVar21 = iVar5 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                            (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3);
            uVar6 = FUN_006a526c(uVar8,uVar9,uVar10,uVar11,puVar17[uVar21 * -6 + -5],
                                 puVar17[uVar21 * -6 + -4]);
            uVar12 = uVar19 & uVar6;
            uVar15 = *(uint *)((int)puVar16 + uVar12) & 0x80808080;
            if (uVar15 == 0) {
              iVar13 = 4;
              do {
                uVar12 = uVar12 + iVar13;
                iVar13 = iVar13 + 4;
                uVar12 = uVar12 & uVar19;
                uVar15 = *(uint *)((int)puVar16 + uVar12) & 0x80808080;
              } while (uVar15 == 0);
            }
            uVar12 = uVar12 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                             (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                     uVar19;
            if (-1 < *(char *)((int)puVar16 + uVar12)) {
              uVar12 = *puVar16 & 0x80808080;
              uVar12 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                     (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
            }
            uVar22 = uVar22 - 1 & uVar22;
            bVar2 = (byte)(uVar6 >> 0x19);
            *(byte *)((int)puVar16 + uVar12) = bVar2;
            uVar7 = uVar7 - 1;
            *(byte *)((int)puVar16 + (uVar12 - 4 & uVar19) + 4) = bVar2;
            FUN_016dd1aa(puVar16 + ~uVar12 * 6,puVar17 + ~uVar21 * 6,0x18);
          } while (uVar7 != 0);
        }
        iVar5 = *param_1;
        iVar13 = param_1[1];
        *param_1 = (int)puVar16;
        param_1[1] = uVar19;
        param_1[2] = uVar3 - uVar20;
        param_1[3] = uVar20;
        if (iVar13 == 0) {
          return 0x80000001;
        }
        iVar14 = iVar13 * 0x18 + 0x18;
        if (iVar13 + iVar14 == -5) {
          return 0x80000001;
        }
        thunk_FUN_016d3fb4(iVar5 - iVar14);
        return 0x80000001;
      }
    }
  }
LAB_01154a30:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
}

