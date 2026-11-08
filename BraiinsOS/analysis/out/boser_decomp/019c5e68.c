// FUN_019c5e68 @ 019c5e68 size=1336 calls_out=6 calls_in=1
// strings: Hash table capacity overflow

uint FUN_019c5e68(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
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
  
  iVar19 = param_1[3];
  uVar3 = iVar19 + 1;
  if (iVar19 == -1) {
LAB_019c6378:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar21 = param_1[1];
  uVar12 = uVar21 + 1;
  uVar9 = uVar21;
  if (7 < uVar21) {
    uVar9 = (uVar12 & 0xfffffff8) - (uVar12 >> 3);
  }
  if (uVar9 >> 1 < uVar3) {
    if (uVar3 < uVar9 + 1) {
      uVar3 = uVar9 + 1;
    }
    if (uVar3 < 0xf) {
      iVar15 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar15 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_019c6378;
      iVar15 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar15 = (0xffffffffU >> LZCOUNT((iVar15 + (uVar3 * 8 - iVar15 >> 1) >> 2) - 1)) + 1;
    }
    FUN_019c5280(&local_34,4,4,iVar15);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_40 = local_30;
    iVar15 = 0;
    local_48 = 4;
    local_4c = 4;
    local_38 = local_28;
    local_3c = local_2c;
    local_44 = local_34;
    local_50 = param_1 + 4;
    if (iVar19 != 0) {
      puVar13 = (uint *)*param_1;
      iVar20 = 0;
      uVar3 = ~*puVar13 & 0x80808080;
      uVar5 = *param_2;
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      puVar11 = puVar13;
      iVar15 = iVar19;
      do {
        if (uVar3 == 0) {
          do {
            puVar11 = puVar11 + 1;
            iVar20 = iVar20 + 4;
          } while ((*puVar11 & 0x80808080) == 0x80808080);
          uVar3 = *puVar11 & 0x80808080 ^ 0x80808080;
        }
        uVar12 = iVar20 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                         (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3);
        uVar9 = FUN_019c88bc(uVar5,uVar6,uVar7,uVar8,puVar13[-1 - uVar12],local_2c,iVar15);
        uVar21 = local_30 & uVar9;
        uVar17 = *(uint *)((int)local_34 + uVar21) & 0x80808080;
        if (uVar17 == 0) {
          iVar14 = 4;
          do {
            uVar21 = uVar21 + iVar14;
            iVar14 = iVar14 + 4;
            uVar21 = uVar21 & local_30;
            uVar17 = *(uint *)((int)local_34 + uVar21) & 0x80808080;
          } while (uVar17 == 0);
        }
        uVar21 = uVar21 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                         (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar21)) {
          uVar21 = *local_34 & 0x80808080;
          uVar21 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                 (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3;
        }
        uVar3 = uVar3 - 1 & uVar3;
        bVar2 = (byte)(uVar9 >> 0x19);
        *(byte *)((int)local_34 + uVar21) = bVar2;
        iVar19 = iVar19 + -1;
        *(byte *)((int)local_34 + (uVar21 - 4 & local_30) + 4) = bVar2;
        local_34[~uVar21] = puVar13[~uVar12];
      } while (iVar19 != 0);
    }
    local_38 = iVar15;
    local_3c = local_2c - iVar15;
    iVar19 = 0;
    do {
      puVar11 = (uint *)param_1[iVar19];
      param_1[iVar19] = (&local_44)[iVar19];
      iVar15 = iVar19 + 1;
      (&local_44)[iVar19] = puVar11;
      iVar19 = iVar15;
    } while (iVar15 != 4);
    FUN_016660b8(&local_50);
  }
  else {
    if (uVar12 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar12 >> 2;
      if ((uVar12 & 3) != 0) {
        uVar3 = (uVar12 >> 2) + 1;
      }
      puVar11 = (uint *)*param_1;
      iVar19 = 0;
      do {
        puVar11[-iVar19] = (~(puVar11[-iVar19] >> 7) & 0x1010101) + (puVar11[-iVar19] | 0x7f7f7f7f);
        iVar19 = iVar19 + -1;
      } while (-iVar19 != uVar3);
      if (uVar12 < 4) {
        FUN_01bed864(puVar11 + 1,puVar11);
      }
      else {
        *(uint *)((int)puVar11 + uVar12) = *puVar11;
      }
      uVar5 = *param_2;
      uVar8 = param_2[3];
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar3 = 0;
      uVar9 = uVar21;
      do {
        puVar13 = puVar11;
        if (*(char *)((int)puVar11 + uVar3) == -0x80) {
          uVar12 = ~uVar3;
          puVar18 = puVar11;
          while( true ) {
            uVar4 = FUN_019c88bc(uVar5,uVar6,uVar7,uVar8,puVar18[-1 - uVar3]);
            uVar10 = uVar9 & uVar4;
            uVar16 = *(uint *)((int)puVar18 + uVar10) & 0x80808080;
            uVar17 = uVar10;
            if (uVar16 == 0) {
              iVar19 = 4;
              do {
                uVar17 = uVar17 + iVar19 & uVar9;
                iVar19 = iVar19 + 4;
                uVar16 = *(uint *)((int)puVar18 + uVar17) & 0x80808080;
              } while (uVar16 == 0);
            }
            uVar17 = uVar17 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                             (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                     uVar9;
            if (-1 < *(char *)((int)puVar18 + uVar17)) {
              uVar17 = *puVar18 & 0x80808080;
              uVar17 = (uint)LZCOUNT((*puVar18 & 0x80) << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                     (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar4 >> 0x18);
            if (((uVar17 - uVar10 ^ uVar3 - uVar10) & uVar9) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar18 + uVar3) = bVar2;
              puVar13 = (uint *)*param_1;
              *(byte *)((int)puVar13 + (uVar9 & uVar3 - 4) + 4) = bVar2;
              goto LAB_019c60a8;
            }
            cVar1 = *(char *)((int)puVar18 + uVar17);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar18 + uVar17) = bVar2;
            puVar13 = (uint *)*param_1;
            *(byte *)((int)puVar13 + (uVar17 - 4 & uVar9) + 4) = bVar2;
            uVar17 = ~uVar17;
            if (cVar1 == -1) break;
            uVar9 = puVar11[uVar12];
            puVar11[uVar12] = puVar18[uVar17];
            puVar18[uVar17] = uVar9;
            puVar18 = (uint *)*param_1;
            uVar9 = param_1[1];
          }
          uVar9 = param_1[1];
          *(undefined1 *)((int)puVar13 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar13 + (uVar9 & uVar3 - 4) + 4) = 0xff;
          puVar18[uVar17] = puVar11[uVar12];
        }
LAB_019c60a8:
        bVar22 = uVar3 != uVar21;
        uVar3 = uVar3 + 1;
        puVar11 = puVar13;
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

