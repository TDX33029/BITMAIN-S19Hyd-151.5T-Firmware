// FUN_01337680 @ 01337680 size=1484 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_01337680(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  bool bVar24;
  bool bVar25;
  
  uVar21 = param_1[3];
  uVar3 = uVar21 + 1;
  if (0xfffffffe < uVar21) goto LAB_01337b90;
  uVar22 = param_1[1];
  uVar12 = uVar22 + 1;
  uVar19 = (uVar12 & 0xfffffff8) - (uVar12 >> 3);
  uVar13 = uVar19;
  if (uVar22 < 8) {
    uVar13 = uVar22;
  }
  if (uVar13 >> 1 < uVar3) {
    uVar13 = uVar13 + 1;
    if (uVar3 < uVar13) {
      uVar3 = uVar13;
    }
    if (uVar3 < 0xf) {
      uVar19 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar19 = 4;
      }
      uVar3 = uVar19 + 4;
      uVar13 = uVar3 + uVar19 * 0x10;
      if (uVar13 < uVar3) goto LAB_01337b90;
    }
    else {
      bVar25 = 0x1ffffffe < uVar3;
      bVar24 = uVar3 == 0x1fffffff;
      if (uVar3 < 0x20000000) {
        iVar14 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
        iVar5 = uVar3 * 8;
        uVar3 = 0xffffffff;
        uVar13 = LZCOUNT((iVar14 + ((uint)(iVar5 - iVar14) >> 1) >> 2) - 1);
        bVar25 = 0xffffffd < 0xffffffffU >> uVar13;
        bVar24 = 0xffffffffU >> uVar13 == 0xffffffe;
      }
      if (bVar25 && !bVar24) goto LAB_01337b90;
      uVar3 = uVar3 >> (uVar13 & 0xff);
      uVar19 = uVar3 + 1;
      uVar3 = uVar3 + 5;
      uVar13 = uVar3 + uVar19 * 0x10;
      if (uVar13 < uVar3) goto LAB_01337b90;
    }
    if (0x7ffffffc < uVar13) {
LAB_01337b90:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
    }
    iVar5 = thunk_FUN_016d4a50(uVar13);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,uVar13);
    }
    puVar16 = (uint *)(iVar5 + uVar19 * 0x10);
    FUN_016dd606(puVar16,0xff,uVar3);
    uVar13 = uVar19 - 1;
    uVar3 = uVar13;
    if (7 < uVar13) {
      uVar3 = (uVar19 & 0xfffffff8) - (uVar19 >> 3);
    }
    if (uVar21 == 0) {
      puVar23 = (uint *)*param_1;
      uVar21 = 0;
    }
    else {
      puVar23 = (uint *)*param_1;
      uVar7 = *param_2;
      uVar12 = ~*puVar23 & 0x80808080;
      uVar8 = param_2[1];
      uVar9 = param_2[2];
      uVar10 = param_2[3];
      iVar5 = 0;
      puVar20 = puVar23;
      uVar19 = uVar21;
      do {
        if (uVar12 == 0) {
          do {
            puVar20 = puVar20 + 1;
            iVar5 = iVar5 + 4;
          } while ((*puVar20 & 0x80808080) == 0x80808080);
          uVar12 = *puVar20 & 0x80808080 ^ 0x80808080;
        }
        uVar18 = iVar5 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                        (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3);
        uVar6 = FUN_006a526c(uVar7,uVar8,uVar9,uVar10,puVar23[uVar18 * -4 + -3],
                             puVar23[uVar18 * -4 + -2]);
        uVar11 = uVar13 & uVar6;
        uVar15 = *(uint *)((int)puVar16 + uVar11) & 0x80808080;
        if (uVar15 == 0) {
          iVar14 = 4;
          do {
            uVar11 = uVar11 + iVar14;
            iVar14 = iVar14 + 4;
            uVar11 = uVar11 & uVar13;
            uVar15 = *(uint *)((int)puVar16 + uVar11) & 0x80808080;
          } while (uVar15 == 0);
        }
        uVar11 = uVar11 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                         (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                 uVar13;
        if (-1 < *(char *)((int)puVar16 + uVar11)) {
          uVar11 = *puVar16 & 0x80808080;
          uVar11 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                 (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
        }
        uVar12 = uVar12 - 1 & uVar12;
        bVar2 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)puVar16 + uVar11) = bVar2;
        *(byte *)((int)puVar16 + (uVar11 - 4 & uVar13) + 4) = bVar2;
        puVar4 = puVar23 + ~uVar18 * 4;
        uVar19 = uVar19 - 1;
        uVar15 = puVar4[1];
        uVar18 = puVar4[2];
        uVar6 = puVar4[3];
        puVar17 = puVar16 + ~uVar11 * 4;
        *puVar17 = *puVar4;
        puVar17[3] = uVar6;
        puVar17[2] = uVar18;
        puVar17[1] = uVar15;
      } while (uVar19 != 0);
    }
    *param_1 = puVar16;
    param_1[1] = uVar13;
    param_1[2] = uVar3 - uVar21;
    if ((uVar22 != 0) && (iVar5 = uVar22 * 0x10 + 0x10, uVar22 + iVar5 != -5)) {
      thunk_FUN_016d3fb4((int)puVar23 - iVar5);
      return 0x80000001;
    }
  }
  else {
    if (uVar12 == 0) {
      uVar19 = 0;
    }
    else {
      uVar3 = uVar12 >> 2;
      if ((uVar12 & 3) != 0) {
        uVar3 = (uVar12 >> 2) + 1;
      }
      puVar16 = (uint *)*param_1;
      iVar5 = 0;
      do {
        puVar16[-iVar5] = (~(puVar16[-iVar5] >> 7) & 0x1010101) + (puVar16[-iVar5] | 0x7f7f7f7f);
        iVar5 = iVar5 + -1;
      } while (-iVar5 != uVar3);
      puVar23 = puVar16 + 1;
      if (uVar12 < 4) {
        FUN_016dd52c(puVar23,puVar16);
      }
      else {
        *(uint *)((int)puVar16 + uVar12) = *puVar16;
      }
      uVar10 = param_2[1];
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      uVar7 = *param_2;
      uVar3 = 0;
      do {
        if (*(char *)((int)puVar16 + uVar3) == -0x80) {
          puVar20 = puVar16 + ~uVar3 * 4;
          while( true ) {
            uVar12 = FUN_006a526c(uVar7,uVar10,uVar8,uVar9,puVar16[uVar3 * -4 + -3],
                                  puVar16[uVar3 * -4 + -2]);
            uVar6 = uVar22 & uVar12;
            uVar11 = *(uint *)((int)puVar16 + uVar6) & 0x80808080;
            uVar13 = uVar6;
            if (uVar11 == 0) {
              iVar5 = 4;
              do {
                uVar13 = uVar13 + iVar5 & uVar22;
                iVar5 = iVar5 + 4;
                uVar11 = *(uint *)((int)puVar16 + uVar13) & 0x80808080;
              } while (uVar11 == 0);
            }
            uVar13 = uVar13 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                             (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                     uVar22;
            if (-1 < *(char *)((int)puVar16 + uVar13)) {
              uVar13 = *puVar16 & 0x80808080;
              uVar13 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                     (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar12 >> 0x18);
            if (((uVar13 - uVar6 ^ uVar3 - uVar6) & uVar22) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar16 + uVar3) = bVar2;
              *(byte *)((int)puVar23 + (uVar22 & uVar3 - 4)) = bVar2;
              goto LAB_013378e8;
            }
            cVar1 = *(char *)((int)puVar16 + uVar13);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar16 + uVar13) = bVar2;
            *(byte *)((int)puVar23 + (uVar13 - 4 & uVar22)) = bVar2;
            puVar4 = puVar16 + ~uVar13 * 4;
            if (cVar1 == -1) break;
            uVar13 = puVar20[2];
            uVar12 = puVar20[3];
            puVar20[2] = puVar4[2];
            uVar6 = puVar4[3];
            puVar4[2] = uVar13;
            uVar11 = *puVar20;
            uVar15 = puVar20[1];
            uVar13 = puVar4[1];
            *puVar20 = *puVar4;
            *puVar4 = uVar11;
            puVar20[1] = uVar13;
            puVar4[1] = uVar15;
            puVar20[3] = uVar6;
            puVar4[3] = uVar12;
          }
          *(undefined1 *)((int)puVar16 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar23 + (uVar22 & uVar3 - 4)) = 0xff;
          uVar13 = *puVar20;
          uVar12 = puVar20[1];
          uVar6 = puVar20[2];
          puVar4[3] = puVar20[3];
          puVar4[2] = uVar6;
          puVar4[1] = uVar12;
          *puVar4 = uVar13;
        }
LAB_013378e8:
        bVar24 = uVar3 != uVar22;
        uVar3 = uVar3 + 1;
      } while (bVar24);
      if (uVar22 < 8) {
        uVar19 = uVar22;
      }
    }
    param_1[2] = uVar19 - uVar21;
  }
  return 0x80000001;
}

