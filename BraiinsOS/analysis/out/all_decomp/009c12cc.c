// FUN_009c12cc @ 009c12cc size=1404 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_009c12cc(undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  uint *local_2c;
  
  uVar19 = param_1[3];
  uVar3 = uVar19 + param_2;
  if (CARRY4(uVar19,param_2)) goto LAB_009c1788;
  uVar18 = param_1[1];
  uVar22 = uVar18 + 1;
  uVar14 = (uVar22 & 0xfffffff8) - (uVar22 >> 3);
  uVar11 = uVar14;
  if (uVar18 < 8) {
    uVar11 = uVar18;
  }
  if (uVar11 >> 1 < uVar3) {
    uVar11 = uVar11 + 1;
    if (uVar3 < uVar11) {
      uVar3 = uVar11;
    }
    if (uVar3 < 0xf) {
      uVar11 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar11 = 4;
      }
      uVar3 = uVar11 + 4;
      uVar14 = uVar3 + uVar11 * 8;
      if (uVar14 < uVar3) goto LAB_009c1788;
    }
    else {
      bVar24 = 0x1ffffffe < uVar3;
      bVar23 = uVar3 == 0x1fffffff;
      if (uVar3 < 0x20000000) {
        iVar13 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
        iVar5 = uVar3 * 8;
        uVar3 = 0xffffffff;
        uVar11 = LZCOUNT((iVar13 + ((uint)(iVar5 - iVar13) >> 1) >> 2) - 1);
        bVar24 = 0x1ffffffd < 0xffffffffU >> uVar11;
        bVar23 = 0xffffffffU >> uVar11 == 0x1ffffffe;
      }
      if (bVar24 && !bVar23) goto LAB_009c1788;
      uVar3 = uVar3 >> (uVar11 & 0xff);
      uVar11 = uVar3 + 1;
      uVar3 = uVar3 + 5;
      uVar14 = uVar3 + uVar11 * 8;
      if (uVar14 < uVar3) goto LAB_009c1788;
    }
    if (0x7ffffffc < uVar14) {
LAB_009c1788:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
    }
    iVar5 = thunk_FUN_016d4a50(uVar14);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,uVar14);
    }
    puVar17 = (uint *)(iVar5 + uVar11 * 8);
    FUN_016dd606(puVar17,0xff,uVar3);
    uVar14 = uVar11 - 1;
    uVar3 = uVar14;
    if (7 < uVar14) {
      uVar3 = (uVar11 & 0xfffffff8) - (uVar11 >> 3);
    }
    if (uVar19 == 0) {
      local_2c = (uint *)*param_1;
      uVar19 = 0;
    }
    else {
      local_2c = (uint *)*param_1;
      iVar5 = 0;
      uVar22 = ~*local_2c & 0x80808080;
      uVar6 = *param_3;
      uVar7 = param_3[1];
      uVar8 = param_3[2];
      uVar9 = param_3[3];
      uVar11 = uVar19;
      puVar21 = local_2c;
      do {
        if (uVar22 == 0) {
          do {
            puVar21 = puVar21 + 1;
            iVar5 = iVar5 + 4;
          } while ((*puVar21 & 0x80808080) == 0x80808080);
          uVar22 = *puVar21 & 0x80808080 ^ 0x80808080;
        }
        uVar16 = iVar5 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                        (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3);
        uVar10 = FUN_009bd354(uVar6,uVar7,uVar8,uVar9,local_2c[uVar16 * -2 + -2]);
        uVar12 = uVar14 & uVar10;
        uVar15 = *(uint *)((int)puVar17 + uVar12) & 0x80808080;
        if (uVar15 == 0) {
          iVar13 = 4;
          do {
            uVar12 = uVar12 + iVar13;
            iVar13 = iVar13 + 4;
            uVar12 = uVar12 & uVar14;
            uVar15 = *(uint *)((int)puVar17 + uVar12) & 0x80808080;
          } while (uVar15 == 0);
        }
        uVar12 = uVar12 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                         (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                 uVar14;
        if (-1 < *(char *)((int)puVar17 + uVar12)) {
          uVar12 = *puVar17 & 0x80808080;
          uVar12 = (uint)LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                 (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
        }
        uVar22 = uVar22 - 1 & uVar22;
        bVar2 = (byte)(uVar10 >> 0x19);
        *(byte *)((int)puVar17 + uVar12) = bVar2;
        uVar11 = uVar11 - 1;
        *(byte *)((int)puVar17 + (uVar12 - 4 & uVar14) + 4) = bVar2;
        uVar10 = (local_2c + ~uVar16 * 2)[1];
        puVar17[~uVar12 * 2] = local_2c[~uVar16 * 2];
        (puVar17 + ~uVar12 * 2)[1] = uVar10;
      } while (uVar11 != 0);
    }
    *param_1 = puVar17;
    param_1[1] = uVar14;
    param_1[2] = uVar3 - uVar19;
    if ((uVar18 != 0) && (iVar5 = uVar18 * 8 + 8, uVar18 + iVar5 != -5)) {
      thunk_FUN_016d3fb4((int)local_2c - iVar5);
      return 0x80000001;
    }
  }
  else {
    if (uVar22 == 0) {
      uVar14 = 0;
    }
    else {
      uVar3 = uVar22 >> 2;
      if ((uVar22 & 3) != 0) {
        uVar3 = (uVar22 >> 2) + 1;
      }
      puVar17 = (uint *)*param_1;
      iVar5 = 0;
      do {
        puVar17[-iVar5] = (~(puVar17[-iVar5] >> 7) & 0x1010101) + (puVar17[-iVar5] | 0x7f7f7f7f);
        iVar5 = iVar5 + -1;
      } while (-iVar5 != uVar3);
      puVar21 = puVar17 + 1;
      if (uVar22 < 4) {
        FUN_016dd52c(puVar21,puVar17,uVar22);
      }
      else {
        *(uint *)((int)puVar17 + uVar22) = *puVar17;
      }
      uVar6 = *param_3;
      uVar7 = param_3[1];
      uVar9 = param_3[3];
      uVar8 = param_3[2];
      uVar3 = 0;
      do {
        if (*(char *)((int)puVar17 + uVar3) == -0x80) {
          puVar20 = puVar17 + ~uVar3 * 2;
          while( true ) {
            uVar22 = FUN_009bd354(uVar6,uVar7,uVar8,uVar9,puVar17[uVar3 * -2 + -2]);
            uVar10 = uVar18 & uVar22;
            uVar12 = *(uint *)((int)puVar17 + uVar10) & 0x80808080;
            uVar11 = uVar10;
            if (uVar12 == 0) {
              iVar5 = 4;
              do {
                uVar11 = uVar11 + iVar5 & uVar18;
                iVar5 = iVar5 + 4;
                uVar12 = *(uint *)((int)puVar17 + uVar11) & 0x80808080;
              } while (uVar12 == 0);
            }
            uVar11 = uVar11 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                             (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                     uVar18;
            if (-1 < *(char *)((int)puVar17 + uVar11)) {
              uVar11 = *puVar17 & 0x80808080;
              uVar11 = (uint)LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                     (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar22 >> 0x18);
            if (((uVar11 - uVar10 ^ uVar3 - uVar10) & uVar18) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar17 + uVar3) = bVar2;
              *(byte *)((int)puVar21 + (uVar18 & uVar3 - 4)) = bVar2;
              goto LAB_009c1510;
            }
            cVar1 = *(char *)((int)puVar17 + uVar11);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar17 + uVar11) = bVar2;
            *(byte *)((int)puVar21 + (uVar11 - 4 & uVar18)) = bVar2;
            puVar4 = puVar17 + ~uVar11 * 2;
            if (cVar1 == -1) break;
            uVar11 = *puVar20;
            uVar22 = puVar20[1];
            uVar10 = puVar4[1];
            *puVar20 = *puVar4;
            *puVar4 = uVar11;
            puVar20[1] = uVar10;
            puVar4[1] = uVar22;
          }
          *(undefined1 *)((int)puVar17 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar21 + (uVar18 & uVar3 - 4)) = 0xff;
          uVar11 = *puVar20;
          puVar4[1] = puVar20[1];
          *puVar4 = uVar11;
        }
LAB_009c1510:
        bVar23 = uVar3 != uVar18;
        uVar3 = uVar3 + 1;
      } while (bVar23);
      if (uVar18 < 8) {
        uVar14 = uVar18;
      }
    }
    param_1[2] = uVar14 - uVar19;
  }
  return 0x80000001;
}

