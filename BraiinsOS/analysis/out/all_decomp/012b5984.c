// FUN_012b5984 @ 012b5984 size=1312 calls_out=5 calls_in=1
// strings: 

uint FUN_012b5984(int *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  bool bVar21;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar16 = param_1[3];
  uVar12 = uVar16 + 1;
  if (0xfffffffe < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar19 = param_1[1];
  uVar9 = uVar19 + 1;
  uVar3 = uVar19;
  if (7 < uVar19) {
    uVar3 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
  }
  if (uVar3 >> 1 < uVar12) {
    if (uVar12 < uVar3 + 1) {
      uVar12 = uVar3 + 1;
    }
    FUN_012b5eac(&local_34,0x10,uVar12);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    if (uVar16 == 0) {
      uVar16 = 0;
    }
    else {
      puVar20 = (uint *)*param_1;
      uVar3 = ~*puVar20 & 0x80808080;
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      iVar14 = 0;
      uVar12 = uVar16;
      puVar15 = puVar20;
      do {
        if (uVar3 == 0) {
          do {
            puVar15 = puVar15 + 1;
            iVar14 = iVar14 + 4;
          } while ((*puVar15 & 0x80808080) == 0x80808080);
          uVar3 = *puVar15 & 0x80808080 ^ 0x80808080;
        }
        uVar18 = iVar14 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                         (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar9 = FUN_00c5abb0(uVar4,uVar5,uVar6,uVar7,puVar20[uVar18 * -4 + -4],
                             (puVar20 + uVar18 * -4 + -4)[1]);
        uVar19 = local_30 & uVar9;
        uVar13 = *(uint *)((int)local_34 + uVar19) & 0x80808080;
        if (uVar13 == 0) {
          iVar8 = 4;
          do {
            uVar19 = uVar19 + iVar8;
            iVar8 = iVar8 + 4;
            uVar19 = uVar19 & local_30;
            uVar13 = *(uint *)((int)local_34 + uVar19) & 0x80808080;
          } while (uVar13 == 0);
        }
        uVar19 = uVar19 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                         (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar19)) {
          uVar19 = *local_34 & 0x80808080;
          uVar19 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                 (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar9 >> 0x19);
        *(byte *)((int)local_34 + uVar19) = bVar2;
        *(byte *)((int)local_34 + (uVar19 - 4 & local_30) + 4) = bVar2;
        uVar12 = uVar12 - 1;
        puVar10 = puVar20 + ~uVar18 * 4;
        uVar13 = puVar10[1];
        uVar18 = puVar10[2];
        uVar9 = puVar10[3];
        puVar17 = local_34 + ~uVar19 * 4;
        *puVar17 = *puVar10;
        puVar17[3] = uVar9;
        puVar17[2] = uVar18;
        puVar17[1] = uVar13;
      } while (uVar12 != 0);
    }
    iVar14 = *param_1;
    iVar8 = param_1[1];
    param_1[1] = local_30;
    *param_1 = (int)local_34;
    param_1[2] = local_2c - uVar16;
    param_1[3] = uVar16;
    if (iVar8 == 0) {
      return 0x80000001;
    }
    iVar11 = iVar8 * 0x10 + 0x10;
    if (iVar8 + iVar11 == -5) {
      return 0x80000001;
    }
    thunk_FUN_016d3fb4(iVar14 - iVar11);
  }
  else {
    if (uVar9 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar9 >> 2;
      if ((uVar9 & 3) != 0) {
        uVar12 = (uVar9 >> 2) + 1;
      }
      puVar15 = (uint *)*param_1;
      iVar14 = 0;
      do {
        puVar15[-iVar14] = (~(puVar15[-iVar14] >> 7) & 0x1010101) + (puVar15[-iVar14] | 0x7f7f7f7f);
        iVar14 = iVar14 + -1;
      } while (-iVar14 != uVar12);
      if (uVar9 < 4) {
        FUN_016dd52c(puVar15 + 1,puVar15);
      }
      else {
        *(uint *)((int)puVar15 + uVar9) = *puVar15;
      }
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar12 = 0;
      do {
        if (*(char *)((int)puVar15 + uVar12) == -0x80) {
          puVar10 = puVar15 + ~uVar12 * 4;
          puVar20 = puVar15;
          while( true ) {
            uVar3 = FUN_00c5abb0(uVar4,uVar5,uVar6,uVar7,puVar20[uVar12 * -4 + -4],
                                 puVar20[uVar12 * -4 + -3]);
            uVar9 = param_1[1];
            uVar13 = uVar9 & uVar3;
            uVar18 = *(uint *)((int)puVar20 + uVar13) & 0x80808080;
            uVar16 = uVar13;
            if (uVar18 == 0) {
              iVar14 = 4;
              do {
                uVar16 = uVar16 + iVar14 & uVar9;
                iVar14 = iVar14 + 4;
                uVar18 = *(uint *)((int)puVar20 + uVar16) & 0x80808080;
              } while (uVar18 == 0);
            }
            uVar16 = uVar16 + ((uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                             (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3) &
                     uVar9;
            if (-1 < *(char *)((int)puVar20 + uVar16)) {
              uVar16 = *puVar20 & 0x80808080;
              uVar16 = (uint)LZCOUNT((*puVar20 & 0x80) << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                     (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar3 >> 0x18);
            if (((uVar16 - uVar13 ^ uVar12 - uVar13) & uVar9) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar20 + uVar12) = bVar2;
              puVar15 = (uint *)*param_1;
              *(byte *)((int)puVar15 + (uVar9 & uVar12 - 4) + 4) = bVar2;
              goto LAB_012b5d68;
            }
            cVar1 = *(char *)((int)puVar20 + uVar16);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar20 + uVar16) = bVar2;
            puVar15 = (uint *)*param_1;
            *(byte *)((int)puVar15 + (uVar16 - 4 & uVar9) + 4) = bVar2;
            puVar20 = puVar20 + ~uVar16 * 4;
            if (cVar1 == -1) break;
            uVar16 = *puVar10;
            *puVar10 = *puVar20;
            *puVar20 = uVar16;
            uVar16 = puVar20[1];
            puVar20[1] = puVar10[1];
            puVar10[1] = uVar16;
            uVar16 = puVar10[2];
            puVar10[2] = puVar20[2];
            puVar20[2] = uVar16;
            uVar16 = puVar20[3];
            puVar20[3] = puVar10[3];
            puVar10[3] = uVar16;
            puVar20 = (uint *)*param_1;
          }
          uVar16 = param_1[1];
          *(undefined1 *)((int)puVar15 + uVar12) = 0xff;
          *(undefined1 *)((int)puVar15 + (uVar16 & uVar12 - 4) + 4) = 0xff;
          uVar16 = *puVar10;
          uVar3 = puVar10[1];
          uVar9 = puVar10[3];
          puVar20[2] = puVar10[2];
          puVar20[3] = uVar9;
          puVar20[1] = uVar3;
          *puVar20 = uVar16;
        }
LAB_012b5d68:
        bVar21 = uVar12 != uVar19;
        uVar12 = uVar12 + 1;
      } while (bVar21);
      uVar12 = param_1[1];
      if (7 < uVar12) {
        uVar12 = (uVar12 + 1 & 0xfffffff8) - (uVar12 + 1 >> 3);
      }
    }
    param_1[2] = uVar12 - param_1[3];
  }
  return 0x80000001;
}

