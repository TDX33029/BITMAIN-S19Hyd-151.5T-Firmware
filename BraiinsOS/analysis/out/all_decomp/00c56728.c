// FUN_00c56728 @ 00c56728 size=1584 calls_out=6 calls_in=1
// strings: 

uint FUN_00c56728(int *param_1,undefined4 *param_2)

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
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar14 = param_1[3];
  uVar11 = uVar14 + 1;
  if (0xfffffffe < uVar14) {
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
    FUN_00c4dc40(&local_34,0x50,8,uVar11);
    if (local_34 != (uint *)0x0) {
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else {
        uVar4 = *param_2;
        iVar19 = 0;
        puVar17 = (uint *)*param_1;
        uVar5 = param_2[1];
        uVar6 = param_2[2];
        uVar3 = ~*puVar17 & 0x80808080;
        uVar7 = param_2[3];
        uVar11 = uVar14;
        puVar16 = puVar17;
        do {
          if (uVar3 == 0) {
            do {
              puVar16 = puVar16 + 1;
              iVar19 = iVar19 + 4;
            } while ((*puVar16 & 0x80808080) == 0x80808080);
            uVar3 = *puVar16 & 0x80808080 ^ 0x80808080;
          }
          uVar13 = iVar19 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                           (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
          uVar9 = FUN_00c55848(uVar4,uVar5,uVar6,uVar7,puVar17[uVar13 * -0x14 + -0x14],
                               puVar17[uVar13 * -0x14 + -0x13],puVar17[uVar13 * -0x14 + -0x12],
                               puVar17[uVar13 * -0x14 + -0x11]);
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
          FUN_016dd1aa(local_34 + ~uVar18 * 0x14,puVar17 + ~uVar13 * 0x14,0x50);
        } while (uVar11 != 0);
      }
      iVar19 = *param_1;
      iVar8 = param_1[1];
      param_1[1] = local_30;
      local_30 = 0x80000001;
      *param_1 = (int)local_34;
      param_1[2] = local_2c - uVar14;
      param_1[3] = uVar14;
      if ((iVar8 != 0) && (iVar10 = iVar8 * 0x50 + 0x50, iVar8 + iVar10 != -5)) {
        thunk_FUN_016d3fb4(iVar19 - iVar10);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar9 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar9 >> 2;
      puVar16 = (uint *)*param_1;
      if ((uVar9 & 3) != 0) {
        uVar11 = (uVar9 >> 2) + 1;
      }
      iVar19 = 0;
      do {
        puVar16[-iVar19] = (~(puVar16[-iVar19] >> 7) & 0x1010101) + (puVar16[-iVar19] | 0x7f7f7f7f);
        iVar19 = iVar19 + -1;
      } while (-iVar19 != uVar11);
      if (uVar9 < 4) {
        FUN_016dd52c(puVar16 + 1,puVar16);
      }
      else {
        *(uint *)((int)puVar16 + uVar9) = *puVar16;
      }
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar11 = 0;
      do {
        if (*(char *)((int)puVar16 + uVar11) == -0x80) {
          puVar15 = puVar16 + ~uVar11 * 0x14;
          puVar17 = puVar16;
          while( true ) {
            uVar3 = FUN_00c55848(uVar4,uVar5,uVar6,uVar7,puVar17[uVar11 * -0x14 + -0x14],
                                 puVar17[uVar11 * -0x14 + -0x13],puVar17[uVar11 * -0x14 + -0x12],
                                 puVar17[uVar11 * -0x14 + -0x11]);
            uVar9 = param_1[1];
            uVar12 = uVar9 & uVar3;
            uVar13 = *(uint *)((int)puVar17 + uVar12) & 0x80808080;
            uVar14 = uVar12;
            if (uVar13 == 0) {
              iVar19 = 4;
              do {
                uVar14 = uVar14 + iVar19 & uVar9;
                iVar19 = iVar19 + 4;
                uVar13 = *(uint *)((int)puVar17 + uVar14) & 0x80808080;
              } while (uVar13 == 0);
            }
            uVar14 = uVar14 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                             (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                     uVar9;
            if (-1 < *(char *)((int)puVar17 + uVar14)) {
              uVar14 = *puVar17 & 0x80808080;
              uVar14 = (uint)LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                     (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar3 >> 0x18);
            if (((uVar14 - uVar12 ^ uVar11 - uVar12) & uVar9) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar17 + uVar11) = bVar2;
              puVar16 = (uint *)*param_1;
              *(byte *)((int)puVar16 + (uVar9 & uVar11 - 4) + 4) = bVar2;
              goto LAB_00c56c1c;
            }
            cVar1 = *(char *)((int)puVar17 + uVar14);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar17 + uVar14) = bVar2;
            puVar16 = (uint *)*param_1;
            *(byte *)((int)puVar16 + (uVar14 - 4 & uVar9) + 4) = bVar2;
            puVar17 = puVar17 + ~uVar14 * 0x14;
            if (cVar1 == -1) break;
            uVar14 = *puVar17;
            *puVar17 = *puVar15;
            *puVar15 = uVar14;
            uVar14 = puVar15[1];
            puVar15[1] = puVar17[1];
            puVar17[1] = uVar14;
            uVar14 = puVar17[2];
            puVar17[2] = puVar15[2];
            puVar15[2] = uVar14;
            uVar14 = puVar15[3];
            puVar15[3] = puVar17[3];
            puVar17[3] = uVar14;
            uVar14 = puVar17[4];
            puVar17[4] = puVar15[4];
            puVar15[4] = uVar14;
            uVar14 = puVar15[5];
            puVar15[5] = puVar17[5];
            puVar17[5] = uVar14;
            uVar14 = puVar17[6];
            puVar17[6] = puVar15[6];
            puVar15[6] = uVar14;
            uVar14 = puVar15[7];
            puVar15[7] = puVar17[7];
            puVar17[7] = uVar14;
            uVar14 = puVar17[8];
            puVar17[8] = puVar15[8];
            puVar15[8] = uVar14;
            uVar14 = puVar15[9];
            puVar15[9] = puVar17[9];
            puVar17[9] = uVar14;
            uVar14 = puVar17[10];
            puVar17[10] = puVar15[10];
            puVar15[10] = uVar14;
            uVar14 = puVar15[0xb];
            puVar15[0xb] = puVar17[0xb];
            puVar17[0xb] = uVar14;
            uVar14 = puVar17[0xc];
            puVar17[0xc] = puVar15[0xc];
            puVar15[0xc] = uVar14;
            uVar14 = puVar15[0xd];
            puVar15[0xd] = puVar17[0xd];
            puVar17[0xd] = uVar14;
            uVar14 = puVar17[0xe];
            puVar17[0xe] = puVar15[0xe];
            puVar15[0xe] = uVar14;
            uVar14 = puVar15[0xf];
            puVar15[0xf] = puVar17[0xf];
            puVar17[0xf] = uVar14;
            uVar14 = puVar17[0x10];
            puVar17[0x10] = puVar15[0x10];
            puVar15[0x10] = uVar14;
            uVar14 = puVar15[0x11];
            puVar15[0x11] = puVar17[0x11];
            puVar17[0x11] = uVar14;
            uVar14 = puVar17[0x12];
            puVar17[0x12] = puVar15[0x12];
            puVar15[0x12] = uVar14;
            uVar14 = puVar15[0x13];
            puVar15[0x13] = puVar17[0x13];
            puVar17[0x13] = uVar14;
            puVar17 = (uint *)*param_1;
          }
          uVar14 = param_1[1];
          *(undefined1 *)((int)puVar16 + uVar11) = 0xff;
          *(undefined1 *)((int)puVar16 + (uVar14 & uVar11 - 4) + 4) = 0xff;
          FUN_016dd1aa(puVar17,puVar15,0x50);
        }
LAB_00c56c1c:
        bVar20 = uVar11 != uVar18;
        uVar11 = uVar11 + 1;
      } while (bVar20);
      uVar11 = param_1[1];
      if (7 < uVar11) {
        uVar11 = (uVar11 + 1 & 0xfffffff8) - (uVar11 + 1 >> 3);
      }
    }
    param_1[2] = uVar11 - param_1[3];
    local_30 = 0x80000001;
  }
  return local_30;
}

