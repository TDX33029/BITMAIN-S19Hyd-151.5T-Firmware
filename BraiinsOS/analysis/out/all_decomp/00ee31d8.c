// FUN_00ee31d8 @ 00ee31d8 size=1744 calls_out=5 calls_in=1
// strings: 

uint FUN_00ee31d8(int *param_1)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  int local_3c;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar13 = param_1[3];
  uVar9 = uVar13 + 1;
  if (0xfffffffe < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar18 = param_1[1];
  uVar7 = uVar18 + 1;
  uVar15 = uVar18;
  if (7 < uVar18) {
    uVar15 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
  }
  if (uVar15 >> 1 < uVar9) {
    if (uVar9 < uVar15 + 1) {
      uVar9 = uVar15 + 1;
    }
    FUN_00ee38b0(&local_34,0x60,uVar9);
    uVar9 = local_30;
    if (local_34 != (uint *)0x0) {
      puVar3 = (uint *)*param_1;
      if (uVar13 != 0) {
        iVar14 = 0;
        uVar15 = ~*puVar3 & 0x80808080;
        puVar12 = puVar3;
        uVar9 = uVar13;
        do {
          if (uVar15 == 0) {
            do {
              puVar12 = puVar12 + 1;
              iVar14 = iVar14 + 4;
            } while ((*puVar12 & 0x80808080) == 0x80808080);
            uVar15 = *puVar12 & 0x80808080 ^ 0x80808080;
          }
          iVar5 = iVar14 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                          (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3);
          uVar7 = puVar3[iVar5 * -0x18 + -0x18];
          uVar8 = (puVar3 + iVar5 * -0x18 + -0x18)[1];
          uVar7 = ((((((((uVar7 & 0xff ^ 0x84222325) * 0x1b3 ^ (uVar7 & 0xffff) >> 8) * 0x1b3 ^
                       (uVar7 & 0xffffff) >> 0x10) * 0x1b3 ^ uVar7 >> 0x18) * 0x1b3 ^ uVar8 & 0xff)
                     * 0x1b3 ^ (uVar8 & 0xffff) >> 8) * 0x1b3 ^ (uVar8 & 0xffffff) >> 0x10) * 0x1b3
                  ^ uVar8 >> 0x18) * 0x1b3;
          uVar8 = local_30 & uVar7;
          uVar10 = *(uint *)((int)local_34 + uVar8) & 0x80808080;
          if (uVar10 == 0) {
            iVar16 = 4;
            do {
              uVar8 = uVar8 + iVar16;
              iVar16 = iVar16 + 4;
              uVar8 = uVar8 & local_30;
              uVar10 = *(uint *)((int)local_34 + uVar8) & 0x80808080;
            } while (uVar10 == 0);
          }
          uVar8 = uVar8 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                         (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                  local_30;
          if (-1 < *(char *)((int)local_34 + uVar8)) {
            uVar8 = *local_34 & 0x80808080;
            uVar8 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                  (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
          }
          uVar15 = uVar15 - 1 & uVar15;
          bVar2 = (byte)(uVar7 >> 0x19);
          *(byte *)((int)local_34 + uVar8) = bVar2;
          uVar9 = uVar9 - 1;
          *(byte *)((int)local_34 + (uVar8 - 4 & local_30) + 4) = bVar2;
          FUN_016dd1aa(local_34 + uVar8 * -0x18 + -0x18,puVar3 + iVar5 * -0x18 + -0x18,0x60);
        } while (uVar9 != 0);
      }
      *param_1 = (int)local_34;
      param_1[1] = local_30;
      uVar9 = 0x80000001;
      param_1[2] = local_2c - uVar13;
      if ((uVar18 != 0) && (iVar14 = uVar18 * 0x60 + 0x60, uVar18 + iVar14 != -5)) {
        thunk_FUN_016d3fb4((int)puVar3 - iVar14);
      }
    }
    return uVar9;
  }
  if (uVar7 == 0) {
    uVar15 = 0;
  }
  else {
    uVar9 = uVar7 >> 2;
    if ((uVar7 & 3) != 0) {
      uVar9 = (uVar7 >> 2) + 1;
    }
    puVar3 = (uint *)*param_1;
    iVar14 = 0;
    do {
      puVar3[-iVar14] = (~(puVar3[-iVar14] >> 7) & 0x1010101) + (puVar3[-iVar14] | 0x7f7f7f7f);
      iVar14 = iVar14 + -1;
    } while (-iVar14 != uVar9);
    puVar12 = puVar3 + 1;
    if (uVar7 < 4) {
      FUN_016dd52c(puVar12,puVar3);
    }
    else {
      *(uint *)((int)puVar3 + uVar7) = *puVar3;
    }
    uVar9 = 0;
    do {
      if (*(char *)((int)puVar3 + uVar9) == -0x80) {
        puVar6 = puVar3 + (uVar9 + 1) * -0x18;
        while( true ) {
          uVar7 = puVar3[uVar9 * -0x18 + -0x18];
          uVar8 = (puVar3 + uVar9 * -0x18 + -0x18)[1];
          uVar7 = ((((((((uVar7 & 0xff ^ 0x84222325) * 0x1b3 ^ (uVar7 & 0xffff) >> 8) * 0x1b3 ^
                       (uVar7 & 0xffffff) >> 0x10) * 0x1b3 ^ uVar7 >> 0x18) * 0x1b3 ^ uVar8 & 0xff)
                     * 0x1b3 ^ (uVar8 & 0xffff) >> 8) * 0x1b3 ^ (uVar8 & 0xffffff) >> 0x10) * 0x1b3
                  ^ uVar8 >> 0x18) * 0x1b3;
          uVar10 = uVar18 & uVar7;
          uVar11 = *(uint *)((int)puVar3 + uVar10) & 0x80808080;
          uVar8 = uVar10;
          if (uVar11 == 0) {
            local_3c = 4;
            do {
              uVar8 = uVar8 + local_3c & uVar18;
              uVar11 = *(uint *)((int)puVar3 + uVar8) & 0x80808080;
              local_3c = local_3c + 4;
            } while (uVar11 == 0);
          }
          uVar8 = uVar8 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                         (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                  uVar18;
          if (-1 < *(char *)((int)puVar3 + uVar8)) {
            uVar8 = *puVar3 & 0x80808080;
            uVar8 = (uint)LZCOUNT((*puVar3 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                  (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
          }
          bVar2 = (byte)(uVar7 >> 0x18);
          if (((uVar8 - uVar10 ^ uVar9 - uVar10) & uVar18) < 4) {
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar3 + uVar9) = bVar2;
            *(byte *)((int)puVar12 + (uVar9 - 4 & uVar18)) = bVar2;
            goto LAB_00ee3790;
          }
          cVar1 = *(char *)((int)puVar3 + uVar8);
          bVar2 = bVar2 >> 1;
          *(byte *)((int)puVar3 + uVar8) = bVar2;
          *(byte *)((int)puVar12 + (uVar8 - 4 & uVar18)) = bVar2;
          puVar4 = puVar3 + uVar8 * -0x18 + -0x18;
          if (cVar1 == -1) break;
          uVar7 = puVar6[1];
          uVar11 = puVar4[3];
          uVar8 = puVar6[3];
          uVar17 = puVar4[2];
          uVar10 = puVar4[1];
          puVar4[2] = puVar6[2];
          uVar19 = *puVar6;
          *puVar6 = *puVar4;
          puVar6[1] = uVar10;
          puVar6[3] = uVar11;
          uVar10 = puVar6[4];
          puVar4[1] = uVar7;
          uVar11 = puVar4[4];
          puVar4[3] = uVar8;
          puVar4[4] = uVar10;
          uVar7 = puVar6[5];
          puVar6[5] = puVar4[5];
          puVar4[5] = uVar7;
          uVar7 = puVar6[6];
          *puVar4 = uVar19;
          puVar6[6] = puVar4[6];
          puVar4[6] = uVar7;
          uVar7 = puVar6[7];
          puVar6[7] = puVar4[7];
          puVar4[7] = uVar7;
          uVar7 = puVar6[8];
          puVar6[8] = puVar4[8];
          puVar4[8] = uVar7;
          puVar6[2] = uVar17;
          uVar7 = puVar6[9];
          puVar6[9] = puVar4[9];
          puVar4[9] = uVar7;
          uVar7 = puVar6[10];
          puVar6[10] = puVar4[10];
          puVar4[10] = uVar7;
          puVar6[4] = uVar11;
          uVar7 = puVar6[0xb];
          puVar6[0xb] = puVar4[0xb];
          puVar4[0xb] = uVar7;
          uVar7 = puVar6[0xc];
          puVar6[0xc] = puVar4[0xc];
          puVar4[0xc] = uVar7;
          uVar7 = puVar6[0xd];
          puVar6[0xd] = puVar4[0xd];
          puVar4[0xd] = uVar7;
          uVar7 = puVar6[0xe];
          puVar6[0xe] = puVar4[0xe];
          puVar4[0xe] = uVar7;
          uVar7 = puVar6[0xf];
          puVar6[0xf] = puVar4[0xf];
          puVar4[0xf] = uVar7;
          uVar7 = puVar6[0x10];
          puVar6[0x10] = puVar4[0x10];
          puVar4[0x10] = uVar7;
          uVar7 = puVar6[0x11];
          puVar6[0x11] = puVar4[0x11];
          puVar4[0x11] = uVar7;
          uVar7 = puVar6[0x12];
          puVar6[0x12] = puVar4[0x12];
          puVar4[0x12] = uVar7;
          uVar7 = puVar6[0x13];
          puVar6[0x13] = puVar4[0x13];
          puVar4[0x13] = uVar7;
          uVar7 = puVar6[0x14];
          puVar6[0x14] = puVar4[0x14];
          puVar4[0x14] = uVar7;
          uVar7 = puVar6[0x15];
          puVar6[0x15] = puVar4[0x15];
          puVar4[0x15] = uVar7;
          uVar7 = puVar6[0x16];
          puVar6[0x16] = puVar4[0x16];
          puVar4[0x16] = uVar7;
          uVar7 = puVar6[0x17];
          puVar6[0x17] = puVar4[0x17];
          puVar4[0x17] = uVar7;
        }
        *(undefined1 *)((int)puVar3 + uVar9) = 0xff;
        *(undefined1 *)((int)puVar12 + (uVar9 - 4 & uVar18)) = 0xff;
        FUN_016dd1aa(puVar4,puVar6,0x60);
      }
LAB_00ee3790:
      bVar20 = uVar9 != uVar18;
      uVar9 = uVar9 + 1;
    } while (bVar20);
  }
  param_1[2] = uVar15 - uVar13;
  return 0x80000001;
}

