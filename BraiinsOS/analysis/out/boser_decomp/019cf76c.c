// FUN_019cf76c @ 019cf76c size=1404 calls_out=6 calls_in=1
// strings: Hash table capacity overflow

uint FUN_019cf76c(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  bool bVar22;
  uint *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar20 = param_1[3];
  uVar3 = iVar20 + 1;
  if (iVar20 == -1) {
LAB_019cfcc0:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar19 = param_1[1];
  uVar11 = uVar19 + 1;
  uVar13 = (uVar11 & 0xfffffff8) - (uVar11 >> 3);
  uVar9 = uVar13;
  if (uVar19 < 8) {
    uVar9 = uVar19;
  }
  if (uVar9 >> 1 < uVar3) {
    if (uVar3 < uVar9 + 1) {
      uVar3 = uVar9 + 1;
    }
    if (uVar3 < 0xf) {
      iVar14 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar14 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_019cfcc0;
      iVar14 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar14 = (0xffffffffU >> LZCOUNT((iVar14 + (uVar3 * 8 - iVar14 >> 1) >> 2) - 1)) + 1;
    }
    FUN_019790d4(&local_34,8,4,iVar14);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_40 = local_30;
    iVar14 = 0;
    local_38 = local_28;
    local_3c = local_2c;
    local_44 = local_34;
    if (iVar20 != 0) {
      puVar21 = (uint *)*param_1;
      iVar18 = 0;
      uVar3 = ~*puVar21 & 0x80808080;
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      puVar10 = puVar21;
      iVar14 = iVar20;
      do {
        if (uVar3 == 0) {
          do {
            puVar10 = puVar10 + 1;
            iVar18 = iVar18 + 4;
          } while ((*puVar10 & 0x80808080) == 0x80808080);
          uVar3 = *puVar10 & 0x80808080 ^ 0x80808080;
        }
        uVar9 = iVar18 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar13 = FUN_01656218(uVar4,uVar5,uVar6,uVar7,puVar21[uVar9 * -2 + -2],local_2c,iVar14);
        uVar11 = local_30 & uVar13;
        uVar19 = *(uint *)((int)local_34 + uVar11) & 0x80808080;
        if (uVar19 == 0) {
          iVar12 = 4;
          do {
            uVar11 = uVar11 + iVar12;
            iVar12 = iVar12 + 4;
            uVar11 = uVar11 & local_30;
            uVar19 = *(uint *)((int)local_34 + uVar11) & 0x80808080;
          } while (uVar19 == 0);
        }
        uVar11 = uVar11 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                         (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar11)) {
          uVar11 = *local_34 & 0x80808080;
          uVar11 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                 (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar13 >> 0x19);
        *(byte *)((int)local_34 + uVar11) = bVar2;
        iVar20 = iVar20 + -1;
        *(byte *)((int)local_34 + (uVar11 - 4 & local_30) + 4) = bVar2;
        uVar13 = (puVar21 + ~uVar9 * 2)[1];
        local_34[~uVar11 * 2] = puVar21[~uVar9 * 2];
        (local_34 + ~uVar11 * 2)[1] = uVar13;
      } while (iVar20 != 0);
    }
    local_38 = iVar14;
    local_3c = local_2c - iVar14;
    iVar20 = 0;
    do {
      puVar10 = (uint *)param_1[iVar20];
      param_1[iVar20] = (&local_44)[iVar20];
      iVar14 = iVar20 + 1;
      (&local_44)[iVar20] = puVar10;
      iVar20 = iVar14;
    } while (iVar14 != 4);
    if ((local_40 != 0) && (iVar20 = local_40 * 8 + 8, local_40 + iVar20 != -5)) {
      thunk_FUN_01be4678((int)local_44 - iVar20);
    }
  }
  else {
    if (uVar11 == 0) {
      uVar13 = 0;
    }
    else {
      uVar3 = uVar11 >> 2;
      if ((uVar11 & 3) != 0) {
        uVar3 = (uVar11 >> 2) + 1;
      }
      puVar10 = (uint *)*param_1;
      iVar14 = 0;
      do {
        puVar10[-iVar14] = (~(puVar10[-iVar14] >> 7) & 0x1010101) + (puVar10[-iVar14] | 0x7f7f7f7f);
        iVar14 = iVar14 + -1;
      } while (-iVar14 != uVar3);
      puVar21 = puVar10 + 1;
      if (uVar11 < 4) {
        FUN_01bed864(puVar21,puVar10);
      }
      else {
        *(uint *)((int)puVar10 + uVar11) = *puVar10;
      }
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar7 = param_2[3];
      uVar6 = param_2[2];
      uVar3 = 0;
      puVar17 = puVar10;
      do {
        if (*(char *)((int)puVar10 + uVar3) == -0x80) {
          while( true ) {
            uVar11 = FUN_01656218(uVar4,uVar5,uVar6,uVar7,puVar10[uVar3 * -2 + -2]);
            uVar8 = uVar19 & uVar11;
            uVar15 = *(uint *)((int)puVar10 + uVar8) & 0x80808080;
            uVar9 = uVar8;
            if (uVar15 == 0) {
              iVar14 = 4;
              do {
                uVar9 = uVar9 + iVar14 & uVar19;
                iVar14 = iVar14 + 4;
                uVar15 = *(uint *)((int)puVar10 + uVar9) & 0x80808080;
              } while (uVar15 == 0);
            }
            uVar9 = uVar9 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                           (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                    uVar19;
            if (-1 < *(char *)((int)puVar10 + uVar9)) {
              uVar9 = *puVar10 & 0x80808080;
              uVar9 = (uint)LZCOUNT((*puVar10 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                    (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar11 >> 0x18);
            if (((uVar9 - uVar8 ^ uVar3 - uVar8) & uVar19) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar10 + uVar3) = bVar2;
              *(byte *)((int)puVar21 + (uVar19 & uVar3 - 4)) = bVar2;
              goto LAB_019cf9b8;
            }
            cVar1 = *(char *)((int)puVar10 + uVar9);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar10 + uVar9) = bVar2;
            *(byte *)((int)puVar21 + (uVar9 - 4 & uVar19)) = bVar2;
            if (cVar1 == -1) break;
            iVar14 = -8;
            do {
              uVar16 = *(undefined4 *)((int)puVar17 + iVar14);
              *(undefined4 *)((int)puVar17 + iVar14) =
                   *(undefined4 *)((int)puVar10 + iVar14 + uVar9 * -8);
              *(undefined4 *)((int)puVar10 + iVar14 + uVar9 * -8) = uVar16;
              iVar14 = iVar14 + 4;
            } while (iVar14 != 0);
          }
          *(undefined1 *)((int)puVar10 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar21 + (uVar19 & uVar3 - 4)) = 0xff;
          uVar11 = (puVar10 + ~uVar3 * 2)[1];
          puVar10[~uVar9 * 2] = puVar10[~uVar3 * 2];
          (puVar10 + ~uVar9 * 2)[1] = uVar11;
        }
LAB_019cf9b8:
        puVar17 = puVar17 + -2;
        bVar22 = uVar3 != uVar19;
        uVar3 = uVar3 + 1;
      } while (bVar22);
      if (uVar19 < 8) {
        uVar13 = uVar19;
      }
    }
    param_1[2] = uVar13 - iVar20;
  }
  return 0x80000001;
}

