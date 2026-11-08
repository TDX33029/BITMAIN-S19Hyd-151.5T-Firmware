// FUN_011ac374 @ 011ac374 size=1260 calls_out=6 calls_in=1
// strings: 

uint FUN_011ac374(int *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar10 = param_1[3];
  uVar7 = uVar10 + 1;
  if (0xfffffffe < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar12 = param_1[1];
  uVar6 = uVar12 + 1;
  uVar3 = uVar12;
  if (7 < uVar12) {
    uVar3 = (uVar6 & 0xfffffff8) - (uVar6 >> 3);
  }
  if (uVar3 >> 1 < uVar7) {
    if (uVar7 < uVar3 + 1) {
      uVar7 = uVar3 + 1;
    }
    FUN_011a5370(&local_34,0x24,4,uVar7);
    if (local_34 != (uint *)0x0) {
      if (uVar10 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = 0;
        puVar14 = (uint *)*param_1;
        uVar7 = ~*puVar14 & 0x80808080;
        puVar9 = puVar14;
        do {
          if (uVar7 == 0) {
            do {
              puVar9 = puVar9 + 1;
              iVar11 = iVar11 + 4;
            } while ((*puVar9 & 0x80808080) == 0x80808080);
            uVar7 = *puVar9 & 0x80808080 ^ 0x80808080;
          }
          uVar13 = iVar11 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                           (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3);
          uVar3 = FUN_011e02d8(param_2,puVar14 + uVar13 * -9 + -9);
          uVar6 = local_30 & uVar3;
          uVar12 = *(uint *)((int)local_34 + uVar6) & 0x80808080;
          if (uVar12 == 0) {
            iVar4 = 4;
            do {
              uVar6 = uVar6 + iVar4;
              iVar4 = iVar4 + 4;
              uVar6 = uVar6 & local_30;
              uVar12 = *(uint *)((int)local_34 + uVar6) & 0x80808080;
            } while (uVar12 == 0);
          }
          uVar6 = uVar6 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                         (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                  local_30;
          if (-1 < *(char *)((int)local_34 + uVar6)) {
            uVar6 = *local_34 & 0x80808080;
            uVar6 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                  (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
          }
          uVar7 = uVar7 - 1 & uVar7;
          bVar2 = (byte)(uVar3 >> 0x19);
          *(byte *)((int)local_34 + uVar6) = bVar2;
          uVar10 = uVar10 - 1;
          *(byte *)((int)local_34 + (uVar6 - 4 & local_30) + 4) = bVar2;
          FUN_016dd1aa(local_34 + ~uVar6 * 9,puVar14 + ~uVar13 * 9,0x24);
        } while (uVar10 != 0);
        iVar11 = param_1[3];
      }
      iVar4 = *param_1;
      iVar5 = param_1[1];
      *param_1 = (int)local_34;
      param_1[1] = local_30;
      local_30 = 0x80000001;
      param_1[2] = local_2c - iVar11;
      param_1[3] = iVar11;
      if ((iVar5 != 0) && (iVar11 = iVar5 * 0x24 + 0x24, iVar5 + iVar11 != -5)) {
        thunk_FUN_016d3fb4(iVar4 - iVar11);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar6 >> 2;
      if ((uVar6 & 3) != 0) {
        uVar7 = (uVar6 >> 2) + 1;
      }
      puVar9 = (uint *)*param_1;
      iVar11 = 0;
      do {
        puVar9[-iVar11] = (~(puVar9[-iVar11] >> 7) & 0x1010101) + (puVar9[-iVar11] | 0x7f7f7f7f);
        iVar11 = iVar11 + -1;
      } while (-iVar11 != uVar7);
      if (uVar6 < 4) {
        FUN_016dd52c(puVar9 + 1,puVar9);
      }
      else {
        *(uint *)((int)puVar9 + uVar6) = *puVar9;
      }
      uVar7 = 0;
      do {
        if (*(char *)((int)puVar9 + uVar7) == -0x80) {
          puVar15 = puVar9 + ~uVar7 * 9;
          puVar14 = puVar9;
          while( true ) {
            uVar3 = FUN_011e02d8(param_2,puVar14 + uVar7 * -9 + -9);
            uVar6 = param_1[1];
            uVar13 = uVar6 & uVar3;
            uVar8 = *(uint *)((int)puVar14 + uVar13) & 0x80808080;
            uVar10 = uVar13;
            if (uVar8 == 0) {
              iVar11 = 4;
              do {
                uVar10 = uVar10 + iVar11;
                iVar11 = iVar11 + 4;
                uVar10 = uVar10 & uVar6;
                uVar8 = *(uint *)((int)puVar14 + uVar10) & 0x80808080;
              } while (uVar8 == 0);
            }
            uVar10 = uVar10 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                             (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                     uVar6;
            if (-1 < *(char *)((int)puVar14 + uVar10)) {
              uVar10 = *puVar14 & 0x80808080;
              uVar10 = (uint)LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                     (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar3 >> 0x18);
            if (((uVar10 - uVar13 ^ uVar7 - uVar13) & uVar6) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar14 + uVar7) = bVar2;
              puVar9 = (uint *)*param_1;
              *(byte *)((int)puVar9 + (uVar6 & uVar7 - 4) + 4) = bVar2;
              goto LAB_011ac730;
            }
            cVar1 = *(char *)((int)puVar14 + uVar10);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar14 + uVar10) = bVar2;
            puVar9 = (uint *)*param_1;
            *(byte *)((int)puVar9 + (uVar10 - 4 & uVar6) + 4) = bVar2;
            puVar14 = puVar14 + ~uVar10 * 9;
            if (cVar1 == -1) break;
            uVar10 = *puVar15;
            *puVar15 = *puVar14;
            *puVar14 = uVar10;
            uVar10 = puVar14[1];
            puVar14[1] = puVar15[1];
            puVar15[1] = uVar10;
            uVar10 = puVar15[2];
            puVar15[2] = puVar14[2];
            puVar14[2] = uVar10;
            uVar10 = puVar14[3];
            puVar14[3] = puVar15[3];
            puVar15[3] = uVar10;
            uVar10 = puVar15[4];
            puVar15[4] = puVar14[4];
            puVar14[4] = uVar10;
            uVar10 = puVar14[5];
            puVar14[5] = puVar15[5];
            puVar15[5] = uVar10;
            uVar10 = puVar15[6];
            puVar15[6] = puVar14[6];
            puVar14[6] = uVar10;
            uVar10 = puVar14[7];
            puVar14[7] = puVar15[7];
            puVar15[7] = uVar10;
            uVar10 = puVar15[8];
            puVar15[8] = puVar14[8];
            puVar14[8] = uVar10;
            puVar14 = (uint *)*param_1;
          }
          uVar10 = param_1[1];
          *(undefined1 *)((int)puVar9 + uVar7) = 0xff;
          *(undefined1 *)((int)puVar9 + (uVar10 & uVar7 - 4) + 4) = 0xff;
          FUN_016dd1aa(puVar14,puVar15,0x24);
        }
LAB_011ac730:
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

