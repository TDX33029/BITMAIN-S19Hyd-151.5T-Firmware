// FUN_01336e8c @ 01336e8c size=1400 calls_out=7 calls_in=4
// strings: 

undefined4 FUN_01336e8c(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  bool bVar23;
  bool bVar24;
  uint *local_2c;
  
  uVar20 = param_1[3];
  uVar3 = uVar20 + 1;
  if (0xfffffffe < uVar20) goto LAB_01337348;
  uVar18 = param_1[1];
  uVar12 = uVar18 + 1;
  uVar19 = (uVar12 & 0xfffffff8) - (uVar12 >> 3);
  uVar13 = uVar19;
  if (uVar18 < 8) {
    uVar13 = uVar18;
  }
  if (uVar13 >> 1 < uVar3) {
    uVar13 = uVar13 + 1;
    if (uVar3 < uVar13) {
      uVar3 = uVar13;
    }
    if (uVar3 < 0xf) {
      uVar13 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar13 = 4;
      }
      uVar3 = uVar13 + 4;
      uVar19 = uVar3 + uVar13 * 8;
      if (uVar19 < uVar3) goto LAB_01337348;
    }
    else {
      bVar24 = 0x1ffffffe < uVar3;
      bVar23 = uVar3 == 0x1fffffff;
      if (uVar3 < 0x20000000) {
        iVar14 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
        iVar5 = uVar3 * 8;
        uVar3 = 0xffffffff;
        uVar13 = LZCOUNT((iVar14 + ((uint)(iVar5 - iVar14) >> 1) >> 2) - 1);
        bVar24 = 0x1ffffffd < 0xffffffffU >> uVar13;
        bVar23 = 0xffffffffU >> uVar13 == 0x1ffffffe;
      }
      if (bVar24 && !bVar23) goto LAB_01337348;
      uVar3 = uVar3 >> (uVar13 & 0xff);
      uVar13 = uVar3 + 1;
      uVar3 = uVar3 + 5;
      uVar19 = uVar3 + uVar13 * 8;
      if (uVar19 < uVar3) goto LAB_01337348;
    }
    if (0x7ffffffc < uVar19) {
LAB_01337348:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
    }
    iVar5 = thunk_FUN_016d4a50(uVar19);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,uVar19);
    }
    puVar17 = (uint *)(iVar5 + uVar13 * 8);
    FUN_016dd606(puVar17,0xff,uVar3);
    uVar19 = uVar13 - 1;
    uVar3 = uVar19;
    if (7 < uVar19) {
      uVar3 = (uVar13 & 0xfffffff8) - (uVar13 >> 3);
    }
    if (uVar20 == 0) {
      local_2c = (uint *)*param_1;
      uVar20 = 0;
    }
    else {
      local_2c = (uint *)*param_1;
      iVar5 = 0;
      uVar12 = ~*local_2c & 0x80808080;
      uVar6 = *param_2;
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      uVar13 = uVar20;
      puVar22 = local_2c;
      do {
        if (uVar12 == 0) {
          do {
            puVar22 = puVar22 + 1;
            iVar5 = iVar5 + 4;
          } while ((*puVar22 & 0x80808080) == 0x80808080);
          uVar12 = *puVar22 & 0x80808080 ^ 0x80808080;
        }
        uVar16 = iVar5 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                        (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3);
        uVar10 = FUN_009bd354(uVar6,uVar7,uVar8,uVar9,local_2c[uVar16 * -2 + -2]);
        uVar11 = uVar19 & uVar10;
        uVar15 = *(uint *)((int)puVar17 + uVar11) & 0x80808080;
        if (uVar15 == 0) {
          iVar14 = 4;
          do {
            uVar11 = uVar11 + iVar14;
            iVar14 = iVar14 + 4;
            uVar11 = uVar11 & uVar19;
            uVar15 = *(uint *)((int)puVar17 + uVar11) & 0x80808080;
          } while (uVar15 == 0);
        }
        uVar11 = uVar11 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                         (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                 uVar19;
        if (-1 < *(char *)((int)puVar17 + uVar11)) {
          uVar11 = *puVar17 & 0x80808080;
          uVar11 = (uint)LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                 (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
        }
        uVar12 = uVar12 - 1 & uVar12;
        bVar2 = (byte)(uVar10 >> 0x19);
        *(byte *)((int)puVar17 + uVar11) = bVar2;
        uVar13 = uVar13 - 1;
        *(byte *)((int)puVar17 + (uVar11 - 4 & uVar19) + 4) = bVar2;
        uVar10 = (local_2c + ~uVar16 * 2)[1];
        puVar17[~uVar11 * 2] = local_2c[~uVar16 * 2];
        (puVar17 + ~uVar11 * 2)[1] = uVar10;
      } while (uVar13 != 0);
    }
    *param_1 = puVar17;
    param_1[1] = uVar19;
    param_1[2] = uVar3 - uVar20;
    if ((uVar18 != 0) && (iVar5 = uVar18 * 8 + 8, uVar18 + iVar5 != -5)) {
      thunk_FUN_016d3fb4((int)local_2c - iVar5);
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
      puVar17 = (uint *)*param_1;
      iVar5 = 0;
      do {
        puVar17[-iVar5] = (~(puVar17[-iVar5] >> 7) & 0x1010101) + (puVar17[-iVar5] | 0x7f7f7f7f);
        iVar5 = iVar5 + -1;
      } while (-iVar5 != uVar3);
      puVar22 = puVar17 + 1;
      if (uVar12 < 4) {
        FUN_016dd52c(puVar22,puVar17);
      }
      else {
        *(uint *)((int)puVar17 + uVar12) = *puVar17;
      }
      uVar6 = *param_2;
      uVar7 = param_2[1];
      uVar9 = param_2[3];
      uVar8 = param_2[2];
      uVar3 = 0;
      do {
        if (*(char *)((int)puVar17 + uVar3) == -0x80) {
          puVar21 = puVar17 + ~uVar3 * 2;
          while( true ) {
            uVar12 = FUN_009bd354(uVar6,uVar7,uVar8,uVar9,puVar17[uVar3 * -2 + -2]);
            uVar10 = uVar18 & uVar12;
            uVar11 = *(uint *)((int)puVar17 + uVar10) & 0x80808080;
            uVar13 = uVar10;
            if (uVar11 == 0) {
              iVar5 = 4;
              do {
                uVar13 = uVar13 + iVar5 & uVar18;
                iVar5 = iVar5 + 4;
                uVar11 = *(uint *)((int)puVar17 + uVar13) & 0x80808080;
              } while (uVar11 == 0);
            }
            uVar13 = uVar13 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                             (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                     uVar18;
            if (-1 < *(char *)((int)puVar17 + uVar13)) {
              uVar13 = *puVar17 & 0x80808080;
              uVar13 = (uint)LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                     (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar12 >> 0x18);
            if (((uVar13 - uVar10 ^ uVar3 - uVar10) & uVar18) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar17 + uVar3) = bVar2;
              *(byte *)((int)puVar22 + (uVar18 & uVar3 - 4)) = bVar2;
              goto LAB_013370d0;
            }
            cVar1 = *(char *)((int)puVar17 + uVar13);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar17 + uVar13) = bVar2;
            *(byte *)((int)puVar22 + (uVar13 - 4 & uVar18)) = bVar2;
            puVar4 = puVar17 + ~uVar13 * 2;
            if (cVar1 == -1) break;
            uVar13 = *puVar21;
            uVar12 = puVar21[1];
            uVar10 = puVar4[1];
            *puVar21 = *puVar4;
            *puVar4 = uVar13;
            puVar21[1] = uVar10;
            puVar4[1] = uVar12;
          }
          *(undefined1 *)((int)puVar17 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar22 + (uVar18 & uVar3 - 4)) = 0xff;
          uVar13 = *puVar21;
          puVar4[1] = puVar21[1];
          *puVar4 = uVar13;
        }
LAB_013370d0:
        bVar23 = uVar3 != uVar18;
        uVar3 = uVar3 + 1;
      } while (bVar23);
      if (uVar18 < 8) {
        uVar19 = uVar18;
      }
    }
    param_1[2] = uVar19 - uVar20;
  }
  return 0x80000001;
}

