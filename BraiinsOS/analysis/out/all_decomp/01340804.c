// FUN_01340804 @ 01340804 size=1188 calls_out=5 calls_in=2
// strings: 

uint FUN_01340804(int *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar15 = param_1[3];
  uVar9 = uVar15 + 1;
  if (0xfffffffe < uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_018ada90);
  }
  uVar16 = param_1[1];
  uVar6 = uVar16 + 1;
  uVar3 = uVar16;
  if (7 < uVar16) {
    uVar3 = (uVar6 & 0xfffffff8) - (uVar6 >> 3);
  }
  if (uVar3 >> 1 < uVar9) {
    if (uVar9 < uVar3 + 1) {
      uVar9 = uVar3 + 1;
    }
    FUN_01340cb0(&local_34,0x10,4,uVar9);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    if (uVar15 == 0) {
      uVar15 = 0;
    }
    else {
      puVar4 = (uint *)*param_1;
      iVar14 = 0;
      uVar3 = ~*puVar4 & 0x80808080;
      puVar13 = puVar4;
      uVar9 = uVar15;
      do {
        if (uVar3 == 0) {
          do {
            puVar13 = puVar13 + 1;
            iVar14 = iVar14 + 4;
          } while ((*puVar13 & 0x80808080) == 0x80808080);
          uVar3 = *puVar13 & 0x80808080 ^ 0x80808080;
        }
        uVar12 = iVar14 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                         (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar6 = FUN_01340e44(param_2,puVar4,uVar12);
        uVar16 = local_30 & uVar6;
        uVar10 = *(uint *)((int)local_34 + uVar16) & 0x80808080;
        if (uVar10 == 0) {
          iVar5 = 4;
          do {
            uVar16 = uVar16 + iVar5;
            iVar5 = iVar5 + 4;
            uVar16 = uVar16 & local_30;
            uVar10 = *(uint *)((int)local_34 + uVar16) & 0x80808080;
          } while (uVar10 == 0);
        }
        uVar16 = uVar16 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                         (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar16)) {
          uVar16 = *local_34 & 0x80808080;
          uVar16 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                 (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)local_34 + uVar16) = bVar2;
        *(byte *)((int)local_34 + (uVar16 - 4 & local_30) + 4) = bVar2;
        puVar7 = puVar4 + ~uVar12 * 4;
        uVar9 = uVar9 - 1;
        uVar10 = puVar7[1];
        uVar12 = puVar7[2];
        uVar6 = puVar7[3];
        puVar11 = local_34 + ~uVar16 * 4;
        *puVar11 = *puVar7;
        puVar11[3] = uVar6;
        puVar11[2] = uVar12;
        puVar11[1] = uVar10;
      } while (uVar9 != 0);
    }
    iVar14 = *param_1;
    iVar5 = param_1[1];
    param_1[1] = local_30;
    *param_1 = (int)local_34;
    param_1[2] = local_2c - uVar15;
    param_1[3] = uVar15;
    if (iVar5 == 0) {
      return 0x80000001;
    }
    iVar8 = iVar5 * 0x10 + 0x10;
    if (iVar5 + iVar8 == -5) {
      return 0x80000001;
    }
    thunk_FUN_016d3fb4(iVar14 - iVar8);
  }
  else {
    puVar13 = (uint *)*param_1;
    if (uVar6 == 0) {
      FUN_016dd52c(puVar13 + 1,puVar13);
      uVar9 = 0;
    }
    else {
      uVar9 = uVar6 >> 2;
      if ((uVar6 & 3) != 0) {
        uVar9 = (uVar6 >> 2) + 1;
      }
      iVar14 = 0;
      do {
        puVar13[-iVar14] = (~(puVar13[-iVar14] >> 7) & 0x1010101) + (puVar13[-iVar14] | 0x7f7f7f7f);
        iVar14 = iVar14 + -1;
      } while (-iVar14 != uVar9);
      if (uVar6 < 4) {
        FUN_016dd52c(puVar13 + 1,puVar13);
      }
      else {
        *(uint *)((int)puVar13 + uVar6) = *puVar13;
      }
      uVar9 = 0;
      do {
        if (*(char *)((int)puVar13 + uVar9) == -0x80) {
          puVar7 = puVar13 + ~uVar9 * 4;
          puVar4 = puVar13;
          while( true ) {
            uVar3 = FUN_01340e44(param_2,puVar4,uVar9);
            uVar6 = param_1[1];
            uVar10 = uVar6 & uVar3;
            uVar12 = *(uint *)((int)puVar4 + uVar10) & 0x80808080;
            uVar15 = uVar10;
            if (uVar12 == 0) {
              iVar14 = 4;
              do {
                uVar15 = uVar15 + iVar14;
                iVar14 = iVar14 + 4;
                uVar15 = uVar15 & uVar6;
                uVar12 = *(uint *)((int)puVar4 + uVar15) & 0x80808080;
              } while (uVar12 == 0);
            }
            uVar15 = uVar15 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                             (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                     uVar6;
            if (-1 < *(char *)((int)puVar4 + uVar15)) {
              uVar15 = *puVar4 & 0x80808080;
              uVar15 = (uint)LZCOUNT((*puVar4 & 0x80) << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                     (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar3 >> 0x18);
            if (((uVar15 - uVar10 ^ uVar9 - uVar10) & uVar6) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar4 + uVar9) = bVar2;
              puVar13 = (uint *)*param_1;
              *(byte *)((int)puVar13 + (uVar6 & uVar9 - 4) + 4) = bVar2;
              goto LAB_01340b74;
            }
            cVar1 = *(char *)((int)puVar4 + uVar15);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar4 + uVar15) = bVar2;
            puVar13 = (uint *)*param_1;
            *(byte *)((int)puVar13 + (uVar15 - 4 & uVar6) + 4) = bVar2;
            puVar4 = puVar4 + ~uVar15 * 4;
            if (cVar1 == -1) break;
            uVar15 = *puVar7;
            *puVar7 = *puVar4;
            *puVar4 = uVar15;
            uVar15 = puVar4[1];
            puVar4[1] = puVar7[1];
            puVar7[1] = uVar15;
            uVar15 = puVar7[2];
            puVar7[2] = puVar4[2];
            puVar4[2] = uVar15;
            uVar15 = puVar4[3];
            puVar4[3] = puVar7[3];
            puVar7[3] = uVar15;
            puVar4 = (uint *)*param_1;
          }
          uVar15 = param_1[1];
          *(undefined1 *)((int)puVar13 + uVar9) = 0xff;
          *(undefined1 *)((int)puVar13 + (uVar15 & uVar9 - 4) + 4) = 0xff;
          uVar15 = *puVar7;
          uVar3 = puVar7[1];
          uVar6 = puVar7[3];
          puVar4[2] = puVar7[2];
          puVar4[3] = uVar6;
          puVar4[1] = uVar3;
          *puVar4 = uVar15;
        }
LAB_01340b74:
        bVar17 = uVar9 != uVar16;
        uVar9 = uVar9 + 1;
      } while (bVar17);
      uVar9 = param_1[1];
      if (7 < uVar9) {
        uVar9 = (uVar9 + 1 & 0xfffffff8) - (uVar9 + 1 >> 3);
      }
    }
    param_1[2] = uVar9 - param_1[3];
  }
  return 0x80000001;
}

