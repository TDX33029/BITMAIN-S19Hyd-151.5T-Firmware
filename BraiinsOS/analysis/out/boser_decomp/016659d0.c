// FUN_016659d0 @ 016659d0 size=1760 calls_out=5 calls_in=1
// strings: Hash table capacity overflow

uint FUN_016659d0(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  uint *puVar24;
  bool bVar25;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint *local_44;
  uint uStack_40;
  int local_3c;
  int local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  iVar20 = param_1[3];
  uVar5 = iVar20 + 1;
  if (iVar20 == -1) {
LAB_01666088:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar17 = param_1[1];
  uVar7 = uVar17 + 1;
  uVar6 = uVar17;
  if (7 < uVar17) {
    uVar6 = (uVar7 & 0xfffffff8) - (uVar7 >> 3);
  }
  if (uVar6 >> 1 < uVar5) {
    if (uVar5 < uVar6 + 1) {
      uVar5 = uVar6 + 1;
    }
    if (uVar5 < 0xf) {
      iVar8 = (uVar5 & 8) + 8;
      if (uVar5 < 4) {
        iVar8 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar5) goto LAB_01666088;
      iVar8 = (int)((ulonglong)(uVar5 << 3) * 0x24924925 >> 0x20);
      iVar8 = (0xffffffffU >> LZCOUNT((iVar8 + (uVar5 * 8 - iVar8 >> 1) >> 2) - 1)) + 1;
    }
    FUN_016502cc(&local_34,4,iVar8);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_44 = local_34;
    uStack_40 = local_30;
    local_48 = 4;
    local_4c = 4;
    local_38 = 0;
    if (iVar20 != 0) {
      puVar23 = (uint *)*param_1;
      iVar22 = 0;
      uVar12 = ~*puVar23 & 0x80808080;
      uVar5 = param_2[2];
      uVar17 = *param_2;
      uVar18 = param_2[1];
      uVar6 = param_2[3];
      uVar7 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
              uVar18 >> 0x18;
      iVar8 = iVar20;
      puVar10 = puVar23;
      do {
        if (uVar12 == 0) {
          do {
            puVar10 = puVar10 + 1;
            iVar22 = iVar22 + 4;
          } while ((*puVar10 & 0x80808080) == 0x80808080);
          uVar12 = *puVar10 & 0x80808080 ^ 0x80808080;
        }
        uVar9 = iVar22 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                        (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3);
        uVar19 = uVar5 ^ puVar23[-1 - uVar9];
        uVar14 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                 uVar6 >> 0x18;
        lVar3 = (ulonglong)uVar14 * 0xb36a80d2;
        uVar15 = (uint)lVar3;
        uVar15 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                 uVar15 >> 0x18) ^
                 uVar6 * 0x2df45158 +
                 uVar19 * 0x2d7f954c + (int)((ulonglong)uVar19 * 0x2df45158 >> 0x20);
        uVar16 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                 uVar15 >> 0x18;
        lVar4 = (ulonglong)~uVar17 * (ulonglong)uVar16;
        uVar21 = (uint)lVar4;
        uVar14 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                 uVar19 >> 0x18) * -0x4c957f2e +
                 uVar14 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
        uVar19 = (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                 uVar14 >> 0x18) ^ (uint)((ulonglong)uVar19 * 0x2df45158);
        uVar14 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                 uVar19 >> 0x18) * ~uVar17 + uVar16 * ~uVar18 + (int)((ulonglong)lVar4 >> 0x20);
        lVar3 = (ulonglong)uVar7 * (ulonglong)uVar19;
        uVar14 = (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                 uVar14 >> 0x18) ^ (uint)lVar3;
        uVar16 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                 uVar21 >> 0x18) ^
                 uVar15 * uVar7 +
                 uVar19 * (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                           (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) +
                 (int)((ulonglong)lVar3 >> 0x20);
        uVar15 = uVar16;
        if ((uVar19 & 0x20) != 0) {
          uVar15 = uVar14;
          uVar14 = uVar16;
        }
        uVar15 = uVar14 << (uVar19 & 0x1f) | (uVar15 >> 1) >> (~uVar19 & 0x1f);
        uVar14 = local_30 & uVar15;
        uVar16 = *(uint *)((int)local_34 + uVar14) & 0x80808080;
        if (uVar16 == 0) {
          iVar13 = 4;
          do {
            uVar14 = uVar14 + iVar13;
            iVar13 = iVar13 + 4;
            uVar14 = uVar14 & local_30;
            uVar16 = *(uint *)((int)local_34 + uVar14) & 0x80808080;
          } while (uVar16 == 0);
        }
        uVar14 = uVar14 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                         (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar14)) {
          uVar14 = *local_34 & 0x80808080;
          uVar14 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                 (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3;
        }
        uVar12 = uVar12 - 1 & uVar12;
        bVar2 = (byte)(uVar15 >> 0x19);
        *(byte *)((int)local_34 + uVar14) = bVar2;
        iVar8 = iVar8 + -1;
        *(byte *)((int)local_34 + (uVar14 - 4 & local_30) + 4) = bVar2;
        local_34[~uVar14] = puVar23[~uVar9];
      } while (iVar8 != 0);
      local_38 = iVar20;
    }
    local_3c = local_2c - local_38;
    iVar20 = 0;
    do {
      puVar10 = (uint *)param_1[iVar20];
      param_1[iVar20] = (&local_44)[iVar20];
      iVar8 = iVar20 + 1;
      (&local_44)[iVar20] = puVar10;
      iVar20 = iVar8;
    } while (iVar8 != 4);
    local_50 = param_1 + 4;
    FUN_016660b8(&local_50);
  }
  else {
    if (uVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar7 >> 2;
      if ((uVar7 & 3) != 0) {
        uVar5 = (uVar7 >> 2) + 1;
      }
      puVar10 = (uint *)*param_1;
      iVar20 = 0;
      do {
        puVar10[-iVar20] = (~(puVar10[-iVar20] >> 7) & 0x1010101) + (puVar10[-iVar20] | 0x7f7f7f7f);
        iVar20 = iVar20 + -1;
      } while (-iVar20 != uVar5);
      if (uVar7 < 4) {
        FUN_01bed864(puVar10 + 1,puVar10);
      }
      else {
        *(uint *)((int)puVar10 + uVar7) = *puVar10;
      }
      uVar7 = *param_2;
      uVar12 = param_2[1];
      uVar18 = param_2[2];
      uVar14 = param_2[3];
      uVar15 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
               uVar12 >> 0x18;
      uVar5 = 0;
      uVar6 = uVar17;
      do {
        puVar23 = puVar10;
        if (*(char *)((int)puVar10 + uVar5) == -0x80) {
          uVar16 = ~uVar5;
          puVar24 = puVar10;
          while( true ) {
            uVar19 = uVar18 ^ puVar24[-1 - uVar5];
            uVar9 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                    uVar14 >> 0x18;
            lVar3 = (ulonglong)uVar9 * 0xb36a80d2;
            uVar11 = (uint)lVar3;
            uVar9 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                    uVar19 >> 0x18) * -0x4c957f2e +
                    uVar9 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar21 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8
                     | uVar9 >> 0x18) ^ (uint)((ulonglong)uVar19 * 0x2df45158);
            uVar19 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                     uVar11 >> 0x18) ^
                     uVar14 * 0x2df45158 +
                     uVar19 * 0x2d7f954c + (int)((ulonglong)uVar19 * 0x2df45158 >> 0x20);
            uVar9 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                    uVar19 >> 0x18;
            lVar3 = (ulonglong)~uVar7 * (ulonglong)uVar9;
            uVar11 = (uint)lVar3;
            uVar9 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                    uVar21 >> 0x18) * ~uVar7 + uVar9 * ~uVar12 + (int)((ulonglong)lVar3 >> 0x20);
            lVar3 = (ulonglong)uVar15 * (ulonglong)uVar21;
            uVar9 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                    uVar9 >> 0x18) ^ (uint)lVar3;
            uVar11 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                     uVar11 >> 0x18) ^
                     uVar19 * uVar15 +
                     uVar21 * (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                               (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) +
                     (int)((ulonglong)lVar3 >> 0x20);
            uVar19 = uVar11;
            if ((uVar21 & 0x20) != 0) {
              uVar19 = uVar9;
              uVar9 = uVar11;
            }
            uVar11 = uVar9 << (uVar21 & 0x1f) | (uVar19 >> 1) >> (~uVar21 & 0x1f);
            uVar19 = uVar6 & uVar11;
            uVar21 = *(uint *)((int)puVar24 + uVar19) & 0x80808080;
            uVar9 = uVar19;
            if (uVar21 == 0) {
              iVar20 = 4;
              do {
                uVar9 = uVar9 + iVar20 & uVar6;
                iVar20 = iVar20 + 4;
                uVar21 = *(uint *)((int)puVar24 + uVar9) & 0x80808080;
              } while (uVar21 == 0);
            }
            uVar9 = uVar9 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                           (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3) &
                    uVar6;
            if (-1 < *(char *)((int)puVar24 + uVar9)) {
              uVar9 = *puVar24 & 0x80808080;
              uVar9 = (uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                    (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar11 >> 0x18);
            if (((uVar9 - uVar19 ^ uVar5 - uVar19) & uVar6) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar24 + uVar5) = bVar2;
              puVar23 = (uint *)*param_1;
              *(byte *)((int)puVar23 + (uVar6 & uVar5 - 4) + 4) = bVar2;
              goto LAB_01665ce0;
            }
            cVar1 = *(char *)((int)puVar24 + uVar9);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar24 + uVar9) = bVar2;
            puVar23 = (uint *)*param_1;
            uVar19 = ~uVar9;
            *(byte *)((int)puVar23 + (uVar9 - 4 & uVar6) + 4) = bVar2;
            if (cVar1 == -1) break;
            uVar6 = puVar10[uVar16];
            puVar10[uVar16] = puVar24[uVar19];
            puVar24[uVar19] = uVar6;
            puVar24 = (uint *)*param_1;
            uVar6 = param_1[1];
          }
          uVar6 = param_1[1];
          *(undefined1 *)((int)puVar23 + uVar5) = 0xff;
          *(undefined1 *)((int)puVar23 + (uVar6 & uVar5 - 4) + 4) = 0xff;
          puVar24[uVar19] = puVar10[uVar16];
        }
LAB_01665ce0:
        bVar25 = uVar5 != uVar17;
        uVar5 = uVar5 + 1;
        puVar10 = puVar23;
      } while (bVar25);
      uVar5 = param_1[1];
      if (7 < uVar5) {
        uVar5 = (uVar5 + 1 & 0xfffffff8) - (uVar5 + 1 >> 3);
      }
    }
    param_1[2] = uVar5 - param_1[3];
  }
  return 0x80000001;
}

