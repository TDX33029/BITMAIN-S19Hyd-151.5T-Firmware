// FUN_00a66d18 @ 00a66d18 size=1312 calls_out=7 calls_in=2
// strings: 

void FUN_00a66d18(int *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  uint local_44;
  
  local_44 = param_1[3];
  uVar3 = local_44 + 1;
  if (0xfffffffe < local_44) goto LAB_00a66fdc;
  uVar14 = param_1[1];
  uVar9 = uVar14 + 1;
  uVar7 = uVar14;
  if (7 < uVar14) {
    uVar7 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
  }
  if (uVar7 >> 1 < uVar3) {
    uVar7 = uVar7 + 1;
    if (uVar3 < uVar7) {
      uVar3 = uVar7;
    }
    if (uVar3 < 8) {
      uVar9 = (uVar3 & 4) + 4;
      uVar3 = (uVar3 & 4) + 8;
      uVar7 = uVar3 + uVar9 * 0x10;
      if (uVar7 < uVar3) goto LAB_00a66fdc;
    }
    else {
      bVar18 = 0x1ffffffe < uVar3;
      bVar17 = uVar3 == 0x1fffffff;
      if (uVar3 < 0x20000000) {
        iVar12 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
        iVar4 = uVar3 * 8;
        uVar3 = 0xffffffff;
        uVar7 = LZCOUNT((iVar12 + ((uint)(iVar4 - iVar12) >> 1) >> 2) - 1);
        bVar18 = 0xffffffd < 0xffffffffU >> uVar7;
        bVar17 = 0xffffffffU >> uVar7 == 0xffffffe;
      }
      if (bVar18 && !bVar17) goto LAB_00a66fdc;
      uVar3 = uVar3 >> (uVar7 & 0xff);
      uVar9 = uVar3 + 1;
      uVar3 = uVar3 + 5;
      uVar7 = uVar3 + uVar9 * 0x10;
      if (uVar7 < uVar3) goto LAB_00a66fdc;
    }
    if (uVar7 < 0x7ffffffd) {
      iVar4 = thunk_FUN_016d4a50(uVar7);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,uVar7);
      }
      puVar13 = (uint *)(iVar4 + uVar9 * 0x10);
      FUN_016dd606(puVar13,0xff,uVar3);
      uVar7 = uVar9 - 1;
      puVar5 = (uint *)*param_1;
      uVar3 = uVar7;
      if (8 < uVar9) {
        uVar3 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
      }
      iVar4 = 0;
      if (local_44 != 0) {
        iVar4 = 0;
        uVar9 = ~*puVar5 & 0x80808080;
        puVar15 = puVar5;
        do {
          if (uVar9 == 0) {
            do {
              puVar15 = puVar15 + 1;
              iVar4 = iVar4 + 4;
            } while ((*puVar15 & 0x80808080) == 0x80808080);
            uVar9 = *puVar15 & 0x80808080 ^ 0x80808080;
          }
          iVar12 = iVar4 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                          (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3);
          uVar14 = FUN_00a67270(puVar5,iVar12);
          uVar6 = uVar7 & uVar14;
          uVar11 = *(uint *)((int)puVar13 + uVar6) & 0x80808080;
          if (uVar11 == 0) {
            iVar10 = 4;
            do {
              uVar6 = uVar6 + iVar10;
              iVar10 = iVar10 + 4;
              uVar6 = uVar6 & uVar7;
              uVar11 = *(uint *)((int)puVar13 + uVar6) & 0x80808080;
            } while (uVar11 == 0);
          }
          uVar6 = uVar6 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                         (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                  uVar7;
          if (-1 < *(char *)((int)puVar13 + uVar6)) {
            uVar6 = *puVar13 & 0x80808080;
            uVar6 = (uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                  (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
          }
          uVar9 = uVar9 - 1 & uVar9;
          bVar2 = (byte)(uVar14 >> 0x19);
          *(byte *)((int)puVar13 + uVar6) = bVar2;
          local_44 = local_44 - 1;
          puVar5 = (uint *)*param_1;
          *(byte *)((int)puVar13 + (uVar6 - 4 & uVar7) + 4) = bVar2;
          uVar11 = puVar5[iVar12 * -4 + -3];
          uVar16 = puVar5[iVar12 * -4 + -2];
          uVar14 = puVar5[iVar12 * -4 + -1];
          puVar13[uVar6 * -4 + -4] = puVar5[iVar12 * -4 + -4];
          puVar13[uVar6 * -4 + -3] = uVar11;
          puVar13[uVar6 * -4 + -2] = uVar16;
          puVar13[uVar6 * -4 + -1] = uVar14;
        } while (local_44 != 0);
        uVar14 = param_1[1];
        iVar4 = param_1[3];
      }
      *param_1 = (int)puVar13;
      param_1[1] = uVar7;
      param_1[2] = uVar3 - iVar4;
      if (uVar14 == 0) {
        return;
      }
      iVar4 = uVar14 * 0x10 + 0x10;
      if (uVar14 + iVar4 == -5) {
        return;
      }
      thunk_FUN_016d3fb4((int)puVar5 - iVar4);
      return;
    }
LAB_00a66fdc:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_0187c1ec);
  }
  puVar8 = (undefined4 *)*param_1;
  if (uVar9 != 0) {
    uVar3 = uVar9 >> 2;
    if ((uVar9 & 3) != 0) {
      uVar3 = (uVar9 >> 2) + 1;
    }
    iVar4 = 0;
    do {
      puVar8[-iVar4] = (~((uint)puVar8[-iVar4] >> 7) & 0x1010101) + (puVar8[-iVar4] | 0x7f7f7f7f);
      iVar4 = iVar4 + -1;
    } while (-iVar4 != uVar3);
    if (3 < uVar9) {
      *(undefined4 *)((int)puVar8 + uVar9) = *puVar8;
      goto LAB_00a66ffc;
    }
  }
  FUN_016dd52c(puVar8 + 1);
LAB_00a66ffc:
  uVar7 = param_1[1];
  uVar3 = 0;
  if (uVar7 != 0xffffffff) {
    do {
      iVar4 = *param_1;
      if (*(char *)(iVar4 + uVar3) == -0x80) {
        puVar5 = (uint *)(iVar4 + ~uVar3 * 0x10);
        while( true ) {
          uVar14 = FUN_00a67270(iVar4,uVar3);
          puVar13 = (uint *)*param_1;
          uVar6 = param_1[1];
          uVar11 = uVar6 & uVar14;
          uVar16 = *(uint *)((int)puVar13 + uVar11) & 0x80808080;
          uVar9 = uVar11;
          if (uVar16 == 0) {
            iVar4 = 4;
            do {
              uVar9 = uVar9 + iVar4;
              iVar4 = iVar4 + 4;
              uVar9 = uVar9 & uVar6;
              uVar16 = *(uint *)((int)puVar13 + uVar9) & 0x80808080;
            } while (uVar16 == 0);
          }
          uVar9 = uVar9 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                         (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                  uVar6;
          if (-1 < *(char *)((int)puVar13 + uVar9)) {
            uVar9 = *puVar13 & 0x80808080;
            uVar9 = (uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                  (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
          }
          bVar2 = (byte)(uVar14 >> 0x18);
          if (((uVar9 - uVar11 ^ uVar3 - uVar11) & uVar6) < 4) {
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar13 + uVar3) = bVar2;
            *(byte *)(*param_1 + (uVar6 & uVar3 - 4) + 4) = bVar2;
            goto LAB_00a6704c;
          }
          cVar1 = *(char *)((int)puVar13 + uVar9);
          bVar2 = bVar2 >> 1;
          *(byte *)((int)puVar13 + uVar9) = bVar2;
          *(byte *)(*param_1 + (uVar9 - 4 & uVar6) + 4) = bVar2;
          puVar15 = puVar13 + uVar9 * -4 + -4;
          if (cVar1 == -1) break;
          uVar14 = *puVar5;
          *puVar5 = *puVar15;
          *puVar15 = uVar14;
          uVar14 = puVar13[uVar9 * -4 + -3];
          puVar13[uVar9 * -4 + -3] = puVar5[1];
          puVar5[1] = uVar14;
          uVar14 = puVar5[2];
          puVar5[2] = puVar13[uVar9 * -4 + -2];
          puVar13[uVar9 * -4 + -2] = uVar14;
          uVar14 = puVar13[uVar9 * -4 + -1];
          puVar13[uVar9 * -4 + -1] = puVar5[3];
          puVar5[3] = uVar14;
          iVar4 = *param_1;
        }
        uVar14 = param_1[1];
        *(undefined1 *)(*param_1 + uVar3) = 0xff;
        *(undefined1 *)(*param_1 + (uVar14 & uVar3 - 4) + 4) = 0xff;
        uVar14 = *puVar5;
        uVar6 = puVar5[1];
        uVar11 = puVar5[2];
        puVar13[uVar9 * -4 + -1] = puVar5[3];
        puVar13[uVar9 * -4 + -2] = uVar11;
        puVar13[uVar9 * -4 + -3] = uVar6;
        *puVar15 = uVar14;
      }
LAB_00a6704c:
      bVar17 = uVar3 != uVar7;
      uVar3 = uVar3 + 1;
    } while (bVar17);
    uVar3 = param_1[1];
    if (7 < uVar3) {
      uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
    }
  }
  param_1[2] = uVar3 - param_1[3];
  return;
}

