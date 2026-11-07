// FUN_0161b3e8 @ 0161b3e8 size=1524 calls_out=8 calls_in=1
// strings: 

undefined4
FUN_0161b3e8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  
  uVar15 = param_1[3];
  uVar3 = uVar15 + 1;
  if (0xfffffffe < uVar15) goto LAB_0161b934;
  uVar17 = param_1[1];
  uVar11 = uVar17 + 1;
  uVar8 = uVar17;
  if (7 < uVar17) {
    uVar8 = (uVar11 & 0xfffffff8) - (uVar11 >> 3);
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
      uVar11 = uVar3 + uVar8 * 0x40;
      if (uVar11 < uVar3) goto LAB_0161b934;
    }
    else {
      bVar19 = 0x1ffffffe < uVar3;
      bVar18 = uVar3 == 0x1fffffff;
      if (uVar3 < 0x20000000) {
        iVar6 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
        iVar5 = uVar3 * 8;
        uVar3 = 0xffffffff;
        uVar8 = LZCOUNT((iVar6 + ((uint)(iVar5 - iVar6) >> 1) >> 2) - 1);
        bVar19 = 0x3fffffd < 0xffffffffU >> uVar8;
        bVar18 = 0xffffffffU >> uVar8 == 0x3fffffe;
      }
      if (bVar19 && !bVar18) goto LAB_0161b934;
      uVar3 = uVar3 >> (uVar8 & 0xff);
      uVar8 = uVar3 + 1;
      uVar3 = uVar3 + 5;
      uVar11 = uVar3 + uVar8 * 0x40;
      if (uVar11 < uVar3) goto LAB_0161b934;
    }
    if (0x7ffffff8 < uVar11) {
LAB_0161b934:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
    }
    iVar5 = thunk_FUN_016d4a50(uVar11);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,uVar11);
    }
    puVar16 = (uint *)(iVar5 + uVar8 * 0x40);
    FUN_016dd606(puVar16,0xff,uVar3);
    uVar11 = uVar8 - 1;
    uVar3 = uVar11;
    if (7 < uVar11) {
      uVar3 = (uVar8 & 0xfffffff8) - (uVar8 >> 3);
    }
    if (uVar15 == 0) {
      uVar15 = 0;
    }
    else {
      puVar9 = (uint *)*param_1;
      iVar5 = 0;
      uVar17 = ~*puVar9 & 0x80808080;
      puVar14 = puVar9;
      uVar8 = uVar15;
      do {
        if (uVar17 == 0) {
          do {
            puVar14 = puVar14 + 1;
            iVar5 = iVar5 + 4;
          } while ((*puVar14 & 0x80808080) == 0x80808080);
          uVar17 = *puVar14 & 0x80808080 ^ 0x80808080;
        }
        iVar6 = iVar5 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                       (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3);
        uVar7 = FUN_01620b88(param_3,param_4,param_5,param_6,puVar9[iVar6 * -0x10 + -0xf],
                             puVar9[iVar6 * -0x10 + -0xe]);
        uVar10 = uVar11 & uVar7;
        uVar13 = *(uint *)((int)puVar16 + uVar10) & 0x80808080;
        if (uVar13 == 0) {
          iVar12 = 4;
          do {
            uVar10 = uVar10 + iVar12;
            iVar12 = iVar12 + 4;
            uVar10 = uVar10 & uVar11;
            uVar13 = *(uint *)((int)puVar16 + uVar10) & 0x80808080;
          } while (uVar13 == 0);
        }
        uVar10 = uVar10 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                         (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                 uVar11;
        if (-1 < *(char *)((int)puVar16 + uVar10)) {
          uVar10 = *puVar16 & 0x80808080;
          uVar10 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                 (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
        }
        uVar17 = uVar17 - 1 & uVar17;
        bVar2 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)puVar16 + uVar10) = bVar2;
        uVar8 = uVar8 - 1;
        *(byte *)((int)puVar16 + (uVar10 - 4 & uVar11) + 4) = bVar2;
        FUN_016dd1aa(puVar16 + uVar10 * -0x10 + -0x10,puVar9 + iVar6 * -0x10 + -0x10,0x40);
      } while (uVar8 != 0);
    }
    iVar5 = *param_1;
    iVar6 = param_1[1];
    *param_1 = (int)puVar16;
    param_1[1] = uVar11;
    param_1[2] = uVar3 - uVar15;
    param_1[3] = uVar15;
    if ((iVar6 != 0) && (iVar12 = iVar6 * 0x40 + 0x40, iVar6 + iVar12 != -5)) {
      thunk_FUN_016d3fb4(iVar5 - iVar12);
      return 0x80000001;
    }
  }
  else {
    if (uVar11 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar11 >> 2;
      if ((uVar11 & 3) != 0) {
        uVar3 = (uVar11 >> 2) + 1;
      }
      puVar16 = (uint *)*param_1;
      iVar5 = 0;
      do {
        puVar16[-iVar5] = (~(puVar16[-iVar5] >> 7) & 0x1010101) + (puVar16[-iVar5] | 0x7f7f7f7f);
        iVar5 = iVar5 + -1;
      } while (-iVar5 != uVar3);
      if (uVar11 < 4) {
        FUN_016dd52c(puVar16 + 1,puVar16);
      }
      else {
        *(uint *)((int)puVar16 + uVar11) = *puVar16;
      }
      uVar3 = 0;
      do {
        if (*(char *)((int)puVar16 + uVar3) == -0x80) {
          puVar9 = puVar16 + ~uVar3 * 0x10;
          puVar14 = puVar16;
          while( true ) {
            uVar8 = FUN_01620b88(param_3,param_4,param_5,param_6,puVar14[uVar3 * -0x10 + -0xf],
                                 puVar14[uVar3 * -0x10 + -0xe]);
            uVar11 = param_1[1];
            uVar7 = uVar11 & uVar8;
            uVar10 = *(uint *)((int)puVar14 + uVar7) & 0x80808080;
            uVar15 = uVar7;
            if (uVar10 == 0) {
              iVar5 = 4;
              do {
                uVar15 = uVar15 + iVar5 & uVar11;
                iVar5 = iVar5 + 4;
                uVar10 = *(uint *)((int)puVar14 + uVar15) & 0x80808080;
              } while (uVar10 == 0);
            }
            uVar15 = uVar15 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                             (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                     uVar11;
            if (-1 < *(char *)((int)puVar14 + uVar15)) {
              uVar15 = *puVar14 & 0x80808080;
              uVar15 = (uint)LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                     (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar8 >> 0x18);
            if (((uVar15 - uVar7 ^ uVar3 - uVar7) & uVar11) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar14 + uVar3) = bVar2;
              puVar16 = (uint *)*param_1;
              *(byte *)((int)puVar16 + (uVar11 & uVar3 - 4) + 4) = bVar2;
              goto LAB_0161b6e8;
            }
            cVar1 = *(char *)((int)puVar14 + uVar15);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar14 + uVar15) = bVar2;
            puVar16 = (uint *)*param_1;
            *(byte *)((int)puVar16 + (uVar15 - 4 & uVar11) + 4) = bVar2;
            puVar4 = puVar14 + uVar15 * -0x10 + -0x10;
            if (cVar1 == -1) break;
            uVar8 = *puVar4;
            *puVar4 = *puVar9;
            *puVar9 = uVar8;
            uVar8 = puVar9[1];
            puVar9[1] = puVar14[uVar15 * -0x10 + -0xf];
            puVar14[uVar15 * -0x10 + -0xf] = uVar8;
            uVar8 = puVar14[uVar15 * -0x10 + -0xe];
            puVar14[uVar15 * -0x10 + -0xe] = puVar9[2];
            puVar9[2] = uVar8;
            uVar8 = puVar9[3];
            puVar9[3] = puVar14[uVar15 * -0x10 + -0xd];
            puVar14[uVar15 * -0x10 + -0xd] = uVar8;
            uVar8 = puVar14[uVar15 * -0x10 + -0xc];
            puVar14[uVar15 * -0x10 + -0xc] = puVar9[4];
            puVar9[4] = uVar8;
            uVar8 = puVar9[5];
            puVar9[5] = puVar14[uVar15 * -0x10 + -0xb];
            puVar14[uVar15 * -0x10 + -0xb] = uVar8;
            uVar8 = puVar14[uVar15 * -0x10 + -10];
            puVar14[uVar15 * -0x10 + -10] = puVar9[6];
            puVar9[6] = uVar8;
            uVar8 = puVar9[7];
            puVar9[7] = puVar14[uVar15 * -0x10 + -9];
            puVar14[uVar15 * -0x10 + -9] = uVar8;
            uVar8 = puVar14[uVar15 * -0x10 + -8];
            puVar14[uVar15 * -0x10 + -8] = puVar9[8];
            puVar9[8] = uVar8;
            uVar8 = puVar9[9];
            puVar9[9] = puVar14[uVar15 * -0x10 + -7];
            puVar14[uVar15 * -0x10 + -7] = uVar8;
            uVar8 = puVar14[uVar15 * -0x10 + -6];
            puVar14[uVar15 * -0x10 + -6] = puVar9[10];
            puVar9[10] = uVar8;
            uVar8 = puVar9[0xb];
            puVar9[0xb] = puVar14[uVar15 * -0x10 + -5];
            puVar14[uVar15 * -0x10 + -5] = uVar8;
            uVar8 = puVar14[uVar15 * -0x10 + -4];
            puVar14[uVar15 * -0x10 + -4] = puVar9[0xc];
            puVar9[0xc] = uVar8;
            uVar8 = puVar9[0xd];
            puVar9[0xd] = puVar14[uVar15 * -0x10 + -3];
            puVar14[uVar15 * -0x10 + -3] = uVar8;
            uVar8 = puVar14[uVar15 * -0x10 + -2];
            puVar14[uVar15 * -0x10 + -2] = puVar9[0xe];
            puVar9[0xe] = uVar8;
            uVar8 = puVar9[0xf];
            puVar9[0xf] = puVar14[uVar15 * -0x10 + -1];
            puVar14[uVar15 * -0x10 + -1] = uVar8;
            puVar14 = (uint *)*param_1;
          }
          uVar15 = param_1[1];
          *(undefined1 *)((int)puVar16 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar16 + (uVar15 & uVar3 - 4) + 4) = 0xff;
          FUN_016dd1aa(puVar4,puVar9,0x40);
        }
LAB_0161b6e8:
        bVar18 = uVar3 != uVar17;
        uVar3 = uVar3 + 1;
      } while (bVar18);
      uVar3 = param_1[1];
      uVar15 = param_1[3];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - uVar15;
  }
  return 0x80000001;
}

