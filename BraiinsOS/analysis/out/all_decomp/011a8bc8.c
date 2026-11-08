// FUN_011a8bc8 @ 011a8bc8 size=2108 calls_out=6 calls_in=1
// strings: 

uint FUN_011a8bc8(int *param_1,uint param_2,uint *param_3)

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
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  uint *puVar28;
  uint uVar29;
  bool bVar30;
  uint *local_48;
  uint local_44;
  int local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  uVar21 = param_1[3];
  uVar18 = uVar21 + param_2;
  if (CARRY4(uVar21,param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar23 = param_1[1];
  uVar29 = uVar23 + 1;
  uVar5 = uVar23;
  if (7 < uVar23) {
    uVar5 = (uVar29 & 0xfffffff8) - (uVar29 >> 3);
  }
  if (uVar5 >> 1 < uVar18) {
    if (uVar18 < uVar5 + 1) {
      uVar18 = uVar5 + 1;
    }
    FUN_011a5370(&local_48,0x28,8,uVar18);
    uVar18 = local_44;
    puVar27 = local_48;
    uVar5 = local_44;
    if (local_48 != (uint *)0x0) {
      if (uVar21 == 0) {
        uVar21 = 0;
      }
      else {
        puVar28 = (uint *)*param_1;
        uVar11 = *param_3;
        uVar15 = param_3[1];
        iVar20 = 0;
        uVar16 = ~*puVar28 & 0x80808080;
        uVar23 = param_3[2];
        uVar29 = param_3[3];
        puVar6 = (uint *)param_3[4];
        uVar7 = param_3[5];
        uVar8 = param_3[7];
        puVar10 = puVar28;
        uVar5 = uVar21;
        do {
          if (uVar16 == 0) {
            do {
              puVar10 = puVar10 + 1;
              iVar20 = iVar20 + 4;
            } while ((*puVar10 & 0x80808080) == 0x80808080);
            uVar16 = *puVar10 & 0x80808080 ^ 0x80808080;
          }
          uVar12 = iVar20 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                           (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3);
          local_48 = puVar6;
          local_44 = uVar7;
          uStack_3c = uVar8;
          local_38 = uVar23;
          uStack_34 = uVar29;
          local_30 = uVar11;
          uStack_2c = uVar15;
          FUN_011df94c(&local_48,puVar28[uVar12 * -10 + -9],puVar28[uVar12 * -10 + -8]);
          uVar9 = local_38 ^ 0xff;
          uVar13 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                   (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar3 = (ulonglong)uVar13 * 0xb36a80d2;
          uVar22 = (uint)lVar3;
          uVar19 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                   uVar22 >> 0x18) ^
                   uStack_34 * 0x2df45158 +
                   uVar9 * 0x2d7f954c + (int)((ulonglong)uVar9 * 0x2df45158 >> 0x20);
          uVar24 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18;
          lVar4 = (ulonglong)~local_30 * (ulonglong)uVar24;
          uVar26 = (uint)lVar4;
          uVar13 = (uVar9 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8
                   | local_38 >> 0x18) * -0x4c957f2e +
                   uVar13 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
          uVar25 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                   (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
          uVar22 = (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8
                   | uVar13 >> 0x18) ^ (uint)((ulonglong)uVar9 * 0x2df45158);
          uVar9 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                  uVar22 >> 0x18) * ~local_30 +
                  uVar24 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
          lVar3 = (ulonglong)uVar25 * (ulonglong)uVar22;
          uVar9 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                  uVar9 >> 0x18) ^ (uint)lVar3;
          uVar19 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
                   uVar26 >> 0x18) ^
                   uVar19 * uVar25 +
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
          uVar22 = *(uint *)((int)puVar27 + uVar13) & 0x80808080;
          if (uVar22 == 0) {
            iVar14 = 4;
            do {
              uVar13 = uVar13 + iVar14;
              iVar14 = iVar14 + 4;
              uVar13 = uVar13 & uVar18;
              uVar22 = *(uint *)((int)puVar27 + uVar13) & 0x80808080;
            } while (uVar22 == 0);
          }
          uVar13 = uVar13 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                           (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3) &
                   uVar18;
          if (-1 < *(char *)((int)puVar27 + uVar13)) {
            uVar13 = *puVar27 & 0x80808080;
            uVar13 = (uint)LZCOUNT((*puVar27 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                   (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
          }
          uVar16 = uVar16 - 1 & uVar16;
          bVar2 = (byte)(uVar9 >> 0x19);
          *(byte *)((int)puVar27 + uVar13) = bVar2;
          uVar5 = uVar5 - 1;
          *(byte *)((int)puVar27 + (uVar13 - 4 & uVar18) + 4) = bVar2;
          FUN_016dd1aa(puVar27 + ~uVar13 * 10,puVar28 + ~uVar12 * 10,0x28);
        } while (uVar5 != 0);
      }
      iVar20 = *param_1;
      iVar14 = param_1[1];
      param_1[1] = uVar18;
      uVar5 = 0x80000001;
      *param_1 = (int)puVar27;
      param_1[2] = local_40 - uVar21;
      param_1[3] = uVar21;
      if ((iVar14 != 0) && (iVar17 = iVar14 * 0x28 + 0x28, iVar14 + iVar17 != -5)) {
        thunk_FUN_016d3fb4(iVar20 - iVar17);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar29 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = uVar29 >> 2;
      puVar27 = (uint *)*param_1;
      if ((uVar29 & 3) != 0) {
        uVar18 = (uVar29 >> 2) + 1;
      }
      iVar20 = 0;
      do {
        puVar27[-iVar20] = (~(puVar27[-iVar20] >> 7) & 0x1010101) + (puVar27[-iVar20] | 0x7f7f7f7f);
        iVar20 = iVar20 + -1;
      } while (-iVar20 != uVar18);
      if (uVar29 < 4) {
        FUN_016dd52c(puVar27 + 1,puVar27,uVar29);
      }
      else {
        *(uint *)((int)puVar27 + uVar29) = *puVar27;
      }
      uVar21 = param_3[2];
      uVar5 = param_3[3];
      puVar10 = (uint *)param_3[4];
      uVar29 = param_3[5];
      uVar7 = param_3[7];
      uVar8 = *param_3;
      uVar11 = param_3[1];
      uVar18 = 0;
      do {
        if (*(char *)((int)puVar27 + uVar18) == -0x80) {
          puVar28 = puVar27 + ~uVar18 * 10;
          puVar6 = puVar27;
          while( true ) {
            local_48 = puVar10;
            local_44 = uVar29;
            uStack_3c = uVar7;
            local_38 = uVar21;
            uStack_34 = uVar5;
            local_30 = uVar8;
            uStack_2c = uVar11;
            FUN_011df94c(&local_48,puVar6[uVar18 * -10 + -9],puVar6[uVar18 * -10 + -8]);
            uVar15 = local_38 ^ 0xff;
            uVar16 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                     (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
            lVar3 = (ulonglong)uVar16 * 0xb36a80d2;
            uVar9 = (uint)lVar3;
            uVar22 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                     uVar9 >> 0x18) ^
                     uStack_34 * 0x2df45158 +
                     uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20);
            uVar9 = uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                    uVar22 >> 0x18;
            uVar19 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                     (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
            lVar4 = (ulonglong)~local_30 * (ulonglong)uVar9;
            uVar12 = (uint)lVar4;
            uVar16 = (uVar15 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                      (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * -0x4c957f2e +
                     uVar16 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar13 = (uVar16 * 0x1000000 | (uVar16 >> 8 & 0xff) << 0x10 |
                      (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) ^
                     (uint)((ulonglong)uVar15 * 0x2df45158);
            uVar15 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                     uVar13 >> 0x18) * ~local_30 +
                     uVar9 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
            lVar3 = (ulonglong)uVar19 * (ulonglong)uVar13;
            uVar15 = (uVar15 * 0x1000000 | (uVar15 >> 8 & 0xff) << 0x10 |
                      (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) ^ (uint)lVar3;
            uVar9 = param_1[1];
            uVar22 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                     uVar12 >> 0x18) ^
                     uVar22 * uVar19 +
                     uVar13 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                               (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                     (int)((ulonglong)lVar3 >> 0x20);
            uVar16 = uVar22;
            if ((uVar13 & 0x20) != 0) {
              uVar16 = uVar15;
              uVar15 = uVar22;
            }
            uVar16 = uVar15 << (uVar13 & 0x1f) | (uVar16 >> 1) >> (~uVar13 & 0x1f);
            uVar13 = uVar9 & uVar16;
            uVar22 = *(uint *)((int)puVar6 + uVar13) & 0x80808080;
            uVar15 = uVar13;
            if (uVar22 == 0) {
              iVar20 = 4;
              do {
                uVar15 = uVar15 + iVar20 & uVar9;
                iVar20 = iVar20 + 4;
                uVar22 = *(uint *)((int)puVar6 + uVar15) & 0x80808080;
              } while (uVar22 == 0);
            }
            uVar15 = uVar15 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                             (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3) &
                     uVar9;
            if (-1 < *(char *)((int)puVar6 + uVar15)) {
              uVar15 = *puVar6 & 0x80808080;
              uVar15 = (uint)LZCOUNT((*puVar6 & 0x80) << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                     (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar16 >> 0x18);
            if (((uVar15 - uVar13 ^ uVar18 - uVar13) & uVar9) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar6 + uVar18) = bVar2;
              puVar27 = (uint *)*param_1;
              *(byte *)((int)puVar27 + (uVar9 & uVar18 - 4) + 4) = bVar2;
              goto LAB_011a92c8;
            }
            cVar1 = *(char *)((int)puVar6 + uVar15);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar6 + uVar15) = bVar2;
            puVar27 = (uint *)*param_1;
            *(byte *)((int)puVar27 + (uVar15 - 4 & uVar9) + 4) = bVar2;
            puVar6 = puVar6 + ~uVar15 * 10;
            if (cVar1 == -1) break;
            uVar15 = *puVar6;
            *puVar6 = *puVar28;
            *puVar28 = uVar15;
            uVar15 = puVar28[1];
            puVar28[1] = puVar6[1];
            puVar6[1] = uVar15;
            uVar15 = puVar6[2];
            puVar6[2] = puVar28[2];
            puVar28[2] = uVar15;
            uVar15 = puVar28[3];
            puVar28[3] = puVar6[3];
            puVar6[3] = uVar15;
            uVar15 = puVar6[4];
            puVar6[4] = puVar28[4];
            puVar28[4] = uVar15;
            uVar15 = puVar28[5];
            puVar28[5] = puVar6[5];
            puVar6[5] = uVar15;
            uVar15 = puVar6[6];
            puVar6[6] = puVar28[6];
            puVar28[6] = uVar15;
            uVar15 = puVar28[7];
            puVar28[7] = puVar6[7];
            puVar6[7] = uVar15;
            uVar15 = puVar6[8];
            puVar6[8] = puVar28[8];
            puVar28[8] = uVar15;
            uVar15 = puVar28[9];
            puVar28[9] = puVar6[9];
            puVar6[9] = uVar15;
            puVar6 = (uint *)*param_1;
          }
          uVar15 = param_1[1];
          *(undefined1 *)((int)puVar27 + uVar18) = 0xff;
          *(undefined1 *)((int)puVar27 + (uVar15 & uVar18 - 4) + 4) = 0xff;
          FUN_016dd1aa(puVar6,puVar28,0x28);
        }
LAB_011a92c8:
        bVar30 = uVar18 != uVar23;
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

