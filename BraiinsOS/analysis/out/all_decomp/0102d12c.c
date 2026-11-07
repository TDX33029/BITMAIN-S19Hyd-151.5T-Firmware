// FUN_0102d12c @ 0102d12c size=1376 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_0102d12c(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  bool bVar19;
  bool bVar20;
  
  uVar15 = param_1[3];
  uVar3 = uVar15 + 1;
  if (0xfffffffe < uVar15) goto LAB_0102d3fc;
  uVar10 = param_1[1];
  uVar8 = uVar10 + 1;
  uVar6 = uVar10;
  if (7 < uVar10) {
    uVar6 = (uVar8 & 0xfffffff8) - (uVar8 >> 3);
  }
  if (uVar6 >> 1 < uVar3) {
    uVar6 = uVar6 + 1;
    if (uVar3 < uVar6) {
      uVar3 = uVar6;
    }
    if (uVar3 < 0xf) {
      uVar6 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar6 = 4;
      }
      uVar3 = uVar6 + 4;
      uVar8 = uVar3 + uVar6 * 4;
      if (uVar8 < uVar3) goto LAB_0102d3fc;
    }
    else {
      bVar20 = 0x1ffffffe < uVar3;
      bVar19 = uVar3 == 0x1fffffff;
      if (uVar3 < 0x20000000) {
        iVar14 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
        iVar4 = uVar3 * 8;
        uVar3 = 0xffffffff;
        uVar6 = LZCOUNT((iVar14 + ((uint)(iVar4 - iVar14) >> 1) >> 2) - 1);
        bVar20 = 0x3ffffffd < 0xffffffffU >> uVar6;
        bVar19 = 0xffffffffU >> uVar6 == 0x3ffffffe;
      }
      if (bVar20 && !bVar19) goto LAB_0102d3fc;
      uVar3 = uVar3 >> (uVar6 & 0xff);
      uVar6 = uVar3 + 1;
      uVar3 = uVar3 + 5;
      uVar8 = uVar3 + uVar6 * 4;
      if (uVar8 < uVar3) goto LAB_0102d3fc;
    }
    if (uVar8 < 0x7ffffffd) {
      iVar4 = thunk_FUN_016d4a50(uVar8);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,uVar8);
      }
      puVar13 = (uint *)(iVar4 + uVar6 * 4);
      FUN_016dd606(puVar13,0xff,uVar3);
      uVar8 = uVar6 - 1;
      puVar9 = (uint *)*param_1;
      uVar3 = uVar8;
      if (7 < uVar8) {
        uVar3 = (uVar6 & 0xfffffff8) - (uVar6 >> 3);
      }
      uVar6 = 0;
      if (uVar15 != 0) {
        iVar4 = 0;
        uVar16 = ~*puVar9 & 0x80808080;
        uVar6 = uVar15;
        puVar18 = puVar9;
        do {
          if (uVar16 == 0) {
            do {
              puVar18 = puVar18 + 1;
              iVar4 = iVar4 + 4;
            } while ((*puVar18 & 0x80808080) == 0x80808080);
            uVar16 = *puVar18 & 0x80808080 ^ 0x80808080;
          }
          iVar14 = iVar4 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                          (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3);
          uVar5 = puVar9[-1 - iVar14];
          if (param_3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar5,param_3,&DAT_018ada80);
          }
          uVar5 = *(uint *)(param_2 + uVar5 * 0xc);
          uVar17 = uVar5 & uVar8;
          uVar11 = *(uint *)((int)puVar13 + uVar17) & 0x80808080;
          if (uVar11 == 0) {
            iVar12 = 4;
            do {
              uVar17 = uVar17 + iVar12;
              iVar12 = iVar12 + 4;
              uVar17 = uVar17 & uVar8;
              uVar11 = *(uint *)((int)puVar13 + uVar17) & 0x80808080;
            } while (uVar11 == 0);
          }
          uVar11 = uVar17 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                           (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                   uVar8;
          if (-1 < *(char *)((int)puVar13 + uVar11)) {
            uVar11 = *puVar13 & 0x80808080;
            uVar11 = (uint)LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                   (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
          }
          uVar16 = uVar16 - 1 & uVar16;
          bVar2 = (byte)(uVar5 >> 0x19);
          *(byte *)((int)puVar13 + uVar11) = bVar2;
          uVar6 = uVar6 - 1;
          *(byte *)((int)puVar13 + (uVar11 - 4 & uVar8) + 4) = bVar2;
          puVar13[-1 - uVar11] = puVar9[-1 - iVar14];
        } while (uVar6 != 0);
        uVar6 = uVar15;
      }
      *param_1 = (int)puVar13;
      param_1[1] = uVar8;
      param_1[2] = uVar3 - uVar6;
      if (uVar10 == 0) {
        return 0x80000001;
      }
      iVar4 = uVar10 * 4 + 4;
      if (uVar10 + iVar4 == -5) {
        return 0x80000001;
      }
      thunk_FUN_016d3fb4((int)puVar9 - iVar4);
      return 0x80000001;
    }
