// FUN_00c5ce08 @ 00c5ce08 size=1244 calls_out=5 calls_in=1
// strings: 

uint FUN_00c5ce08(int *param_1,undefined4 *param_2)

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
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar16 = param_1[3];
  uVar11 = uVar16 + 1;
  if (0xfffffffe < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar18 = param_1[1];
  uVar9 = uVar18 + 1;
  uVar3 = uVar18;
  if (7 < uVar18) {
    uVar3 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
  }
  if (uVar3 >> 1 < uVar11) {
    if (uVar11 < uVar3 + 1) {
      uVar11 = uVar3 + 1;
    }
    FUN_00c4dc40(&local_34,8,4,uVar11);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    if (uVar16 == 0) {
      uVar16 = 0;
    }
    else {
      uVar4 = *param_2;
      iVar19 = 0;
      puVar14 = (uint *)*param_1;
      uVar5 = param_2[1];
      uVar3 = ~*puVar14 & 0x80808080;
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      uVar11 = uVar16;
      puVar15 = puVar14;
      do {
        if (uVar3 == 0) {
          do {
            puVar15 = puVar15 + 1;
            iVar19 = iVar19 + 4;
          } while ((*puVar15 & 0x80808080) == 0x80808080);
          uVar3 = *puVar15 & 0x80808080 ^ 0x80808080;
        }
        uVar13 = iVar19 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                         (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar9 = FUN_00c54f90(uVar4,uVar5,uVar6,uVar7,puVar14[uVar13 * -2 + -2],
                             puVar14[uVar13 * -2 + -1]);
        uVar18 = local_30 & uVar9;
        uVar12 = *(uint *)((int)local_34 + uVar18) & 0x80808080;
        if (uVar12 == 0) {
          iVar8 = 4;
          do {
            uVar18 = uVar18 + iVar8;
            iVar8 = iVar8 + 4;
            uVar18 = uVar18 & local_30;
            uVar12 = *(uint *)((int)local_34 + uVar18) & 0x80808080;
          } while (uVar12 == 0);
        }
        uVar18 = uVar18 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                         (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar18)) {
          uVar18 = *local_34 & 0x80808080;
          uVar18 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                 (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar9 >> 0x19);
        *(byte *)((int)local_34 + uVar18) = bVar2;
        uVar11 = uVar11 - 1;
        *(byte *)((int)local_34 + (uVar18 - 4 & local_30) + 4) = bVar2;
        uVar9 = (puVar14 + ~uVar13 * 2)[1];
        local_34[~uVar18 * 2] = puVar14[~uVar13 * 2];
        (local_34 + ~uVar18 * 2)[1] = uVar9;
      } while (uVar11 != 0);
    }
    iVar19 = *param_1;
    iVar8 = param_1[1];
    *param_1 = (int)local_34;
    param_1[1] = local_30;
    param_1[2] = local_2c - uVar16;
    param_1[3] = uVar16;
    if (iVar8 == 0) {
      return 0x80000001;
    }
    iVar10 = iVar8 * 8 + 8;
    if (iVar8 + iVar10 == -5) {
      return 0x80000001;
    }
    thunk_FUN_016d3fb4(iVar19 - iVar10);
  }
  else {
    if (uVar9 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar9 >> 2;
      puVar15 = (uint *)*param_1;
      if ((uVar9 & 3) != 0) {
        uVar11 = (uVar9 >> 2) + 1;
      }
      iVar19 = 0;
      do {
        puVar15[-iVar19] = (~(puVar15[-iVar19] >> 7) & 0x1010101) + (puVar15[-iVar19] | 0x7f7f7f7f);
        iVar19 = iVar19 + -1;
      } while (-iVar19 != uVar11);
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
      uVar11 = 0;
      do {
        if (*(char *)((int)puVar15 + uVar11) == -0x80) {
          puVar17 = puVar15 + ~uVar11 * 2;
          puVar14 = puVar15;
          while( true ) {
            uVar3 = FUN_00c54f90(uVar4,uVar5,uVar6,uVar7,puVar14[uVar11 * -2 + -2],
                                 puVar14[uVar11 * -2 + -1]);
            uVar9 = param_1[1];
            uVar12 = uVar9 & uVar3;
            uVar13 = *(uint *)((int)puVar14 + uVar12) & 0x80808080;
            uVar16 = uVar12;
            if (uVar13 == 0) {
              iVar19 = 4;
              do {
                uVar16 = uVar16 + iVar19 & uVar9;
                iVar19 = iVar19 + 4;
                uVar13 = *(uint *)((int)puVar14 + uVar16) & 0x80808080;
              } while (uVar13 == 0);
            }
            uVar16 = uVar16 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                             (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                     uVar9;
            if (-1 < *(char *)((int)puVar14 + uVar16)) {
              uVar16 = *puVar14 & 0x80808080;
              uVar16 = (uint)LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                     (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar3 >> 0x18);
            if (((uVar16 - uVar12 ^ uVar11 - uVar12) & uVar9) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar14 + uVar11) = bVar2;
              puVar15 = (uint *)*param_1;
              *(byte *)((int)puVar15 + (uVar9 & uVar11 - 4) + 4) = bVar2;
              goto LAB_00c5d1bc;
            }
            cVar1 = *(char *)((int)puVar14 + uVar16);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar14 + uVar16) = bVar2;
            puVar15 = (uint *)*param_1;
            *(byte *)((int)puVar15 + (uVar16 - 4 & uVar9) + 4) = bVar2;
            puVar14 = puVar14 + ~uVar16 * 2;
            if (cVar1 == -1) break;
            uVar16 = *puVar14;
            *puVar14 = *puVar17;
            *puVar17 = uVar16;
            uVar16 = puVar17[1];
            puVar17[1] = puVar14[1];
            puVar14[1] = uVar16;
            puVar14 = (uint *)*param_1;
          }
          uVar16 = param_1[1];
          *(undefined1 *)((int)puVar15 + uVar11) = 0xff;
          *(undefined1 *)((int)puVar15 + (uVar16 & uVar11 - 4) + 4) = 0xff;
          uVar16 = *puVar17;
          puVar14[1] = puVar17[1];
          *puVar14 = uVar16;
        }
LAB_00c5d1bc:
        bVar20 = uVar11 != uVar18;
        uVar11 = uVar11 + 1;
      } while (bVar20);
      uVar11 = param_1[1];
      if (7 < uVar11) {
        uVar11 = (uVar11 + 1 & 0xfffffff8) - (uVar11 + 1 >> 3);
      }
    }
    param_1[2] = uVar11 - param_1[3];
  }
  return 0x80000001;
}

