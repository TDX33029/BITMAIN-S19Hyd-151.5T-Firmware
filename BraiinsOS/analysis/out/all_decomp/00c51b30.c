// FUN_00c51b30 @ 00c51b30 size=1336 calls_out=6 calls_in=1
// strings: 

uint FUN_00c51b30(int *param_1,uint param_2,undefined4 *param_3)

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
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
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
    FUN_00c4dc40(&local_34,0x18,4,uVar10);
    if (local_34 != (uint *)0x0) {
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else {
        uVar4 = *param_3;
        iVar18 = 0;
        puVar15 = (uint *)*param_1;
        uVar5 = param_3[1];
        uVar6 = param_3[2];
        uVar3 = ~*puVar15 & 0x80808080;
        uVar7 = param_3[3];
        uVar10 = uVar14;
        puVar13 = puVar15;
        do {
          if (uVar3 == 0) {
            do {
              puVar13 = puVar13 + 1;
              iVar18 = iVar18 + 4;
            } while ((*puVar13 & 0x80808080) == 0x80808080);
            uVar3 = *puVar13 & 0x80808080 ^ 0x80808080;
          }
          uVar12 = iVar18 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                           (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
          uVar17 = FUN_00c52070(uVar4,uVar5,uVar6,uVar7,puVar15[uVar12 * -6 + -6],
                                puVar15[uVar12 * -6 + -5]);
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
          FUN_016dd1aa(local_34 + ~uVar19 * 6,puVar15 + ~uVar12 * 6,0x18);
        } while (uVar10 != 0);
      }
      iVar18 = *param_1;
      iVar8 = param_1[1];
      param_1[1] = local_30;
      local_30 = 0x80000001;
      *param_1 = (int)local_34;
      param_1[2] = local_2c - uVar14;
      param_1[3] = uVar14;
      if ((iVar8 != 0) && (iVar9 = iVar8 * 0x18 + 0x18, iVar8 + iVar9 != -5)) {
        thunk_FUN_016d3fb4(iVar18 - iVar9);
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
      puVar13 = (uint *)*param_1;
      if ((uVar19 & 3) != 0) {
        uVar10 = (uVar19 >> 2) + 1;
      }
      iVar18 = 0;
      do {
        puVar13[-iVar18] = (~(puVar13[-iVar18] >> 7) & 0x1010101) + (puVar13[-iVar18] | 0x7f7f7f7f);
        iVar18 = iVar18 + -1;
      } while (-iVar18 != uVar10);
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
          puVar16 = puVar13 + ~uVar10 * 6;
          puVar15 = puVar13;
          while( true ) {
            uVar3 = FUN_00c52070(uVar4,uVar5,uVar6,uVar7,puVar15[uVar10 * -6 + -6],
                                 puVar15[uVar10 * -6 + -5]);
            uVar19 = param_1[1];
            uVar11 = uVar19 & uVar3;
            uVar12 = *(uint *)((int)puVar15 + uVar11) & 0x80808080;
            uVar14 = uVar11;
            if (uVar12 == 0) {
              iVar18 = 4;
              do {
                uVar14 = uVar14 + iVar18 & uVar19;
                iVar18 = iVar18 + 4;
                uVar12 = *(uint *)((int)puVar15 + uVar14) & 0x80808080;
              } while (uVar12 == 0);
            }
            uVar14 = uVar14 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                             (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                     uVar19;
            if (-1 < *(char *)((int)puVar15 + uVar14)) {
              uVar14 = *puVar15 & 0x80808080;
              uVar14 = (uint)LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                     (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar3 >> 0x18);
            if (((uVar14 - uVar11 ^ uVar10 - uVar11) & uVar19) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar15 + uVar10) = bVar2;
              puVar13 = (uint *)*param_1;
              *(byte *)((int)puVar13 + (uVar19 & uVar10 - 4) + 4) = bVar2;
              goto LAB_00c51f2c;
            }
            cVar1 = *(char *)((int)puVar15 + uVar14);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar15 + uVar14) = bVar2;
            puVar13 = (uint *)*param_1;
            *(byte *)((int)puVar13 + (uVar14 - 4 & uVar19) + 4) = bVar2;
            puVar15 = puVar15 + ~uVar14 * 6;
            if (cVar1 == -1) break;
            uVar14 = *puVar16;
            *puVar16 = *puVar15;
            *puVar15 = uVar14;
            uVar14 = puVar15[1];
            puVar15[1] = puVar16[1];
            puVar16[1] = uVar14;
            uVar14 = puVar16[2];
            puVar16[2] = puVar15[2];
            puVar15[2] = uVar14;
            uVar14 = puVar15[3];
            puVar15[3] = puVar16[3];
            puVar16[3] = uVar14;
            uVar14 = puVar16[4];
            puVar16[4] = puVar15[4];
            puVar15[4] = uVar14;
            uVar14 = puVar15[5];
            puVar15[5] = puVar16[5];
            puVar16[5] = uVar14;
            puVar15 = (uint *)*param_1;
          }
          uVar14 = param_1[1];
          *(undefined1 *)((int)puVar13 + uVar10) = 0xff;
          *(undefined1 *)((int)puVar13 + (uVar14 & uVar10 - 4) + 4) = 0xff;
          FUN_016dd1aa(puVar15,puVar16,0x18);
        }
LAB_00c51f2c:
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

