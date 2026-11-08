// FUN_01643740 @ 01643740 size=1876 calls_out=6 calls_in=1
// strings: 

uint FUN_01643740(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar15 = param_1[3];
  uVar11 = uVar15 + 1;
  if (0xfffffffe < uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar17 = param_1[1];
  uVar9 = uVar17 + 1;
  uVar21 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
  uVar3 = uVar21;
  if (uVar17 < 8) {
    uVar3 = uVar17;
  }
  if (uVar3 >> 1 < uVar11) {
    if (uVar11 < uVar3 + 1) {
      uVar11 = uVar3 + 1;
    }
    FUN_01643e9c(&local_34,0xa0,uVar11);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    puVar13 = (uint *)*param_1;
    if (uVar15 == 0) {
      uVar15 = 0;
    }
    else {
      uVar5 = *param_2;
      iVar16 = 0;
      uVar6 = param_2[1];
      uVar21 = ~*puVar13 & 0x80808080;
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      uVar11 = uVar15;
      puVar18 = puVar13;
      do {
        if (uVar21 == 0) {
          do {
            puVar18 = puVar18 + 1;
            iVar16 = iVar16 + 4;
          } while ((*puVar18 & 0x80808080) == 0x80808080);
          uVar21 = *puVar18 & 0x80808080 ^ 0x80808080;
        }
        uVar19 = iVar16 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                         (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3);
        uVar3 = FUN_0163cf6c(uVar5,uVar6,uVar7,uVar8,puVar13[uVar19 * -0x28 + -0x28]);
        uVar9 = local_30 & uVar3;
        uVar12 = *(uint *)((int)local_34 + uVar9) & 0x80808080;
        if (uVar12 == 0) {
          iVar10 = 4;
          do {
            uVar9 = uVar9 + iVar10;
            iVar10 = iVar10 + 4;
            uVar9 = uVar9 & local_30;
            uVar12 = *(uint *)((int)local_34 + uVar9) & 0x80808080;
          } while (uVar12 == 0);
        }
        uVar9 = uVar9 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                       (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                local_30;
        if (-1 < *(char *)((int)local_34 + uVar9)) {
          uVar9 = *local_34 & 0x80808080;
          uVar9 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
        }
        uVar21 = uVar21 - 1 & uVar21;
        bVar2 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)local_34 + uVar9) = bVar2;
        uVar11 = uVar11 - 1;
        *(byte *)((int)local_34 + (uVar9 - 4 & local_30) + 4) = bVar2;
        FUN_016dd1aa(local_34 + ~uVar9 * 0x28,puVar13 + ~uVar19 * 0x28,0xa0);
      } while (uVar11 != 0);
    }
    param_1[1] = local_30;
    param_1[2] = local_2c - uVar15;
    *param_1 = local_34;
    if (uVar17 == 0) {
      return 0x80000001;
    }
    iVar16 = uVar17 * 0xa0 + 0xa0;
    if (uVar17 + iVar16 == -5) {
      return 0x80000001;
    }
    thunk_FUN_016d3fb4((int)puVar13 - iVar16);
  }
  else {
    if (uVar9 == 0) {
      uVar21 = 0;
    }
    else {
      uVar11 = uVar9 >> 2;
      if ((uVar9 & 3) != 0) {
        uVar11 = (uVar9 >> 2) + 1;
      }
      puVar13 = (uint *)*param_1;
      iVar16 = 0;
      do {
        puVar13[-iVar16] = (~(puVar13[-iVar16] >> 7) & 0x1010101) + (puVar13[-iVar16] | 0x7f7f7f7f);
        iVar16 = iVar16 + -1;
      } while (-iVar16 != uVar11);
      puVar18 = puVar13 + 1;
      if (uVar9 < 4) {
        FUN_016dd52c(puVar18,puVar13);
      }
      else {
        *(uint *)((int)puVar13 + uVar9) = *puVar13;
      }
      uVar5 = *param_2;
      uVar6 = param_2[1];
      uVar8 = param_2[2];
      uVar7 = param_2[3];
      uVar11 = 0;
      do {
        if (*(char *)((int)puVar13 + uVar11) == -0x80) {
          puVar14 = puVar13 + ~uVar11 * 0x28;
          while( true ) {
            uVar9 = FUN_0163cf6c(uVar5,uVar6,uVar8,uVar7,puVar13[uVar11 * -0x28 + -0x28]);
            uVar12 = uVar17 & uVar9;
            uVar19 = *(uint *)((int)puVar13 + uVar12) & 0x80808080;
            uVar3 = uVar12;
            if (uVar19 == 0) {
              iVar16 = 4;
              do {
                uVar3 = uVar3 + iVar16 & uVar17;
                iVar16 = iVar16 + 4;
                uVar19 = *(uint *)((int)puVar13 + uVar3) & 0x80808080;
              } while (uVar19 == 0);
            }
            uVar3 = uVar3 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                           (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) &
                    uVar17;
            if (-1 < *(char *)((int)puVar13 + uVar3)) {
              uVar3 = *puVar13 & 0x80808080;
              uVar3 = (uint)LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                    (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar9 >> 0x18);
            if (((uVar3 - uVar12 ^ uVar11 - uVar12) & uVar17) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar13 + uVar11) = bVar2;
              *(byte *)((int)puVar18 + (uVar17 & uVar11 - 4)) = bVar2;
              goto LAB_01643d74;
            }
            cVar1 = *(char *)((int)puVar13 + uVar3);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar13 + uVar3) = bVar2;
            *(byte *)((int)puVar18 + (uVar3 - 4 & uVar17)) = bVar2;
            puVar4 = puVar13 + ~uVar3 * 0x28;
            if (cVar1 == -1) break;
            uVar3 = puVar14[1];
            uVar9 = puVar14[2];
            uVar19 = puVar4[1];
            uVar12 = puVar4[2];
            uVar20 = *puVar14;
            *puVar14 = *puVar4;
            puVar14[1] = uVar19;
            puVar14[2] = uVar12;
            uVar12 = puVar14[4];
            puVar4[1] = uVar3;
            uVar19 = puVar4[4];
            puVar4[2] = uVar9;
            puVar4[4] = uVar12;
            uVar3 = puVar14[5];
            puVar14[5] = puVar4[5];
            puVar4[5] = uVar3;
            uVar3 = puVar14[6];
            puVar14[6] = puVar4[6];
            puVar4[6] = uVar3;
            *puVar4 = uVar20;
            uVar3 = puVar14[7];
            puVar14[7] = puVar4[7];
            puVar4[7] = uVar3;
            uVar3 = puVar14[8];
            puVar14[8] = puVar4[8];
            puVar4[8] = uVar3;
            uVar9 = puVar14[3];
            uVar12 = puVar4[3];
            uVar3 = puVar14[9];
            puVar14[9] = puVar4[9];
            puVar4[9] = uVar3;
            puVar14[3] = uVar12;
            puVar4[3] = uVar9;
            uVar3 = puVar14[10];
            puVar14[10] = puVar4[10];
            puVar4[10] = uVar3;
            puVar14[4] = uVar19;
            uVar3 = puVar14[0xb];
            puVar14[0xb] = puVar4[0xb];
            puVar4[0xb] = uVar3;
            uVar3 = puVar14[0xc];
            puVar14[0xc] = puVar4[0xc];
            puVar4[0xc] = uVar3;
            uVar3 = puVar14[0xd];
            puVar14[0xd] = puVar4[0xd];
            puVar4[0xd] = uVar3;
            uVar3 = puVar14[0xe];
            puVar14[0xe] = puVar4[0xe];
            puVar4[0xe] = uVar3;
            uVar3 = puVar14[0xf];
            puVar14[0xf] = puVar4[0xf];
            puVar4[0xf] = uVar3;
            uVar3 = puVar14[0x10];
            puVar14[0x10] = puVar4[0x10];
            puVar4[0x10] = uVar3;
            uVar3 = puVar14[0x11];
            puVar14[0x11] = puVar4[0x11];
            puVar4[0x11] = uVar3;
            uVar3 = puVar14[0x12];
            puVar14[0x12] = puVar4[0x12];
            puVar4[0x12] = uVar3;
            uVar3 = puVar14[0x13];
            puVar14[0x13] = puVar4[0x13];
            puVar4[0x13] = uVar3;
            uVar3 = puVar14[0x14];
            puVar14[0x14] = puVar4[0x14];
            puVar4[0x14] = uVar3;
            uVar3 = puVar14[0x15];
            puVar14[0x15] = puVar4[0x15];
            puVar4[0x15] = uVar3;
            uVar3 = puVar14[0x16];
            puVar14[0x16] = puVar4[0x16];
            puVar4[0x16] = uVar3;
            uVar3 = puVar14[0x17];
            puVar14[0x17] = puVar4[0x17];
            puVar4[0x17] = uVar3;
            uVar3 = puVar14[0x18];
            puVar14[0x18] = puVar4[0x18];
            puVar4[0x18] = uVar3;
            uVar3 = puVar14[0x19];
            puVar14[0x19] = puVar4[0x19];
            puVar4[0x19] = uVar3;
            uVar3 = puVar14[0x1a];
            puVar14[0x1a] = puVar4[0x1a];
            puVar4[0x1a] = uVar3;
            uVar3 = puVar14[0x1b];
            puVar14[0x1b] = puVar4[0x1b];
            puVar4[0x1b] = uVar3;
            uVar3 = puVar14[0x1c];
            puVar14[0x1c] = puVar4[0x1c];
            puVar4[0x1c] = uVar3;
            uVar3 = puVar14[0x1d];
            puVar14[0x1d] = puVar4[0x1d];
            puVar4[0x1d] = uVar3;
            uVar3 = puVar14[0x1e];
            puVar14[0x1e] = puVar4[0x1e];
            puVar4[0x1e] = uVar3;
            uVar3 = puVar14[0x1f];
            puVar14[0x1f] = puVar4[0x1f];
            puVar4[0x1f] = uVar3;
            uVar3 = puVar14[0x20];
            puVar14[0x20] = puVar4[0x20];
            puVar4[0x20] = uVar3;
            uVar3 = puVar14[0x21];
            puVar14[0x21] = puVar4[0x21];
            puVar4[0x21] = uVar3;
            uVar3 = puVar14[0x22];
            puVar14[0x22] = puVar4[0x22];
            puVar4[0x22] = uVar3;
            uVar3 = puVar14[0x23];
            puVar14[0x23] = puVar4[0x23];
            puVar4[0x23] = uVar3;
            uVar3 = puVar14[0x24];
            puVar14[0x24] = puVar4[0x24];
            puVar4[0x24] = uVar3;
            uVar3 = puVar14[0x25];
            puVar14[0x25] = puVar4[0x25];
            puVar4[0x25] = uVar3;
            uVar3 = puVar14[0x26];
            puVar14[0x26] = puVar4[0x26];
            puVar4[0x26] = uVar3;
            uVar3 = puVar14[0x27];
            puVar14[0x27] = puVar4[0x27];
            puVar4[0x27] = uVar3;
          }
          *(undefined1 *)((int)puVar13 + uVar11) = 0xff;
          *(undefined1 *)((int)puVar18 + (uVar17 & uVar11 - 4)) = 0xff;
          FUN_016dd1aa(puVar4,puVar14,0xa0);
        }
LAB_01643d74:
        bVar22 = uVar11 != uVar17;
        uVar11 = uVar11 + 1;
      } while (bVar22);
      if (uVar17 < 8) {
        uVar21 = uVar17;
      }
    }
    param_1[2] = uVar21 - uVar15;
  }
  return 0x80000001;
}

