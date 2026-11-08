// FUN_011a664c @ 011a664c size=2020 calls_out=5 calls_in=2
// strings: 

uint FUN_011a664c(int *param_1,uint param_2,uint *param_3)

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
  uint *puVar16;
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
  uint *puVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  bool bVar32;
  uint *local_48;
  uint local_44;
  int local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  uVar20 = param_1[3];
  uVar18 = uVar20 + param_2;
  if (CARRY4(uVar20,param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar22 = param_1[1];
  uVar30 = uVar22 + 1;
  uVar5 = uVar22;
  if (7 < uVar22) {
    uVar5 = (uVar30 & 0xfffffff8) - (uVar30 >> 3);
  }
  if (uVar5 >> 1 < uVar18) {
    if (uVar18 < uVar5 + 1) {
      uVar18 = uVar5 + 1;
    }
    FUN_011a5370(&local_48,0xc,4,uVar18);
    uVar18 = local_44;
    puVar28 = local_48;
    uVar5 = local_44;
    if (local_48 != (uint *)0x0) {
      if (uVar20 == 0) {
        uVar20 = 0;
      }
      else {
        uVar11 = *param_3;
        uVar15 = param_3[1];
        puVar31 = (uint *)*param_1;
        uVar23 = ~*puVar31 & 0x80808080;
        uVar22 = param_3[2];
        uVar30 = param_3[3];
        puVar6 = (uint *)param_3[4];
        uVar7 = param_3[5];
        uVar8 = param_3[7];
        iVar21 = 0;
        puVar10 = puVar31;
        uVar5 = uVar20;
        do {
          if (uVar23 == 0) {
            do {
              puVar10 = puVar10 + 1;
              iVar21 = iVar21 + 4;
            } while ((*puVar10 & 0x80808080) == 0x80808080);
            uVar23 = *puVar10 & 0x80808080 ^ 0x80808080;
          }
          uVar12 = iVar21 + ((uint)LZCOUNT(uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                                           (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) >> 3);
          local_48 = puVar6;
          local_44 = uVar7;
          uStack_3c = uVar8;
          local_38 = uVar22;
          uStack_34 = uVar30;
          local_30 = uVar11;
          uStack_2c = uVar15;
          FUN_011df94c(&local_48,puVar31[uVar12 * -3 + -2],puVar31[uVar12 * -3 + -1]);
          uVar9 = local_38 ^ 0xff;
          uVar13 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                   (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar3 = (ulonglong)uVar13 * 0xb36a80d2;
          uVar24 = (uint)lVar3;
          uVar19 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
                   uVar24 >> 0x18) ^
                   uStack_34 * 0x2df45158 +
                   uVar9 * 0x2d7f954c + (int)((ulonglong)uVar9 * 0x2df45158 >> 0x20);
          uVar25 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18;
          lVar4 = (ulonglong)~local_30 * (ulonglong)uVar25;
          uVar29 = (uint)lVar4;
          uVar13 = (uVar9 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8
                   | local_38 >> 0x18) * -0x4c957f2e +
                   uVar13 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
          uVar26 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                   (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
          uVar24 = (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8
                   | uVar13 >> 0x18) ^ (uint)((ulonglong)uVar9 * 0x2df45158);
          uVar9 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
                  uVar24 >> 0x18) * ~local_30 +
                  uVar25 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
          lVar3 = (ulonglong)uVar26 * (ulonglong)uVar24;
          uVar9 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                  uVar9 >> 0x18) ^ (uint)lVar3;
          uVar19 = (uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                   uVar29 >> 0x18) ^
                   uVar19 * uVar26 +
                   uVar24 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                             (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                   (int)((ulonglong)lVar3 >> 0x20);
          uVar13 = uVar19;
          if ((uVar24 & 0x20) != 0) {
            uVar13 = uVar9;
            uVar9 = uVar19;
          }
          uVar9 = uVar9 << (uVar24 & 0x1f) | (uVar13 >> 1) >> (~uVar24 & 0x1f);
          uVar13 = uVar18 & uVar9;
          uVar24 = *(uint *)((int)puVar28 + uVar13) & 0x80808080;
          if (uVar24 == 0) {
            iVar14 = 4;
            do {
              uVar13 = uVar13 + iVar14;
              iVar14 = iVar14 + 4;
              uVar13 = uVar13 & uVar18;
              uVar24 = *(uint *)((int)puVar28 + uVar13) & 0x80808080;
            } while (uVar24 == 0);
          }
          uVar13 = uVar13 + ((uint)LZCOUNT(uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                                           (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) >> 3) &
                   uVar18;
          if (-1 < *(char *)((int)puVar28 + uVar13)) {
            uVar13 = *puVar28 & 0x80808080;
            uVar13 = (uint)LZCOUNT((*puVar28 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                   (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
          }
          uVar23 = uVar23 - 1 & uVar23;
          bVar2 = (byte)(uVar9 >> 0x19);
          *(byte *)((int)puVar28 + uVar13) = bVar2;
          *(byte *)((int)puVar28 + (uVar13 - 4 & uVar18) + 4) = bVar2;
          uVar5 = uVar5 - 1;
          puVar16 = puVar31 + ~uVar12 * 3;
          uVar24 = puVar16[1];
          uVar9 = puVar16[2];
          puVar27 = puVar28 + ~uVar13 * 3;
          *puVar27 = *puVar16;
          puVar27[2] = uVar9;
          puVar27[1] = uVar24;
        } while (uVar5 != 0);
      }
      iVar21 = *param_1;
      iVar14 = param_1[1];
      param_1[1] = uVar18;
      uVar5 = 0x80000001;
      *param_1 = (int)puVar28;
      param_1[2] = local_40 - uVar20;
      param_1[3] = uVar20;
      if ((iVar14 != 0) && (iVar17 = iVar14 * 0xc + 0xc, iVar14 + iVar17 != -5)) {
        thunk_FUN_016d3fb4(iVar21 - iVar17);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar30 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = uVar30 >> 2;
      puVar28 = (uint *)*param_1;
      if ((uVar30 & 3) != 0) {
        uVar18 = (uVar30 >> 2) + 1;
      }
      iVar21 = 0;
      do {
        puVar28[-iVar21] = (~(puVar28[-iVar21] >> 7) & 0x1010101) + (puVar28[-iVar21] | 0x7f7f7f7f);
        iVar21 = iVar21 + -1;
      } while (-iVar21 != uVar18);
      if (uVar30 < 4) {
        FUN_016dd52c(puVar28 + 1,puVar28,uVar30);
      }
      else {
        *(uint *)((int)puVar28 + uVar30) = *puVar28;
      }
      uVar20 = param_3[2];
      uVar5 = param_3[3];
      puVar10 = (uint *)param_3[4];
      uVar30 = param_3[5];
      uVar7 = param_3[7];
      uVar8 = *param_3;
      uVar11 = param_3[1];
      uVar18 = 0;
      do {
        if (*(char *)((int)puVar28 + uVar18) == -0x80) {
          puVar31 = puVar28 + ~uVar18 * 3;
          puVar6 = puVar28;
          while( true ) {
            local_48 = puVar10;
            local_44 = uVar30;
            uStack_3c = uVar7;
            local_38 = uVar20;
            uStack_34 = uVar5;
            local_30 = uVar8;
            uStack_2c = uVar11;
            FUN_011df94c(&local_48,puVar6[uVar18 * -3 + -2],puVar6[uVar18 * -3 + -1]);
            uVar15 = local_38 ^ 0xff;
            uVar23 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                     (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
            lVar3 = (ulonglong)uVar23 * 0xb36a80d2;
            uVar9 = (uint)lVar3;
            uVar24 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                     uVar9 >> 0x18) ^
                     uStack_34 * 0x2df45158 +
                     uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20);
            uVar9 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
                    uVar24 >> 0x18;
            uVar12 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                     (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
            lVar4 = (ulonglong)~local_30 * (ulonglong)uVar9;
            uVar19 = (uint)lVar4;
            uVar23 = (uVar15 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                      (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * -0x4c957f2e +
                     uVar23 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar13 = (uVar23 * 0x1000000 | (uVar23 >> 8 & 0xff) << 0x10 |
                      (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) ^
                     (uint)((ulonglong)uVar15 * 0x2df45158);
            uVar15 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                     uVar13 >> 0x18) * ~local_30 +
                     uVar9 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
            lVar3 = (ulonglong)uVar12 * (ulonglong)uVar13;
            uVar15 = (uVar15 * 0x1000000 | (uVar15 >> 8 & 0xff) << 0x10 |
                      (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) ^ (uint)lVar3;
            uVar9 = param_1[1];
            uVar24 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                     uVar19 >> 0x18) ^
                     uVar24 * uVar12 +
                     uVar13 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                               (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                     (int)((ulonglong)lVar3 >> 0x20);
            uVar23 = uVar24;
            if ((uVar13 & 0x20) != 0) {
              uVar23 = uVar15;
              uVar15 = uVar24;
            }
            uVar23 = uVar15 << (uVar13 & 0x1f) | (uVar23 >> 1) >> (~uVar13 & 0x1f);
            uVar13 = uVar9 & uVar23;
            uVar24 = *(uint *)((int)puVar6 + uVar13) & 0x80808080;
            uVar15 = uVar13;
            if (uVar24 == 0) {
              iVar21 = 4;
              do {
                uVar15 = uVar15 + iVar21 & uVar9;
                iVar21 = iVar21 + 4;
                uVar24 = *(uint *)((int)puVar6 + uVar15) & 0x80808080;
              } while (uVar24 == 0);
            }
            uVar15 = uVar15 + ((uint)LZCOUNT(uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                                             (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) >> 3) &
                     uVar9;
            if (-1 < *(char *)((int)puVar6 + uVar15)) {
              uVar15 = *puVar6 & 0x80808080;
              uVar15 = (uint)LZCOUNT((*puVar6 & 0x80) << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                     (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar23 >> 0x18);
            if (((uVar15 - uVar13 ^ uVar18 - uVar13) & uVar9) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar6 + uVar18) = bVar2;
              puVar28 = (uint *)*param_1;
              *(byte *)((int)puVar28 + (uVar9 & uVar18 - 4) + 4) = bVar2;
              goto LAB_011a6ce0;
            }
            cVar1 = *(char *)((int)puVar6 + uVar15);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar6 + uVar15) = bVar2;
            puVar28 = (uint *)*param_1;
            *(byte *)((int)puVar28 + (uVar15 - 4 & uVar9) + 4) = bVar2;
            puVar6 = puVar6 + ~uVar15 * 3;
            if (cVar1 == -1) break;
            uVar15 = *puVar31;
            *puVar31 = *puVar6;
            *puVar6 = uVar15;
            uVar15 = puVar6[1];
            puVar6[1] = puVar31[1];
            puVar31[1] = uVar15;
            uVar15 = puVar31[2];
            puVar31[2] = puVar6[2];
            puVar6[2] = uVar15;
            puVar6 = (uint *)*param_1;
          }
          uVar15 = param_1[1];
          *(undefined1 *)((int)puVar28 + uVar18) = 0xff;
          *(undefined1 *)((int)puVar28 + (uVar15 & uVar18 - 4) + 4) = 0xff;
          uVar15 = *puVar31;
          uVar23 = puVar31[1];
          puVar6[2] = puVar31[2];
          puVar6[1] = uVar23;
          *puVar6 = uVar15;
        }
LAB_011a6ce0:
        bVar32 = uVar18 != uVar22;
        uVar18 = uVar18 + 1;
      } while (bVar32);
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

