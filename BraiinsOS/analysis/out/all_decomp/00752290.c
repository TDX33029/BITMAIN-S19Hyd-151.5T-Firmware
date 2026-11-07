// FUN_00752290 @ 00752290 size=1404 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_00752290(int *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  
  uVar20 = param_1[3];
  uVar19 = uVar20 + 1;
  if (0xfffffffe < uVar20) goto LAB_00752758;
  uVar21 = param_1[1];
  uVar13 = uVar21 + 1;
  uVar15 = uVar21;
  if (7 < uVar21) {
    uVar15 = (uVar13 & 0xfffffff8) - (uVar13 >> 3);
  }
  if (uVar15 >> 1 < uVar19) {
    uVar15 = uVar15 + 1;
    if (uVar19 < uVar15) {
      uVar19 = uVar15;
    }
    if (uVar19 < 0xf) {
      uVar15 = (uVar19 & 8) + 8;
      if (uVar19 < 4) {
        uVar15 = 4;
      }
      uVar19 = uVar15 + 4;
      uVar13 = uVar19 + uVar15 * 8;
      if (uVar13 < uVar19) goto LAB_00752758;
    }
    else {
      bVar24 = 0x1ffffffe < uVar19;
      bVar23 = uVar19 == 0x1fffffff;
      piVar3 = param_1;
      if (uVar19 < 0x20000000) {
        iVar4 = (int)((ulonglong)(uVar19 << 3) * 0x24924925 >> 0x20);
        piVar3 = (int *)0xffffffff;
        uVar15 = LZCOUNT((iVar4 + (uVar19 * 8 - iVar4 >> 1) >> 2) - 1);
        bVar24 = 0x1ffffffd < 0xffffffffU >> uVar15;
        bVar23 = 0xffffffffU >> uVar15 == 0x1ffffffe;
      }
      if (bVar24 && !bVar23) goto LAB_00752758;
      uVar19 = (uint)piVar3 >> (uVar15 & 0xff);
      uVar15 = uVar19 + 1;
      uVar19 = uVar19 + 5;
      uVar13 = uVar19 + uVar15 * 8;
      if (uVar13 < uVar19) goto LAB_00752758;
    }
    if (0x7ffffffc < uVar13) {
LAB_00752758:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
    }
    iVar4 = thunk_FUN_016d4a50(uVar13);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,uVar13);
    }
    puVar18 = (uint *)(iVar4 + uVar15 * 8);
    FUN_016dd606(puVar18,0xff,uVar19);
    uVar13 = uVar15 - 1;
    uVar19 = uVar13;
    if (7 < uVar13) {
      uVar19 = (uVar15 & 0xfffffff8) - (uVar15 >> 3);
    }
    if (uVar20 == 0) {
      uVar20 = 0;
    }
    else {
      iVar4 = 0;
      puVar10 = (uint *)*param_1;
      uVar21 = ~*puVar10 & 0x80808080;
      uVar5 = *param_2;
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      uVar15 = uVar20;
      puVar17 = puVar10;
      do {
        if (uVar21 == 0) {
          do {
            puVar17 = puVar17 + 1;
            iVar4 = iVar4 + 4;
          } while ((*puVar17 & 0x80808080) == 0x80808080);
          uVar21 = *puVar17 & 0x80808080 ^ 0x80808080;
        }
        uVar22 = iVar4 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                        (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3);
        uVar9 = FUN_006a5594(uVar5,uVar6,uVar7,uVar8,(short)puVar10[uVar22 * -2 + -2]);
        uVar11 = uVar13 & uVar9;
        uVar16 = *(uint *)((int)puVar18 + uVar11) & 0x80808080;
        if (uVar16 == 0) {
          iVar12 = 4;
          do {
            uVar11 = uVar11 + iVar12;
            iVar12 = iVar12 + 4;
            uVar11 = uVar11 & uVar13;
            uVar16 = *(uint *)((int)puVar18 + uVar11) & 0x80808080;
          } while (uVar16 == 0);
        }
        uVar11 = uVar11 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                         (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                 uVar13;
        if (-1 < *(char *)((int)puVar18 + uVar11)) {
          uVar11 = *puVar18 & 0x80808080;
          uVar11 = (uint)LZCOUNT((*puVar18 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                 (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
        }
        uVar21 = uVar21 - 1 & uVar21;
        bVar2 = (byte)(uVar9 >> 0x19);
        *(byte *)((int)puVar18 + uVar11) = bVar2;
        uVar15 = uVar15 - 1;
        *(byte *)((int)puVar18 + (uVar11 - 4 & uVar13) + 4) = bVar2;
        uVar9 = (puVar10 + ~uVar22 * 2)[1];
        puVar18[~uVar11 * 2] = puVar10[~uVar22 * 2];
        (puVar18 + ~uVar11 * 2)[1] = uVar9;
      } while (uVar15 != 0);
    }
    iVar4 = *param_1;
    iVar12 = param_1[1];
    *param_1 = (int)puVar18;
    param_1[1] = uVar13;
    param_1[2] = uVar19 - uVar20;
    param_1[3] = uVar20;
    if ((iVar12 != 0) && (iVar14 = iVar12 * 8 + 8, iVar12 + iVar14 != -5)) {
      thunk_FUN_016d3fb4(iVar4 - iVar14);
      return 0x80000001;
    }
  }
  else {
    if (uVar13 == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = uVar13 >> 2;
      puVar18 = (uint *)*param_1;
      if ((uVar13 & 3) != 0) {
        uVar19 = (uVar13 >> 2) + 1;
      }
      iVar4 = 0;
      do {
        puVar18[-iVar4] = (~(puVar18[-iVar4] >> 7) & 0x1010101) + (puVar18[-iVar4] | 0x7f7f7f7f);
        iVar4 = iVar4 + -1;
      } while (-iVar4 != uVar19);
      if (uVar13 < 4) {
        FUN_016dd52c(puVar18 + 1,puVar18);
      }
      else {
        *(uint *)((int)puVar18 + uVar13) = *puVar18;
      }
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      uVar5 = *param_2;
      uVar6 = param_2[1];
      uVar19 = 0;
      do {
        if (*(char *)((int)puVar18 + uVar19) == -0x80) {
          puVar10 = puVar18 + ~uVar19 * 2;
          puVar17 = puVar18;
          while( true ) {
            uVar15 = FUN_006a5594(uVar5,uVar6,uVar7,uVar8,(short)puVar17[uVar19 * -2 + -2]);
            uVar13 = param_1[1];
            uVar9 = uVar13 & uVar15;
            uVar11 = *(uint *)((int)puVar17 + uVar9) & 0x80808080;
            uVar20 = uVar9;
            if (uVar11 == 0) {
              iVar4 = 4;
              do {
                uVar20 = uVar20 + iVar4 & uVar13;
                iVar4 = iVar4 + 4;
                uVar11 = *(uint *)((int)puVar17 + uVar20) & 0x80808080;
              } while (uVar11 == 0);
            }
            uVar20 = uVar20 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                             (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                     uVar13;
            if (-1 < *(char *)((int)puVar17 + uVar20)) {
              uVar20 = *puVar17 & 0x80808080;
              uVar20 = (uint)LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                     (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar15 >> 0x18);
            if (((uVar20 - uVar9 ^ uVar19 - uVar9) & uVar13) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar17 + uVar19) = bVar2;
              puVar18 = (uint *)*param_1;
              *(byte *)((int)puVar18 + (uVar13 & uVar19 - 4) + 4) = bVar2;
              goto LAB_007524d8;
            }
            cVar1 = *(char *)((int)puVar17 + uVar20);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar17 + uVar20) = bVar2;
            puVar18 = (uint *)*param_1;
            *(byte *)((int)puVar18 + (uVar20 - 4 & uVar13) + 4) = bVar2;
            puVar17 = puVar17 + ~uVar20 * 2;
            if (cVar1 == -1) break;
            uVar20 = *puVar17;
            *puVar17 = *puVar10;
            *puVar10 = uVar20;
            uVar20 = puVar10[1];
            puVar10[1] = puVar17[1];
            puVar17[1] = uVar20;
            puVar17 = (uint *)*param_1;
          }
          uVar20 = param_1[1];
          *(undefined1 *)((int)puVar18 + uVar19) = 0xff;
          *(undefined1 *)((int)puVar18 + (uVar20 & uVar19 - 4) + 4) = 0xff;
          uVar20 = *puVar10;
          puVar17[1] = puVar10[1];
          *puVar17 = uVar20;
        }
LAB_007524d8:
        bVar23 = uVar19 != uVar21;
        uVar19 = uVar19 + 1;
      } while (bVar23);
      uVar19 = param_1[1];
      if (7 < uVar19) {
        uVar19 = (uVar19 + 1 & 0xfffffff8) - (uVar19 + 1 >> 3);
      }
    }
    param_1[2] = uVar19 - param_1[3];
  }
  return 0x80000001;
}

