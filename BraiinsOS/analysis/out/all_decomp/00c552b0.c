// FUN_00c552b0 @ 00c552b0 size=1424 calls_out=6 calls_in=1
// strings: 

uint FUN_00c552b0(int *param_1,undefined4 *param_2)

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
  int iVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
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
  uVar17 = param_1[1];
  uVar9 = uVar17 + 1;
  uVar3 = uVar17;
  if (7 < uVar17) {
    uVar3 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
  }
  if (uVar3 >> 1 < uVar11) {
    if (uVar11 < uVar3 + 1) {
      uVar11 = uVar3 + 1;
    }
    FUN_00c4dc40(&local_34,0x30,8,uVar11);
    if (local_34 != (uint *)0x0) {
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else {
        uVar4 = *param_2;
        puVar18 = (uint *)*param_1;
        iVar16 = 0;
        uVar5 = param_2[1];
        uVar3 = ~*puVar18 & 0x80808080;
        uVar6 = param_2[2];
        uVar7 = param_2[3];
        uVar11 = uVar14;
        puVar15 = puVar18;
        do {
          if (uVar3 == 0) {
            do {
              puVar15 = puVar15 + 1;
              iVar16 = iVar16 + 4;
            } while ((*puVar15 & 0x80808080) == 0x80808080);
            uVar3 = *puVar15 & 0x80808080 ^ 0x80808080;
          }
          uVar13 = iVar16 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                           (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
          uVar9 = FUN_01620b88(uVar4,uVar5,uVar6,uVar7,puVar18[uVar13 * -0xc + -0xb],
                               puVar18[uVar13 * -0xc + -10]);
          uVar17 = local_30 & uVar9;
          uVar12 = *(uint *)((int)local_34 + uVar17) & 0x80808080;
          if (uVar12 == 0) {
            iVar8 = 4;
            do {
              uVar17 = uVar17 + iVar8;
              iVar8 = iVar8 + 4;
              uVar17 = uVar17 & local_30;
              uVar12 = *(uint *)((int)local_34 + uVar17) & 0x80808080;
            } while (uVar12 == 0);
          }
          uVar17 = uVar17 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                   local_30;
          if (-1 < *(char *)((int)local_34 + uVar17)) {
            uVar17 = *local_34 & 0x80808080;
            uVar17 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                   (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3;
          }
          uVar3 = uVar3 - 1 & uVar3;
          bVar2 = (byte)(uVar9 >> 0x19);
          *(byte *)((int)local_34 + uVar17) = bVar2;
          uVar11 = uVar11 - 1;
          *(byte *)((int)local_34 + (uVar17 - 4 & local_30) + 4) = bVar2;
          FUN_016dd1aa(local_34 + ~uVar17 * 0xc,puVar18 + ~uVar13 * 0xc,0x30);
        } while (uVar11 != 0);
      }
      iVar16 = *param_1;
      iVar8 = param_1[1];
      param_1[1] = local_30;
      local_30 = 0x80000001;
      *param_1 = (int)local_34;
      param_1[2] = local_2c - uVar14;
      param_1[3] = uVar14;
      if ((iVar8 != 0) && (iVar10 = iVar8 * 0x30 + 0x30, iVar8 + iVar10 != -5)) {
        thunk_FUN_016d3fb4(iVar16 - iVar10);
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
      if ((uVar9 & 3) != 0) {
        uVar11 = (uVar9 >> 2) + 1;
      }
      puVar15 = (uint *)*param_1;
      iVar16 = 0;
      do {
        puVar15[-iVar16] = (~(puVar15[-iVar16] >> 7) & 0x1010101) + (puVar15[-iVar16] | 0x7f7f7f7f);
        iVar16 = iVar16 + -1;
      } while (-iVar16 != uVar11);
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
          puVar19 = puVar15 + ~uVar11 * 0xc;
          puVar18 = puVar15;
          while( true ) {
            uVar3 = FUN_01620b88(uVar4,uVar5,uVar6,uVar7,puVar18[uVar11 * -0xc + -0xb],
                                 puVar18[uVar11 * -0xc + -10]);
            uVar9 = param_1[1];
            uVar12 = uVar9 & uVar3;
            uVar13 = *(uint *)((int)puVar18 + uVar12) & 0x80808080;
            uVar14 = uVar12;
            if (uVar13 == 0) {
              iVar16 = 4;
              do {
                uVar14 = uVar14 + iVar16 & uVar9;
                iVar16 = iVar16 + 4;
                uVar13 = *(uint *)((int)puVar18 + uVar14) & 0x80808080;
              } while (uVar13 == 0);
            }
            uVar14 = uVar14 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                             (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                     uVar9;
            if (-1 < *(char *)((int)puVar18 + uVar14)) {
              uVar14 = *puVar18 & 0x80808080;
              uVar14 = (uint)LZCOUNT((*puVar18 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                     (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar3 >> 0x18);
            if (((uVar14 - uVar12 ^ uVar11 - uVar12) & uVar9) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar18 + uVar11) = bVar2;
              puVar15 = (uint *)*param_1;
              *(byte *)((int)puVar15 + (uVar9 & uVar11 - 4) + 4) = bVar2;
              goto LAB_00c55710;
            }
            cVar1 = *(char *)((int)puVar18 + uVar14);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar18 + uVar14) = bVar2;
            puVar15 = (uint *)*param_1;
            *(byte *)((int)puVar15 + (uVar14 - 4 & uVar9) + 4) = bVar2;
            puVar18 = puVar18 + ~uVar14 * 0xc;
            if (cVar1 == -1) break;
            uVar14 = *puVar18;
            *puVar18 = *puVar19;
            *puVar19 = uVar14;
            uVar14 = puVar19[1];
            puVar19[1] = puVar18[1];
            puVar18[1] = uVar14;
            uVar14 = puVar18[2];
            puVar18[2] = puVar19[2];
            puVar19[2] = uVar14;
            uVar14 = puVar19[3];
            puVar19[3] = puVar18[3];
            puVar18[3] = uVar14;
            uVar14 = puVar18[4];
            puVar18[4] = puVar19[4];
            puVar19[4] = uVar14;
            uVar14 = puVar19[5];
            puVar19[5] = puVar18[5];
            puVar18[5] = uVar14;
            uVar14 = puVar18[6];
            puVar18[6] = puVar19[6];
            puVar19[6] = uVar14;
            uVar14 = puVar19[7];
            puVar19[7] = puVar18[7];
            puVar18[7] = uVar14;
            uVar14 = puVar18[8];
            puVar18[8] = puVar19[8];
            puVar19[8] = uVar14;
            uVar14 = puVar19[9];
            puVar19[9] = puVar18[9];
            puVar18[9] = uVar14;
            uVar14 = puVar18[10];
            puVar18[10] = puVar19[10];
            puVar19[10] = uVar14;
            uVar14 = puVar19[0xb];
            puVar19[0xb] = puVar18[0xb];
            puVar18[0xb] = uVar14;
            puVar18 = (uint *)*param_1;
          }
          uVar14 = param_1[1];
          *(undefined1 *)((int)puVar15 + uVar11) = 0xff;
          *(undefined1 *)((int)puVar15 + (uVar14 & uVar11 - 4) + 4) = 0xff;
          FUN_016dd1aa(puVar18,puVar19,0x30);
        }
LAB_00c55710:
        bVar20 = uVar11 != uVar17;
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

