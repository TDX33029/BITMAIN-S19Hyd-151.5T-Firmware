// FUN_012b5ff4 @ 012b5ff4 size=1248 calls_out=5 calls_in=2
// strings: 

uint FUN_012b5ff4(int *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar13 = param_1[3];
  uVar14 = uVar13 + param_2;
  if (CARRY4(uVar13,param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar16 = param_1[1];
  uVar19 = uVar16 + 1;
  uVar3 = uVar16;
  if (7 < uVar16) {
    uVar3 = (uVar19 & 0xfffffff8) - (uVar19 >> 3);
  }
  if (uVar3 >> 1 < uVar14) {
    if (uVar14 < uVar3 + 1) {
      uVar14 = uVar3 + 1;
    }
    FUN_012b5eac(&local_34,8,uVar14);
    if (local_34 != (uint *)0x0) {
      if (uVar13 == 0) {
        uVar13 = 0;
      }
      else {
        puVar17 = (uint *)*param_1;
        uVar3 = ~*puVar17 & 0x80808080;
        uVar4 = *param_3;
        uVar5 = param_3[1];
        uVar6 = param_3[2];
        uVar7 = param_3[3];
        iVar11 = 0;
        uVar14 = uVar13;
        puVar12 = puVar17;
        do {
          if (uVar3 == 0) {
            do {
              puVar12 = puVar12 + 1;
              iVar11 = iVar11 + 4;
            } while ((*puVar12 & 0x80808080) == 0x80808080);
            uVar3 = *puVar12 & 0x80808080 ^ 0x80808080;
          }
          uVar15 = iVar11 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                           (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
          uVar16 = FUN_00c5abb0(uVar4,uVar5,uVar6,uVar7,puVar17[uVar15 * -2 + -2],
                                (puVar17 + uVar15 * -2 + -2)[1]);
          uVar19 = local_30 & uVar16;
          uVar10 = *(uint *)((int)local_34 + uVar19) & 0x80808080;
          if (uVar10 == 0) {
            iVar8 = 4;
            do {
              uVar19 = uVar19 + iVar8;
              iVar8 = iVar8 + 4;
              uVar19 = uVar19 & local_30;
              uVar10 = *(uint *)((int)local_34 + uVar19) & 0x80808080;
            } while (uVar10 == 0);
          }
          uVar19 = uVar19 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                   local_30;
          if (-1 < *(char *)((int)local_34 + uVar19)) {
            uVar19 = *local_34 & 0x80808080;
            uVar19 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                   (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3;
          }
          uVar3 = uVar3 - 1 & uVar3;
          bVar2 = (byte)(uVar16 >> 0x19);
          *(byte *)((int)local_34 + uVar19) = bVar2;
          uVar14 = uVar14 - 1;
          *(byte *)((int)local_34 + (uVar19 - 4 & local_30) + 4) = bVar2;
          uVar16 = (puVar17 + ~uVar15 * 2)[1];
          local_34[~uVar19 * 2] = puVar17[~uVar15 * 2];
          (local_34 + ~uVar19 * 2)[1] = uVar16;
        } while (uVar14 != 0);
      }
      iVar11 = *param_1;
      iVar8 = param_1[1];
      param_1[1] = local_30;
      local_30 = 0x80000001;
      *param_1 = (int)local_34;
      param_1[2] = local_2c - uVar13;
      param_1[3] = uVar13;
      if ((iVar8 != 0) && (iVar9 = iVar8 * 8 + 8, iVar8 + iVar9 != -5)) {
        thunk_FUN_016d3fb4(iVar11 - iVar9);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar19 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar19 >> 2;
      puVar12 = (uint *)*param_1;
      if ((uVar19 & 3) != 0) {
        uVar14 = (uVar19 >> 2) + 1;
      }
      iVar11 = 0;
      do {
        puVar12[-iVar11] = (~(puVar12[-iVar11] >> 7) & 0x1010101) + (puVar12[-iVar11] | 0x7f7f7f7f);
        iVar11 = iVar11 + -1;
      } while (-iVar11 != uVar14);
      if (uVar19 < 4) {
        FUN_016dd52c(puVar12 + 1,puVar12,uVar19);
      }
      else {
        *(uint *)((int)puVar12 + uVar19) = *puVar12;
      }
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      uVar4 = *param_3;
      uVar5 = param_3[1];
      uVar14 = 0;
      do {
        if (*(char *)((int)puVar12 + uVar14) == -0x80) {
          puVar18 = puVar12 + ~uVar14 * 2;
          puVar17 = puVar12;
          while( true ) {
            uVar3 = FUN_00c5abb0(uVar4,uVar5,uVar6,uVar7,puVar17[uVar14 * -2 + -2],
                                 puVar17[uVar14 * -2 + -1]);
            uVar19 = param_1[1];
            uVar10 = uVar19 & uVar3;
            uVar15 = *(uint *)((int)puVar17 + uVar10) & 0x80808080;
            uVar13 = uVar10;
            if (uVar15 == 0) {
              iVar11 = 4;
              do {
                uVar13 = uVar13 + iVar11 & uVar19;
                iVar11 = iVar11 + 4;
                uVar15 = *(uint *)((int)puVar17 + uVar13) & 0x80808080;
              } while (uVar15 == 0);
            }
            uVar13 = uVar13 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                             (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                     uVar19;
            if (-1 < *(char *)((int)puVar17 + uVar13)) {
              uVar13 = *puVar17 & 0x80808080;
              uVar13 = (uint)LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                     (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar3 >> 0x18);
            if (((uVar13 - uVar10 ^ uVar14 - uVar10) & uVar19) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar17 + uVar14) = bVar2;
              puVar12 = (uint *)*param_1;
              *(byte *)((int)puVar12 + (uVar19 & uVar14 - 4) + 4) = bVar2;
              goto LAB_012b639c;
            }
            cVar1 = *(char *)((int)puVar17 + uVar13);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar17 + uVar13) = bVar2;
            puVar12 = (uint *)*param_1;
            *(byte *)((int)puVar12 + (uVar13 - 4 & uVar19) + 4) = bVar2;
            puVar17 = puVar17 + ~uVar13 * 2;
            if (cVar1 == -1) break;
            uVar13 = *puVar17;
            *puVar17 = *puVar18;
            *puVar18 = uVar13;
            uVar13 = puVar18[1];
            puVar18[1] = puVar17[1];
            puVar17[1] = uVar13;
            puVar17 = (uint *)*param_1;
          }
          uVar13 = param_1[1];
          *(undefined1 *)((int)puVar12 + uVar14) = 0xff;
          *(undefined1 *)((int)puVar12 + (uVar13 & uVar14 - 4) + 4) = 0xff;
          uVar13 = *puVar18;
          puVar17[1] = puVar18[1];
          *puVar17 = uVar13;
        }
LAB_012b639c:
        bVar20 = uVar14 != uVar16;
        uVar14 = uVar14 + 1;
      } while (bVar20);
      uVar14 = param_1[1];
      if (7 < uVar14) {
        uVar14 = (uVar14 + 1 & 0xfffffff8) - (uVar14 + 1 >> 3);
      }
    }
    local_30 = 0x80000001;
    param_1[2] = uVar14 - param_1[3];
  }
  return local_30;
}

