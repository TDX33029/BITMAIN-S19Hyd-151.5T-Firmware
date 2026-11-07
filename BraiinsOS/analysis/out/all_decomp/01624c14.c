// FUN_01624c14 @ 01624c14 size=1508 calls_out=5 calls_in=1
// strings: 

uint FUN_01624c14(int *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar11 = param_1[3];
  uVar8 = uVar11 + 1;
  if (0xfffffffe < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar13 = param_1[1];
  uVar6 = uVar13 + 1;
  uVar3 = uVar13;
  if (7 < uVar13) {
    uVar3 = (uVar6 & 0xfffffff8) - (uVar6 >> 3);
  }
  if (uVar3 >> 1 < uVar8) {
    if (uVar8 < uVar3 + 1) {
      uVar8 = uVar3 + 1;
    }
    FUN_01624528(&local_34,0x30,8,uVar8);
    if (local_34 != (uint *)0x0) {
      if (uVar11 == 0) {
        uVar11 = 0;
      }
      else {
        puVar12 = (uint *)*param_1;
        iVar14 = 0;
        uVar3 = ~*puVar12 & 0x80808080;
        uVar8 = uVar11;
        puVar10 = puVar12;
        do {
          if (uVar3 == 0) {
            do {
              puVar10 = puVar10 + 1;
              iVar14 = iVar14 + 4;
            } while ((*puVar10 & 0x80808080) == 0x80808080);
            uVar3 = *puVar10 & 0x80808080 ^ 0x80808080;
          }
          uVar15 = iVar14 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                           (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
          uVar6 = puVar12[uVar15 * -0xc + -0xc];
          uVar13 = (puVar12 + uVar15 * -0xc + -0xc)[1];
          uVar6 = ((((((((uVar6 & 0xff ^ 0x84222325) * 0x1b3 ^ (uVar6 & 0xffff) >> 8) * 0x1b3 ^
                       (uVar6 & 0xffffff) >> 0x10) * 0x1b3 ^ uVar6 >> 0x18) * 0x1b3 ^ uVar13 & 0xff)
                     * 0x1b3 ^ (uVar13 & 0xffff) >> 8) * 0x1b3 ^ (uVar13 & 0xffffff) >> 0x10) *
                   0x1b3 ^ uVar13 >> 0x18) * 0x1b3;
          uVar13 = local_30 & uVar6;
          uVar9 = *(uint *)((int)local_34 + uVar13) & 0x80808080;
          if (uVar9 == 0) {
            iVar5 = 4;
            do {
              uVar13 = uVar13 + iVar5;
              iVar5 = iVar5 + 4;
              uVar13 = uVar13 & local_30;
              uVar9 = *(uint *)((int)local_34 + uVar13) & 0x80808080;
            } while (uVar9 == 0);
          }
          uVar13 = uVar13 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                           (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                   local_30;
          if (-1 < *(char *)((int)local_34 + uVar13)) {
            uVar13 = *local_34 & 0x80808080;
            uVar13 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                   (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
          }
          uVar3 = uVar3 - 1 & uVar3;
          bVar2 = (byte)(uVar6 >> 0x19);
          *(byte *)((int)local_34 + uVar13) = bVar2;
          uVar8 = uVar8 - 1;
          *(byte *)((int)local_34 + (uVar13 - 4 & local_30) + 4) = bVar2;
          FUN_016dd1aa(local_34 + ~uVar13 * 0xc,puVar12 + ~uVar15 * 0xc,0x30);
        } while (uVar8 != 0);
      }
      iVar14 = *param_1;
      iVar5 = param_1[1];
      *param_1 = (int)local_34;
      param_1[1] = local_30;
      local_30 = 0x80000001;
      param_1[2] = local_2c - uVar11;
      param_1[3] = uVar11;
      if ((iVar5 != 0) && (iVar7 = iVar5 * 0x30 + 0x30, iVar5 + iVar7 != -5)) {
        thunk_FUN_016d3fb4(iVar14 - iVar7);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar6 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar6 >> 2;
      puVar10 = (uint *)*param_1;
      if ((uVar6 & 3) != 0) {
        uVar8 = (uVar6 >> 2) + 1;
      }
      iVar14 = 0;
      do {
        puVar10[-iVar14] = (~(puVar10[-iVar14] >> 7) & 0x1010101) + (puVar10[-iVar14] | 0x7f7f7f7f);
        iVar14 = iVar14 + -1;
      } while (-iVar14 != uVar8);
      if (uVar6 < 4) {
        FUN_016dd52c(puVar10 + 1,puVar10);
      }
      else {
        *(uint *)((int)puVar10 + uVar6) = *puVar10;
      }
      uVar8 = 0;
      do {
        if (*(char *)((int)puVar10 + uVar8) == -0x80) {
          puVar4 = puVar10 + ~uVar8 * 0xc;
          puVar12 = puVar10;
          while( true ) {
            uVar3 = puVar12[uVar8 * -0xc + -0xb];
            uVar11 = puVar12[uVar8 * -0xc + -0xc];
            uVar6 = param_1[1];
            uVar11 = ((((((((uVar11 & 0xff ^ 0x84222325) * 0x1b3 ^ (uVar11 & 0xffff) >> 8) * 0x1b3 ^
                          (uVar11 & 0xffffff) >> 0x10) * 0x1b3 ^ uVar11 >> 0x18) * 0x1b3 ^
                        uVar3 & 0xff) * 0x1b3 ^ (uVar3 & 0xffff) >> 8) * 0x1b3 ^
                      (uVar3 & 0xffffff) >> 0x10) * 0x1b3 ^ uVar3 >> 0x18) * 0x1b3;
            uVar9 = uVar6 & uVar11;
            uVar15 = *(uint *)((int)puVar12 + uVar9) & 0x80808080;
            uVar3 = uVar9;
            if (uVar15 == 0) {
              iVar14 = 4;
              do {
                uVar3 = uVar3 + iVar14 & uVar6;
                uVar15 = *(uint *)((int)puVar12 + uVar3) & 0x80808080;
                iVar14 = iVar14 + 4;
              } while (uVar15 == 0);
            }
            uVar3 = uVar3 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                           (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                    uVar6;
            if (-1 < *(char *)((int)puVar12 + uVar3)) {
              uVar3 = *puVar12 & 0x80808080;
              uVar3 = (uint)LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                    (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar11 >> 0x18);
            if (((uVar3 - uVar9 ^ uVar8 - uVar9) & uVar6) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar12 + uVar8) = bVar2;
              puVar10 = (uint *)*param_1;
              *(byte *)((int)puVar10 + (uVar6 & uVar8 - 4) + 4) = bVar2;
              goto LAB_016250d4;
            }
            cVar1 = *(char *)((int)puVar12 + uVar3);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar12 + uVar3) = bVar2;
            puVar10 = (uint *)*param_1;
            *(byte *)((int)puVar10 + (uVar3 - 4 & uVar6) + 4) = bVar2;
            puVar12 = puVar12 + ~uVar3 * 0xc;
            if (cVar1 == -1) break;
            uVar11 = *puVar12;
            *puVar12 = *puVar4;
            *puVar4 = uVar11;
            uVar11 = puVar4[1];
            puVar4[1] = puVar12[1];
            puVar12[1] = uVar11;
            uVar11 = puVar12[2];
            puVar12[2] = puVar4[2];
            puVar4[2] = uVar11;
            uVar11 = puVar4[3];
            puVar4[3] = puVar12[3];
            puVar12[3] = uVar11;
            uVar11 = puVar12[4];
            puVar12[4] = puVar4[4];
            puVar4[4] = uVar11;
            uVar11 = puVar4[5];
            puVar4[5] = puVar12[5];
            puVar12[5] = uVar11;
            uVar11 = puVar12[6];
            puVar12[6] = puVar4[6];
            puVar4[6] = uVar11;
            uVar11 = puVar4[7];
            puVar4[7] = puVar12[7];
            puVar12[7] = uVar11;
            uVar11 = puVar12[8];
            puVar12[8] = puVar4[8];
            puVar4[8] = uVar11;
            uVar11 = puVar4[9];
            puVar4[9] = puVar12[9];
            puVar12[9] = uVar11;
            uVar11 = puVar12[10];
            puVar12[10] = puVar4[10];
            puVar4[10] = uVar11;
            uVar11 = puVar4[0xb];
            puVar4[0xb] = puVar12[0xb];
            puVar12[0xb] = uVar11;
            puVar12 = (uint *)*param_1;
          }
          *(undefined1 *)((int)puVar10 + uVar8) = 0xff;
          *(undefined1 *)((int)puVar10 + (param_1[1] & uVar8 - 4) + 4) = 0xff;
          FUN_016dd1aa(puVar12,puVar4,0x30);
        }
LAB_016250d4:
        bVar16 = uVar8 != uVar13;
        uVar8 = uVar8 + 1;
      } while (bVar16);
      uVar8 = param_1[1];
      if (7 < uVar8) {
        uVar8 = (uVar8 + 1 & 0xfffffff8) - (uVar8 + 1 >> 3);
      }
    }
    local_30 = 0x80000001;
    param_1[2] = uVar8 - param_1[3];
  }
  return local_30;
}

