// FUN_011ab398 @ 011ab398 size=2036 calls_out=6 calls_in=1
// strings: 

uint FUN_011ab398(int *param_1,uint *param_2)

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
  uint uVar10;
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
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  uint *puVar29;
  bool bVar30;
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
  uVar22 = param_1[1];
  uVar15 = uVar22 + 1;
  uVar5 = uVar22;
  if (7 < uVar22) {
    uVar5 = (uVar15 & 0xfffffff8) - (uVar15 >> 3);
  }
  if (uVar5 >> 1 < uVar18) {
    if (uVar18 < uVar5 + 1) {
      uVar18 = uVar5 + 1;
    }
    FUN_011a5370(&local_48,0x20,4,uVar18);
    uVar18 = local_44;
    puVar28 = local_48;
    uVar5 = local_44;
    if (local_48 != (uint *)0x0) {
      if (uVar20 == 0) {
        uVar20 = 0;
      }
      else {
        puVar29 = (uint *)*param_1;
        uVar12 = *param_2;
        uVar16 = param_2[1];
        uVar24 = ~*puVar29 & 0x80808080;
        uVar15 = param_2[2];
        uVar22 = param_2[3];
        puVar6 = (uint *)param_2[4];
        uVar7 = param_2[5];
        uVar8 = param_2[7];
        iVar21 = 0;
        uVar5 = uVar20;
        puVar11 = puVar29;
        do {
          if (uVar24 == 0) {
            do {
              puVar11 = puVar11 + 1;
              iVar21 = iVar21 + 4;
            } while ((*puVar11 & 0x80808080) == 0x80808080);
            uVar24 = *puVar11 & 0x80808080 ^ 0x80808080;
          }
          uVar9 = iVar21 + ((uint)LZCOUNT(uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                                          (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) >> 3);
          local_48 = puVar6;
          local_44 = uVar7;
          uStack_3c = uVar8;
          local_38 = uVar15;
          uStack_34 = uVar22;
          local_30 = uVar12;
          uStack_2c = uVar16;
          FUN_011df94c(&local_48,puVar29[uVar9 * -8 + -7],puVar29[uVar9 * -8 + -6]);
          uVar10 = local_38 ^ 0xff;
          uVar13 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                   (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar3 = (ulonglong)uVar13 * 0xb36a80d2;
          uVar23 = (uint)lVar3;
          uVar27 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                   uVar23 >> 0x18) ^
                   uStack_34 * 0x2df45158 +
                   uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20);
          uVar25 = uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
                   uVar27 >> 0x18;
          lVar4 = (ulonglong)~local_30 * (ulonglong)uVar25;
          uVar19 = (uint)lVar4;
          uVar26 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                   (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
          uVar13 = (uVar10 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8
                   | local_38 >> 0x18) * -0x4c957f2e +
                   uVar13 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
          uVar23 = (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8
                   | uVar13 >> 0x18) ^ (uint)((ulonglong)uVar10 * 0x2df45158);
          uVar10 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                   uVar23 >> 0x18) * ~local_30 +
                   uVar25 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
          lVar3 = (ulonglong)uVar26 * (ulonglong)uVar23;
          uVar10 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8
                   | uVar10 >> 0x18) ^ (uint)lVar3;
          uVar19 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18) ^
                   uVar27 * uVar26 +
                   uVar23 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                             (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                   (int)((ulonglong)lVar3 >> 0x20);
          uVar13 = uVar19;
          if ((uVar23 & 0x20) != 0) {
            uVar13 = uVar10;
            uVar10 = uVar19;
          }
          uVar10 = uVar10 << (uVar23 & 0x1f) | (uVar13 >> 1) >> (~uVar23 & 0x1f);
          uVar13 = uVar18 & uVar10;
          uVar23 = *(uint *)((int)puVar28 + uVar13) & 0x80808080;
          if (uVar23 == 0) {
            iVar14 = 4;
            do {
              uVar13 = uVar13 + iVar14;
              iVar14 = iVar14 + 4;
              uVar13 = uVar13 & uVar18;
              uVar23 = *(uint *)((int)puVar28 + uVar13) & 0x80808080;
            } while (uVar23 == 0);
          }
          uVar13 = uVar13 + ((uint)LZCOUNT(uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                                           (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) >> 3) &
                   uVar18;
          if (-1 < *(char *)((int)puVar28 + uVar13)) {
            uVar13 = *puVar28 & 0x80808080;
            uVar13 = (uint)LZCOUNT((*puVar28 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                   (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
          }
          uVar24 = uVar24 - 1 & uVar24;
          bVar2 = (byte)(uVar10 >> 0x19);
          *(byte *)((int)puVar28 + uVar13) = bVar2;
          uVar5 = uVar5 - 1;
          *(byte *)((int)puVar28 + (uVar13 - 4 & uVar18) + 4) = bVar2;
          FUN_016dd1aa(puVar28 + ~uVar13 * 8,puVar29 + ~uVar9 * 8,0x20);
        } while (uVar5 != 0);
      }
      iVar21 = *param_1;
      iVar14 = param_1[1];
      *param_1 = (int)puVar28;
      param_1[1] = uVar18;
      uVar5 = 0x80000001;
      param_1[2] = local_40 - uVar20;
      param_1[3] = uVar20;
      if ((iVar14 != 0) && (iVar17 = iVar14 * 0x20 + 0x20, iVar14 + iVar17 != -5)) {
        thunk_FUN_016d3fb4(iVar21 - iVar17);
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
      iVar21 = 0;
      do {
        puVar28[-iVar21] = (~(puVar28[-iVar21] >> 7) & 0x1010101) + (puVar28[-iVar21] | 0x7f7f7f7f);
        iVar21 = iVar21 + -1;
      } while (-iVar21 != uVar18);
      if (uVar15 < 4) {
        FUN_016dd52c(puVar28 + 1,puVar28);
      }
      else {
        *(uint *)((int)puVar28 + uVar15) = *puVar28;
      }
      uVar20 = param_2[2];
      uVar5 = param_2[3];
      puVar11 = (uint *)param_2[4];
      uVar15 = param_2[5];
      uVar7 = param_2[7];
      uVar8 = *param_2;
      uVar12 = param_2[1];
      uVar18 = 0;
      do {
        if (*(char *)((int)puVar28 + uVar18) == -0x80) {
          puVar29 = puVar28 + ~uVar18 * 8;
          puVar6 = puVar28;
          while( true ) {
            local_48 = puVar11;
            local_44 = uVar15;
            uStack_3c = uVar7;
            local_38 = uVar20;
            uStack_34 = uVar5;
            local_30 = uVar8;
            uStack_2c = uVar12;
            FUN_011df94c(&local_48,puVar6[uVar18 * -8 + -7],puVar6[uVar18 * -8 + -6]);
            uVar16 = local_38 ^ 0xff;
            uVar24 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                     (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
            lVar3 = (ulonglong)uVar24 * 0xb36a80d2;
            uVar10 = (uint)lVar3;
            uVar9 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                    uVar10 >> 0x18) ^
                    uStack_34 * 0x2df45158 +
                    uVar16 * 0x2d7f954c + (int)((ulonglong)uVar16 * 0x2df45158 >> 0x20);
            uVar10 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                     uVar9 >> 0x18;
            uVar19 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                     (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
            lVar4 = (ulonglong)~local_30 * (ulonglong)uVar10;
            uVar23 = (uint)lVar4;
            uVar24 = (uVar16 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                      (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * -0x4c957f2e +
                     uVar24 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar13 = (uVar24 * 0x1000000 | (uVar24 >> 8 & 0xff) << 0x10 |
                      (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) ^
                     (uint)((ulonglong)uVar16 * 0x2df45158);
            uVar16 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                     uVar13 >> 0x18) * ~local_30 +
                     uVar10 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
            lVar3 = (ulonglong)uVar19 * (ulonglong)uVar13;
            uVar16 = (uVar16 * 0x1000000 | (uVar16 >> 8 & 0xff) << 0x10 |
                      (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) ^ (uint)lVar3;
            uVar10 = param_1[1];
            uVar9 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                    uVar23 >> 0x18) ^
                    uVar9 * uVar19 +
                    uVar13 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                              (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                    (int)((ulonglong)lVar3 >> 0x20);
            uVar24 = uVar9;
            if ((uVar13 & 0x20) != 0) {
              uVar24 = uVar16;
              uVar16 = uVar9;
            }
            uVar24 = uVar16 << (uVar13 & 0x1f) | (uVar24 >> 1) >> (~uVar13 & 0x1f);
            uVar13 = uVar10 & uVar24;
            uVar9 = *(uint *)((int)puVar6 + uVar13) & 0x80808080;
            uVar16 = uVar13;
            if (uVar9 == 0) {
              iVar21 = 4;
              do {
                uVar16 = uVar16 + iVar21 & uVar10;
                iVar21 = iVar21 + 4;
                uVar9 = *(uint *)((int)puVar6 + uVar16) & 0x80808080;
              } while (uVar9 == 0);
            }
            uVar16 = uVar16 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                             (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                     uVar10;
            if (-1 < *(char *)((int)puVar6 + uVar16)) {
              uVar16 = *puVar6 & 0x80808080;
              uVar16 = (uint)LZCOUNT((*puVar6 & 0x80) << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                     (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar24 >> 0x18);
            if (((uVar16 - uVar13 ^ uVar18 - uVar13) & uVar10) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar6 + uVar18) = bVar2;
              puVar28 = (uint *)*param_1;
              *(byte *)((int)puVar28 + (uVar10 & uVar18 - 4) + 4) = bVar2;
              goto LAB_011aba64;
            }
            cVar1 = *(char *)((int)puVar6 + uVar16);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar6 + uVar16) = bVar2;
            puVar28 = (uint *)*param_1;
            *(byte *)((int)puVar28 + (uVar16 - 4 & uVar10) + 4) = bVar2;
            puVar6 = puVar6 + ~uVar16 * 8;
            if (cVar1 == -1) break;
            uVar16 = *puVar6;
            *puVar6 = *puVar29;
            *puVar29 = uVar16;
            uVar16 = puVar29[1];
            puVar29[1] = puVar6[1];
            puVar6[1] = uVar16;
            uVar16 = puVar6[2];
            puVar6[2] = puVar29[2];
            puVar29[2] = uVar16;
            uVar16 = puVar29[3];
            puVar29[3] = puVar6[3];
            puVar6[3] = uVar16;
            uVar16 = puVar6[4];
            puVar6[4] = puVar29[4];
            puVar29[4] = uVar16;
            uVar16 = puVar29[5];
            puVar29[5] = puVar6[5];
            puVar6[5] = uVar16;
            uVar16 = puVar6[6];
            puVar6[6] = puVar29[6];
            puVar29[6] = uVar16;
            uVar16 = puVar29[7];
            puVar29[7] = puVar6[7];
            puVar6[7] = uVar16;
            puVar6 = (uint *)*param_1;
          }
          uVar16 = param_1[1];
          *(undefined1 *)((int)puVar28 + uVar18) = 0xff;
          *(undefined1 *)((int)puVar28 + (uVar16 & uVar18 - 4) + 4) = 0xff;
          FUN_016dd1aa(puVar6,puVar29,0x20);
        }
LAB_011aba64:
        bVar30 = uVar18 != uVar22;
        uVar18 = uVar18 + 1;
      } while (bVar30);
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

