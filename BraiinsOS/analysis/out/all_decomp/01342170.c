// FUN_01342170 @ 01342170 size=1256 calls_out=6 calls_in=2
// strings: 

uint FUN_01342170(int *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar14 = param_1[3];
  uVar7 = uVar14 + 1;
  if (0xfffffffe < uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_018ada90);
  }
  uVar12 = param_1[1];
  uVar5 = uVar12 + 1;
  uVar3 = uVar12;
  if (7 < uVar12) {
    uVar3 = (uVar5 & 0xfffffff8) - (uVar5 >> 3);
  }
  if (uVar3 >> 1 < uVar7) {
    if (uVar7 < uVar3 + 1) {
      uVar7 = uVar3 + 1;
    }
    FUN_01340cb0(&local_34,0x28,8,uVar7);
    if (local_34 != (uint *)0x0) {
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else {
        puVar9 = (uint *)*param_1;
        iVar13 = 0;
        uVar3 = ~*puVar9 & 0x80808080;
        puVar10 = puVar9;
        uVar7 = uVar14;
        do {
          if (uVar3 == 0) {
            do {
              puVar10 = puVar10 + 1;
              iVar13 = iVar13 + 4;
            } while ((*puVar10 & 0x80808080) == 0x80808080);
            uVar3 = *puVar10 & 0x80808080 ^ 0x80808080;
          }
          uVar11 = iVar13 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                           (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
          uVar5 = FUN_01342660(param_2,puVar9,uVar11);
          uVar12 = local_30 & uVar5;
          uVar8 = *(uint *)((int)local_34 + uVar12) & 0x80808080;
          if (uVar8 == 0) {
            iVar4 = 4;
            do {
              uVar12 = uVar12 + iVar4;
              iVar4 = iVar4 + 4;
              uVar12 = uVar12 & local_30;
              uVar8 = *(uint *)((int)local_34 + uVar12) & 0x80808080;
            } while (uVar8 == 0);
          }
          uVar12 = uVar12 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                           (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                   local_30;
          if (-1 < *(char *)((int)local_34 + uVar12)) {
            uVar12 = *local_34 & 0x80808080;
            uVar12 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                   (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
          }
          uVar3 = uVar3 - 1 & uVar3;
          bVar2 = (byte)(uVar5 >> 0x19);
          *(byte *)((int)local_34 + uVar12) = bVar2;
          uVar7 = uVar7 - 1;
          *(byte *)((int)local_34 + (uVar12 - 4 & local_30) + 4) = bVar2;
          FUN_016dd1aa(local_34 + ~uVar12 * 10,puVar9 + ~uVar11 * 10,0x28);
        } while (uVar7 != 0);
      }
      iVar13 = *param_1;
      iVar4 = param_1[1];
      *param_1 = (int)local_34;
      param_1[1] = local_30;
      local_30 = 0x80000001;
      param_1[2] = local_2c - uVar14;
      param_1[3] = uVar14;
      if ((iVar4 != 0) && (iVar6 = iVar4 * 0x28 + 0x28, iVar4 + iVar6 != -5)) {
        thunk_FUN_016d3fb4(iVar13 - iVar6);
        return 0x80000001;
      }
    }
  }
  else {
    puVar10 = (uint *)*param_1;
    if (uVar5 == 0) {
      FUN_016dd52c(puVar10 + 1,puVar10);
      uVar7 = 0;
    }
    else {
      uVar7 = uVar5 >> 2;
      if ((uVar5 & 3) != 0) {
        uVar7 = (uVar5 >> 2) + 1;
      }
      iVar13 = 0;
      do {
        puVar10[-iVar13] = (~(puVar10[-iVar13] >> 7) & 0x1010101) + (puVar10[-iVar13] | 0x7f7f7f7f);
        iVar13 = iVar13 + -1;
      } while (-iVar13 != uVar7);
      if (uVar5 < 4) {
        FUN_016dd52c(puVar10 + 1,puVar10);
      }
      else {
        *(uint *)((int)puVar10 + uVar5) = *puVar10;
      }
      uVar7 = 0;
      do {
        if (*(char *)((int)puVar10 + uVar7) == -0x80) {
          puVar15 = puVar10 + ~uVar7 * 10;
          puVar9 = puVar10;
          while( true ) {
            uVar3 = FUN_01342660(param_2,puVar9,uVar7);
            uVar5 = param_1[1];
            uVar8 = uVar5 & uVar3;
            uVar11 = *(uint *)((int)puVar9 + uVar8) & 0x80808080;
            uVar14 = uVar8;
            if (uVar11 == 0) {
              iVar13 = 4;
              do {
                uVar14 = uVar14 + iVar13;
                iVar13 = iVar13 + 4;
                uVar14 = uVar14 & uVar5;
                uVar11 = *(uint *)((int)puVar9 + uVar14) & 0x80808080;
              } while (uVar11 == 0);
            }
            uVar14 = uVar14 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                             (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                     uVar5;
            if (-1 < *(char *)((int)puVar9 + uVar14)) {
              uVar14 = *puVar9 & 0x80808080;
              uVar14 = (uint)LZCOUNT((*puVar9 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                     (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar3 >> 0x18);
            if (((uVar14 - uVar8 ^ uVar7 - uVar8) & uVar5) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar9 + uVar7) = bVar2;
              puVar10 = (uint *)*param_1;
              *(byte *)((int)puVar10 + (uVar5 & uVar7 - 4) + 4) = bVar2;
              goto LAB_0134252c;
            }
            cVar1 = *(char *)((int)puVar9 + uVar14);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar9 + uVar14) = bVar2;
            puVar10 = (uint *)*param_1;
            *(byte *)((int)puVar10 + (uVar14 - 4 & uVar5) + 4) = bVar2;
            puVar9 = puVar9 + ~uVar14 * 10;
            if (cVar1 == -1) break;
            uVar14 = *puVar9;
            *puVar9 = *puVar15;
            *puVar15 = uVar14;
            uVar14 = puVar15[1];
            puVar15[1] = puVar9[1];
            puVar9[1] = uVar14;
            uVar14 = puVar9[2];
            puVar9[2] = puVar15[2];
            puVar15[2] = uVar14;
            uVar14 = puVar15[3];
            puVar15[3] = puVar9[3];
            puVar9[3] = uVar14;
            uVar14 = puVar9[4];
            puVar9[4] = puVar15[4];
            puVar15[4] = uVar14;
            uVar14 = puVar15[5];
            puVar15[5] = puVar9[5];
            puVar9[5] = uVar14;
            uVar14 = puVar9[6];
            puVar9[6] = puVar15[6];
            puVar15[6] = uVar14;
            uVar14 = puVar15[7];
            puVar15[7] = puVar9[7];
            puVar9[7] = uVar14;
            uVar14 = puVar9[8];
            puVar9[8] = puVar15[8];
            puVar15[8] = uVar14;
            uVar14 = puVar15[9];
            puVar15[9] = puVar9[9];
            puVar9[9] = uVar14;
            puVar9 = (uint *)*param_1;
          }
          uVar14 = param_1[1];
          *(undefined1 *)((int)puVar10 + uVar7) = 0xff;
          *(undefined1 *)((int)puVar10 + (uVar14 & uVar7 - 4) + 4) = 0xff;
          FUN_016dd1aa(puVar9,puVar15,0x28);
        }
LAB_0134252c:
        bVar16 = uVar7 != uVar12;
        uVar7 = uVar7 + 1;
      } while (bVar16);
      uVar7 = param_1[1];
      if (7 < uVar7) {
        uVar7 = (uVar7 + 1 & 0xfffffff8) - (uVar7 + 1 >> 3);
      }
    }
    local_30 = 0x80000001;
    param_1[2] = uVar7 - param_1[3];
  }
  return local_30;
}

