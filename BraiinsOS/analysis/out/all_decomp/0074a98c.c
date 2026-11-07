// FUN_0074a98c @ 0074a98c size=1500 calls_out=7 calls_in=13
// strings: 

undefined4 FUN_0074a98c(int *param_1,undefined4 *param_2)

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
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  
  uVar18 = param_1[3];
  uVar22 = uVar18 + 1;
  if (0xfffffffe < uVar18) goto LAB_0074aea8;
  uVar23 = param_1[1];
  uVar13 = uVar23 + 1;
  uVar16 = uVar23;
  if (7 < uVar23) {
    uVar16 = (uVar13 & 0xfffffff8) - (uVar13 >> 3);
  }
  if (uVar16 >> 1 < uVar22) {
    uVar16 = uVar16 + 1;
    if (uVar22 < uVar16) {
      uVar22 = uVar16;
    }
    if (uVar22 < 0xf) {
      uVar13 = (uVar22 & 8) + 8;
      if (uVar22 < 4) {
        uVar13 = 4;
      }
      uVar22 = uVar13 + 4;
      uVar16 = uVar22 + uVar13 * 0x10;
      if (uVar16 < uVar22) goto LAB_0074aea8;
    }
    else {
      bVar26 = 0x1ffffffe < uVar22;
      bVar25 = uVar22 == 0x1fffffff;
      piVar3 = param_1;
      if (uVar22 < 0x20000000) {
        iVar4 = (int)((ulonglong)(uVar22 << 3) * 0x24924925 >> 0x20);
        piVar3 = (int *)0xffffffff;
        uVar16 = LZCOUNT((iVar4 + (uVar22 * 8 - iVar4 >> 1) >> 2) - 1);
        bVar26 = 0xffffffd < 0xffffffffU >> uVar16;
        bVar25 = 0xffffffffU >> uVar16 == 0xffffffe;
      }
      if (bVar26 && !bVar25) goto LAB_0074aea8;
      uVar22 = (uint)piVar3 >> (uVar16 & 0xff);
      uVar13 = uVar22 + 1;
      uVar22 = uVar22 + 5;
      uVar16 = uVar22 + uVar13 * 0x10;
      if (uVar16 < uVar22) goto LAB_0074aea8;
    }
    if (0x7ffffff8 < uVar16) {
LAB_0074aea8:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
    }
    iVar4 = thunk_FUN_016d4a50(uVar16);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,uVar16);
    }
    puVar20 = (uint *)(iVar4 + uVar13 * 0x10);
    FUN_016dd606(puVar20,0xff,uVar22);
    uVar16 = uVar13 - 1;
    uVar22 = uVar16;
    if (7 < uVar16) {
      uVar22 = (uVar13 & 0xfffffff8) - (uVar13 >> 3);
    }
    if (uVar18 == 0) {
      uVar18 = 0;
    }
    else {
      iVar4 = 0;
      puVar10 = (uint *)*param_1;
      uVar23 = ~*puVar10 & 0x80808080;
      uVar5 = *param_2;
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      uVar13 = uVar18;
      puVar19 = puVar10;
      do {
        if (uVar23 == 0) {
          do {
            puVar19 = puVar19 + 1;
            iVar4 = iVar4 + 4;
          } while ((*puVar19 & 0x80808080) == 0x80808080);
          uVar23 = *puVar19 & 0x80808080 ^ 0x80808080;
        }
        uVar24 = iVar4 + ((uint)LZCOUNT(uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                                        (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) >> 3);
        uVar9 = FUN_009bd658(uVar5,uVar6,uVar7,uVar8,puVar10[uVar24 * -4 + -4],
                             (puVar10 + uVar24 * -4 + -4)[1]);
        uVar11 = uVar16 & uVar9;
        uVar17 = *(uint *)((int)puVar20 + uVar11) & 0x80808080;
        if (uVar17 == 0) {
          iVar12 = 4;
          do {
            uVar11 = uVar11 + iVar12;
            iVar12 = iVar12 + 4;
            uVar11 = uVar11 & uVar16;
            uVar17 = *(uint *)((int)puVar20 + uVar11) & 0x80808080;
          } while (uVar17 == 0);
        }
        uVar11 = uVar11 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                         (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                 uVar16;
        if (-1 < *(char *)((int)puVar20 + uVar11)) {
          uVar11 = *puVar20 & 0x80808080;
          uVar11 = (uint)LZCOUNT((*puVar20 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                 (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
        }
        uVar23 = uVar23 - 1 & uVar23;
        bVar2 = (byte)(uVar9 >> 0x19);
        *(byte *)((int)puVar20 + uVar11) = bVar2;
        uVar13 = uVar13 - 1;
        *(byte *)((int)puVar20 + (uVar11 - 4 & uVar16) + 4) = bVar2;
        puVar14 = puVar10 + ~uVar24 * 4;
        uVar17 = puVar14[1];
        uVar24 = puVar14[2];
        uVar9 = puVar14[3];
        puVar21 = puVar20 + ~uVar11 * 4;
        *puVar21 = *puVar14;
        puVar21[3] = uVar9;
        puVar21[2] = uVar24;
        puVar21[1] = uVar17;
      } while (uVar13 != 0);
    }
    iVar4 = *param_1;
    iVar12 = param_1[1];
    *param_1 = (int)puVar20;
    param_1[1] = uVar16;
    param_1[2] = uVar22 - uVar18;
    param_1[3] = uVar18;
    if ((iVar12 != 0) && (iVar15 = iVar12 * 0x10 + 0x10, iVar12 + iVar15 != -5)) {
      thunk_FUN_016d3fb4(iVar4 - iVar15);
      return 0x80000001;
    }
  }
  else {
    if (uVar13 == 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = uVar13 >> 2;
      puVar20 = (uint *)*param_1;
      if ((uVar13 & 3) != 0) {
        uVar22 = (uVar13 >> 2) + 1;
      }
      iVar4 = 0;
      do {
        puVar20[-iVar4] = (~(puVar20[-iVar4] >> 7) & 0x1010101) + (puVar20[-iVar4] | 0x7f7f7f7f);
        iVar4 = iVar4 + -1;
      } while (-iVar4 != uVar22);
      if (uVar13 < 4) {
        FUN_016dd52c(puVar20 + 1,puVar20);
      }
      else {
        *(uint *)((int)puVar20 + uVar13) = *puVar20;
      }
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      uVar5 = *param_2;
      uVar6 = param_2[1];
      uVar22 = 0;
      do {
        if (*(char *)((int)puVar20 + uVar22) == -0x80) {
          puVar10 = puVar20 + ~uVar22 * 4;
          puVar19 = puVar20;
          while( true ) {
            uVar16 = FUN_009bd658(uVar5,uVar6,uVar7,uVar8,puVar19[uVar22 * -4 + -4],
                                  puVar19[uVar22 * -4 + -3]);
            uVar13 = param_1[1];
            uVar9 = uVar13 & uVar16;
            uVar11 = *(uint *)((int)puVar19 + uVar9) & 0x80808080;
            uVar18 = uVar9;
            if (uVar11 == 0) {
              iVar4 = 4;
              do {
                uVar18 = uVar18 + iVar4 & uVar13;
                iVar4 = iVar4 + 4;
                uVar11 = *(uint *)((int)puVar19 + uVar18) & 0x80808080;
              } while (uVar11 == 0);
            }
            uVar18 = uVar18 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                             (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                     uVar13;
            if (-1 < *(char *)((int)puVar19 + uVar18)) {
              uVar18 = *puVar19 & 0x80808080;
              uVar18 = (uint)LZCOUNT((*puVar19 & 0x80) << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                     (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar16 >> 0x18);
            if (((uVar18 - uVar9 ^ uVar22 - uVar9) & uVar13) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar19 + uVar22) = bVar2;
              puVar20 = (uint *)*param_1;
              *(byte *)((int)puVar20 + (uVar13 & uVar22 - 4) + 4) = bVar2;
              goto LAB_0074abf4;
            }
            cVar1 = *(char *)((int)puVar19 + uVar18);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar19 + uVar18) = bVar2;
            puVar20 = (uint *)*param_1;
            *(byte *)((int)puVar20 + (uVar18 - 4 & uVar13) + 4) = bVar2;
            puVar19 = puVar19 + ~uVar18 * 4;
            if (cVar1 == -1) break;
            uVar18 = *puVar10;
            *puVar10 = *puVar19;
            *puVar19 = uVar18;
            uVar18 = puVar19[1];
            puVar19[1] = puVar10[1];
            puVar10[1] = uVar18;
            uVar18 = puVar10[2];
            puVar10[2] = puVar19[2];
            puVar19[2] = uVar18;
            uVar18 = puVar19[3];
            puVar19[3] = puVar10[3];
            puVar10[3] = uVar18;
            puVar19 = (uint *)*param_1;
          }
          uVar18 = param_1[1];
          *(undefined1 *)((int)puVar20 + uVar22) = 0xff;
          *(undefined1 *)((int)puVar20 + (uVar18 & uVar22 - 4) + 4) = 0xff;
          uVar13 = *puVar10;
          uVar16 = puVar10[1];
          uVar18 = puVar10[2];
          puVar19[3] = puVar10[3];
          puVar19[2] = uVar18;
          puVar19[1] = uVar16;
          *puVar19 = uVar13;
        }
LAB_0074abf4:
        bVar25 = uVar22 != uVar23;
        uVar22 = uVar22 + 1;
      } while (bVar25);
      uVar22 = param_1[1];
      if (7 < uVar22) {
        uVar22 = (uVar22 + 1 & 0xfffffff8) - (uVar22 + 1 >> 3);
      }
    }
    param_1[2] = uVar22 - param_1[3];
  }
  return 0x80000001;
}

