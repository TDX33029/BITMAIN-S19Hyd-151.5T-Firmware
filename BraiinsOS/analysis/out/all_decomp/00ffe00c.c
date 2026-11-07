// FUN_00ffe00c @ 00ffe00c size=1496 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_00ffe00c(int *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  
  uVar23 = param_1[3];
  uVar21 = uVar23 + 1;
  if (0xfffffffe < uVar23) goto LAB_00ffe524;
  uVar24 = param_1[1];
  uVar8 = uVar24 + 1;
  uVar15 = uVar24;
  if (7 < uVar24) {
    uVar15 = (uVar8 & 0xfffffff8) - (uVar8 >> 3);
  }
  if (uVar15 >> 1 < uVar21) {
    uVar15 = uVar15 + 1;
    if (uVar21 < uVar15) {
      uVar21 = uVar15;
    }
    if (uVar21 < 0xf) {
      uVar15 = (uVar21 & 8) + 8;
      if (uVar21 < 4) {
        uVar15 = 4;
      }
      uVar21 = uVar15 + 4;
      uVar8 = uVar21 + uVar15 * 0x10;
      if (uVar8 < uVar21) goto LAB_00ffe524;
    }
    else {
      bVar26 = 0x1ffffffe < uVar21;
      bVar25 = uVar21 == 0x1fffffff;
      piVar3 = param_1;
      if (uVar21 < 0x20000000) {
        iVar4 = (int)((ulonglong)(uVar21 << 3) * 0x24924925 >> 0x20);
        piVar3 = (int *)0xffffffff;
        uVar15 = LZCOUNT((iVar4 + (uVar21 * 8 - iVar4 >> 1) >> 2) - 1);
        bVar26 = 0xffffffd < 0xffffffffU >> uVar15;
        bVar25 = 0xffffffffU >> uVar15 == 0xffffffe;
      }
      if (bVar26 && !bVar25) goto LAB_00ffe524;
      uVar21 = (uint)piVar3 >> (uVar15 & 0xff);
      uVar15 = uVar21 + 1;
      uVar21 = uVar21 + 5;
      uVar8 = uVar21 + uVar15 * 0x10;
      if (uVar8 < uVar21) goto LAB_00ffe524;
    }
    if (0x7ffffffc < uVar8) {
LAB_00ffe524:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
    }
    iVar4 = thunk_FUN_016d4a50(uVar8);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,uVar8);
    }
    puVar19 = (uint *)(iVar4 + uVar15 * 0x10);
    FUN_016dd606(puVar19,0xff,uVar21);
    uVar8 = uVar15 - 1;
    uVar21 = uVar8;
    if (7 < uVar8) {
      uVar21 = (uVar15 & 0xfffffff8) - (uVar15 >> 3);
    }
    if (uVar23 == 0) {
      uVar23 = 0;
    }
    else {
      uVar9 = *param_2;
      puVar22 = (uint *)*param_1;
      iVar4 = 0;
      uVar10 = param_2[1];
      uVar11 = param_2[2];
      uVar12 = param_2[3];
      uVar24 = ~*puVar22 & 0x80808080;
      uVar15 = uVar23;
      puVar18 = puVar22;
      do {
        if (uVar24 == 0) {
          do {
            puVar18 = puVar18 + 1;
            iVar4 = iVar4 + 4;
          } while ((*puVar18 & 0x80808080) == 0x80808080);
          uVar24 = *puVar18 & 0x80808080 ^ 0x80808080;
        }
        uVar17 = iVar4 + ((uint)LZCOUNT(uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                                        (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) >> 3);
        uVar5 = FUN_01003d44(uVar9,uVar10,uVar11,uVar12,puVar22[uVar17 * -4 + -3],
                             puVar22[uVar17 * -4 + -2]);
        uVar6 = uVar8 & uVar5;
        uVar16 = *(uint *)((int)puVar19 + uVar6) & 0x80808080;
        if (uVar16 == 0) {
          iVar7 = 4;
          do {
            uVar6 = uVar6 + iVar7;
            iVar7 = iVar7 + 4;
            uVar6 = uVar6 & uVar8;
            uVar16 = *(uint *)((int)puVar19 + uVar6) & 0x80808080;
          } while (uVar16 == 0);
        }
        uVar6 = uVar6 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                       (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) & uVar8;
        if (-1 < *(char *)((int)puVar19 + uVar6)) {
          uVar6 = *puVar19 & 0x80808080;
          uVar6 = (uint)LZCOUNT((*puVar19 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
        }
        uVar24 = uVar24 - 1 & uVar24;
        bVar2 = (byte)(uVar5 >> 0x19);
        *(byte *)((int)puVar19 + uVar6) = bVar2;
        uVar15 = uVar15 - 1;
        *(byte *)((int)puVar19 + (uVar6 - 4 & uVar8) + 4) = bVar2;
        puVar13 = puVar22 + ~uVar17 * 4;
        uVar16 = puVar13[1];
        uVar17 = puVar13[2];
        uVar5 = puVar13[3];
        puVar20 = puVar19 + ~uVar6 * 4;
        *puVar20 = *puVar13;
        puVar20[3] = uVar5;
        puVar20[2] = uVar17;
        puVar20[1] = uVar16;
      } while (uVar15 != 0);
    }
    iVar4 = *param_1;
    iVar7 = param_1[1];
    *param_1 = (int)puVar19;
    param_1[1] = uVar8;
    param_1[2] = uVar21 - uVar23;
    param_1[3] = uVar23;
    if ((iVar7 != 0) && (iVar14 = iVar7 * 0x10 + 0x10, iVar7 + iVar14 != -5)) {
      thunk_FUN_016d3fb4(iVar4 - iVar14);
      return 0x80000001;
    }
  }
  else {
    if (uVar8 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = uVar8 >> 2;
      puVar19 = (uint *)*param_1;
      if ((uVar8 & 3) != 0) {
        uVar21 = (uVar8 >> 2) + 1;
      }
      iVar4 = 0;
      do {
        puVar19[-iVar4] = (~(puVar19[-iVar4] >> 7) & 0x1010101) + (puVar19[-iVar4] | 0x7f7f7f7f);
        iVar4 = iVar4 + -1;
      } while (-iVar4 != uVar21);
      if (uVar8 < 4) {
        FUN_016dd52c(puVar19 + 1,puVar19);
      }
      else {
        *(uint *)((int)puVar19 + uVar8) = *puVar19;
      }
      uVar11 = param_2[2];
      uVar12 = param_2[3];
      uVar9 = *param_2;
      uVar10 = param_2[1];
      uVar21 = 0;
      do {
        if (*(char *)((int)puVar19 + uVar21) == -0x80) {
          puVar22 = puVar19 + ~uVar21 * 4;
          puVar18 = puVar19;
          while( true ) {
            uVar15 = FUN_01003d44(uVar9,uVar10,uVar11,uVar12,puVar18[uVar21 * -4 + -3],
                                  puVar18[uVar21 * -4 + -2]);
            uVar8 = param_1[1];
            uVar5 = uVar8 & uVar15;
            uVar6 = *(uint *)((int)puVar18 + uVar5) & 0x80808080;
            uVar23 = uVar5;
            if (uVar6 == 0) {
              iVar4 = 4;
              do {
                uVar23 = uVar23 + iVar4 & uVar8;
                iVar4 = iVar4 + 4;
                uVar6 = *(uint *)((int)puVar18 + uVar23) & 0x80808080;
              } while (uVar6 == 0);
            }
            uVar23 = uVar23 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                             (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                     uVar8;
            if (-1 < *(char *)((int)puVar18 + uVar23)) {
              uVar23 = *puVar18 & 0x80808080;
              uVar23 = (uint)LZCOUNT((*puVar18 & 0x80) << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                                     (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar15 >> 0x18);
            if (((uVar23 - uVar5 ^ uVar21 - uVar5) & uVar8) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar18 + uVar21) = bVar2;
              puVar19 = (uint *)*param_1;
              *(byte *)((int)puVar19 + (uVar8 & uVar21 - 4) + 4) = bVar2;
              goto LAB_00ffe274;
            }
            cVar1 = *(char *)((int)puVar18 + uVar23);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar18 + uVar23) = bVar2;
            puVar19 = (uint *)*param_1;
            *(byte *)((int)puVar19 + (uVar23 - 4 & uVar8) + 4) = bVar2;
            puVar18 = puVar18 + ~uVar23 * 4;
            if (cVar1 == -1) break;
            uVar23 = *puVar22;
            *puVar22 = *puVar18;
            *puVar18 = uVar23;
            uVar23 = puVar18[1];
            puVar18[1] = puVar22[1];
            puVar22[1] = uVar23;
            uVar23 = puVar22[2];
            puVar22[2] = puVar18[2];
            puVar18[2] = uVar23;
            uVar23 = puVar18[3];
            puVar18[3] = puVar22[3];
            puVar22[3] = uVar23;
            puVar18 = (uint *)*param_1;
          }
          uVar23 = param_1[1];
          *(undefined1 *)((int)puVar19 + uVar21) = 0xff;
          *(undefined1 *)((int)puVar19 + (uVar23 & uVar21 - 4) + 4) = 0xff;
          uVar8 = *puVar22;
          uVar15 = puVar22[1];
          uVar23 = puVar22[2];
          puVar18[3] = puVar22[3];
          puVar18[2] = uVar23;
          puVar18[1] = uVar15;
          *puVar18 = uVar8;
        }
LAB_00ffe274:
        bVar25 = uVar21 != uVar24;
        uVar21 = uVar21 + 1;
      } while (bVar25);
      uVar21 = param_1[1];
      if (7 < uVar21) {
        uVar21 = (uVar21 + 1 & 0xfffffff8) - (uVar21 + 1 >> 3);
      }
    }
    param_1[2] = uVar21 - param_1[3];
  }
  return 0x80000001;
}

