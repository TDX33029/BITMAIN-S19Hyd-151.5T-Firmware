// FUN_011aabe4 @ 011aabe4 size=1964 calls_out=5 calls_in=2
// strings: 

uint FUN_011aabe4(int *param_1,uint param_2,uint *param_3)

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
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
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
  
  uVar19 = param_1[3];
  uVar17 = uVar19 + param_2;
  if (CARRY4(uVar19,param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar21 = param_1[1];
  uVar28 = uVar21 + 1;
  uVar5 = uVar21;
  if (7 < uVar21) {
    uVar5 = (uVar28 & 0xfffffff8) - (uVar28 >> 3);
  }
  if (uVar5 >> 1 < uVar17) {
    if (uVar17 < uVar5 + 1) {
      uVar17 = uVar5 + 1;
    }
    FUN_011a5370(&local_48,8,4,uVar17);
    uVar17 = local_44;
    puVar26 = local_48;
    uVar5 = local_44;
    if (local_48 != (uint *)0x0) {
      if (uVar19 == 0) {
        uVar19 = 0;
      }
      else {
        uVar12 = *param_3;
        uVar15 = param_3[1];
        puVar29 = (uint *)*param_1;
        uVar23 = ~*puVar29 & 0x80808080;
        uVar21 = param_3[2];
        uVar28 = param_3[3];
        puVar6 = (uint *)param_3[4];
        uVar7 = param_3[5];
        uVar8 = param_3[7];
        iVar20 = 0;
        uVar5 = uVar19;
        puVar11 = puVar29;
        do {
          if (uVar23 == 0) {
            do {
              puVar11 = puVar11 + 1;
              iVar20 = iVar20 + 4;
            } while ((*puVar11 & 0x80808080) == 0x80808080);
            uVar23 = *puVar11 & 0x80808080 ^ 0x80808080;
          }
          uVar9 = iVar20 + ((uint)LZCOUNT(uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                                          (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) >> 3);
          local_48 = puVar6;
          local_44 = uVar7;
          uStack_3c = uVar8;
          local_38 = uVar21;
          uStack_34 = uVar28;
          local_30 = uVar12;
          uStack_2c = uVar15;
          FUN_011df94c(&local_48,puVar29[uVar9 * -2 + -2],puVar29[uVar9 * -2 + -1]);
          uVar10 = local_38 ^ 0xff;
          uVar13 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                   (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar3 = (ulonglong)uVar13 * 0xb36a80d2;
          uVar22 = (uint)lVar3;
          uVar27 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                   uVar22 >> 0x18) ^
                   uStack_34 * 0x2df45158 +
                   uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20);
          uVar24 = uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
                   uVar27 >> 0x18;
          lVar4 = (ulonglong)~local_30 * (ulonglong)uVar24;
          uVar18 = (uint)lVar4;
          uVar25 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                   (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
          uVar13 = (uVar10 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8
                   | local_38 >> 0x18) * -0x4c957f2e +
                   uVar13 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
          uVar22 = (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8
                   | uVar13 >> 0x18) ^ (uint)((ulonglong)uVar10 * 0x2df45158);
          uVar10 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                   uVar22 >> 0x18) * ~local_30 +
                   uVar24 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
          lVar3 = (ulonglong)uVar25 * (ulonglong)uVar22;
          uVar10 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8
                   | uVar10 >> 0x18) ^ (uint)lVar3;
          uVar18 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
                   uVar18 >> 0x18) ^
                   uVar27 * uVar25 +
                   uVar22 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                             (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                   (int)((ulonglong)lVar3 >> 0x20);
          uVar13 = uVar18;
          if ((uVar22 & 0x20) != 0) {
            uVar13 = uVar10;
            uVar10 = uVar18;
          }
          uVar10 = uVar10 << (uVar22 & 0x1f) | (uVar13 >> 1) >> (~uVar22 & 0x1f);
          uVar13 = uVar17 & uVar10;
          uVar22 = *(uint *)((int)puVar26 + uVar13) & 0x80808080;
          if (uVar22 == 0) {
            iVar14 = 4;
            do {
              uVar13 = uVar13 + iVar14;
              iVar14 = iVar14 + 4;
              uVar13 = uVar13 & uVar17;
              uVar22 = *(uint *)((int)puVar26 + uVar13) & 0x80808080;
            } while (uVar22 == 0);
          }
          uVar13 = uVar13 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                           (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3) &
                   uVar17;
          if (-1 < *(char *)((int)puVar26 + uVar13)) {
            uVar13 = *puVar26 & 0x80808080;
            uVar13 = (uint)LZCOUNT((*puVar26 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                   (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
          }
          uVar23 = uVar23 - 1 & uVar23;
          bVar2 = (byte)(uVar10 >> 0x19);
          *(byte *)((int)puVar26 + uVar13) = bVar2;
          uVar5 = uVar5 - 1;
          *(byte *)((int)puVar26 + (uVar13 - 4 & uVar17) + 4) = bVar2;
          uVar10 = (puVar29 + ~uVar9 * 2)[1];
          puVar26[~uVar13 * 2] = puVar29[~uVar9 * 2];
          (puVar26 + ~uVar13 * 2)[1] = uVar10;
        } while (uVar5 != 0);
      }
      iVar20 = *param_1;
      iVar14 = param_1[1];
      param_1[1] = uVar17;
      uVar5 = 0x80000001;
      *param_1 = (int)puVar26;
      param_1[2] = local_40 - uVar19;
      param_1[3] = uVar19;
      if ((iVar14 != 0) && (iVar16 = iVar14 * 8 + 8, iVar14 + iVar16 != -5)) {
        thunk_FUN_016d3fb4(iVar20 - iVar16);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar28 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = uVar28 >> 2;
      puVar26 = (uint *)*param_1;
      if ((uVar28 & 3) != 0) {
        uVar17 = (uVar28 >> 2) + 1;
      }
      iVar20 = 0;
      do {
        puVar26[-iVar20] = (~(puVar26[-iVar20] >> 7) & 0x1010101) + (puVar26[-iVar20] | 0x7f7f7f7f);
        iVar20 = iVar20 + -1;
      } while (-iVar20 != uVar17);
      if (uVar28 < 4) {
        FUN_016dd52c(puVar26 + 1,puVar26,uVar28);
      }
      else {
        *(uint *)((int)puVar26 + uVar28) = *puVar26;
      }
      uVar19 = param_3[2];
      uVar5 = param_3[3];
      puVar11 = (uint *)param_3[4];
      uVar28 = param_3[5];
      uVar7 = param_3[7];
      uVar8 = *param_3;
      uVar12 = param_3[1];
      uVar17 = 0;
      do {
        if (*(char *)((int)puVar26 + uVar17) == -0x80) {
          puVar29 = puVar26 + ~uVar17 * 2;
          puVar6 = puVar26;
          while( true ) {
            local_48 = puVar11;
            local_44 = uVar28;
            uStack_3c = uVar7;
            local_38 = uVar19;
            uStack_34 = uVar5;
            local_30 = uVar8;
            uStack_2c = uVar12;
            FUN_011df94c(&local_48,puVar6[uVar17 * -2 + -2],puVar6[uVar17 * -2 + -1]);
            uVar15 = local_38 ^ 0xff;
            uVar23 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                     (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
            lVar3 = (ulonglong)uVar23 * 0xb36a80d2;
            uVar10 = (uint)lVar3;
            uVar9 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                    uVar10 >> 0x18) ^
                    uStack_34 * 0x2df45158 +
                    uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20);
            uVar10 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                     uVar9 >> 0x18;
            uVar22 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                     (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
            lVar4 = (ulonglong)~local_30 * (ulonglong)uVar10;
            uVar18 = (uint)lVar4;
            uVar23 = (uVar15 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                      (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * -0x4c957f2e +
                     uVar23 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar13 = (uVar23 * 0x1000000 | (uVar23 >> 8 & 0xff) << 0x10 |
                      (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) ^
                     (uint)((ulonglong)uVar15 * 0x2df45158);
            uVar15 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                     uVar13 >> 0x18) * ~local_30 +
                     uVar10 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
            lVar3 = (ulonglong)uVar22 * (ulonglong)uVar13;
            uVar15 = (uVar15 * 0x1000000 | (uVar15 >> 8 & 0xff) << 0x10 |
                      (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) ^ (uint)lVar3;
            uVar10 = param_1[1];
            uVar9 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
                    uVar18 >> 0x18) ^
                    uVar9 * uVar22 +
                    uVar13 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                              (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                    (int)((ulonglong)lVar3 >> 0x20);
            uVar23 = uVar9;
            if ((uVar13 & 0x20) != 0) {
              uVar23 = uVar15;
              uVar15 = uVar9;
            }
            uVar23 = uVar15 << (uVar13 & 0x1f) | (uVar23 >> 1) >> (~uVar13 & 0x1f);
            uVar13 = uVar10 & uVar23;
            uVar9 = *(uint *)((int)puVar6 + uVar13) & 0x80808080;
            uVar15 = uVar13;
            if (uVar9 == 0) {
              iVar20 = 4;
              do {
                uVar15 = uVar15 + iVar20 & uVar10;
                iVar20 = iVar20 + 4;
                uVar9 = *(uint *)((int)puVar6 + uVar15) & 0x80808080;
              } while (uVar9 == 0);
            }
            uVar15 = uVar15 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                             (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                     uVar10;
            if (-1 < *(char *)((int)puVar6 + uVar15)) {
              uVar15 = *puVar6 & 0x80808080;
              uVar15 = (uint)LZCOUNT((*puVar6 & 0x80) << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                     (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar23 >> 0x18);
            if (((uVar15 - uVar13 ^ uVar17 - uVar13) & uVar10) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar6 + uVar17) = bVar2;
              puVar26 = (uint *)*param_1;
              *(byte *)((int)puVar26 + (uVar10 & uVar17 - 4) + 4) = bVar2;
              goto LAB_011ab250;
            }
            cVar1 = *(char *)((int)puVar6 + uVar15);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar6 + uVar15) = bVar2;
            puVar26 = (uint *)*param_1;
            *(byte *)((int)puVar26 + (uVar15 - 4 & uVar10) + 4) = bVar2;
            puVar6 = puVar6 + ~uVar15 * 2;
            if (cVar1 == -1) break;
            uVar15 = *puVar6;
            *puVar6 = *puVar29;
            *puVar29 = uVar15;
            uVar15 = puVar29[1];
            puVar29[1] = puVar6[1];
            puVar6[1] = uVar15;
            puVar6 = (uint *)*param_1;
          }
          uVar15 = param_1[1];
          *(undefined1 *)((int)puVar26 + uVar17) = 0xff;
          *(undefined1 *)((int)puVar26 + (uVar15 & uVar17 - 4) + 4) = 0xff;
          uVar15 = *puVar29;
          puVar6[1] = puVar29[1];
          *puVar6 = uVar15;
        }
LAB_011ab250:
        bVar30 = uVar17 != uVar21;
        uVar17 = uVar17 + 1;
      } while (bVar30);
      uVar17 = param_1[1];
      if (7 < uVar17) {
        uVar17 = (uVar17 + 1 & 0xfffffff8) - (uVar17 + 1 >> 3);
      }
    }
    uVar5 = 0x80000001;
    param_1[2] = uVar17 - param_1[3];
  }
  return uVar5;
}

