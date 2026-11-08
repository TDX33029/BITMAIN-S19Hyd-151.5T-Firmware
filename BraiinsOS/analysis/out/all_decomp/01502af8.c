// FUN_01502af8 @ 01502af8 size=1380 calls_out=7 calls_in=1
// strings: 

undefined4
FUN_01502af8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  
  uVar16 = param_1[3];
  uVar3 = uVar16 + 1;
  if (0xfffffffe < uVar16) goto LAB_01502fb0;
  uVar18 = param_1[1];
  uVar10 = uVar18 + 1;
  uVar8 = uVar18;
  if (7 < uVar18) {
    uVar8 = (uVar10 & 0xfffffff8) - (uVar10 >> 3);
  }
  if (uVar8 >> 1 < uVar3) {
    uVar8 = uVar8 + 1;
    if (uVar3 < uVar8) {
      uVar3 = uVar8;
    }
    if (uVar3 < 0xf) {
      uVar8 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar8 = 4;
      }
      uVar3 = uVar8 + 4;
      uVar10 = uVar3 + uVar8 * 0x10;
      if (uVar10 < uVar3) goto LAB_01502fb0;
    }
    else {
      bVar20 = 0x1ffffffe < uVar3;
      bVar19 = uVar3 == 0x1fffffff;
      if (uVar3 < 0x20000000) {
        iVar6 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
        iVar5 = uVar3 * 8;
        uVar3 = 0xffffffff;
        uVar8 = LZCOUNT((iVar6 + ((uint)(iVar5 - iVar6) >> 1) >> 2) - 1);
        bVar20 = 0xffffffd < 0xffffffffU >> uVar8;
        bVar19 = 0xffffffffU >> uVar8 == 0xffffffe;
      }
      if (bVar20 && !bVar19) goto LAB_01502fb0;
      uVar3 = uVar3 >> (uVar8 & 0xff);
      uVar8 = uVar3 + 1;
      uVar3 = uVar3 + 5;
      uVar10 = uVar3 + uVar8 * 0x10;
      if (uVar10 < uVar3) goto LAB_01502fb0;
    }
    if (0x7ffffffc < uVar10) {
LAB_01502fb0:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
    }
    iVar5 = thunk_FUN_016d4a50(uVar10);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,uVar10);
    }
    puVar17 = (uint *)(iVar5 + uVar8 * 0x10);
    FUN_016dd606(puVar17,0xff,uVar3);
    uVar10 = uVar8 - 1;
    uVar3 = uVar10;
    if (7 < uVar10) {
      uVar3 = (uVar8 & 0xfffffff8) - (uVar8 >> 3);
    }
    if (uVar16 == 0) {
      uVar16 = 0;
    }
    else {
      puVar14 = (uint *)*param_1;
      iVar5 = 0;
      uVar18 = ~*puVar14 & 0x80808080;
      puVar15 = puVar14;
      uVar8 = uVar16;
      do {
        if (uVar18 == 0) {
          do {
            puVar15 = puVar15 + 1;
            iVar5 = iVar5 + 4;
          } while ((*puVar15 & 0x80808080) == 0x80808080);
          uVar18 = *puVar15 & 0x80808080 ^ 0x80808080;
        }
        iVar6 = iVar5 + ((uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                       (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3);
        uVar7 = FUN_01333c64(param_3,param_4,param_5,param_6,puVar14[iVar6 * -4 + -4],
                             puVar14[iVar6 * -4 + -3]);
        uVar9 = uVar10 & uVar7;
        uVar12 = *(uint *)((int)puVar17 + uVar9) & 0x80808080;
        if (uVar12 == 0) {
          iVar11 = 4;
          do {
            uVar9 = uVar9 + iVar11;
            iVar11 = iVar11 + 4;
            uVar9 = uVar9 & uVar10;
            uVar12 = *(uint *)((int)puVar17 + uVar9) & 0x80808080;
          } while (uVar12 == 0);
        }
        uVar9 = uVar9 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                       (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) & uVar10
        ;
        if (-1 < *(char *)((int)puVar17 + uVar9)) {
          uVar9 = *puVar17 & 0x80808080;
          uVar9 = (uint)LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
        }
        uVar18 = uVar18 - 1 & uVar18;
        uVar8 = uVar8 - 1;
        bVar2 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)puVar17 + uVar9) = bVar2;
        *(byte *)((int)puVar17 + (uVar9 - 4 & uVar10) + 4) = bVar2;
        uVar7 = puVar14[iVar6 * -4 + -4];
        uVar12 = puVar14[iVar6 * -4 + -3];
        uVar13 = puVar14[iVar6 * -4 + -2];
        puVar17[uVar9 * -4 + -1] = puVar14[iVar6 * -4 + -1];
        puVar17[uVar9 * -4 + -2] = uVar13;
        puVar17[uVar9 * -4 + -3] = uVar12;
        puVar17[uVar9 * -4 + -4] = uVar7;
      } while (uVar8 != 0);
    }
    iVar5 = *param_1;
    iVar6 = param_1[1];
    *param_1 = (int)puVar17;
    param_1[1] = uVar10;
    param_1[2] = uVar3 - uVar16;
    param_1[3] = uVar16;
    if ((iVar6 != 0) && (iVar11 = iVar6 * 0x10 + 0x10, iVar6 + iVar11 != -5)) {
      thunk_FUN_016d3fb4(iVar5 - iVar11);
      return 0x80000001;
    }
  }
  else {
    if (uVar10 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar10 >> 2;
      puVar17 = (uint *)*param_1;
      if ((uVar10 & 3) != 0) {
        uVar3 = (uVar10 >> 2) + 1;
      }
      iVar5 = 0;
      do {
        puVar17[-iVar5] = (~(puVar17[-iVar5] >> 7) & 0x1010101) + (puVar17[-iVar5] | 0x7f7f7f7f);
        iVar5 = iVar5 + -1;
      } while (-iVar5 != uVar3);
      if (uVar10 < 4) {
        FUN_016dd52c(puVar17 + 1,puVar17);
      }
      else {
        *(uint *)((int)puVar17 + uVar10) = *puVar17;
      }
      uVar3 = 0;
      do {
        if (*(char *)((int)puVar17 + uVar3) == -0x80) {
          puVar14 = puVar17 + ~uVar3 * 4;
          puVar15 = puVar17;
          while( true ) {
            uVar8 = FUN_01333c64(param_3,param_4,param_5,param_6,puVar15[uVar3 * -4 + -4],
                                 puVar15[uVar3 * -4 + -3]);
            uVar10 = param_1[1];
            uVar7 = uVar10 & uVar8;
            uVar9 = *(uint *)((int)puVar15 + uVar7) & 0x80808080;
            uVar16 = uVar7;
            if (uVar9 == 0) {
              iVar5 = 4;
              do {
                uVar16 = uVar16 + iVar5;
                iVar5 = iVar5 + 4;
                uVar16 = uVar16 & uVar10;
                uVar9 = *(uint *)((int)puVar15 + uVar16) & 0x80808080;
              } while (uVar9 == 0);
            }
            uVar16 = uVar16 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                             (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                     uVar10;
            if (-1 < *(char *)((int)puVar15 + uVar16)) {
              uVar16 = *puVar15 & 0x80808080;
              uVar16 = (uint)LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                     (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar8 >> 0x18);
            if (((uVar16 - uVar7 ^ uVar3 - uVar7) & uVar10) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar15 + uVar3) = bVar2;
              puVar17 = (uint *)*param_1;
              *(byte *)((int)puVar17 + (uVar10 & uVar3 - 4) + 4) = bVar2;
              goto LAB_01502d3c;
            }
            cVar1 = *(char *)((int)puVar15 + uVar16);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar15 + uVar16) = bVar2;
            puVar17 = (uint *)*param_1;
            *(byte *)((int)puVar17 + (uVar16 - 4 & uVar10) + 4) = bVar2;
            puVar4 = puVar15 + uVar16 * -4 + -4;
            if (cVar1 == -1) break;
            uVar8 = *puVar14;
            *puVar14 = *puVar4;
            *puVar4 = uVar8;
            uVar8 = puVar15[uVar16 * -4 + -3];
            puVar15[uVar16 * -4 + -3] = puVar14[1];
            puVar14[1] = uVar8;
            uVar8 = puVar14[2];
            puVar14[2] = puVar15[uVar16 * -4 + -2];
            puVar15[uVar16 * -4 + -2] = uVar8;
            uVar8 = puVar15[uVar16 * -4 + -1];
            puVar15[uVar16 * -4 + -1] = puVar14[3];
            puVar14[3] = uVar8;
            puVar15 = (uint *)*param_1;
          }
          uVar8 = param_1[1];
          *(undefined1 *)((int)puVar17 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar17 + (uVar8 & uVar3 - 4) + 4) = 0xff;
          uVar7 = puVar14[2];
          uVar8 = *puVar14;
          uVar10 = puVar14[1];
          puVar15[uVar16 * -4 + -1] = puVar14[3];
          puVar15[uVar16 * -4 + -2] = uVar7;
          puVar15[uVar16 * -4 + -3] = uVar10;
          *puVar4 = uVar8;
        }
LAB_01502d3c:
        bVar19 = uVar3 != uVar18;
        uVar3 = uVar3 + 1;
      } while (bVar19);
      uVar3 = param_1[1];
      uVar16 = param_1[3];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - uVar16;
  }
  return 0x80000001;
}

