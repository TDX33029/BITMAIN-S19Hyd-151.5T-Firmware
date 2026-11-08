// FUN_00f3986c @ 00f3986c size=1380 calls_out=7 calls_in=0
// strings: 

undefined4 FUN_00f3986c(int *param_1,uint param_2,int param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  
  uVar15 = param_1[3];
  uVar3 = uVar15 + param_2;
  if (CARRY4(uVar15,param_2)) goto LAB_00f39b3c;
  uVar7 = param_1[1];
  uVar9 = uVar7 + 1;
  if (7 < uVar7) {
    uVar7 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
  }
  if (uVar7 >> 1 < uVar3) {
    uVar7 = uVar7 + 1;
    if (uVar3 < uVar7) {
      uVar3 = uVar7;
    }
    if (uVar3 < 0xf) {
      uVar7 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        uVar7 = 4;
      }
      uVar3 = uVar7 + 4;
      uVar9 = uVar3 + uVar7 * 4;
      if (uVar9 < uVar3) goto LAB_00f39b3c;
    }
    else {
      bVar19 = 0x1ffffffe < uVar3;
      bVar18 = uVar3 == 0x1fffffff;
      if (uVar3 < 0x20000000) {
        iVar14 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
        iVar4 = uVar3 * 8;
        uVar3 = 0xffffffff;
        uVar7 = LZCOUNT((iVar14 + ((uint)(iVar4 - iVar14) >> 1) >> 2) - 1);
        bVar19 = 0x3ffffffd < 0xffffffffU >> uVar7;
        bVar18 = 0xffffffffU >> uVar7 == 0x3ffffffe;
      }
      if (bVar19 && !bVar18) goto LAB_00f39b3c;
      uVar3 = uVar3 >> (uVar7 & 0xff);
      uVar7 = uVar3 + 1;
      uVar3 = uVar3 + 5;
      uVar9 = uVar3 + uVar7 * 4;
      if (uVar9 < uVar3) goto LAB_00f39b3c;
    }
    if (uVar9 < 0x7ffffffd) {
      iVar4 = thunk_FUN_016d4a50(uVar9);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,uVar9);
      }
      puVar13 = (uint *)(iVar4 + uVar7 * 4);
      FUN_016dd606(puVar13,0xff,uVar3);
      uVar9 = uVar7 - 1;
      uVar3 = uVar9;
      if (7 < uVar9) {
        uVar3 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
      }
      uVar7 = 0;
      if (uVar15 != 0) {
        puVar11 = (uint *)*param_1;
        iVar4 = 0;
        uVar16 = ~*puVar11 & 0x80808080;
        puVar12 = puVar11;
        uVar7 = uVar15;
        do {
          if (uVar16 == 0) {
            do {
              puVar12 = puVar12 + 1;
              iVar4 = iVar4 + 4;
            } while ((*puVar12 & 0x80808080) == 0x80808080);
            uVar16 = *puVar12 & 0x80808080 ^ 0x80808080;
          }
          iVar14 = iVar4 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                          (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3);
          uVar5 = puVar11[-1 - iVar14];
          if (param_4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar5,param_4,&DAT_018ada80);
          }
          uVar5 = *(uint *)(uVar5 * 0xd8 + param_3 + 200);
          uVar10 = uVar9 & uVar5;
          uVar17 = *(uint *)((int)puVar13 + uVar10) & 0x80808080;
          if (uVar17 == 0) {
            iVar6 = 4;
            do {
              uVar10 = uVar10 + iVar6;
              iVar6 = iVar6 + 4;
              uVar10 = uVar10 & uVar9;
              uVar17 = *(uint *)((int)puVar13 + uVar10) & 0x80808080;
            } while (uVar17 == 0);
          }
          uVar10 = uVar10 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                           (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                   uVar9;
          if (-1 < *(char *)((int)puVar13 + uVar10)) {
            uVar10 = *puVar13 & 0x80808080;
            uVar10 = (uint)LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                   (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
          }
          uVar16 = uVar16 - 1 & uVar16;
          bVar2 = (byte)(uVar5 >> 0x19);
          *(byte *)((int)puVar13 + uVar10) = bVar2;
          uVar7 = uVar7 - 1;
          *(byte *)((int)puVar13 + (uVar10 - 4 & uVar9) + 4) = bVar2;
          puVar13[-1 - uVar10] = puVar11[-1 - iVar14];
        } while (uVar7 != 0);
        uVar7 = uVar15;
      }
      iVar4 = *param_1;
      iVar14 = param_1[1];
      param_1[3] = uVar7;
      *param_1 = (int)puVar13;
      param_1[1] = uVar9;
      param_1[2] = uVar3 - uVar7;
      if (iVar14 == 0) {
        return 0x80000001;
      }
      iVar6 = iVar14 * 4 + 4;
      if (iVar14 + iVar6 == -5) {
        return 0x80000001;
      }
      thunk_FUN_016d3fb4(iVar4 - iVar6);
      return 0x80000001;
    }
