// FUN_00c526cc @ 00c526cc size=1236 calls_out=5 calls_in=1
// strings: 

uint FUN_00c526cc(int *param_1,uint param_2,undefined4 *param_3)

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
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar14 = param_1[3];
  uVar10 = uVar14 + param_2;
  if (CARRY4(uVar14,param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar17 = param_1[1];
  uVar19 = uVar17 + 1;
  uVar3 = uVar17;
  if (7 < uVar17) {
    uVar3 = (uVar19 & 0xfffffff8) - (uVar19 >> 3);
  }
  if (uVar3 >> 1 < uVar10) {
    if (uVar10 < uVar3 + 1) {
      uVar10 = uVar3 + 1;
    }
    FUN_00c4dc40(&local_34,8,4,uVar10);
    if (local_34 != (uint *)0x0) {
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else {
        puVar18 = (uint *)*param_1;
        uVar3 = ~*puVar18 & 0x80808080;
        uVar4 = *param_3;
        uVar5 = param_3[1];
        uVar6 = param_3[2];
        uVar7 = param_3[3];
        iVar12 = 0;
        uVar10 = uVar14;
        puVar13 = puVar18;
        do {
          if (uVar3 == 0) {
            do {
              puVar13 = puVar13 + 1;
              iVar12 = iVar12 + 4;
            } while ((*puVar13 & 0x80808080) == 0x80808080);
            uVar3 = *puVar13 & 0x80808080 ^ 0x80808080;
          }
          uVar16 = iVar12 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                           (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
          uVar17 = FUN_00c507d4(uVar4,uVar5,uVar6,uVar7,(char)puVar18[uVar16 * -2 + -2]);
          uVar19 = local_30 & uVar17;
          uVar11 = *(uint *)((int)local_34 + uVar19) & 0x80808080;
          if (uVar11 == 0) {
            iVar8 = 4;
            do {
              uVar19 = uVar19 + iVar8;
              iVar8 = iVar8 + 4;
              uVar19 = uVar19 & local_30;
              uVar11 = *(uint *)((int)local_34 + uVar19) & 0x80808080;
            } while (uVar11 == 0);
          }
          uVar19 = uVar19 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                           (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                   local_30;
          if (-1 < *(char *)((int)local_34 + uVar19)) {
            uVar19 = *local_34 & 0x80808080;
            uVar19 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                   (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3;
          }
          uVar3 = uVar3 - 1 & uVar3;
          bVar2 = (byte)(uVar17 >> 0x19);
          *(byte *)((int)local_34 + uVar19) = bVar2;
          uVar10 = uVar10 - 1;
          *(byte *)((int)local_34 + (uVar19 - 4 & local_30) + 4) = bVar2;
          uVar17 = (puVar18 + ~uVar16 * 2)[1];
          local_34[~uVar19 * 2] = puVar18[~uVar16 * 2];
          (local_34 + ~uVar19 * 2)[1] = uVar17;
        } while (uVar10 != 0);
      }
      iVar12 = *param_1;
      iVar8 = param_1[1];
      param_1[1] = local_30;
      local_30 = 0x80000001;
      *param_1 = (int)local_34;
      param_1[2] = local_2c - uVar14;
      param_1[3] = uVar14;
      if ((iVar8 != 0) && (iVar9 = iVar8 * 8 + 8, iVar8 + iVar9 != -5)) {
        thunk_FUN_016d3fb4(iVar12 - iVar9);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar19 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar19 >> 2;
      if ((uVar19 & 3) != 0) {
        uVar10 = (uVar19 >> 2) + 1;
      }
      puVar13 = (uint *)*param_1;
      iVar12 = 0;
      do {
        puVar13[-iVar12] = (~(puVar13[-iVar12] >> 7) & 0x1010101) + (puVar13[-iVar12] | 0x7f7f7f7f);
        iVar12 = iVar12 + -1;
      } while (-iVar12 != uVar10);
      if (uVar19 < 4) {
        FUN_016dd52c(puVar13 + 1,puVar13,uVar19);
      }
      else {
        *(uint *)((int)puVar13 + uVar19) = *puVar13;
      }
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      uVar4 = *param_3;
      uVar5 = param_3[1];
      uVar10 = 0;
      do {
        if (*(char *)((int)puVar13 + uVar10) == -0x80) {
          puVar15 = puVar13 + ~uVar10 * 2;
          puVar18 = puVar13;
          while( true ) {
            uVar3 = FUN_00c507d4(uVar4,uVar5,uVar6,uVar7,(char)puVar18[uVar10 * -2 + -2]);
            uVar19 = param_1[1];
            uVar11 = uVar19 & uVar3;
            uVar16 = *(uint *)((int)puVar18 + uVar11) & 0x80808080;
            uVar14 = uVar11;
            if (uVar16 == 0) {
              iVar12 = 4;
              do {
                uVar14 = uVar14 + iVar12 & uVar19;
                iVar12 = iVar12 + 4;
                uVar16 = *(uint *)((int)puVar18 + uVar14) & 0x80808080;
              } while (uVar16 == 0);
            }
            uVar14 = uVar14 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                             (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                     uVar19;
            if (-1 < *(char *)((int)puVar18 + uVar14)) {
              uVar14 = *puVar18 & 0x80808080;
              uVar14 = (uint)LZCOUNT((*puVar18 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                     (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar3 >> 0x18);
            if (((uVar14 - uVar11 ^ uVar10 - uVar11) & uVar19) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar18 + uVar10) = bVar2;
              puVar13 = (uint *)*param_1;
              *(byte *)((int)puVar13 + (uVar19 & uVar10 - 4) + 4) = bVar2;
              goto LAB_00c52a70;
            }
            cVar1 = *(char *)((int)puVar18 + uVar14);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar18 + uVar14) = bVar2;
            puVar13 = (uint *)*param_1;
            *(byte *)((int)puVar13 + (uVar14 - 4 & uVar19) + 4) = bVar2;
            puVar18 = puVar18 + ~uVar14 * 2;
            if (cVar1 == -1) break;
            uVar14 = *puVar18;
            *puVar18 = *puVar15;
            *puVar15 = uVar14;
            uVar14 = puVar15[1];
            puVar15[1] = puVar18[1];
            puVar18[1] = uVar14;
            puVar18 = (uint *)*param_1;
          }
          uVar14 = param_1[1];
          *(undefined1 *)((int)puVar13 + uVar10) = 0xff;
          *(undefined1 *)((int)puVar13 + (uVar14 & uVar10 - 4) + 4) = 0xff;
          uVar14 = *puVar15;
          puVar18[1] = puVar15[1];
          *puVar18 = uVar14;
        }
LAB_00c52a70:
        bVar20 = uVar10 != uVar17;
        uVar10 = uVar10 + 1;
      } while (bVar20);
      uVar10 = param_1[1];
      if (7 < uVar10) {
        uVar10 = (uVar10 + 1 & 0xfffffff8) - (uVar10 + 1 >> 3);
      }
    }
    local_30 = 0x80000001;
    param_1[2] = uVar10 - param_1[3];
  }
  return local_30;
}

