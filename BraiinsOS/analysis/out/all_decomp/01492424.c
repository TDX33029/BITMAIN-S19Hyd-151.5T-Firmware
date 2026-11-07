// FUN_01492424 @ 01492424 size=1328 calls_out=6 calls_in=1
// strings: 

uint FUN_01492424(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar19 = param_1[3];
  uVar11 = uVar19 + 1;
  if (0xfffffffe < uVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar14 = param_1[1];
  uVar9 = uVar14 + 1;
  uVar15 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
  uVar3 = uVar15;
  if (uVar14 < 8) {
    uVar3 = uVar14;
  }
  if (uVar3 >> 1 < uVar11) {
    if (uVar11 < uVar3 + 1) {
      uVar11 = uVar3 + 1;
    }
    FUN_0142ab84(&local_34,0x18,uVar11);
    if (local_34 != (uint *)0x0) {
      puVar16 = (uint *)*param_1;
      if (uVar19 == 0) {
        uVar19 = 0;
      }
      else {
        uVar5 = *param_2;
        iVar20 = 0;
        uVar6 = param_2[1];
        uVar7 = param_2[2];
        uVar8 = param_2[3];
        uVar15 = ~*puVar16 & 0x80808080;
        uVar11 = uVar19;
        puVar17 = puVar16;
        do {
          if (uVar15 == 0) {
            do {
              puVar17 = puVar17 + 1;
              iVar20 = iVar20 + 4;
            } while ((*puVar17 & 0x80808080) == 0x80808080);
            uVar15 = *puVar17 & 0x80808080 ^ 0x80808080;
          }
          uVar18 = iVar20 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                           (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3);
          uVar3 = FUN_014c854c(uVar5,uVar6,uVar7,uVar8,puVar16 + uVar18 * -6 + -6);
          uVar9 = local_30 & uVar3;
          uVar12 = *(uint *)((int)local_34 + uVar9) & 0x80808080;
          if (uVar12 == 0) {
            iVar10 = 4;
            do {
              uVar9 = uVar9 + iVar10;
              iVar10 = iVar10 + 4;
              uVar9 = uVar9 & local_30;
              uVar12 = *(uint *)((int)local_34 + uVar9) & 0x80808080;
            } while (uVar12 == 0);
          }
          uVar9 = uVar9 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                         (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                  local_30;
          if (-1 < *(char *)((int)local_34 + uVar9)) {
            uVar9 = *local_34 & 0x80808080;
            uVar9 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                  (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
          }
          uVar15 = uVar15 - 1 & uVar15;
          bVar2 = (byte)(uVar3 >> 0x19);
          *(byte *)((int)local_34 + uVar9) = bVar2;
          uVar11 = uVar11 - 1;
          *(byte *)((int)local_34 + (uVar9 - 4 & local_30) + 4) = bVar2;
          FUN_016dd1aa(local_34 + ~uVar9 * 6,puVar16 + ~uVar18 * 6,0x18);
        } while (uVar11 != 0);
      }
      param_1[1] = local_30;
      local_30 = 0x80000001;
      *param_1 = local_34;
      param_1[2] = local_2c - uVar19;
      if ((uVar14 != 0) && (iVar20 = uVar14 * 0x18 + 0x18, uVar14 + iVar20 != -5)) {
        thunk_FUN_016d3fb4((int)puVar16 - iVar20);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar9 == 0) {
      uVar15 = 0;
    }
    else {
      uVar11 = uVar9 >> 2;
      if ((uVar9 & 3) != 0) {
        uVar11 = (uVar9 >> 2) + 1;
      }
      puVar16 = (uint *)*param_1;
      iVar20 = 0;
      do {
        puVar16[-iVar20] = (~(puVar16[-iVar20] >> 7) & 0x1010101) + (puVar16[-iVar20] | 0x7f7f7f7f);
        iVar20 = iVar20 + -1;
      } while (-iVar20 != uVar11);
      puVar17 = puVar16 + 1;
      if (uVar9 < 4) {
        FUN_016dd52c(puVar17,puVar16);
      }
      else {
        *(uint *)((int)puVar16 + uVar9) = *puVar16;
      }
      uVar5 = *param_2;
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      uVar6 = param_2[1];
      uVar11 = 0;
      do {
        if (*(char *)((int)puVar16 + uVar11) == -0x80) {
          puVar13 = puVar16 + ~uVar11 * 6;
          while( true ) {
            uVar9 = FUN_014c854c(uVar5,uVar6,uVar7,uVar8,puVar16 + uVar11 * -6 + -6);
            uVar12 = uVar14 & uVar9;
            uVar18 = *(uint *)((int)puVar16 + uVar12) & 0x80808080;
            uVar3 = uVar12;
            if (uVar18 == 0) {
              iVar20 = 4;
              do {
                uVar3 = uVar3 + iVar20 & uVar14;
                iVar20 = iVar20 + 4;
                uVar18 = *(uint *)((int)puVar16 + uVar3) & 0x80808080;
              } while (uVar18 == 0);
            }
            uVar3 = uVar3 + ((uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                           (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3) &
                    uVar14;
            if (-1 < *(char *)((int)puVar16 + uVar3)) {
              uVar3 = *puVar16 & 0x80808080;
              uVar3 = (uint)LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                    (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar9 >> 0x18);
            if (((uVar3 - uVar12 ^ uVar11 - uVar12) & uVar14) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar16 + uVar11) = bVar2;
              *(byte *)((int)puVar17 + (uVar14 & uVar11 - 4)) = bVar2;
              goto LAB_01492820;
            }
            cVar1 = *(char *)((int)puVar16 + uVar3);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar16 + uVar3) = bVar2;
            *(byte *)((int)puVar17 + (uVar3 - 4 & uVar14)) = bVar2;
            puVar4 = puVar16 + ~uVar3 * 6;
            if (cVar1 == -1) break;
            uVar3 = *puVar13;
            uVar9 = puVar13[1];
            uVar12 = puVar4[1];
            *puVar13 = *puVar4;
            *puVar4 = uVar3;
            puVar4[1] = uVar9;
            puVar13[1] = uVar12;
            uVar3 = puVar13[2];
            uVar12 = puVar13[3];
            uVar9 = puVar4[3];
            puVar13[2] = puVar4[2];
            puVar13[3] = uVar9;
            puVar4[2] = uVar3;
            puVar4[3] = uVar12;
            uVar9 = puVar13[4];
            uVar3 = puVar4[5];
            puVar13[4] = puVar4[4];
            puVar4[5] = puVar13[5];
            puVar13[5] = uVar3;
            puVar4[4] = uVar9;
          }
          *(undefined1 *)((int)puVar16 + uVar11) = 0xff;
          *(undefined1 *)((int)puVar17 + (uVar14 & uVar11 - 4)) = 0xff;
          FUN_016dd1aa(puVar4,puVar13,0x18);
        }
LAB_01492820:
        bVar21 = uVar11 != uVar14;
        uVar11 = uVar11 + 1;
      } while (bVar21);
      if (uVar14 < 8) {
        uVar15 = uVar14;
      }
    }
    local_30 = 0x80000001;
    param_1[2] = uVar15 - uVar19;
  }
  return local_30;
}

