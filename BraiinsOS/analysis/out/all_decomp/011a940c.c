// FUN_011a940c @ 011a940c size=2008 calls_out=5 calls_in=1
// strings: 

uint FUN_011a940c(int *param_1,uint *param_2)

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
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint *puVar30;
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
  
  uVar21 = param_1[3];
  uVar19 = uVar21 + 1;
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
  if (uVar5 >> 1 < uVar19) {
    if (uVar19 < uVar5 + 1) {
      uVar19 = uVar5 + 1;
    }
    FUN_011a5370(&local_48,0x10,4,uVar19);
    uVar19 = local_44;
    puVar30 = local_48;
    uVar5 = local_44;
    if (local_48 != (uint *)0x0) {
      if (uVar21 == 0) {
        uVar21 = 0;
      }
      else {
        puVar31 = (uint *)*param_1;
        uVar12 = *param_2;
        uVar16 = param_2[1];
        uVar26 = ~*puVar31 & 0x80808080;
        uVar15 = param_2[2];
        uVar23 = param_2[3];
        puVar6 = (uint *)param_2[4];
        uVar7 = param_2[5];
        uVar8 = param_2[7];
        iVar22 = 0;
        puVar11 = puVar31;
        uVar5 = uVar21;
        do {
          if (uVar26 == 0) {
            do {
              puVar11 = puVar11 + 1;
              iVar22 = iVar22 + 4;
            } while ((*puVar11 & 0x80808080) == 0x80808080);
            uVar26 = *puVar11 & 0x80808080 ^ 0x80808080;
          }
          uVar9 = iVar22 + ((uint)LZCOUNT(uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 |
                                          (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18) >> 3);
          local_48 = puVar6;
          local_44 = uVar7;
          uStack_3c = uVar8;
          local_38 = uVar15;
          uStack_34 = uVar23;
          local_30 = uVar12;
          uStack_2c = uVar16;
          FUN_011df94c(&local_48,puVar31[uVar9 * -4 + -3],puVar31[uVar9 * -4 + -2]);
          uVar10 = local_38 ^ 0xff;
          uVar13 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                   (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar3 = (ulonglong)uVar13 * 0xb36a80d2;
          uVar24 = (uint)lVar3;
          uVar29 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
                   uVar24 >> 0x18) ^
                   uStack_34 * 0x2df45158 +
                   uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20);
          uVar27 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                   uVar29 >> 0x18;
          lVar4 = (ulonglong)~local_30 * (ulonglong)uVar27;
          uVar20 = (uint)lVar4;
          uVar28 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                   (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
          uVar13 = (uVar10 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8
                   | local_38 >> 0x18) * -0x4c957f2e +
                   uVar13 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
          uVar24 = (uVar13 * 0x1000000 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8
                   | uVar13 >> 0x18) ^ (uint)((ulonglong)uVar10 * 0x2df45158);
          uVar10 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
                   uVar24 >> 0x18) * ~local_30 +
                   uVar27 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
          lVar3 = (ulonglong)uVar28 * (ulonglong)uVar24;
          uVar10 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8
                   | uVar10 >> 0x18) ^ (uint)lVar3;
          uVar20 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                   uVar20 >> 0x18) ^
                   uVar29 * uVar28 +
                   uVar24 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                             (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                   (int)((ulonglong)lVar3 >> 0x20);
          uVar13 = uVar20;
          if ((uVar24 & 0x20) != 0) {
            uVar13 = uVar10;
            uVar10 = uVar20;
          }
          uVar10 = uVar10 << (uVar24 & 0x1f) | (uVar13 >> 1) >> (~uVar24 & 0x1f);
          uVar13 = uVar19 & uVar10;
          uVar24 = *(uint *)((int)puVar30 + uVar13) & 0x80808080;
          if (uVar24 == 0) {
            iVar14 = 4;
            do {
              uVar13 = uVar13 + iVar14;
              iVar14 = iVar14 + 4;
              uVar13 = uVar13 & uVar19;
              uVar24 = *(uint *)((int)puVar30 + uVar13) & 0x80808080;
            } while (uVar24 == 0);
          }
          uVar13 = uVar13 + ((uint)LZCOUNT(uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                                           (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) >> 3) &
                   uVar19;
          if (-1 < *(char *)((int)puVar30 + uVar13)) {
            uVar13 = *puVar30 & 0x80808080;
            uVar13 = (uint)LZCOUNT((*puVar30 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                   (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
          }
          uVar26 = uVar26 - 1 & uVar26;
          bVar2 = (byte)(uVar10 >> 0x19);
          *(byte *)((int)puVar30 + uVar13) = bVar2;
          *(byte *)((int)puVar30 + (uVar13 - 4 & uVar19) + 4) = bVar2;
          uVar5 = uVar5 - 1;
          puVar17 = puVar31 + ~uVar9 * 4;
          uVar24 = puVar17[1];
          uVar9 = puVar17[2];
          uVar10 = puVar17[3];
          puVar25 = puVar30 + ~uVar13 * 4;
          *puVar25 = *puVar17;
          puVar25[3] = uVar10;
          puVar25[2] = uVar9;
          puVar25[1] = uVar24;
        } while (uVar5 != 0);
      }
      iVar22 = *param_1;
      iVar14 = param_1[1];
      param_1[1] = uVar19;
      uVar5 = 0x80000001;
      *param_1 = (int)puVar30;
      param_1[2] = local_40 - uVar21;
      param_1[3] = uVar21;
      if ((iVar14 != 0) && (iVar18 = iVar14 * 0x10 + 0x10, iVar14 + iVar18 != -5)) {
        thunk_FUN_016d3fb4(iVar22 - iVar18);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar15 == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = uVar15 >> 2;
      if ((uVar15 & 3) != 0) {
        uVar19 = (uVar15 >> 2) + 1;
      }
      puVar30 = (uint *)*param_1;
      iVar22 = 0;
      do {
        puVar30[-iVar22] = (~(puVar30[-iVar22] >> 7) & 0x1010101) + (puVar30[-iVar22] | 0x7f7f7f7f);
        iVar22 = iVar22 + -1;
      } while (-iVar22 != uVar19);
      if (uVar15 < 4) {
        FUN_016dd52c(puVar30 + 1,puVar30);
      }
      else {
        *(uint *)((int)puVar30 + uVar15) = *puVar30;
      }
      uVar21 = param_2[2];
      uVar5 = param_2[3];
      puVar11 = (uint *)param_2[4];
      uVar15 = param_2[5];
      uVar7 = param_2[7];
      uVar8 = *param_2;
      uVar12 = param_2[1];
      uVar19 = 0;
      do {
        if (*(char *)((int)puVar30 + uVar19) == -0x80) {
          puVar31 = puVar30 + ~uVar19 * 4;
          puVar6 = puVar30;
          while( true ) {
            local_48 = puVar11;
            local_44 = uVar15;
            uStack_3c = uVar7;
            local_38 = uVar21;
            uStack_34 = uVar5;
            local_30 = uVar8;
            uStack_2c = uVar12;
            FUN_011df94c(&local_48,puVar6[uVar19 * -4 + -3],puVar6[uVar19 * -4 + -2]);
            uVar16 = local_38 ^ 0xff;
            uVar26 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                     (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
            lVar3 = (ulonglong)uVar26 * 0xb36a80d2;
            uVar10 = (uint)lVar3;
            uVar9 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                    uVar10 >> 0x18) ^
                    uStack_34 * 0x2df45158 +
                    uVar16 * 0x2d7f954c + (int)((ulonglong)uVar16 * 0x2df45158 >> 0x20);
            uVar10 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                     uVar9 >> 0x18;
            uVar24 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                     (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
            lVar4 = (ulonglong)~local_30 * (ulonglong)uVar10;
            uVar20 = (uint)lVar4;
            uVar26 = (uVar16 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                      (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * -0x4c957f2e +
                     uVar26 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar13 = (uVar26 * 0x1000000 | (uVar26 >> 8 & 0xff) << 0x10 |
                      (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18) ^
                     (uint)((ulonglong)uVar16 * 0x2df45158);
            uVar16 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                     uVar13 >> 0x18) * ~local_30 +
                     uVar10 * ~uStack_2c + (int)((ulonglong)lVar4 >> 0x20);
            lVar3 = (ulonglong)uVar24 * (ulonglong)uVar13;
            uVar16 = (uVar16 * 0x1000000 | (uVar16 >> 8 & 0xff) << 0x10 |
                      (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) ^ (uint)lVar3;
            uVar10 = param_1[1];
            uVar9 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                    uVar20 >> 0x18) ^
                    uVar9 * uVar24 +
                    uVar13 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                              (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                    (int)((ulonglong)lVar3 >> 0x20);
            uVar26 = uVar9;
            if ((uVar13 & 0x20) != 0) {
              uVar26 = uVar16;
              uVar16 = uVar9;
            }
            uVar26 = uVar16 << (uVar13 & 0x1f) | (uVar26 >> 1) >> (~uVar13 & 0x1f);
            uVar13 = uVar10 & uVar26;
            uVar9 = *(uint *)((int)puVar6 + uVar13) & 0x80808080;
            uVar16 = uVar13;
            if (uVar9 == 0) {
              iVar22 = 4;
              do {
                uVar16 = uVar16 + iVar22 & uVar10;
                iVar22 = iVar22 + 4;
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
            bVar2 = (byte)(uVar26 >> 0x18);
            if (((uVar16 - uVar13 ^ uVar19 - uVar13) & uVar10) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar6 + uVar19) = bVar2;
              puVar30 = (uint *)*param_1;
              *(byte *)((int)puVar30 + (uVar10 & uVar19 - 4) + 4) = bVar2;
              goto LAB_011a9aa0;
            }
            cVar1 = *(char *)((int)puVar6 + uVar16);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar6 + uVar16) = bVar2;
            puVar30 = (uint *)*param_1;
            *(byte *)((int)puVar30 + (uVar16 - 4 & uVar10) + 4) = bVar2;
            puVar6 = puVar6 + ~uVar16 * 4;
            if (cVar1 == -1) break;
            uVar16 = *puVar31;
            *puVar31 = *puVar6;
            *puVar6 = uVar16;
            uVar16 = puVar6[1];
            puVar6[1] = puVar31[1];
            puVar31[1] = uVar16;
            uVar16 = puVar31[2];
            puVar31[2] = puVar6[2];
            puVar6[2] = uVar16;
            uVar16 = puVar6[3];
            puVar6[3] = puVar31[3];
            puVar31[3] = uVar16;
            puVar6 = (uint *)*param_1;
          }
          uVar16 = param_1[1];
          *(undefined1 *)((int)puVar30 + uVar19) = 0xff;
          *(undefined1 *)((int)puVar30 + (uVar16 & uVar19 - 4) + 4) = 0xff;
          uVar16 = *puVar31;
          uVar26 = puVar31[1];
          uVar10 = puVar31[2];
          puVar6[3] = puVar31[3];
          puVar6[2] = uVar10;
          puVar6[1] = uVar26;
          *puVar6 = uVar16;
        }
LAB_011a9aa0:
        bVar32 = uVar19 != uVar23;
        uVar19 = uVar19 + 1;
      } while (bVar32);
      uVar19 = param_1[1];
      if (7 < uVar19) {
        uVar19 = (uVar19 + 1 & 0xfffffff8) - (uVar19 + 1 >> 3);
      }
    }
    uVar5 = 0x80000001;
    param_1[2] = uVar19 - param_1[3];
  }
  return uVar5;
}

