// FUN_00c50b94 @ 00c50b94 size=1308 calls_out=5 calls_in=1
// strings: 

uint FUN_00c50b94(int *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  bool bVar21;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar15 = param_1[3];
  uVar11 = uVar15 + param_2;
  if (CARRY4(uVar15,param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar18 = param_1[1];
  uVar20 = uVar18 + 1;
  uVar3 = uVar18;
  if (7 < uVar18) {
    uVar3 = (uVar20 & 0xfffffff8) - (uVar20 >> 3);
  }
  if (uVar3 >> 1 < uVar11) {
    if (uVar11 < uVar3 + 1) {
      uVar11 = uVar3 + 1;
    }
    FUN_00c4dc40(&local_34,0x10,4,uVar11);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    if (uVar15 == 0) {
      uVar15 = 0;
    }
    else {
      puVar19 = (uint *)*param_1;
      uVar3 = ~*puVar19 & 0x80808080;
      uVar4 = *param_3;
      uVar5 = param_3[1];
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      iVar13 = 0;
      uVar11 = uVar15;
      puVar14 = puVar19;
      do {
        if (uVar3 == 0) {
          do {
            puVar14 = puVar14 + 1;
            iVar13 = iVar13 + 4;
          } while ((*puVar14 & 0x80808080) == 0x80808080);
          uVar3 = *puVar14 & 0x80808080 ^ 0x80808080;
        }
        uVar17 = iVar13 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                         (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar18 = FUN_00c507d4(uVar4,uVar5,uVar6,uVar7,(char)puVar19[uVar17 * -4 + -4]);
        uVar20 = local_30 & uVar18;
        uVar12 = *(uint *)((int)local_34 + uVar20) & 0x80808080;
        if (uVar12 == 0) {
          iVar8 = 4;
          do {
            uVar20 = uVar20 + iVar8;
            iVar8 = iVar8 + 4;
            uVar20 = uVar20 & local_30;
            uVar12 = *(uint *)((int)local_34 + uVar20) & 0x80808080;
          } while (uVar12 == 0);
        }
        uVar20 = uVar20 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                         (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar20)) {
          uVar20 = *local_34 & 0x80808080;
          uVar20 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                 (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar18 >> 0x19);
        *(byte *)((int)local_34 + uVar20) = bVar2;
        *(byte *)((int)local_34 + (uVar20 - 4 & local_30) + 4) = bVar2;
        uVar11 = uVar11 - 1;
        puVar9 = puVar19 + ~uVar17 * 4;
        uVar12 = puVar9[1];
        uVar17 = puVar9[2];
        uVar18 = puVar9[3];
        puVar16 = local_34 + ~uVar20 * 4;
        *puVar16 = *puVar9;
        puVar16[3] = uVar18;
        puVar16[2] = uVar17;
        puVar16[1] = uVar12;
      } while (uVar11 != 0);
    }
    iVar13 = *param_1;
    iVar8 = param_1[1];
    param_1[1] = local_30;
    *param_1 = (int)local_34;
    param_1[2] = local_2c - uVar15;
    param_1[3] = uVar15;
    if (iVar8 == 0) {
      return 0x80000001;
    }
    iVar10 = iVar8 * 0x10 + 0x10;
    if (iVar8 + iVar10 == -5) {
      return 0x80000001;
    }
    thunk_FUN_016d3fb4(iVar13 - iVar10);
  }
  else {
    if (uVar20 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar20 >> 2;
      if ((uVar20 & 3) != 0) {
        uVar11 = (uVar20 >> 2) + 1;
      }
      puVar14 = (uint *)*param_1;
      iVar13 = 0;
      do {
        puVar14[-iVar13] = (~(puVar14[-iVar13] >> 7) & 0x1010101) + (puVar14[-iVar13] | 0x7f7f7f7f);
        iVar13 = iVar13 + -1;
      } while (-iVar13 != uVar11);
      if (uVar20 < 4) {
        FUN_016dd52c(puVar14 + 1,puVar14,uVar20);
      }
      else {
        *(uint *)((int)puVar14 + uVar20) = *puVar14;
      }
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      uVar4 = *param_3;
      uVar5 = param_3[1];
      uVar11 = 0;
      do {
        if (*(char *)((int)puVar14 + uVar11) == -0x80) {
          puVar9 = puVar14 + ~uVar11 * 4;
          puVar19 = puVar14;
          while( true ) {
            uVar3 = FUN_00c507d4(uVar4,uVar5,uVar6,uVar7,(char)puVar19[uVar11 * -4 + -4]);
            uVar20 = param_1[1];
            uVar12 = uVar20 & uVar3;
            uVar17 = *(uint *)((int)puVar19 + uVar12) & 0x80808080;
            uVar15 = uVar12;
            if (uVar17 == 0) {
              iVar13 = 4;
              do {
                uVar15 = uVar15 + iVar13 & uVar20;
                iVar13 = iVar13 + 4;
                uVar17 = *(uint *)((int)puVar19 + uVar15) & 0x80808080;
              } while (uVar17 == 0);
            }
            uVar15 = uVar15 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                             (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                     uVar20;
            if (-1 < *(char *)((int)puVar19 + uVar15)) {
              uVar15 = *puVar19 & 0x80808080;
              uVar15 = (uint)LZCOUNT((*puVar19 & 0x80) << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                     (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar3 >> 0x18);
            if (((uVar15 - uVar12 ^ uVar11 - uVar12) & uVar20) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar19 + uVar11) = bVar2;
              puVar14 = (uint *)*param_1;
              *(byte *)((int)puVar14 + (uVar20 & uVar11 - 4) + 4) = bVar2;
              goto LAB_00c50f74;
            }
            cVar1 = *(char *)((int)puVar19 + uVar15);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar19 + uVar15) = bVar2;
            puVar14 = (uint *)*param_1;
            *(byte *)((int)puVar14 + (uVar15 - 4 & uVar20) + 4) = bVar2;
            puVar19 = puVar19 + ~uVar15 * 4;
            if (cVar1 == -1) break;
            uVar15 = *puVar9;
            *puVar9 = *puVar19;
            *puVar19 = uVar15;
            uVar15 = puVar19[1];
            puVar19[1] = puVar9[1];
            puVar9[1] = uVar15;
            uVar15 = puVar9[2];
            puVar9[2] = puVar19[2];
            puVar19[2] = uVar15;
            uVar15 = puVar19[3];
            puVar19[3] = puVar9[3];
            puVar9[3] = uVar15;
            puVar19 = (uint *)*param_1;
          }
          uVar15 = param_1[1];
          *(undefined1 *)((int)puVar14 + uVar11) = 0xff;
          *(undefined1 *)((int)puVar14 + (uVar15 & uVar11 - 4) + 4) = 0xff;
          uVar15 = *puVar9;
          uVar3 = puVar9[1];
          uVar20 = puVar9[3];
          puVar19[2] = puVar9[2];
          puVar19[3] = uVar20;
          puVar19[1] = uVar3;
          *puVar19 = uVar15;
        }
LAB_00c50f74:
        bVar21 = uVar11 != uVar18;
        uVar11 = uVar11 + 1;
      } while (bVar21);
      uVar11 = param_1[1];
      if (7 < uVar11) {
        uVar11 = (uVar11 + 1 & 0xfffffff8) - (uVar11 + 1 >> 3);
      }
    }
    param_1[2] = uVar11 - param_1[3];
  }
  return 0x80000001;
}