LAB_00f39b3c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_018ada90);
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
      goto LAB_00f39b5c;
    }
  }
  FUN_016dd52c(puVar8 + 1);
LAB_00f39b5c:
  uVar15 = param_1[1];
  uVar3 = 0;
  if (uVar15 != 0xffffffff) {
    do {
      puVar13 = (uint *)*param_1;
      if (*(char *)((int)puVar13 + uVar3) == -0x80) {
        uVar7 = ~uVar3;
        puVar12 = puVar13;
        while( true ) {
          uVar9 = puVar12[-1 - uVar3];
          if (param_4 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar9,param_4,&DAT_018ada80);
          }
          uVar16 = param_1[1];
          uVar10 = *(uint *)(uVar9 * 0xd8 + param_3 + 200);
          uVar5 = uVar16 & uVar10;
          uVar17 = *(uint *)((int)puVar12 + uVar5) & 0x80808080;
          uVar9 = uVar5;
          if (uVar17 == 0) {
            iVar4 = 4;
            do {
              uVar9 = uVar9 + iVar4 & uVar16;
              uVar17 = *(uint *)((int)puVar12 + uVar9) & 0x80808080;
              iVar4 = iVar4 + 4;
            } while (uVar17 == 0);
          }
          uVar9 = uVar9 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                         (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                  uVar16;
          if (-1 < *(char *)((int)puVar12 + uVar9)) {
            uVar9 = *puVar12 & 0x80808080;
            uVar9 = (uint)LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                  (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
          }
          bVar2 = (byte)(uVar10 >> 0x18);
          if (((uVar9 - uVar5 ^ uVar3 - uVar5) & uVar16) < 4) {
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar12 + uVar3) = bVar2;
            *(byte *)(*param_1 + (uVar16 & uVar3 - 4) + 4) = bVar2;
            goto LAB_00f39cb4;
          }
          cVar1 = *(char *)((int)puVar12 + uVar9);
          bVar2 = bVar2 >> 1;
          *(byte *)((int)puVar12 + uVar9) = bVar2;
          *(byte *)(*param_1 + (uVar9 - 4 & uVar16) + 4) = bVar2;
          uVar9 = ~uVar9;
          if (cVar1 == -1) break;
          uVar16 = puVar13[uVar7];
          puVar13[uVar7] = puVar12[uVar9];
          puVar12[uVar9] = uVar16;
          puVar12 = (uint *)*param_1;
        }
        uVar16 = param_1[1];
        *(undefined1 *)(*param_1 + uVar3) = 0xff;
        *(undefined1 *)(*param_1 + (uVar16 & uVar3 - 4) + 4) = 0xff;
        puVar12[uVar9] = puVar13[uVar7];
      }
LAB_00f39cb4:
      bVar18 = uVar3 != uVar15;
      uVar3 = uVar3 + 1;
    } while (bVar18);
    uVar3 = param_1[1];
    if (7 < uVar3) {
      uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
    }
  }
  param_1[2] = uVar3 - param_1[3];
  return 0x80000001;
}