LAB_0102d3fc:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_018ada90);
  }
  puVar7 = (undefined4 *)*param_1;
  if (uVar8 != 0) {
    uVar3 = uVar8 >> 2;
    if ((uVar8 & 3) != 0) {
      uVar3 = (uVar8 >> 2) + 1;
    }
    iVar4 = 0;
    do {
      puVar7[-iVar4] = (~((uint)puVar7[-iVar4] >> 7) & 0x1010101) + (puVar7[-iVar4] | 0x7f7f7f7f);
      iVar4 = iVar4 + -1;
    } while (-iVar4 != uVar3);
    if (3 < uVar8) {
      *(undefined4 *)((int)puVar7 + uVar8) = *puVar7;
      goto LAB_0102d41c;
    }
  }
  FUN_016dd52c(puVar7 + 1);
LAB_0102d41c:
  uVar15 = param_1[1];
  uVar3 = 0;
  if (uVar15 != 0xffffffff) {
    do {
      puVar9 = (uint *)*param_1;
      if (*(char *)((int)puVar9 + uVar3) == -0x80) {
        uVar6 = puVar9[-1 - uVar3];
        if (param_3 <= uVar6) {
LAB_0102d660:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar6,param_3,&DAT_018ada80);
        }
        uVar8 = ~uVar3;
        puVar13 = puVar9;
        while( true ) {
          uVar11 = *(uint *)(param_2 + uVar6 * 0xc);
          uVar10 = param_1[1];
          uVar5 = uVar10 & uVar11;
          uVar16 = *(uint *)((int)puVar13 + uVar5) & 0x80808080;
          uVar6 = uVar5;
          if (uVar16 == 0) {
            iVar4 = 4;
            do {
              uVar6 = uVar6 + iVar4;
              iVar4 = iVar4 + 4;
              uVar6 = uVar6 & uVar10;
              uVar16 = *(uint *)((int)puVar13 + uVar6) & 0x80808080;
            } while (uVar16 == 0);
          }
          uVar6 = uVar6 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                         (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                  uVar10;
          if (-1 < *(char *)((int)puVar13 + uVar6)) {
            uVar6 = *puVar13 & 0x80808080;
            uVar6 = (uint)LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                  (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
          }
          bVar2 = (byte)(uVar11 >> 0x18);
          if (((uVar6 - uVar5 ^ uVar3 - uVar5) & uVar10) < 4) {
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar13 + uVar3) = bVar2;
            *(byte *)(*param_1 + (uVar10 & uVar3 - 4) + 4) = bVar2;
            goto LAB_0102d568;
          }
          cVar1 = *(char *)((int)puVar13 + uVar6);
          bVar2 = bVar2 >> 1;
          *(byte *)((int)puVar13 + uVar6) = bVar2;
          *(byte *)(*param_1 + (uVar6 - 4 & uVar10) + 4) = bVar2;
          uVar6 = ~uVar6;
          if (cVar1 == -1) break;
          uVar10 = puVar9[uVar8];
          puVar9[uVar8] = puVar13[uVar6];
          puVar13[uVar6] = uVar10;
          puVar13 = (uint *)*param_1;
          uVar6 = puVar13[-1 - uVar3];
          if (param_3 <= uVar6) goto LAB_0102d660;
        }
        uVar10 = param_1[1];
        *(undefined1 *)(*param_1 + uVar3) = 0xff;
        *(undefined1 *)(*param_1 + (uVar10 & uVar3 - 4) + 4) = 0xff;
        puVar13[uVar6] = puVar9[uVar8];
      }
LAB_0102d568:
      bVar19 = uVar3 != uVar15;
      uVar3 = uVar3 + 1;
    } while (bVar19);
    uVar3 = param_1[1];
    if (7 < uVar3) {
      uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
    }
  }
  param_1[2] = uVar3 - param_1[3];
  return 0x80000001;
}

