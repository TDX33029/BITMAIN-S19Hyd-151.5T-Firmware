// FUN_01340f74 @ 01340f74 size=1668 calls_out=4 calls_in=1
// strings: 

uint FUN_01340f74(int *param_1,uint *param_2)

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
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  int iVar24;
  bool bVar25;
  uint local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar16 = param_1[3];
  uVar12 = uVar16 + 1;
  if (0xfffffffe < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar17 = param_1[1];
  uVar9 = uVar17 + 1;
  uVar5 = uVar17;
  if (7 < uVar17) {
    uVar5 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
  }
  if (uVar5 >> 1 < uVar12) {
    if (uVar12 < uVar5 + 1) {
      uVar12 = uVar5 + 1;
    }
    FUN_013403c0(&local_34,4,uVar12);
    local_38 = local_30;
    if (local_34 != (uint *)0x0) {
      if (uVar16 == 0) {
        uVar16 = 0;
      }
      else {
        puVar19 = (uint *)*param_1;
        iVar24 = 0;
        uVar22 = ~*puVar19 & 0x80808080;
        uVar10 = *param_2;
        uVar13 = param_2[1];
        uVar5 = param_2[2];
        uVar9 = param_2[3];
        uVar17 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                 uVar13 >> 0x18;
        puVar23 = puVar19;
        uVar12 = uVar16;
        do {
          if (uVar22 == 0) {
            do {
              puVar23 = puVar23 + 1;
              iVar24 = iVar24 + 4;
            } while ((*puVar23 & 0x80808080) == 0x80808080);
            uVar22 = *puVar23 & 0x80808080 ^ 0x80808080;
          }
          uVar6 = iVar24 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                          (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3);
          uVar14 = uVar5 ^ puVar19[-1 - uVar6];
          uVar7 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                  uVar9 >> 0x18;
          lVar3 = (ulonglong)uVar7 * 0xb36a80d2;
          uVar11 = (uint)lVar3;
          uVar11 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                   uVar11 >> 0x18) ^
                   uVar9 * 0x2df45158 +
                   uVar14 * 0x2d7f954c + (int)((ulonglong)uVar14 * 0x2df45158 >> 0x20);
          uVar18 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                   uVar11 >> 0x18;
          lVar4 = (ulonglong)~uVar10 * (ulonglong)uVar18;
          uVar21 = (uint)lVar4;
          uVar7 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                  uVar14 >> 0x18) * -0x4c957f2e +
                  uVar7 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
          uVar14 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                   uVar7 >> 0x18) ^ (uint)((ulonglong)uVar14 * 0x2df45158);
          uVar7 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                  uVar14 >> 0x18) * ~uVar10 + uVar18 * ~uVar13 + (int)((ulonglong)lVar4 >> 0x20);
          lVar3 = (ulonglong)uVar17 * (ulonglong)uVar14;
          uVar7 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                  uVar7 >> 0x18) ^ (uint)lVar3;
          uVar18 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                   uVar21 >> 0x18) ^
                   uVar11 * uVar17 +
                   uVar14 * (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                             (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) +
                   (int)((ulonglong)lVar3 >> 0x20);
          uVar11 = uVar18;
          if ((uVar14 & 0x20) != 0) {
            uVar11 = uVar7;
            uVar7 = uVar18;
          }
          uVar14 = uVar7 << (uVar14 & 0x1f) | (uVar11 >> 1) >> (~uVar14 & 0x1f);
          uVar7 = local_30 & uVar14;
          uVar11 = *(uint *)((int)local_34 + uVar7) & 0x80808080;
          if (uVar11 == 0) {
            iVar15 = 4;
            do {
              uVar7 = uVar7 + iVar15;
              iVar15 = iVar15 + 4;
              uVar7 = uVar7 & local_30;
              uVar11 = *(uint *)((int)local_34 + uVar7) & 0x80808080;
            } while (uVar11 == 0);
          }
          uVar7 = uVar7 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                         (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                  local_30;
          if (-1 < *(char *)((int)local_34 + uVar7)) {
            uVar7 = *local_34 & 0x80808080;
            uVar7 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                  (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
          }
          uVar12 = uVar12 - 1;
          uVar22 = uVar22 - 1 & uVar22;
          bVar2 = (byte)(uVar14 >> 0x19);
          *(byte *)((int)local_34 + uVar7) = bVar2;
          *(byte *)((int)local_34 + (uVar7 - 4 & local_30) + 4) = bVar2;
          local_34[~uVar7] = puVar19[~uVar6];
        } while (uVar12 != 0);
      }
      iVar24 = *param_1;
      iVar15 = param_1[1];
      *param_1 = (int)local_34;
      param_1[1] = local_30;
      param_1[2] = local_2c - uVar16;
      param_1[3] = uVar16;
      local_38 = 0x80000001;
      if ((iVar15 != 0) && (iVar8 = iVar15 * 4 + 4, iVar15 + iVar8 != -5)) {
        thunk_FUN_016d3fb4(iVar24 - iVar8);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar9 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar9 >> 2;
      if ((uVar9 & 3) != 0) {
        uVar12 = (uVar9 >> 2) + 1;
      }
      puVar23 = (uint *)*param_1;
      iVar24 = 0;
      do {
        puVar23[-iVar24] = (~(puVar23[-iVar24] >> 7) & 0x1010101) + (puVar23[-iVar24] | 0x7f7f7f7f);
        iVar24 = iVar24 + -1;
      } while (-iVar24 != uVar12);
      if (uVar9 < 4) {
        FUN_016dd52c(puVar23 + 1,puVar23);
      }
      else {
        *(uint *)((int)puVar23 + uVar9) = *puVar23;
      }
      uVar16 = *param_2;
      uVar10 = param_2[1];
      uVar13 = param_2[2];
      uVar5 = param_2[3];
      uVar9 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
              uVar10 >> 0x18;
      uVar12 = 0;
      do {
        puVar19 = puVar23;
        if (*(char *)((int)puVar23 + uVar12) == -0x80) {
          uVar22 = ~uVar12;
          puVar20 = puVar23;
          while( true ) {
            uVar7 = uVar13 ^ puVar20[-1 - uVar12];
            uVar11 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                     uVar5 >> 0x18;
            lVar3 = (ulonglong)uVar11 * 0xb36a80d2;
            uVar14 = (uint)lVar3;
            uVar11 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                     uVar7 >> 0x18) * -0x4c957f2e +
                     uVar11 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar6 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                    uVar14 >> 0x18) ^
                    uVar5 * 0x2df45158 +
                    uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20);
            uVar18 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                     uVar6 >> 0x18;
            lVar3 = (ulonglong)~uVar16 * (ulonglong)uVar18;
            uVar21 = (uint)lVar3;
            uVar14 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 |
                      (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) ^
                     (uint)((ulonglong)uVar7 * 0x2df45158);
            uVar7 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                    uVar14 >> 0x18) * ~uVar16 + uVar18 * ~uVar10 + (int)((ulonglong)lVar3 >> 0x20);
            lVar3 = (ulonglong)uVar9 * (ulonglong)uVar14;
            uVar7 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                    uVar7 >> 0x18) ^ (uint)lVar3;
            uVar18 = param_1[1];
            uVar6 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                    uVar21 >> 0x18) ^
                    uVar6 * uVar9 +
                    uVar14 * (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                              (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) +
                    (int)((ulonglong)lVar3 >> 0x20);
            uVar11 = uVar6;
            if ((uVar14 & 0x20) != 0) {
              uVar11 = uVar7;
              uVar7 = uVar6;
            }
            uVar14 = uVar7 << (uVar14 & 0x1f) | (uVar11 >> 1) >> (~uVar14 & 0x1f);
            uVar6 = uVar18 & uVar14;
            uVar11 = *(uint *)((int)puVar20 + uVar6) & 0x80808080;
            uVar7 = uVar6;
            if (uVar11 == 0) {
              iVar24 = 4;
              do {
                uVar7 = uVar7 + iVar24 & uVar18;
                iVar24 = iVar24 + 4;
                uVar11 = *(uint *)((int)puVar20 + uVar7) & 0x80808080;
              } while (uVar11 == 0);
            }
            uVar7 = uVar7 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                           (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                    uVar18;
            if (-1 < *(char *)((int)puVar20 + uVar7)) {
              uVar7 = *puVar20 & 0x80808080;
              uVar7 = (uint)LZCOUNT((*puVar20 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                    (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar14 >> 0x18);
            if (((uVar7 - uVar6 ^ uVar12 - uVar6) & uVar18) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar20 + uVar12) = bVar2;
              puVar19 = (uint *)*param_1;
              *(byte *)((int)puVar19 + (uVar18 & uVar12 - 4) + 4) = bVar2;
              goto LAB_013414bc;
            }
            cVar1 = *(char *)((int)puVar20 + uVar7);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar20 + uVar7) = bVar2;
            puVar19 = (uint *)*param_1;
            *(byte *)((int)puVar19 + (uVar7 - 4 & uVar18) + 4) = bVar2;
            uVar7 = ~uVar7;
            if (cVar1 == -1) break;
            uVar11 = puVar23[uVar22];
            puVar23[uVar22] = puVar20[uVar7];
            puVar20[uVar7] = uVar11;
            puVar20 = (uint *)*param_1;
          }
          uVar11 = param_1[1];
          *(undefined1 *)((int)puVar19 + uVar12) = 0xff;
          *(undefined1 *)((int)puVar19 + (uVar11 & uVar12 - 4) + 4) = 0xff;
          puVar20[uVar7] = puVar23[uVar22];
        }
LAB_013414bc:
        bVar25 = uVar12 != uVar17;
        uVar12 = uVar12 + 1;
        puVar23 = puVar19;
      } while (bVar25);
      uVar12 = param_1[1];
      if (7 < uVar12) {
        uVar12 = (uVar12 + 1 & 0xfffffff8) - (uVar12 + 1 >> 3);
      }
    }
    param_1[2] = uVar12 - param_1[3];
    local_38 = 0x80000001;
  }
  return local_38;
}

