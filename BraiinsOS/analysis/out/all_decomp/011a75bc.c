// FUN_011a75bc @ 011a75bc size=1876 calls_out=4 calls_in=1
// strings: 

uint FUN_011a75bc(int *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  uint local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  uVar16 = param_1[3];
  uVar11 = uVar16 + 1;
  if (0xfffffffe < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar22 = param_1[1];
  uVar9 = uVar22 + 1;
  uVar5 = uVar22;
  if (7 < uVar22) {
    uVar5 = (uVar9 & 0xfffffff8) - (uVar9 >> 3);
  }
  if (uVar5 >> 1 < uVar11) {
    if (uVar11 < uVar5 + 1) {
      uVar11 = uVar5 + 1;
    }
    FUN_011a5370(&local_34,0xc,4,uVar11);
    local_38 = local_30;
    if (local_34 != (uint *)0x0) {
      if (uVar16 == 0) {
        uVar16 = 0;
      }
      else {
        puVar25 = (uint *)*param_1;
        iVar24 = 0;
        uVar5 = param_2[2];
        uVar27 = ~*puVar25 & 0x80808080;
        uVar10 = *param_2;
        uVar12 = param_2[1];
        uVar9 = param_2[3];
        uVar22 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                 uVar12 >> 0x18;
        puVar17 = puVar25;
        uVar11 = uVar16;
        do {
          if (uVar27 == 0) {
            do {
              puVar17 = puVar17 + 1;
              iVar24 = iVar24 + 4;
            } while ((*puVar17 & 0x80808080) == 0x80808080);
            uVar27 = *puVar17 & 0x80808080 ^ 0x80808080;
          }
          uVar6 = iVar24 + ((uint)LZCOUNT(uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 |
                                          (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18) >> 3);
          uVar14 = uVar5 ^ puVar25[uVar6 * -3 + -3];
          uVar18 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                   uVar9 >> 0x18;
          lVar3 = (ulonglong)uVar18 * 0xb36a80d2;
          uVar23 = (uint)lVar3;
          uVar18 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                   uVar14 >> 0x18) * -0x4c957f2e +
                   uVar18 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
          uVar18 = (uint)((ulonglong)uVar14 * 0x2df45158) ^ puVar25[uVar6 * -3 + -2] ^
                   (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8
                   | uVar18 >> 0x18);
          uVar14 = uVar9 * 0x2df45158 +
                   uVar14 * 0x2d7f954c + (int)((ulonglong)uVar14 * 0x2df45158 >> 0x20) ^
                   (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                   uVar23 >> 0x18);
          uVar23 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                   uVar14 >> 0x18;
          lVar3 = (ulonglong)uVar23 * 0xb36a80d2;
          uVar19 = (uint)lVar3;
          uVar15 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18) ^
                   uVar14 * 0x2df45158 +
                   uVar18 * 0x2d7f954c + (int)((ulonglong)uVar18 * 0x2df45158 >> 0x20);
          uVar20 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                   uVar15 >> 0x18;
          lVar4 = (ulonglong)~uVar10 * (ulonglong)uVar20;
          uVar26 = (uint)lVar4;
          uVar14 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
                   uVar18 >> 0x18) * -0x4c957f2e +
                   uVar23 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
          uVar19 = (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8
                   | uVar14 >> 0x18) ^ (uint)((ulonglong)uVar18 * 0x2df45158);
          uVar18 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18) * ~uVar10 + uVar20 * ~uVar12 + (int)((ulonglong)lVar4 >> 0x20);
          lVar3 = (ulonglong)uVar22 * (ulonglong)uVar19;
          uVar18 = (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8
                   | uVar18 >> 0x18) ^ (uint)lVar3;
          uVar23 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
                   uVar26 >> 0x18) ^
                   uVar15 * uVar22 +
                   uVar19 * (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                             (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) +
                   (int)((ulonglong)lVar3 >> 0x20);
          uVar14 = uVar23;
          if ((uVar19 & 0x20) != 0) {
            uVar14 = uVar18;
            uVar18 = uVar23;
          }
          uVar23 = uVar18 << (uVar19 & 0x1f) | (uVar14 >> 1) >> (~uVar19 & 0x1f);
          uVar18 = local_30 & uVar23;
          uVar14 = *(uint *)((int)local_34 + uVar18) & 0x80808080;
          if (uVar14 == 0) {
            iVar13 = 4;
            do {
              uVar18 = uVar18 + iVar13;
              iVar13 = iVar13 + 4;
              uVar18 = uVar18 & local_30;
              uVar14 = *(uint *)((int)local_34 + uVar18) & 0x80808080;
            } while (uVar14 == 0);
          }
          uVar18 = uVar18 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                           (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                   local_30;
          if (-1 < *(char *)((int)local_34 + uVar18)) {
            uVar18 = *local_34 & 0x80808080;
            uVar18 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                   (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3;
          }
          uVar27 = uVar27 - 1 & uVar27;
          bVar2 = (byte)(uVar23 >> 0x19);
          *(byte *)((int)local_34 + uVar18) = bVar2;
          uVar11 = uVar11 - 1;
          *(byte *)((int)local_34 + (uVar18 - 4 & local_30) + 4) = bVar2;
          puVar7 = puVar25 + ~uVar6 * 3;
          uVar6 = puVar7[1];
          uVar14 = puVar7[2];
          puVar21 = local_34 + ~uVar18 * 3;
          *puVar21 = *puVar7;
          puVar21[2] = uVar14;
          puVar21[1] = uVar6;
        } while (uVar11 != 0);
      }
      iVar24 = *param_1;
      iVar13 = param_1[1];
      *param_1 = (int)local_34;
      param_1[1] = local_30;
      param_1[2] = local_2c - uVar16;
      param_1[3] = uVar16;
      local_38 = 0x80000001;
      if ((iVar13 != 0) && (iVar8 = iVar13 * 0xc + 0xc, iVar13 + iVar8 != -5)) {
        thunk_FUN_016d3fb4(iVar24 - iVar8);
        return 0x80000001;
      }
    }
  }
  else {
    if (uVar9 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar9 >> 2;
      if ((uVar9 & 3) != 0) {
        uVar11 = (uVar9 >> 2) + 1;
      }
      puVar17 = (uint *)*param_1;
      iVar24 = 0;
      do {
        puVar17[-iVar24] = (~(puVar17[-iVar24] >> 7) & 0x1010101) + (puVar17[-iVar24] | 0x7f7f7f7f);
        iVar24 = iVar24 + -1;
      } while (-iVar24 != uVar11);
      if (uVar9 < 4) {
        FUN_016dd52c(puVar17 + 1,puVar17);
      }
      else {
        *(uint *)((int)puVar17 + uVar9) = *puVar17;
      }
      uVar16 = *param_2;
      uVar10 = param_2[1];
      uVar12 = param_2[2];
      uVar5 = param_2[3];
      uVar9 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
              uVar10 >> 0x18;
      uVar11 = 0;
      do {
        puVar25 = puVar17;
        if (*(char *)((int)puVar17 + uVar11) == -0x80) {
          puVar7 = puVar17 + ~uVar11 * 3;
          while( true ) {
            uVar18 = uVar12 ^ puVar17[uVar11 * -3 + -3];
            uVar27 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                     uVar5 >> 0x18;
            lVar3 = (ulonglong)uVar27 * 0xb36a80d2;
            uVar6 = (uint)lVar3;
            uVar27 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
                     uVar18 >> 0x18) * -0x4c957f2e +
                     uVar27 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar14 = (uint)((ulonglong)uVar18 * 0x2df45158) ^ puVar17[uVar11 * -3 + -2] ^
                     (uVar27 * 0x1000000 | (uVar27 >> 8 & 0xff) << 0x10 |
                      (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18);
            uVar18 = uVar5 * 0x2df45158 +
                     uVar18 * 0x2d7f954c + (int)((ulonglong)uVar18 * 0x2df45158 >> 0x20) ^
                     (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                     uVar6 >> 0x18);
            uVar27 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
                     uVar18 >> 0x18;
            lVar3 = (ulonglong)uVar27 * 0xb36a80d2;
            uVar6 = (uint)lVar3;
            uVar27 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                     uVar14 >> 0x18) * -0x4c957f2e +
                     uVar27 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar18 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                     uVar6 >> 0x18) ^
                     uVar18 * 0x2df45158 +
                     uVar14 * 0x2d7f954c + (int)((ulonglong)uVar14 * 0x2df45158 >> 0x20);
            uVar6 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
                    uVar18 >> 0x18;
            lVar3 = (ulonglong)~uVar16 * (ulonglong)uVar6;
            uVar19 = (uint)lVar3;
            uVar14 = (uVar27 * 0x1000000 | (uVar27 >> 8 & 0xff) << 0x10 |
                      (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18) ^
                     (uint)((ulonglong)uVar14 * 0x2df45158);
            uVar27 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                     uVar14 >> 0x18) * ~uVar16 + uVar6 * ~uVar10 + (int)((ulonglong)lVar3 >> 0x20);
            lVar3 = (ulonglong)uVar9 * (ulonglong)uVar14;
            uVar27 = (uVar27 * 0x1000000 | (uVar27 >> 8 & 0xff) << 0x10 |
                      (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18) ^ (uint)lVar3;
            uVar23 = param_1[1];
            uVar6 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                    uVar19 >> 0x18) ^
                    uVar18 * uVar9 +
                    uVar14 * (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                              (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) +
                    (int)((ulonglong)lVar3 >> 0x20);
            uVar18 = uVar6;
            if ((uVar14 & 0x20) != 0) {
              uVar18 = uVar27;
              uVar27 = uVar6;
            }
            uVar18 = uVar27 << (uVar14 & 0x1f) | (uVar18 >> 1) >> (~uVar14 & 0x1f);
            uVar6 = uVar23 & uVar18;
            uVar14 = *(uint *)((int)puVar17 + uVar6) & 0x80808080;
            uVar27 = uVar6;
            if (uVar14 == 0) {
              iVar24 = 4;
              do {
                uVar27 = uVar27 + iVar24 & uVar23;
                iVar24 = iVar24 + 4;
                uVar14 = *(uint *)((int)puVar17 + uVar27) & 0x80808080;
              } while (uVar14 == 0);
            }
            uVar27 = uVar27 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                             (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                     uVar23;
            if (-1 < *(char *)((int)puVar17 + uVar27)) {
              uVar27 = *puVar17 & 0x80808080;
              uVar27 = (uint)LZCOUNT(uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 |
                                     (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar18 >> 0x18);
            if (((uVar27 - uVar6 ^ uVar11 - uVar6) & uVar23) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar17 + uVar11) = bVar2;
              puVar25 = (uint *)*param_1;
              *(byte *)((int)puVar25 + (uVar23 & uVar11 - 4) + 4) = bVar2;
              goto LAB_011a7bc0;
            }
            cVar1 = *(char *)((int)puVar17 + uVar27);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar17 + uVar27) = bVar2;
            puVar25 = (uint *)*param_1;
            *(byte *)((int)puVar25 + (uVar27 - 4 & uVar23) + 4) = bVar2;
            puVar17 = puVar17 + ~uVar27 * 3;
            if (cVar1 == -1) break;
            uVar27 = *puVar7;
            *puVar7 = *puVar17;
            *puVar17 = uVar27;
            uVar27 = puVar17[1];
            puVar17[1] = puVar7[1];
            puVar7[1] = uVar27;
            uVar27 = puVar17[2];
            puVar17[2] = puVar7[2];
            puVar7[2] = uVar27;
            puVar17 = (uint *)*param_1;
          }
          uVar27 = param_1[1];
          *(undefined1 *)((int)puVar25 + uVar11) = 0xff;
          *(undefined1 *)((int)puVar25 + (uVar27 & uVar11 - 4) + 4) = 0xff;
          uVar27 = *puVar7;
          uVar18 = puVar7[1];
          puVar17[2] = puVar7[2];
          puVar17[1] = uVar18;
          *puVar17 = uVar27;
        }
LAB_011a7bc0:
        bVar28 = uVar11 != uVar22;
        uVar11 = uVar11 + 1;
        puVar17 = puVar25;
      } while (bVar28);
      uVar11 = param_1[1];
      if (7 < uVar11) {
        uVar11 = (uVar11 + 1 & 0xfffffff8) - (uVar11 + 1 >> 3);
      }
    }
    param_1[2] = uVar11 - param_1[3];
    local_38 = 0x80000001;
  }
  return local_38;
}

