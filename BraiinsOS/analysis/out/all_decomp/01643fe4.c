// FUN_01643fe4 @ 01643fe4 size=1332 calls_out=5 calls_in=1
// strings: 

uint FUN_01643fe4(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar13 = param_1[3];
  uVar11 = uVar13 + 1;
  if (0xfffffffe < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar14 = param_1[1];
  uVar8 = uVar14 + 1;
  uVar17 = (uVar8 & 0xfffffff8) - (uVar8 >> 3);
  uVar3 = uVar17;
  if (uVar14 < 8) {
    uVar3 = uVar14;
  }
  if (uVar3 >> 1 < uVar11) {
    if (uVar11 < uVar3 + 1) {
      uVar11 = uVar3 + 1;
    }
    FUN_01643e9c(&local_34,0x10,uVar11);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    puVar19 = (uint *)*param_1;
    if (uVar13 == 0) {
      uVar13 = 0;
    }
    else {
      iVar18 = 0;
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar17 = ~*puVar19 & 0x80808080;
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      uVar11 = uVar13;
      puVar16 = puVar19;
      do {
        if (uVar17 == 0) {
          do {
            puVar16 = puVar16 + 1;
            iVar18 = iVar18 + 4;
          } while ((*puVar16 & 0x80808080) == 0x80808080);
          uVar17 = *puVar16 & 0x80808080 ^ 0x80808080;
        }
        uVar20 = iVar18 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                         (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3);
        uVar3 = FUN_0163cf6c(uVar4,uVar5,uVar6,uVar7,puVar19[uVar20 * -4 + -4]);
        uVar8 = local_30 & uVar3;
        uVar12 = *(uint *)((int)local_34 + uVar8) & 0x80808080;
        if (uVar12 == 0) {
          iVar10 = 4;
          do {
            uVar8 = uVar8 + iVar10;
            iVar10 = iVar10 + 4;
            uVar8 = uVar8 & local_30;
            uVar12 = *(uint *)((int)local_34 + uVar8) & 0x80808080;
          } while (uVar12 == 0);
        }
        uVar8 = uVar8 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                       (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                local_30;
        if (-1 < *(char *)((int)local_34 + uVar8)) {
          uVar8 = *local_34 & 0x80808080;
          uVar8 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
        }
        uVar17 = uVar17 - 1 & uVar17;
        bVar2 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)local_34 + uVar8) = bVar2;
        uVar11 = uVar11 - 1;
        *(byte *)((int)local_34 + (uVar8 - 4 & local_30) + 4) = bVar2;
        puVar9 = puVar19 + ~uVar20 * 4;
        uVar12 = puVar9[1];
        uVar20 = puVar9[2];
        uVar3 = puVar9[3];
        puVar15 = local_34 + ~uVar8 * 4;
        *puVar15 = *puVar9;
        puVar15[3] = uVar3;
        puVar15[2] = uVar20;
        puVar15[1] = uVar12;
      } while (uVar11 != 0);
    }
    *param_1 = local_34;
    param_1[1] = local_30;
    param_1[2] = local_2c - uVar13;
    if (uVar14 == 0) {
      return 0x80000001;
    }
    iVar18 = uVar14 * 0x10 + 0x10;
    if (uVar14 + iVar18 == -5) {
      return 0x80000001;
    }
    thunk_FUN_016d3fb4((int)puVar19 - iVar18);
  }
  else {
    if (uVar8 == 0) {
      uVar17 = 0;
    }
    else {
      uVar11 = uVar8 >> 2;
      if ((uVar8 & 3) != 0) {
        uVar11 = (uVar8 >> 2) + 1;
      }
      puVar19 = (uint *)*param_1;
      iVar18 = 0;
      do {
        puVar19[-iVar18] = (~(puVar19[-iVar18] >> 7) & 0x1010101) + (puVar19[-iVar18] | 0x7f7f7f7f);
        iVar18 = iVar18 + -1;
      } while (-iVar18 != uVar11);
      puVar16 = puVar19 + 1;
      if (uVar8 < 4) {
        FUN_016dd52c(puVar16,puVar19);
      }
      else {
        *(uint *)((int)puVar19 + uVar8) = *puVar19;
      }
      uVar4 = *param_2;
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      uVar5 = param_2[1];
      uVar11 = 0;
      do {
        if (*(char *)((int)puVar19 + uVar11) == -0x80) {
          puVar9 = puVar19 + ~uVar11 * 4;
          while( true ) {
            uVar8 = FUN_0163cf6c(uVar4,uVar5,uVar6,uVar7,puVar19[uVar11 * -4 + -4]);
            uVar12 = uVar14 & uVar8;
            uVar20 = *(uint *)((int)puVar19 + uVar12) & 0x80808080;
            uVar3 = uVar12;
            if (uVar20 == 0) {
              iVar18 = 4;
              do {
                uVar3 = uVar3 + iVar18 & uVar14;
                iVar18 = iVar18 + 4;
                uVar20 = *(uint *)((int)puVar19 + uVar3) & 0x80808080;
              } while (uVar20 == 0);
            }
            uVar3 = uVar3 + ((uint)LZCOUNT(uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                           (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3) &
                    uVar14;
            if (-1 < *(char *)((int)puVar19 + uVar3)) {
              uVar3 = *puVar19 & 0x80808080;
              uVar3 = (uint)LZCOUNT((*puVar19 & 0x80) << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                    (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar8 >> 0x18);
            if (((uVar3 - uVar12 ^ uVar11 - uVar12) & uVar14) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar19 + uVar11) = bVar2;
              *(byte *)((int)puVar16 + (uVar14 & uVar11 - 4)) = bVar2;
              goto LAB_016443f0;
            }
            cVar1 = *(char *)((int)puVar19 + uVar3);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar19 + uVar3) = bVar2;
            *(byte *)((int)puVar16 + (uVar3 - 4 & uVar14)) = bVar2;
            puVar15 = puVar19 + ~uVar3 * 4;
            if (cVar1 == -1) break;
            uVar3 = puVar9[1];
            uVar8 = puVar9[2];
            uVar12 = puVar15[2];
            puVar9[1] = puVar15[1];
            puVar9[2] = uVar12;
            uVar21 = *puVar9;
            uVar12 = puVar9[3];
            uVar20 = puVar15[3];
            *puVar9 = *puVar15;
            *puVar15 = uVar21;
            puVar15[1] = uVar3;
            puVar15[2] = uVar8;
            puVar9[3] = uVar20;
            puVar15[3] = uVar12;
          }
          *(undefined1 *)((int)puVar19 + uVar11) = 0xff;
          *(undefined1 *)((int)puVar16 + (uVar14 & uVar11 - 4)) = 0xff;
          uVar3 = *puVar9;
          uVar8 = puVar9[1];
          uVar12 = puVar9[2];
          puVar15[3] = puVar9[3];
          puVar15[2] = uVar12;
          puVar15[1] = uVar8;
          *puVar15 = uVar3;
        }
LAB_016443f0:
        bVar22 = uVar11 != uVar14;
        uVar11 = uVar11 + 1;
      } while (bVar22);
      if (uVar14 < 8) {
        uVar17 = uVar14;
      }
    }
    param_1[2] = uVar17 - uVar13;
  }
  return 0x80000001;
}

