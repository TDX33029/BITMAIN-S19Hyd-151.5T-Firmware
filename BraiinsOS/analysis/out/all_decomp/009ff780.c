// FUN_009ff780 @ 009ff780 size=1284 calls_out=7 calls_in=2
// strings: 

undefined4
FUN_009ff780(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  
  uVar15 = param_1[3];
  uVar3 = uVar15 + 1;
  if (0xfffffffe < uVar15) goto LAB_009ffbd8;
  uVar16 = param_1[1];
  uVar9 = uVar16 + 1;
  uVar7 = uVar16;
  if (7 < uVar16) {
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
      if (uVar9 < uVar3) goto LAB_009ffbd8;
    }
    else {
      bVar18 = 0x1ffffffe < uVar3;
      bVar17 = uVar3 == 0x1fffffff;
      if (uVar3 < 0x20000000) {
        iVar13 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
        iVar5 = uVar3 * 8;
        uVar3 = 0xffffffff;
        uVar7 = LZCOUNT((iVar13 + ((uint)(iVar5 - iVar13) >> 1) >> 2) - 1);
        bVar18 = 0x3ffffffd < 0xffffffffU >> uVar7;
        bVar17 = 0xffffffffU >> uVar7 == 0x3ffffffe;
      }
      if (bVar18 && !bVar17) goto LAB_009ffbd8;
      uVar3 = uVar3 >> (uVar7 & 0xff);
      uVar7 = uVar3 + 1;
      uVar3 = uVar3 + 5;
      uVar9 = uVar3 + uVar7 * 4;
      if (uVar9 < uVar3) goto LAB_009ffbd8;
    }
    if (0x7ffffffc < uVar9) {
LAB_009ffbd8:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
    }
    iVar5 = thunk_FUN_016d4a50(uVar9);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,uVar9);
    }
    puVar14 = (uint *)(iVar5 + uVar7 * 4);
    FUN_016dd606(puVar14,0xff,uVar3);
    uVar9 = uVar7 - 1;
    uVar3 = uVar9;
    if (7 < uVar9) {
      uVar3 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
    }
    if (uVar15 == 0) {
      uVar15 = 0;
    }
    else {
      iVar5 = 0;
      puVar12 = (uint *)*param_1;
      uVar16 = ~*puVar12 & 0x80808080;
      puVar4 = puVar12;
      uVar7 = uVar15;
      do {
        if (uVar16 == 0) {
          do {
            puVar4 = puVar4 + 1;
            iVar5 = iVar5 + 4;
          } while ((*puVar4 & 0x80808080) == 0x80808080);
          uVar16 = *puVar4 & 0x80808080 ^ 0x80808080;
        }
        iVar13 = iVar5 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                        (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3);
        uVar6 = FUN_01333c64(param_3,param_4,param_5,param_6,
                             *(undefined4 *)(puVar12[-1 - iVar13] + 4),
                             *(undefined4 *)(puVar12[-1 - iVar13] + 8));
        uVar8 = uVar9 & uVar6;
        uVar11 = *(uint *)((int)puVar14 + uVar8) & 0x80808080;
        if (uVar11 == 0) {
          iVar10 = 4;
          do {
            uVar8 = uVar8 + iVar10;
            iVar10 = iVar10 + 4;
            uVar8 = uVar8 & uVar9;
            uVar11 = *(uint *)((int)puVar14 + uVar8) & 0x80808080;
          } while (uVar11 == 0);
        }
        uVar8 = uVar8 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                       (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) & uVar9;
        if (-1 < *(char *)((int)puVar14 + uVar8)) {
          uVar8 = *puVar14 & 0x80808080;
          uVar8 = (uint)LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
        }
        uVar16 = uVar16 - 1 & uVar16;
        bVar2 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)puVar14 + uVar8) = bVar2;
        uVar7 = uVar7 - 1;
        *(byte *)((int)puVar14 + (uVar8 - 4 & uVar9) + 4) = bVar2;
        puVar14[-1 - uVar8] = puVar12[-1 - iVar13];
      } while (uVar7 != 0);
    }
    iVar5 = *param_1;
    iVar13 = param_1[1];
    *param_1 = (int)puVar14;
    param_1[1] = uVar9;
    param_1[2] = uVar3 - uVar15;
    param_1[3] = uVar15;
    if ((iVar13 != 0) && (iVar10 = iVar13 * 4 + 4, iVar13 + iVar10 != -5)) {
      thunk_FUN_016d3fb4(iVar5 - iVar10);
      return 0x80000001;
    }
  }
  else {
    if (uVar9 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar9 >> 2;
      if ((uVar9 & 3) != 0) {
        uVar3 = (uVar9 >> 2) + 1;
      }
      puVar14 = (uint *)*param_1;
      iVar5 = 0;
      do {
        puVar14[-iVar5] = (~(puVar14[-iVar5] >> 7) & 0x1010101) + (puVar14[-iVar5] | 0x7f7f7f7f);
        iVar5 = iVar5 + -1;
      } while (-iVar5 != uVar3);
      if (uVar9 < 4) {
        FUN_016dd52c(puVar14 + 1,puVar14);
      }
      else {
        *(uint *)((int)puVar14 + uVar9) = *puVar14;
      }
      uVar3 = 0;
      do {
        puVar4 = puVar14;
        if (*(char *)((int)puVar14 + uVar3) == -0x80) {
          uVar15 = ~uVar3;
          puVar12 = puVar14;
          while( true ) {
            uVar9 = FUN_01333c64(param_3,param_4,param_5,param_6,
                                 *(undefined4 *)(puVar12[-1 - uVar3] + 4),
                                 *(undefined4 *)(puVar12[-1 - uVar3] + 8));
            uVar6 = param_1[1];
            uVar8 = uVar6 & uVar9;
            uVar11 = *(uint *)((int)puVar12 + uVar8) & 0x80808080;
            uVar7 = uVar8;
            if (uVar11 == 0) {
              iVar5 = 4;
              do {
                uVar7 = uVar7 + iVar5;
                iVar5 = iVar5 + 4;
                uVar7 = uVar7 & uVar6;
                uVar11 = *(uint *)((int)puVar12 + uVar7) & 0x80808080;
              } while (uVar11 == 0);
            }
            uVar7 = uVar7 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                           (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                    uVar6;
            if (-1 < *(char *)((int)puVar12 + uVar7)) {
              uVar7 = *puVar12 & 0x80808080;
              uVar7 = (uint)LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                    (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar9 >> 0x18);
            if (((uVar7 - uVar8 ^ uVar3 - uVar8) & uVar6) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar12 + uVar3) = bVar2;
              puVar4 = (uint *)*param_1;
              *(byte *)((int)puVar4 + (uVar6 & uVar3 - 4) + 4) = bVar2;
              goto LAB_009ff994;
            }
            cVar1 = *(char *)((int)puVar12 + uVar7);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar12 + uVar7) = bVar2;
            puVar4 = (uint *)*param_1;
            *(byte *)((int)puVar4 + (uVar7 - 4 & uVar6) + 4) = bVar2;
            uVar7 = ~uVar7;
            if (cVar1 == -1) break;
            uVar9 = puVar14[uVar15];
            puVar14[uVar15] = puVar12[uVar7];
            puVar12[uVar7] = uVar9;
            puVar12 = (uint *)*param_1;
          }
          uVar9 = param_1[1];
          *(undefined1 *)((int)puVar4 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar4 + (uVar9 & uVar3 - 4) + 4) = 0xff;
          puVar12[uVar7] = puVar14[uVar15];
        }
LAB_009ff994:
        bVar17 = uVar3 != uVar16;
        uVar3 = uVar3 + 1;
        puVar14 = puVar4;
      } while (bVar17);
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

