// FUN_015da098 @ 015da098 size=1424 calls_out=6 calls_in=1
// strings: Hash table capacity overflow

uint FUN_015da098(undefined4 *param_1,undefined4 *param_2)

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
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  bool bVar22;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar18 = param_1[3];
  uVar3 = iVar18 + 1;
  if (iVar18 == -1) {
LAB_015da600:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar21 = param_1[1];
  uVar11 = uVar21 + 1;
  uVar8 = uVar21;
  if (7 < uVar21) {
    uVar8 = (uVar11 & 0xfffffff8) - (uVar11 >> 3);
  }
  if (uVar8 >> 1 < uVar3) {
    if (uVar3 < uVar8 + 1) {
      uVar3 = uVar8 + 1;
    }
    if (uVar3 < 0xf) {
      iVar13 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar13 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_015da600;
      iVar13 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar13 = (0xffffffffU >> LZCOUNT((iVar13 + (uVar3 * 8 - iVar13 >> 1) >> 2) - 1)) + 1;
    }
    FUN_014533a8(&local_34,8,4,iVar13);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_40 = local_30;
    iVar13 = 0;
    local_4c = 8;
    local_38 = local_28;
    local_3c = local_2c;
    local_44 = local_34;
    local_48 = 4;
    local_50 = param_1 + 4;
    if (iVar18 != 0) {
      puVar20 = (uint *)*param_1;
      iVar19 = 0;
      uVar3 = ~*puVar20 & 0x80808080;
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      puVar10 = puVar20;
      iVar13 = iVar18;
      do {
        if (uVar3 == 0) {
          do {
            puVar10 = puVar10 + 1;
            iVar19 = iVar19 + 4;
          } while ((*puVar10 & 0x80808080) == 0x80808080);
          uVar3 = *puVar10 & 0x80808080 ^ 0x80808080;
        }
        uVar11 = iVar19 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                         (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar8 = FUN_015f7180(uVar4,uVar5,uVar6,uVar7,puVar20[uVar11 * -2 + -2],local_2c,iVar13);
        uVar21 = local_30 & uVar8;
        uVar16 = *(uint *)((int)local_34 + uVar21) & 0x80808080;
        if (uVar16 == 0) {
          iVar12 = 4;
          do {
            uVar21 = uVar21 + iVar12;
            iVar12 = iVar12 + 4;
            uVar21 = uVar21 & local_30;
            uVar16 = *(uint *)((int)local_34 + uVar21) & 0x80808080;
          } while (uVar16 == 0);
        }
        uVar21 = uVar21 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                         (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar21)) {
          uVar21 = *local_34 & 0x80808080;
          uVar21 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                 (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar8 >> 0x19);
        *(byte *)((int)local_34 + uVar21) = bVar2;
        iVar18 = iVar18 + -1;
        *(byte *)((int)local_34 + (uVar21 - 4 & local_30) + 4) = bVar2;
        uVar8 = (puVar20 + ~uVar11 * 2)[1];
        local_34[~uVar21 * 2] = puVar20[~uVar11 * 2];
        (local_34 + ~uVar21 * 2)[1] = uVar8;
      } while (iVar18 != 0);
    }
    local_38 = iVar13;
    local_3c = local_2c - iVar13;
    iVar18 = 0;
    do {
      puVar10 = (uint *)param_1[iVar18];
      param_1[iVar18] = (&local_44)[iVar18];
      iVar13 = iVar18 + 1;
      (&local_44)[iVar18] = puVar10;
      iVar18 = iVar13;
    } while (iVar13 != 4);
    FUN_016660b8(&local_50);
  }
  else {
    if (uVar11 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar11 >> 2;
      if ((uVar11 & 3) != 0) {
        uVar3 = (uVar11 >> 2) + 1;
      }
      puVar10 = (uint *)*param_1;
      iVar18 = 0;
      do {
        puVar10[-iVar18] = (~(puVar10[-iVar18] >> 7) & 0x1010101) + (puVar10[-iVar18] | 0x7f7f7f7f);
        iVar18 = iVar18 + -1;
      } while (-iVar18 != uVar3);
      if (uVar11 < 4) {
        FUN_01bed864(puVar10 + 1,puVar10);
      }
      else {
        *(uint *)((int)puVar10 + uVar11) = *puVar10;
      }
      uVar4 = *param_2;
      iVar18 = 0;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      uVar3 = 0;
      uVar8 = uVar21;
      do {
        puVar20 = puVar10;
        if (*(char *)((int)puVar10 + uVar3) == -0x80) {
          puVar17 = puVar10;
          while( true ) {
            uVar16 = FUN_015f7180(uVar4,uVar5,uVar6,uVar7,puVar17[uVar3 * -2 + -2]);
            uVar9 = uVar8 & uVar16;
            uVar14 = *(uint *)((int)puVar17 + uVar9) & 0x80808080;
            uVar11 = uVar9;
            if (uVar14 == 0) {
              iVar13 = 4;
              do {
                uVar11 = uVar11 + iVar13 & uVar8;
                iVar13 = iVar13 + 4;
                uVar14 = *(uint *)((int)puVar17 + uVar11) & 0x80808080;
              } while (uVar14 == 0);
            }
            uVar11 = uVar11 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                             (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                     uVar8;
            if (-1 < *(char *)((int)puVar17 + uVar11)) {
              uVar11 = *puVar17 & 0x80808080;
              uVar11 = (uint)LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                     (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar16 >> 0x18);
            if (((uVar11 - uVar9 ^ uVar3 - uVar9) & uVar8) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar17 + uVar3) = bVar2;
              puVar20 = (uint *)*param_1;
              *(byte *)((int)puVar20 + (uVar8 & uVar3 - 4) + 4) = bVar2;
              goto LAB_015da304;
            }
            cVar1 = *(char *)((int)puVar17 + uVar11);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar17 + uVar11) = bVar2;
            puVar20 = (uint *)*param_1;
            *(byte *)((int)puVar20 + (uVar11 - 4 & uVar8) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar13 = -8;
            do {
              uVar15 = *(undefined4 *)((int)puVar10 + iVar13 + iVar18);
              *(undefined4 *)((int)puVar10 + iVar13 + iVar18) =
                   *(undefined4 *)((int)puVar17 + iVar13 + uVar11 * -8);
              *(undefined4 *)((int)puVar17 + iVar13 + uVar11 * -8) = uVar15;
              iVar13 = iVar13 + 4;
            } while (iVar13 != 0);
            puVar17 = (uint *)*param_1;
            uVar8 = param_1[1];
          }
          uVar8 = param_1[1];
          *(undefined1 *)((int)puVar20 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar20 + (uVar8 & uVar3 - 4) + 4) = 0xff;
          uVar16 = (puVar10 + ~uVar3 * 2)[1];
          puVar17[~uVar11 * 2] = puVar10[~uVar3 * 2];
          (puVar17 + ~uVar11 * 2)[1] = uVar16;
        }
LAB_015da304:
        iVar18 = iVar18 + -8;
        bVar22 = uVar3 != uVar21;
        uVar3 = uVar3 + 1;
        puVar10 = puVar20;
      } while (bVar22);
      uVar3 = param_1[1];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - param_1[3];
  }
  return 0x80000001;
}

