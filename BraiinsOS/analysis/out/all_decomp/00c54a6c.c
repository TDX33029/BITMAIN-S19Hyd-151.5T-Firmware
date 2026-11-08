// FUN_00c54a6c @ 00c54a6c size=1308 calls_out=5 calls_in=1
// strings: 

uint FUN_00c54a6c(int *param_1,uint param_2,undefined4 *param_3)

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
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
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
  uVar17 = param_1[1];
  uVar19 = uVar17 + 1;
  uVar3 = uVar17;
  if (7 < uVar17) {
    uVar3 = (uVar19 & 0xfffffff8) - (uVar19 >> 3);
  }
  if (uVar3 >> 1 < uVar11) {
    if (uVar11 < uVar3 + 1) {
      uVar11 = uVar3 + 1;
    }
    FUN_00c4dc40(&local_34,0xc,4,uVar11);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    if (uVar15 == 0) {
      uVar15 = 0;
    }
    else {
      puVar20 = (uint *)*param_1;
      uVar4 = *param_3;
      iVar18 = 0;
      uVar5 = param_3[1];
      uVar3 = ~*puVar20 & 0x80808080;
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      uVar11 = uVar15;
      puVar14 = puVar20;
      do {
        if (uVar3 == 0) {
          do {
            puVar14 = puVar14 + 1;
            iVar18 = iVar18 + 4;
          } while ((*puVar14 & 0x80808080) == 0x80808080);
          uVar3 = *puVar14 & 0x80808080 ^ 0x80808080;
        }
        uVar13 = iVar18 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                         (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar17 = FUN_00c54f90(uVar4,uVar5,uVar6,uVar7,puVar20[uVar13 * -3 + -3],
                              puVar20[uVar13 * -3 + -2]);
        uVar19 = local_30 & uVar17;
        uVar12 = *(uint *)((int)local_34 + uVar19) & 0x80808080;
        if (uVar12 == 0) {
          iVar8 = 4;
          do {
            uVar19 = uVar19 + iVar8;
            iVar8 = iVar8 + 4;
            uVar19 = uVar19 & local_30;
            uVar12 = *(uint *)((int)local_34 + uVar19) & 0x80808080;
          } while (uVar12 == 0);
        }
        uVar19 = uVar19 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                         (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar19)) {
          uVar19 = *local_34 & 0x80808080;
          uVar19 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                 (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar17 >> 0x19);
        *(byte *)((int)local_34 + uVar19) = bVar2;
        *(byte *)((int)local_34 + (uVar19 - 4 & local_30) + 4) = bVar2;
        puVar9 = puVar20 + ~uVar13 * 3;
        uVar11 = uVar11 - 1;
        uVar12 = puVar9[1];
        uVar17 = puVar9[2];
        puVar16 = local_34 + ~uVar19 * 3;
        *puVar16 = *puVar9;
        puVar16[2] = uVar17;
        puVar16[1] = uVar12;
      } while (uVar11 != 0);
    }
    iVar18 = *param_1;
    iVar8 = param_1[1];
    *param_1 = (int)local_34;
    param_1[1] = local_30;
    param_1[2] = local_2c - uVar15;
    param_1[3] = uVar15;
    if (iVar8 == 0) {
      return 0x80000001;
    }
    iVar10 = iVar8 * 0xc + 0xc;
    if (iVar8 + iVar10 == -5) {
      return 0x80000001;
    }
    thunk_FUN_016d3fb4(iVar18 - iVar10);
  }
  else {
    if (uVar19 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar19 >> 2;
      if ((uVar19 & 3) != 0) {
        uVar11 = (uVar19 >> 2) + 1;
      }
      puVar14 = (uint *)*param_1;
      iVar18 = 0;
      do {
        puVar14[-iVar18] = (~(puVar14[-iVar18] >> 7) & 0x1010101) + (puVar14[-iVar18] | 0x7f7f7f7f);
        iVar18 = iVar18 + -1;
      } while (-iVar18 != uVar11);
      if (uVar19 < 4) {
        FUN_016dd52c(puVar14 + 1,puVar14,uVar19);
      }
      else {
        *(uint *)((int)puVar14 + uVar19) = *puVar14;
      }
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      uVar4 = *param_3;
      uVar5 = param_3[1];
      uVar11 = 0;
      do {
        if (*(char *)((int)puVar14 + uVar11) == -0x80) {
          puVar9 = puVar14 + ~uVar11 * 3;
          puVar20 = puVar14;
          while( true ) {
            uVar3 = FUN_00c54f90(uVar4,uVar5,uVar6,uVar7,puVar20[uVar11 * -3 + -3],
                                 puVar20[uVar11 * -3 + -2]);
            uVar19 = param_1[1];
            uVar12 = uVar19 & uVar3;
            uVar13 = *(uint *)((int)puVar20 + uVar12) & 0x80808080;
            uVar15 = uVar12;
            if (uVar13 == 0) {
              iVar18 = 4;
              do {
                uVar15 = uVar15 + iVar18 & uVar19;
                iVar18 = iVar18 + 4;
                uVar13 = *(uint *)((int)puVar20 + uVar15) & 0x80808080;
              } while (uVar13 == 0);
            }
            uVar15 = uVar15 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                             (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                     uVar19;
            if (-1 < *(char *)((int)puVar20 + uVar15)) {
              uVar15 = *puVar20 & 0x80808080;
              uVar15 = (uint)LZCOUNT((*puVar20 & 0x80) << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                     (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar3 >> 0x18);
            if (((uVar15 - uVar12 ^ uVar11 - uVar12) & uVar19) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar20 + uVar11) = bVar2;
              puVar14 = (uint *)*param_1;
              *(byte *)((int)puVar14 + (uVar19 & uVar11 - 4) + 4) = bVar2;
              goto LAB_00c54e4c;
            }
            cVar1 = *(char *)((int)puVar20 + uVar15);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar20 + uVar15) = bVar2;
            puVar14 = (uint *)*param_1;
            *(byte *)((int)puVar14 + (uVar15 - 4 & uVar19) + 4) = bVar2;
            puVar20 = puVar20 + ~uVar15 * 3;
            if (cVar1 == -1) break;
            uVar15 = *puVar9;
            *puVar9 = *puVar20;
            *puVar20 = uVar15;
            uVar15 = puVar20[1];
            puVar20[1] = puVar9[1];
            puVar9[1] = uVar15;
            uVar15 = puVar9[2];
            puVar9[2] = puVar20[2];
            puVar20[2] = uVar15;
            puVar20 = (uint *)*param_1;
          }
          uVar15 = param_1[1];
          *(undefined1 *)((int)puVar14 + uVar11) = 0xff;
          *(undefined1 *)((int)puVar14 + (uVar15 & uVar11 - 4) + 4) = 0xff;
          uVar15 = *puVar9;
          uVar3 = puVar9[1];
          puVar20[2] = puVar9[2];
          puVar20[1] = uVar3;
          *puVar20 = uVar15;
        }
LAB_00c54e4c:
        bVar21 = uVar11 != uVar17;
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

