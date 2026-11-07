// FUN_011a6e38 @ 011a6e38 size=1916 calls_out=5 calls_in=1
// strings: 

uint FUN_011a6e38(int *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint *puVar28;
  bool bVar29;
  uint *local_48;
  uint local_44;
  int local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  uVar20 = param_1[3];
  uVar18 = uVar20 + 1;
  if (0xfffffffe < uVar20) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar26 = param_1[1];
  uVar15 = uVar26 + 1;
  uVar5 = uVar26;
  if (7 < uVar26) {
    uVar5 = (uVar15 & 0xfffffff8) - (uVar15 >> 3);
  }
  if (uVar5 >> 1 < uVar18) {
    if (uVar18 < uVar5 + 1) {
      uVar18 = uVar5 + 1;
    }
    FUN_011a5370(&local_48,4,4,uVar18);
    uVar18 = local_44;
    puVar23 = local_48;
    uVar5 = local_44;
    if (local_48 != (uint *)0x0) {
      if (uVar20 == 0) {
        uVar20 = 0;
      }
      else {
        puVar28 = (uint *)*param_1;
        iVar27 = 0;
        uVar11 = *param_2;
        uVar16 = param_2[1];
        uVar25 = ~*puVar28 & 0x80808080;
        uVar15 = param_2[2];
        uVar26 = param_2[3];
        puVar6 = (uint *)param_2[4];
        uVar7 = param_2[5];
        uVar8 = param_2[7];
        uVar5 = uVar20;
        puVar10 = puVar28;
        do {
          if (uVar25 == 0) {
            do {
              puVar10 = puVar10 + 1;
              iVar27 = iVar27 + 4;
            } while ((*puVar10 & 0x80808080) == 0x80808080);
            uVar25 = *puVar10 & 0x80808080 ^ 0x80808080;
          }
          uVar12 = iVar27 + ((uint)LZCOUNT(uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                                           (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18) >> 3);
          local_48 = puVar6;
          local_44 = uVar7;
          uStack_3c = uVar8;
          local_38 = uVar15;
          uStack_34 = uVar26;
          local_30 = uVar11;
          uStack_2c = uVar16;
          FUN_011df94c(&local_48,*(undefined4 *)(puVar28[-1 - uVar12] + 4),
                       *(undefined4 *)(puVar28[-1 - uVar12] + 8));
          uVar9 = local_38 ^ 0xff;
          uVar13 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                   (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar3 = (ulonglong)uVar13 * 0xb36a80d2;
          uVar22 = (uint)lVar3;
          uVar19 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                   uVar22 >> 0x18) ^
                   uStack_34 * 0x2df45158 +
                   uVar9 * 0x2d7f954c + (int)((ulonglong)uVar9 * 0x2df45158 >> 0x20);
          uVar21 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18;
          lVar4 = (ulonglong)~local_30 * (ulonglong)uVar21;
          uVar24 = (uint)lVar4;
          uVar13 = (uVar9 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8
                   | local_38 >> 0x18) * -0x4c957f2e +
                   uVar13 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
          uVar22 = (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8
                   | uVar13 >> 0x18) ^ (uint)((ulonglong)uVar9 * 0x2df45158);
          uVar9 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                  uVar22 >> 0x18) * ~local_30 +
                  uVar21 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
          uVar13 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                   (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
          lVar3 = (ulonglong)uVar13 * (ulonglong)uVar22;
          uVar9 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                  uVar9 >> 0x18) ^ (uint)lVar3;
          uVar19 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
                   uVar24 >> 0x18) ^
                   uVar19 * uVar13 +
                   uVar22 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                             (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                   (int)((ulonglong)lVar3 >> 0x20);
          uVar13 = uVar19;
          if ((uVar22 & 0x20) != 0) {
            uVar13 = uVar9;
            uVar9 = uVar19;
          }
          uVar9 = uVar9 << (uVar22 & 0x1f) | (uVar13 >> 1) >> (~uVar22 & 0x1f);
          uVar13 = uVar18 & uVar9;
          uVar22 = *(uint *)((int)puVar23 + uVar13) & 0x80808080;
          if (uVar22 == 0) {
            iVar14 = 4;
            do {
              uVar13 = uVar13 + iVar14;
              iVar14 = iVar14 + 4;
              uVar13 = uVar13 & uVar18;
              uVar22 = *(uint *)((int)puVar23 + uVar13) & 0x80808080;
            } while (uVar22 == 0);
          }
          uVar13 = uVar13 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                           (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3) &
                   uVar18;
          if (-1 < *(char *)((int)puVar23 + uVar13)) {
            uVar13 = *puVar23 & 0x80808080;
            uVar13 = (uint)LZCOUNT((*puVar23 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                   (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
          }
          uVar25 = uVar25 - 1 & uVar25;
          bVar2 = (byte)(uVar9 >> 0x19);
          *(byte *)((int)puVar23 + uVar13) = bVar2;
          uVar5 = uVar5 - 1;
          *(byte *)((int)puVar23 + (uVar13 - 4 & uVar18) + 4) = bVar2;
          puVar23[~uVar13] = puVar28[~uVar12];
        } while (uVar5 != 0);
      }
      iVar27 = *param_1;
      iVar14 = param_1[1];
      param_1[1] = uVar18;
      uVar5 = 0x80000001;
      *param_1 = (int)puVar23;
      param_1[2] = local_40 - uVar20;
      param_1[3] = uVar20;
      if ((iVar14 != 0) && (iVar17 = iVar14 * 4 + 4, iVar14 + iVar17 != -5)) {
        thunk_FUN_016d3fb4(iVar27 - iVar17);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar15 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = uVar15 >> 2;
      if ((uVar15 & 3) != 0) {
        uVar18 = (uVar15 >> 2) + 1;
      }
      puVar23 = (uint *)*param_1;
      iVar27 = 0;
      do {
        puVar23[-iVar27] = (~(puVar23[-iVar27] >> 7) & 0x1010101) + (puVar23[-iVar27] | 0x7f7f7f7f);
        iVar27 = iVar27 + -1;
      } while (-iVar27 != uVar18);
      if (uVar15 < 4) {
        FUN_016dd52c(puVar23 + 1,puVar23);
      }
      else {
        *(uint *)((int)puVar23 + uVar15) = *puVar23;
      }
      uVar20 = param_2[2];
      uVar5 = param_2[3];
      puVar10 = (uint *)param_2[4];
      uVar15 = param_2[5];
      uVar7 = param_2[7];
      uVar8 = *param_2;
      uVar11 = param_2[1];
      uVar18 = 0;
      do {
        puVar6 = puVar23;
        if (*(char *)((int)puVar23 + uVar18) == -0x80) {
          uVar16 = ~uVar18;
          puVar28 = puVar23;
          while( true ) {
            local_48 = puVar10;
            local_44 = uVar15;
            uStack_3c = uVar7;
            local_38 = uVar20;
            uStack_34 = uVar5;
            local_30 = uVar8;
            uStack_2c = uVar11;
            FUN_011df94c(&local_48,*(undefined4 *)(puVar28[-1 - uVar18] + 4),
                         *(undefined4 *)(puVar28[-1 - uVar18] + 8));
            uVar25 = local_38 ^ 0xff;
            uVar9 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                    (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
            lVar3 = (ulonglong)uVar9 * 0xb36a80d2;
            uVar13 = (uint)lVar3;
            uVar12 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                     uVar13 >> 0x18) ^
                     uStack_34 * 0x2df45158 +
                     uVar25 * 0x2d7f954c + (int)((ulonglong)uVar25 * 0x2df45158 >> 0x20);
            uVar13 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                     uVar12 >> 0x18;
            uVar19 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                     (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
            lVar4 = (ulonglong)~local_30 * (ulonglong)uVar13;
            uVar21 = (uint)lVar4;
            uVar9 = (uVar25 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                     (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * -0x4c957f2e +
                    uVar9 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar22 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8
                     | uVar9 >> 0x18) ^ (uint)((ulonglong)uVar25 * 0x2df45158);
            uVar25 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                     uVar22 >> 0x18) * ~local_30 +
                     uVar13 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
            lVar3 = (ulonglong)uVar19 * (ulonglong)uVar22;
            uVar25 = (uVar25 * 0x1000000 | (uVar25 >> 8 & 0xff) << 0x10 |
                      (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18) ^ (uint)lVar3;
            uVar13 = param_1[1];
            uVar12 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                     uVar21 >> 0x18) ^
                     uVar12 * uVar19 +
                     uVar22 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                               (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                     (int)((ulonglong)lVar3 >> 0x20);
            uVar9 = uVar12;
            if ((uVar22 & 0x20) != 0) {
              uVar9 = uVar25;
              uVar25 = uVar12;
            }
            uVar9 = uVar25 << (uVar22 & 0x1f) | (uVar9 >> 1) >> (~uVar22 & 0x1f);
            uVar22 = uVar13 & uVar9;
            uVar12 = *(uint *)((int)puVar28 + uVar22) & 0x80808080;
            uVar25 = uVar22;
            if (uVar12 == 0) {
              iVar27 = 4;
              do {
                uVar25 = uVar25 + iVar27 & uVar13;
                iVar27 = iVar27 + 4;
                uVar12 = *(uint *)((int)puVar28 + uVar25) & 0x80808080;
              } while (uVar12 == 0);
            }
            uVar25 = uVar25 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                             (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                     uVar13;
            if (-1 < *(char *)((int)puVar28 + uVar25)) {
              uVar25 = *puVar28 & 0x80808080;
              uVar25 = (uint)LZCOUNT((*puVar28 & 0x80) << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                                     (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar9 >> 0x18);
            if (((uVar25 - uVar22 ^ uVar18 - uVar22) & uVar13) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar28 + uVar18) = bVar2;
              puVar6 = (uint *)*param_1;
              *(byte *)((int)puVar6 + (uVar13 & uVar18 - 4) + 4) = bVar2;
              goto LAB_011a7484;
            }
            cVar1 = *(char *)((int)puVar28 + uVar25);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar28 + uVar25) = bVar2;
            puVar6 = (uint *)*param_1;
            *(byte *)((int)puVar6 + (uVar25 - 4 & uVar13) + 4) = bVar2;
            uVar25 = ~uVar25;
            if (cVar1 == -1) break;
            uVar9 = puVar23[uVar16];
            puVar23[uVar16] = puVar28[uVar25];
            puVar28[uVar25] = uVar9;
            puVar28 = (uint *)*param_1;
          }
          uVar9 = param_1[1];
          *(undefined1 *)((int)puVar6 + uVar18) = 0xff;
          *(undefined1 *)((int)puVar6 + (uVar9 & uVar18 - 4) + 4) = 0xff;
          puVar28[uVar25] = puVar23[uVar16];
        }
LAB_011a7484:
        bVar29 = uVar18 != uVar26;
        uVar18 = uVar18 + 1;
        puVar23 = puVar6;
      } while (bVar29);
      uVar18 = param_1[1];
      if (7 < uVar18) {
        uVar18 = (uVar18 + 1 & 0xfffffff8) - (uVar18 + 1 >> 3);
      }
    }
    uVar5 = 0x80000001;
    param_1[2] = uVar18 - param_1[3];
  }
  return uVar5;
}

