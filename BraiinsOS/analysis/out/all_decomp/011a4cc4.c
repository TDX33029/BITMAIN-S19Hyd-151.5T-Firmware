// FUN_011a4cc4 @ 011a4cc4 size=1700 calls_out=4 calls_in=1
// strings: 

uint FUN_011a4cc4(int *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  uint local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar17 = param_1[3];
  uVar13 = uVar17 + 1;
  if (0xfffffffe < uVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar18 = param_1[1];
  uVar10 = uVar18 + 1;
  uVar5 = uVar18;
  if (7 < uVar18) {
    uVar5 = (uVar10 & 0xfffffff8) - (uVar10 >> 3);
  }
  if (uVar5 >> 1 < uVar13) {
    if (uVar13 < uVar5 + 1) {
      uVar13 = uVar5 + 1;
    }
    FUN_011a5370(&local_34,8,4,uVar13);
    local_38 = local_30;
    if (local_34 != (uint *)0x0) {
      if (uVar17 == 0) {
        uVar17 = 0;
      }
      else {
        puVar20 = (uint *)*param_1;
        iVar24 = 0;
        uVar23 = ~*puVar20 & 0x80808080;
        uVar11 = *param_2;
        uVar14 = param_2[1];
        uVar5 = param_2[2];
        uVar10 = param_2[3];
        uVar18 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                 uVar14 >> 0x18;
        puVar22 = puVar20;
        uVar13 = uVar17;
        do {
          if (uVar23 == 0) {
            do {
              puVar22 = puVar22 + 1;
              iVar24 = iVar24 + 4;
            } while ((*puVar22 & 0x80808080) == 0x80808080);
            uVar23 = *puVar22 & 0x80808080 ^ 0x80808080;
          }
          uVar7 = iVar24 + ((uint)LZCOUNT(uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                                          (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) >> 3);
          uVar15 = uVar5 ^ puVar20[uVar7 * -2 + -2];
          uVar8 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                  uVar10 >> 0x18;
          lVar3 = (ulonglong)uVar8 * 0xb36a80d2;
          uVar12 = (uint)lVar3;
          uVar12 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                   uVar12 >> 0x18) ^
                   uVar10 * 0x2df45158 +
                   uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20);
          uVar19 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                   uVar12 >> 0x18;
          lVar4 = (ulonglong)~uVar11 * (ulonglong)uVar19;
          uVar21 = (uint)lVar4;
          uVar8 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                  uVar15 >> 0x18) * -0x4c957f2e +
                  uVar8 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
          uVar15 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                   uVar8 >> 0x18) ^ (uint)((ulonglong)uVar15 * 0x2df45158);
          uVar8 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                  uVar15 >> 0x18) * ~uVar11 + uVar19 * ~uVar14 + (int)((ulonglong)lVar4 >> 0x20);
          lVar3 = (ulonglong)uVar18 * (ulonglong)uVar15;
          uVar8 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                  uVar8 >> 0x18) ^ (uint)lVar3;
          uVar19 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                   uVar21 >> 0x18) ^
                   uVar12 * uVar18 +
                   uVar15 * (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                             (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) +
                   (int)((ulonglong)lVar3 >> 0x20);
          uVar12 = uVar19;
          if ((uVar15 & 0x20) != 0) {
            uVar12 = uVar8;
            uVar8 = uVar19;
          }
          uVar15 = uVar8 << (uVar15 & 0x1f) | (uVar12 >> 1) >> (~uVar15 & 0x1f);
          uVar8 = local_30 & uVar15;
          uVar12 = *(uint *)((int)local_34 + uVar8) & 0x80808080;
          if (uVar12 == 0) {
            iVar16 = 4;
            do {
              uVar8 = uVar8 + iVar16;
              iVar16 = iVar16 + 4;
              uVar8 = uVar8 & local_30;
              uVar12 = *(uint *)((int)local_34 + uVar8) & 0x80808080;
            } while (uVar12 == 0);
          }
          uVar8 = uVar8 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                         (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                  local_30;
          if (-1 < *(char *)((int)local_34 + uVar8)) {
            uVar8 = *local_34 & 0x80808080;
            uVar8 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                  (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
          }
          uVar13 = uVar13 - 1;
          uVar23 = uVar23 - 1 & uVar23;
          bVar2 = (byte)(uVar15 >> 0x19);
          *(byte *)((int)local_34 + uVar8) = bVar2;
          *(byte *)((int)local_34 + (uVar8 - 4 & local_30) + 4) = bVar2;
          uVar12 = (puVar20 + ~uVar7 * 2)[1];
          local_34[~uVar8 * 2] = puVar20[~uVar7 * 2];
          (local_34 + ~uVar8 * 2)[1] = uVar12;
        } while (uVar13 != 0);
      }
      iVar24 = *param_1;
      iVar16 = param_1[1];
      *param_1 = (int)local_34;
      param_1[1] = local_30;
      param_1[2] = local_2c - uVar17;
      param_1[3] = uVar17;
      local_38 = 0x80000001;
      if ((iVar16 != 0) && (iVar9 = iVar16 * 8 + 8, iVar16 + iVar9 != -5)) {
        thunk_FUN_016d3fb4(iVar24 - iVar9);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar10 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar10 >> 2;
      if ((uVar10 & 3) != 0) {
        uVar13 = (uVar10 >> 2) + 1;
      }
      puVar22 = (uint *)*param_1;
      iVar24 = 0;
      do {
        puVar22[-iVar24] = (~(puVar22[-iVar24] >> 7) & 0x1010101) + (puVar22[-iVar24] | 0x7f7f7f7f);
        iVar24 = iVar24 + -1;
      } while (-iVar24 != uVar13);
      if (uVar10 < 4) {
        FUN_016dd52c(puVar22 + 1,puVar22);
      }
      else {
        *(uint *)((int)puVar22 + uVar10) = *puVar22;
      }
      uVar17 = *param_2;
      uVar11 = param_2[1];
      uVar14 = param_2[2];
      uVar5 = param_2[3];
      uVar10 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18;
      uVar13 = 0;
      do {
        puVar20 = puVar22;
        if (*(char *)((int)puVar22 + uVar13) == -0x80) {
          puVar6 = puVar22 + ~uVar13 * 2;
          while( true ) {
            uVar23 = uVar14 ^ puVar22[uVar13 * -2 + -2];
            uVar8 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                    uVar5 >> 0x18;
            lVar3 = (ulonglong)uVar8 * 0xb36a80d2;
            uVar15 = (uint)lVar3;
            uVar8 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                    uVar23 >> 0x18) * -0x4c957f2e +
                    uVar8 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar12 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8
                     | uVar8 >> 0x18) ^ (uint)((ulonglong)uVar23 * 0x2df45158);
            uVar8 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                    uVar15 >> 0x18) ^
                    uVar5 * 0x2df45158 +
                    uVar23 * 0x2d7f954c + (int)((ulonglong)uVar23 * 0x2df45158 >> 0x20);
            uVar23 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                     uVar8 >> 0x18;
            lVar3 = (ulonglong)~uVar17 * (ulonglong)uVar23;
            uVar15 = (uint)lVar3;
            uVar23 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                     uVar12 >> 0x18) * ~uVar17 + uVar23 * ~uVar11 + (int)((ulonglong)lVar3 >> 0x20);
            lVar3 = (ulonglong)uVar10 * (ulonglong)uVar12;
            uVar23 = (uVar23 * 0x1000000 | (uVar23 >> 8 & 0xff) << 0x10 |
                      (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) ^ (uint)lVar3;
            uVar7 = param_1[1];
            uVar15 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                     uVar15 >> 0x18) ^
                     uVar8 * uVar10 +
                     uVar12 * (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                               (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) +
                     (int)((ulonglong)lVar3 >> 0x20);
            uVar8 = uVar15;
            if ((uVar12 & 0x20) != 0) {
              uVar8 = uVar23;
              uVar23 = uVar15;
            }
            uVar12 = uVar23 << (uVar12 & 0x1f) | (uVar8 >> 1) >> (~uVar12 & 0x1f);
            uVar8 = uVar7 & uVar12;
            uVar15 = *(uint *)((int)puVar22 + uVar8) & 0x80808080;
            uVar23 = uVar8;
            if (uVar15 == 0) {
              iVar24 = 4;
              do {
                uVar23 = uVar23 + iVar24 & uVar7;
                iVar24 = iVar24 + 4;
                uVar15 = *(uint *)((int)puVar22 + uVar23) & 0x80808080;
              } while (uVar15 == 0);
            }
            uVar23 = uVar23 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                             (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                     uVar7;
            if (-1 < *(char *)((int)puVar22 + uVar23)) {
              uVar23 = *puVar22 & 0x80808080;
              uVar23 = (uint)LZCOUNT((*puVar22 & 0x80) << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                                     (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar12 >> 0x18);
            if (((uVar23 - uVar8 ^ uVar13 - uVar8) & uVar7) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar22 + uVar13) = bVar2;
              puVar20 = (uint *)*param_1;
              *(byte *)((int)puVar20 + (uVar7 & uVar13 - 4) + 4) = bVar2;
              goto LAB_011a5228;
            }
            cVar1 = *(char *)((int)puVar22 + uVar23);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar22 + uVar23) = bVar2;
            puVar20 = (uint *)*param_1;
            *(byte *)((int)puVar20 + (uVar23 - 4 & uVar7) + 4) = bVar2;
            puVar22 = puVar22 + ~uVar23 * 2;
            if (cVar1 == -1) break;
            uVar23 = *puVar22;
            *puVar22 = *puVar6;
            *puVar6 = uVar23;
            uVar23 = puVar6[1];
            puVar6[1] = puVar22[1];
            puVar22[1] = uVar23;
            puVar22 = (uint *)*param_1;
          }
          uVar23 = param_1[1];
          *(undefined1 *)((int)puVar20 + uVar13) = 0xff;
          *(undefined1 *)((int)puVar20 + (uVar23 & uVar13 - 4) + 4) = 0xff;
          uVar23 = *puVar6;
          puVar22[1] = puVar6[1];
          *puVar22 = uVar23;
        }
LAB_011a5228:
        bVar25 = uVar13 != uVar18;
        uVar13 = uVar13 + 1;
        puVar22 = puVar20;
      } while (bVar25);
      uVar13 = param_1[1];
      if (7 < uVar13) {
        uVar13 = (uVar13 + 1 & 0xfffffff8) - (uVar13 + 1 >> 3);
      }
    }
    param_1[2] = uVar13 - param_1[3];
    local_38 = 0x80000001;
  }
  return local_38;
}

