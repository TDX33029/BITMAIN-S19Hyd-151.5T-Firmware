// FUN_0152cf8c @ 0152cf8c size=1832 calls_out=5 calls_in=1
// strings: Hash table capacity overflow

uint FUN_0152cf8c(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  int iVar24;
  bool bVar25;
  uint local_54;
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
  
  iVar14 = param_1[3];
  uVar5 = iVar14 + 1;
  if (iVar14 == -1) {
LAB_0152d68c:
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
      iVar10 = (uVar5 & 8) + 8;
      if (uVar5 < 4) {
        iVar10 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar5) goto LAB_0152d68c;
      iVar10 = (int)((ulonglong)(uVar5 << 3) * 0x24924925 >> 0x20);
      iVar10 = (0xffffffffU >> LZCOUNT((iVar10 + (uVar5 * 8 - iVar10 >> 1) >> 2) - 1)) + 1;
    }
    FUN_019790d4(&local_34,8,4,iVar10);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_44 = local_34;
    uStack_40 = local_30;
    local_48 = 4;
    local_4c = 8;
    local_38 = 0;
    if (iVar14 != 0) {
      puVar12 = (uint *)*param_1;
      iVar22 = 0;
      uVar21 = ~*puVar12 & 0x80808080;
      uVar5 = param_2[2];
      uVar17 = *param_2;
      uVar19 = param_2[1];
      uVar6 = param_2[3];
      uVar7 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
              uVar19 >> 0x18;
      iVar10 = iVar14;
      puVar9 = puVar12;
      do {
        if (uVar21 == 0) {
          do {
            puVar9 = puVar9 + 1;
            iVar22 = iVar22 + 4;
          } while ((*puVar9 & 0x80808080) == 0x80808080);
          uVar21 = *puVar9 & 0x80808080 ^ 0x80808080;
        }
        uVar8 = iVar22 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                        (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3);
        uVar20 = uVar5 ^ puVar12[uVar8 * -2 + -2];
        uVar13 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                 uVar6 >> 0x18;
        lVar3 = (ulonglong)uVar13 * 0xb36a80d2;
        uVar15 = (uint)lVar3;
        uVar15 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                 uVar15 >> 0x18) ^
                 uVar6 * 0x2df45158 +
                 uVar20 * 0x2d7f954c + (int)((ulonglong)uVar20 * 0x2df45158 >> 0x20);
        uVar16 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                 uVar15 >> 0x18;
        lVar4 = (ulonglong)~uVar17 * (ulonglong)uVar16;
        uVar11 = (uint)lVar4;
        uVar13 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                 uVar20 >> 0x18) * -0x4c957f2e +
                 uVar13 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
        uVar20 = (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                 uVar13 >> 0x18) ^ (uint)((ulonglong)uVar20 * 0x2df45158);
        uVar13 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                 uVar20 >> 0x18) * ~uVar17 + uVar16 * ~uVar19 + (int)((ulonglong)lVar4 >> 0x20);
        lVar3 = (ulonglong)uVar7 * (ulonglong)uVar20;
        uVar13 = (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                 uVar13 >> 0x18) ^ (uint)lVar3;
        uVar11 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                 uVar11 >> 0x18) ^
                 uVar15 * uVar7 +
                 uVar20 * (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                           (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) +
                 (int)((ulonglong)lVar3 >> 0x20);
        uVar15 = uVar11;
        if ((uVar20 & 0x20) != 0) {
          uVar15 = uVar13;
          uVar13 = uVar11;
        }
        uVar15 = uVar13 << (uVar20 & 0x1f) | (uVar15 >> 1) >> (~uVar20 & 0x1f);
        uVar13 = local_30 & uVar15;
        uVar11 = *(uint *)((int)local_34 + uVar13) & 0x80808080;
        if (uVar11 == 0) {
          iVar24 = 4;
          do {
            uVar13 = uVar13 + iVar24;
            iVar24 = iVar24 + 4;
            uVar13 = uVar13 & local_30;
            uVar11 = *(uint *)((int)local_34 + uVar13) & 0x80808080;
          } while (uVar11 == 0);
        }
        uVar13 = uVar13 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                         (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar13)) {
          uVar13 = *local_34 & 0x80808080;
          uVar13 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                 (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
        }
        uVar21 = uVar21 - 1 & uVar21;
        bVar2 = (byte)(uVar15 >> 0x19);
        *(byte *)((int)local_34 + uVar13) = bVar2;
        iVar10 = iVar10 + -1;
        *(byte *)((int)local_34 + (uVar13 - 4 & local_30) + 4) = bVar2;
        uVar15 = (puVar12 + ~uVar8 * 2)[1];
        local_34[~uVar13 * 2] = puVar12[~uVar8 * 2];
        (local_34 + ~uVar13 * 2)[1] = uVar15;
      } while (iVar10 != 0);
      local_38 = iVar14;
    }
    local_3c = local_2c - local_38;
    iVar14 = 0;
    do {
      puVar9 = (uint *)param_1[iVar14];
      param_1[iVar14] = (&local_44)[iVar14];
      iVar10 = iVar14 + 1;
      (&local_44)[iVar14] = puVar9;
      iVar14 = iVar10;
    } while (iVar10 != 4);
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
      puVar9 = (uint *)*param_1;
      iVar14 = 0;
      do {
        puVar9[-iVar14] = (~(puVar9[-iVar14] >> 7) & 0x1010101) + (puVar9[-iVar14] | 0x7f7f7f7f);
        iVar14 = iVar14 + -1;
      } while (-iVar14 != uVar5);
      if (uVar7 < 4) {
        FUN_01bed864(puVar9 + 1,puVar9);
      }
      else {
        *(uint *)((int)puVar9 + uVar7) = *puVar9;
      }
      uVar6 = *param_2;
      uVar7 = param_2[1];
      uVar19 = param_2[2];
      uVar21 = param_2[3];
      uVar13 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
               uVar7 >> 0x18;
      iVar14 = 0;
      uVar5 = 0;
      local_54 = uVar17;
      do {
        puVar12 = puVar9;
        if (*(char *)((int)puVar9 + uVar5) == -0x80) {
          puVar23 = puVar9;
          while( true ) {
            uVar15 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                     uVar21 >> 0x18;
            uVar20 = uVar19 ^ puVar23[uVar5 * -2 + -2];
            lVar3 = (ulonglong)uVar15 * 0xb36a80d2;
            uVar11 = (uint)lVar3;
            uVar15 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                     uVar20 >> 0x18) * -0x4c957f2e +
                     uVar15 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar8 = (uVar15 * 0x1000000 | (uVar15 >> 8 & 0xff) << 0x10 |
                     (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) ^
                    (uint)((ulonglong)uVar20 * 0x2df45158);
            uVar11 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                     uVar11 >> 0x18) ^
                     uVar21 * 0x2df45158 +
                     uVar20 * 0x2d7f954c + (int)((ulonglong)uVar20 * 0x2df45158 >> 0x20);
            uVar15 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                     uVar11 >> 0x18;
            lVar3 = (ulonglong)~uVar6 * (ulonglong)uVar15;
            uVar20 = (uint)lVar3;
            uVar15 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                     uVar8 >> 0x18) * ~uVar6 + uVar15 * ~uVar7 + (int)((ulonglong)lVar3 >> 0x20);
            lVar3 = (ulonglong)uVar13 * (ulonglong)uVar8;
            uVar15 = (uVar15 * 0x1000000 | (uVar15 >> 8 & 0xff) << 0x10 |
                      (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) ^ (uint)lVar3;
            uVar20 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                     uVar20 >> 0x18) ^
                     uVar11 * uVar13 +
                     uVar8 * (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                              (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) +
                     (int)((ulonglong)lVar3 >> 0x20);
            uVar11 = uVar20;
            if ((uVar8 & 0x20) != 0) {
              uVar11 = uVar15;
              uVar15 = uVar20;
            }
            uVar11 = uVar15 << (uVar8 & 0x1f) | (uVar11 >> 1) >> (~uVar8 & 0x1f);
            uVar20 = local_54 & uVar11;
            uVar8 = *(uint *)((int)puVar23 + uVar20) & 0x80808080;
            uVar15 = uVar20;
            if (uVar8 == 0) {
              iVar10 = 4;
              do {
                uVar15 = uVar15 + iVar10 & local_54;
                iVar10 = iVar10 + 4;
                uVar8 = *(uint *)((int)puVar23 + uVar15) & 0x80808080;
              } while (uVar8 == 0);
            }
            uVar15 = uVar15 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                             (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                     local_54;
            if (-1 < *(char *)((int)puVar23 + uVar15)) {
              uVar15 = *puVar23 & 0x80808080;
              uVar15 = (uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                     (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar11 >> 0x18);
            if (((uVar15 - uVar20 ^ uVar5 - uVar20) & local_54) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar23 + uVar5) = bVar2;
              puVar12 = (uint *)*param_1;
              *(byte *)((int)puVar12 + (local_54 & uVar5 - 4) + 4) = bVar2;
              goto LAB_0152d2c4;
            }
            cVar1 = *(char *)((int)puVar23 + uVar15);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar23 + uVar15) = bVar2;
            puVar12 = (uint *)*param_1;
            *(byte *)((int)puVar12 + (uVar15 - 4 & local_54) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar10 = -8;
            do {
              uVar18 = *(undefined4 *)((int)puVar9 + iVar10 + iVar14);
              *(undefined4 *)((int)puVar9 + iVar10 + iVar14) =
                   *(undefined4 *)((int)puVar23 + iVar10 + uVar15 * -8);
              *(undefined4 *)((int)puVar23 + iVar10 + uVar15 * -8) = uVar18;
              iVar10 = iVar10 + 4;
            } while (iVar10 != 0);
            puVar23 = (uint *)*param_1;
            local_54 = param_1[1];
          }
          local_54 = param_1[1];
          *(undefined1 *)((int)puVar12 + uVar5) = 0xff;
          *(undefined1 *)((int)puVar12 + (local_54 & uVar5 - 4) + 4) = 0xff;
          uVar11 = (puVar9 + ~uVar5 * 2)[1];
          puVar23[~uVar15 * 2] = puVar9[~uVar5 * 2];
          (puVar23 + ~uVar15 * 2)[1] = uVar11;
        }
LAB_0152d2c4:
        iVar14 = iVar14 + -8;
        bVar25 = uVar5 != uVar17;
        uVar5 = uVar5 + 1;
        puVar9 = puVar12;
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

