// FUN_011a8424 @ 011a8424 size=1948 calls_out=5 calls_in=1
// strings: 

uint FUN_011a8424(int *param_1,uint *param_2)

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
  uint *puVar11;
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
  uint uVar23;
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
  
  uVar21 = param_1[3];
  uVar18 = uVar21 + 1;
  if (0xfffffffe < uVar21) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar23 = param_1[1];
  uVar15 = uVar23 + 1;
  uVar5 = uVar23;
  if (7 < uVar23) {
    uVar5 = (uVar15 & 0xfffffff8) - (uVar15 >> 3);
  }
  if (uVar5 >> 1 < uVar18) {
    if (uVar18 < uVar5 + 1) {
      uVar18 = uVar5 + 1;
    }
    FUN_011a5370(&local_48,8,4,uVar18);
    uVar18 = local_44;
    puVar28 = local_48;
    uVar5 = local_44;
    if (local_48 != (uint *)0x0) {
      if (uVar21 == 0) {
        uVar21 = 0;
      }
      else {
        puVar11 = (uint *)*param_1;
        iVar27 = 0;
        uVar16 = *param_2;
        uVar19 = param_2[1];
        uVar24 = ~*puVar11 & 0x80808080;
        uVar15 = param_2[2];
        uVar23 = param_2[3];
        puVar6 = (uint *)param_2[4];
        uVar7 = param_2[5];
        uVar8 = param_2[7];
        uVar5 = uVar21;
        puVar10 = puVar11;
        do {
          if (uVar24 == 0) {
            do {
              puVar10 = puVar10 + 1;
              iVar27 = iVar27 + 4;
            } while ((*puVar10 & 0x80808080) == 0x80808080);
            uVar24 = *puVar10 & 0x80808080 ^ 0x80808080;
          }
          uVar12 = iVar27 + ((uint)LZCOUNT(uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                                           (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) >> 3);
          local_48 = puVar6;
          local_44 = uVar7;
          uStack_3c = uVar8;
          local_38 = uVar15;
          uStack_34 = uVar23;
          local_30 = uVar16;
          uStack_2c = uVar19;
          FUN_011df94c(&local_48,*(undefined4 *)(puVar11[uVar12 * -2 + -2] + 0xc),
                       *(undefined4 *)(puVar11[uVar12 * -2 + -2] + 0x10));
          uVar9 = local_38 ^ 0xff;
          uVar13 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                   (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar3 = (ulonglong)uVar13 * 0xb36a80d2;
          uVar25 = (uint)lVar3;
          uVar26 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
                   uVar25 >> 0x18) ^
                   uStack_34 * 0x2df45158 +
                   uVar9 * 0x2d7f954c + (int)((ulonglong)uVar9 * 0x2df45158 >> 0x20);
          uVar22 = uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
                   uVar26 >> 0x18;
          lVar4 = (ulonglong)~local_30 * (ulonglong)uVar22;
          uVar20 = (uint)lVar4;
          uVar13 = (uVar9 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8
                   | local_38 >> 0x18) * -0x4c957f2e +
                   uVar13 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
          uVar25 = (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8
                   | uVar13 >> 0x18) ^ (uint)((ulonglong)uVar9 * 0x2df45158);
          uVar9 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
                  uVar25 >> 0x18) * ~local_30 +
                  uVar22 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
          uVar13 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                   (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
          lVar3 = (ulonglong)uVar13 * (ulonglong)uVar25;
          uVar9 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                  uVar9 >> 0x18) ^ (uint)lVar3;
          uVar20 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                   uVar20 >> 0x18) ^
                   uVar26 * uVar13 +
                   uVar25 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                             (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                   (int)((ulonglong)lVar3 >> 0x20);
          uVar13 = uVar20;
          if ((uVar25 & 0x20) != 0) {
            uVar13 = uVar9;
            uVar9 = uVar20;
          }
          uVar9 = uVar9 << (uVar25 & 0x1f) | (uVar13 >> 1) >> (~uVar25 & 0x1f);
          uVar13 = uVar18 & uVar9;
          uVar25 = *(uint *)((int)puVar28 + uVar13) & 0x80808080;
          if (uVar25 == 0) {
            iVar14 = 4;
            do {
              uVar13 = uVar13 + iVar14;
              iVar14 = iVar14 + 4;
              uVar13 = uVar13 & uVar18;
              uVar25 = *(uint *)((int)puVar28 + uVar13) & 0x80808080;
            } while (uVar25 == 0);
          }
          uVar13 = uVar13 + ((uint)LZCOUNT(uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                                           (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18) >> 3) &
                   uVar18;
          if (-1 < *(char *)((int)puVar28 + uVar13)) {
            uVar13 = *puVar28 & 0x80808080;
            uVar13 = (uint)LZCOUNT((*puVar28 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                   (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
          }
          uVar24 = uVar24 - 1 & uVar24;
          bVar2 = (byte)(uVar9 >> 0x19);
          *(byte *)((int)puVar28 + uVar13) = bVar2;
          uVar5 = uVar5 - 1;
          *(byte *)((int)puVar28 + (uVar13 - 4 & uVar18) + 4) = bVar2;
          uVar9 = (puVar11 + ~uVar12 * 2)[1];
          puVar28[~uVar13 * 2] = puVar11[~uVar12 * 2];
          (puVar28 + ~uVar13 * 2)[1] = uVar9;
        } while (uVar5 != 0);
      }
      iVar27 = *param_1;
      iVar14 = param_1[1];
      *param_1 = (int)puVar28;
      param_1[1] = uVar18;
      uVar5 = 0x80000001;
      param_1[2] = local_40 - uVar21;
      param_1[3] = uVar21;
      if ((iVar14 != 0) && (iVar17 = iVar14 * 8 + 8, iVar14 + iVar17 != -5)) {
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
      puVar28 = (uint *)*param_1;
      iVar27 = 0;
      do {
        puVar28[-iVar27] = (~(puVar28[-iVar27] >> 7) & 0x1010101) + (puVar28[-iVar27] | 0x7f7f7f7f);
        iVar27 = iVar27 + -1;
      } while (-iVar27 != uVar18);
      if (uVar15 < 4) {
        FUN_016dd52c(puVar28 + 1,puVar28);
      }
      else {
        *(uint *)((int)puVar28 + uVar15) = *puVar28;
      }
      uVar21 = param_2[2];
      uVar5 = param_2[3];
      puVar10 = (uint *)param_2[4];
      uVar15 = param_2[5];
      uVar7 = param_2[7];
      uVar8 = *param_2;
      uVar16 = param_2[1];
      uVar18 = 0;
      do {
        if (*(char *)((int)puVar28 + uVar18) == -0x80) {
          puVar11 = puVar28 + ~uVar18 * 2;
          puVar6 = puVar28;
          while( true ) {
            local_48 = puVar10;
            local_44 = uVar15;
            uStack_3c = uVar7;
            local_38 = uVar21;
            uStack_34 = uVar5;
            local_30 = uVar8;
            uStack_2c = uVar16;
            FUN_011df94c(&local_48,*(undefined4 *)(puVar6[uVar18 * -2 + -2] + 0xc),
                         *(undefined4 *)(puVar6[uVar18 * -2 + -2] + 0x10));
            uVar19 = local_38 ^ 0xff;
            uVar24 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                     (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
            lVar3 = (ulonglong)uVar24 * 0xb36a80d2;
            uVar9 = (uint)lVar3;
            uVar25 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                     uVar9 >> 0x18) ^
                     uStack_34 * 0x2df45158 +
                     uVar19 * 0x2d7f954c + (int)((ulonglong)uVar19 * 0x2df45158 >> 0x20);
            uVar9 = uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
                    uVar25 >> 0x18;
            uVar12 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                     (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
            lVar4 = (ulonglong)~local_30 * (ulonglong)uVar9;
            uVar20 = (uint)lVar4;
            uVar24 = (uVar19 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                      (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * -0x4c957f2e +
                     uVar24 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar13 = (uVar24 * 0x1000000 | (uVar24 >> 8 & 0xff) << 0x10 |
                      (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) ^
                     (uint)((ulonglong)uVar19 * 0x2df45158);
            uVar19 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                     uVar13 >> 0x18) * ~local_30 +
                     uVar9 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
            lVar3 = (ulonglong)uVar12 * (ulonglong)uVar13;
            uVar19 = (uVar19 * 0x1000000 | (uVar19 >> 8 & 0xff) << 0x10 |
                      (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) ^ (uint)lVar3;
            uVar9 = param_1[1];
            uVar25 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                     uVar20 >> 0x18) ^
                     uVar25 * uVar12 +
                     uVar13 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                               (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                     (int)((ulonglong)lVar3 >> 0x20);
            uVar24 = uVar25;
            if ((uVar13 & 0x20) != 0) {
              uVar24 = uVar19;
              uVar19 = uVar25;
            }
            uVar24 = uVar19 << (uVar13 & 0x1f) | (uVar24 >> 1) >> (~uVar13 & 0x1f);
            uVar13 = uVar9 & uVar24;
            uVar25 = *(uint *)((int)puVar6 + uVar13) & 0x80808080;
            uVar19 = uVar13;
            if (uVar25 == 0) {
              iVar27 = 4;
              do {
                uVar19 = uVar19 + iVar27 & uVar9;
                iVar27 = iVar27 + 4;
                uVar25 = *(uint *)((int)puVar6 + uVar19) & 0x80808080;
              } while (uVar25 == 0);
            }
            uVar19 = uVar19 + ((uint)LZCOUNT(uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                                             (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18) >> 3) &
                     uVar9;
            if (-1 < *(char *)((int)puVar6 + uVar19)) {
              uVar19 = *puVar6 & 0x80808080;
              uVar19 = (uint)LZCOUNT((*puVar6 & 0x80) << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                     (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar24 >> 0x18);
            if (((uVar19 - uVar13 ^ uVar18 - uVar13) & uVar9) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar6 + uVar18) = bVar2;
              puVar28 = (uint *)*param_1;
              *(byte *)((int)puVar28 + (uVar9 & uVar18 - 4) + 4) = bVar2;
              goto LAB_011a8a90;
            }
            cVar1 = *(char *)((int)puVar6 + uVar19);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar6 + uVar19) = bVar2;
            puVar28 = (uint *)*param_1;
            *(byte *)((int)puVar28 + (uVar19 - 4 & uVar9) + 4) = bVar2;
            puVar6 = puVar6 + ~uVar19 * 2;
            if (cVar1 == -1) break;
            uVar19 = *puVar6;
            *puVar6 = *puVar11;
            *puVar11 = uVar19;
            uVar19 = puVar11[1];
            puVar11[1] = puVar6[1];
            puVar6[1] = uVar19;
            puVar6 = (uint *)*param_1;
          }
          uVar19 = param_1[1];
          *(undefined1 *)((int)puVar28 + uVar18) = 0xff;
          *(undefined1 *)((int)puVar28 + (uVar19 & uVar18 - 4) + 4) = 0xff;
          uVar19 = *puVar11;
          puVar6[1] = puVar11[1];
          *puVar6 = uVar19;
        }
LAB_011a8a90:
        bVar29 = uVar18 != uVar23;
        uVar18 = uVar18 + 1;
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

