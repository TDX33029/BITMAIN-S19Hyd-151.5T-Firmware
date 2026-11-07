// FUN_0133fc00 @ 0133fc00 size=1976 calls_out=5 calls_in=1
// strings: 

uint FUN_0133fc00(int *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint *puVar26;
  uint uVar27;
  bool bVar28;
  uint *local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  
  uVar25 = param_1[3];
  uVar16 = uVar25 + 1;
  if (0xfffffffe < uVar25) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar22 = param_1[1];
  uVar12 = uVar22 + 1;
  uVar5 = uVar22;
  if (7 < uVar22) {
    uVar5 = (uVar12 & 0xfffffff8) - (uVar12 >> 3);
  }
  if (uVar5 >> 1 < uVar16) {
    if (uVar16 < uVar5 + 1) {
      uVar16 = uVar5 + 1;
    }
    FUN_013403c0(&local_48,0x10,uVar16);
    uVar16 = local_44;
    puVar26 = local_48;
    if (local_48 == (uint *)0x0) {
      return local_44;
    }
    if (uVar25 == 0) {
      uVar25 = 0;
    }
    else {
      puVar13 = (uint *)*param_1;
      uVar17 = *param_2;
      uVar23 = param_2[1];
      uVar27 = ~*puVar13 & 0x80808080;
      uVar12 = param_2[2];
      uVar22 = param_2[3];
      puVar8 = (uint *)param_2[4];
      uVar9 = param_2[5];
      uVar10 = param_2[7];
      iVar24 = 0;
      puVar7 = puVar13;
      uVar5 = uVar25;
      do {
        if (uVar27 == 0) {
          do {
            puVar7 = puVar7 + 1;
            iVar24 = iVar24 + 4;
          } while ((*puVar7 & 0x80808080) == 0x80808080);
          uVar27 = *puVar7 & 0x80808080 ^ 0x80808080;
        }
        uVar11 = iVar24 + ((uint)LZCOUNT(uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 |
                                         (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18) >> 3);
        uVar6 = uVar12 ^ puVar13[uVar11 * -4 + -1];
        uVar19 = uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                 uVar22 >> 0x18;
        lVar3 = (ulonglong)uVar19 * 0xb36a80d2;
        uVar18 = (uint)lVar3;
        uVar19 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                 uVar6 >> 0x18) * -0x4c957f2e +
                 uVar19 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
        uStack_34 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
                    uVar18 >> 0x18) ^
                    uVar22 * 0x2df45158 +
                    uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
        local_38 = (uVar19 * 0x1000000 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8
                   | uVar19 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
        local_48 = puVar8;
        local_44 = uVar9;
        local_3c = uVar10;
        local_30 = uVar17;
        local_2c = uVar23;
        FUN_01352290(&local_48,puVar13[uVar11 * -4 + -3],puVar13[uVar11 * -4 + -2]);
        uVar18 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8
                 | local_2c >> 0x18;
        lVar3 = (ulonglong)local_38 * (ulonglong)uVar18;
        uVar6 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
        lVar4 = (ulonglong)~local_30 * (ulonglong)uVar6;
        uVar19 = (uint)lVar4;
        uVar6 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8
                | local_38 >> 0x18) * ~local_30 +
                uVar6 * ~local_2c + (int)((ulonglong)lVar4 >> 0x20);
        uVar18 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8
                 | local_30 >> 0x18) * local_38 +
                 uVar18 * uStack_34 + (int)((ulonglong)lVar3 >> 0x20) ^
                 (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                 uVar19 >> 0x18);
        uVar6 = (uint)lVar3 ^
                (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                uVar6 >> 0x18);
        uVar19 = uVar18;
        if ((local_38 & 0x20) != 0) {
          uVar19 = uVar6;
          uVar6 = uVar18;
        }
        uVar18 = uVar6 << (local_38 & 0x1f) | (uVar19 >> 1) >> (~local_38 & 0x1f);
        uVar6 = uVar16 & uVar18;
        uVar19 = *(uint *)((int)puVar26 + uVar6) & 0x80808080;
        if (uVar19 == 0) {
          iVar21 = 4;
          do {
            uVar6 = uVar6 + iVar21;
            iVar21 = iVar21 + 4;
            uVar6 = uVar6 & uVar16;
            uVar19 = *(uint *)((int)puVar26 + uVar6) & 0x80808080;
          } while (uVar19 == 0);
        }
        uVar6 = uVar6 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                       (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) & uVar16
        ;
        if (-1 < *(char *)((int)puVar26 + uVar6)) {
          uVar6 = *puVar26 & 0x80808080;
          uVar6 = (uint)LZCOUNT((*puVar26 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
        }
        uVar27 = uVar27 - 1 & uVar27;
        bVar2 = (byte)(uVar18 >> 0x19);
        *(byte *)((int)puVar26 + uVar6) = bVar2;
        *(byte *)((int)puVar26 + (uVar6 - 4 & uVar16) + 4) = bVar2;
        uVar5 = uVar5 - 1;
        puVar14 = puVar13 + ~uVar11 * 4;
        uVar18 = puVar14[1];
        uVar11 = puVar14[2];
        uVar19 = puVar14[3];
        puVar20 = puVar26 + ~uVar6 * 4;
        *puVar20 = *puVar14;
        puVar20[3] = uVar19;
        puVar20[2] = uVar11;
        puVar20[1] = uVar18;
      } while (uVar5 != 0);
    }
    iVar24 = param_1[1];
    iVar21 = *param_1;
    param_1[1] = uVar16;
    param_1[2] = local_40 - uVar25;
    param_1[3] = uVar25;
    *param_1 = (int)puVar26;
    if (iVar24 == 0) {
      return 0x80000001;
    }
    iVar15 = iVar24 * 0x10 + 0x10;
    if (iVar24 + iVar15 == -5) {
      return 0x80000001;
    }
    thunk_FUN_016d3fb4(iVar21 - iVar15);
  }
  else {
    if (uVar12 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar12 >> 2;
      if ((uVar12 & 3) != 0) {
        uVar16 = (uVar12 >> 2) + 1;
      }
      puVar26 = (uint *)*param_1;
      iVar24 = 0;
      do {
        puVar26[-iVar24] = (~(puVar26[-iVar24] >> 7) & 0x1010101) + (puVar26[-iVar24] | 0x7f7f7f7f);
        iVar24 = iVar24 + -1;
      } while (-iVar24 != uVar16);
      if (uVar12 < 4) {
        FUN_016dd52c(puVar26 + 1,puVar26);
      }
      else {
        *(uint *)((int)puVar26 + uVar12) = *puVar26;
      }
      uVar25 = param_2[2];
      uVar5 = param_2[3];
      puVar7 = (uint *)param_2[4];
      uVar12 = param_2[5];
      uVar9 = param_2[7];
      uVar10 = *param_2;
      uVar17 = param_2[1];
      uVar16 = 0;
      do {
        if (*(char *)((int)puVar26 + uVar16) == -0x80) {
          puVar13 = puVar26 + ~uVar16 * 4;
          puVar8 = puVar26;
          while( true ) {
            uVar23 = uVar25 ^ puVar8[uVar16 * -4 + -1];
            uVar27 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                     uVar5 >> 0x18;
            lVar3 = (ulonglong)uVar27 * 0xb36a80d2;
            uVar6 = (uint)lVar3;
            uVar27 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                     uVar23 >> 0x18) * -0x4c957f2e +
                     uVar27 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uStack_34 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                        uVar6 >> 0x18) ^
                        uVar5 * 0x2df45158 +
                        uVar23 * 0x2d7f954c + (int)((ulonglong)uVar23 * 0x2df45158 >> 0x20);
            local_38 = (uVar27 * 0x1000000 | (uVar27 >> 8 & 0xff) << 0x10 |
                        (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18) ^
                       (uint)((ulonglong)uVar23 * 0x2df45158);
            local_48 = puVar7;
            local_44 = uVar12;
            local_3c = uVar9;
            local_30 = uVar10;
            local_2c = uVar17;
            FUN_01352290(&local_48,puVar8[uVar16 * -4 + -3],puVar8[uVar16 * -4 + -2]);
            uVar23 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                     (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
            uVar27 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 |
                     (local_2c >> 0x10 & 0xff) << 8 | local_2c >> 0x18;
            lVar3 = (ulonglong)~local_30 * (ulonglong)uVar23;
            uVar19 = (uint)lVar3;
            uVar23 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                      (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * ~local_30 +
                     uVar23 * ~local_2c + (int)((ulonglong)lVar3 >> 0x20);
            lVar3 = (ulonglong)local_38 * (ulonglong)uVar27;
            uVar23 = (uint)lVar3 ^
                     (uVar23 * 0x1000000 | (uVar23 >> 8 & 0xff) << 0x10 |
                      (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18);
            uVar6 = param_1[1];
            uVar19 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                      (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) * local_38 +
                     uVar27 * uStack_34 + (int)((ulonglong)lVar3 >> 0x20) ^
                     (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                     uVar19 >> 0x18);
            uVar27 = uVar19;
            if ((local_38 & 0x20) != 0) {
              uVar27 = uVar23;
              uVar23 = uVar19;
            }
            uVar27 = uVar23 << (local_38 & 0x1f) | (uVar27 >> 1) >> (~local_38 & 0x1f);
            uVar19 = uVar6 & uVar27;
            uVar11 = *(uint *)((int)puVar8 + uVar19) & 0x80808080;
            uVar23 = uVar19;
            if (uVar11 == 0) {
              iVar24 = 4;
              do {
                uVar23 = uVar23 + iVar24 & uVar6;
                iVar24 = iVar24 + 4;
                uVar11 = *(uint *)((int)puVar8 + uVar23) & 0x80808080;
              } while (uVar11 == 0);
            }
            uVar23 = uVar23 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                             (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                     uVar6;
            if (-1 < *(char *)((int)puVar8 + uVar23)) {
              uVar23 = *puVar8 & 0x80808080;
              uVar23 = (uint)LZCOUNT((*puVar8 & 0x80) << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                                     (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar27 >> 0x18);
            if (((uVar23 - uVar19 ^ uVar16 - uVar19) & uVar6) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar8 + uVar16) = bVar2;
              puVar26 = (uint *)*param_1;
              *(byte *)((int)puVar26 + (uVar6 & uVar16 - 4) + 4) = bVar2;
              goto LAB_0134027c;
            }
            cVar1 = *(char *)((int)puVar8 + uVar23);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar8 + uVar23) = bVar2;
            puVar26 = (uint *)*param_1;
            *(byte *)((int)puVar26 + (uVar23 - 4 & uVar6) + 4) = bVar2;
            puVar8 = puVar8 + ~uVar23 * 4;
            if (cVar1 == -1) break;
            uVar23 = *puVar13;
            *puVar13 = *puVar8;
            *puVar8 = uVar23;
            uVar23 = puVar8[1];
            puVar8[1] = puVar13[1];
            puVar13[1] = uVar23;
            uVar23 = puVar13[2];
            puVar13[2] = puVar8[2];
            puVar8[2] = uVar23;
            uVar23 = puVar8[3];
            puVar8[3] = puVar13[3];
            puVar13[3] = uVar23;
            puVar8 = (uint *)*param_1;
          }
          uVar23 = param_1[1];
          *(undefined1 *)((int)puVar26 + uVar16) = 0xff;
          *(undefined1 *)((int)puVar26 + (uVar23 & uVar16 - 4) + 4) = 0xff;
          uVar23 = *puVar13;
          uVar27 = puVar13[1];
          uVar6 = puVar13[2];
          puVar8[3] = puVar13[3];
          puVar8[2] = uVar6;
          puVar8[1] = uVar27;
          *puVar8 = uVar23;
        }
LAB_0134027c:
        bVar28 = uVar16 != uVar22;
        uVar16 = uVar16 + 1;
      } while (bVar28);
      uVar16 = param_1[1];
      if (7 < uVar16) {
        uVar16 = (uVar16 + 1 & 0xfffffff8) - (uVar16 + 1 >> 3);
      }
    }
    param_1[2] = uVar16 - param_1[3];
  }
  return 0x80000001;
}

