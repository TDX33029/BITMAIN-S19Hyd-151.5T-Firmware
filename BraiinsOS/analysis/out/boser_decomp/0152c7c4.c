// FUN_0152c7c4 @ 0152c7c4 size=1984 calls_out=6 calls_in=1
// strings: Hash table capacity overflow

uint FUN_0152c7c4(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  int iVar24;
  int iVar25;
  bool bVar26;
  uint local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint *local_44;
  uint uStack_40;
  int local_3c;
  int local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar17 = param_1[3];
  uVar5 = iVar17 + 1;
  if (iVar17 == -1) {
LAB_0152cf58:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar18 = param_1[1];
  uVar11 = uVar18 + 1;
  uVar7 = uVar18;
  if (7 < uVar18) {
    uVar7 = (uVar11 & 0xfffffff8) - (uVar11 >> 3);
  }
  if (uVar7 >> 1 < uVar5) {
    if (uVar5 < uVar7 + 1) {
      uVar5 = uVar7 + 1;
    }
    if (uVar5 < 0xf) {
      iVar14 = (uVar5 & 8) + 8;
      if (uVar5 < 4) {
        iVar14 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar5) goto LAB_0152cf58;
      iVar14 = (int)((ulonglong)(uVar5 << 3) * 0x24924925 >> 0x20);
      iVar14 = (0xffffffffU >> LZCOUNT((iVar14 + (uVar5 * 8 - iVar14 >> 1) >> 2) - 1)) + 1;
    }
    FUN_019790d4(&local_34,0xc,4,iVar14);
    if (local_34 == (uint *)0x0) {
      return local_30;
    }
    FUN_01bed93e(local_34,0xff,local_30 + 5);
    local_48 = 4;
    local_44 = local_34;
    uStack_40 = local_30;
    local_3c = local_2c;
    local_4c = 0xc;
    local_38 = local_28;
    iVar14 = 0;
    local_50 = param_1 + 4;
    if (iVar17 != 0) {
      puVar23 = (uint *)*param_1;
      iVar24 = 0;
      uVar21 = ~*puVar23 & 0x80808080;
      uVar5 = *param_2;
      uVar7 = param_2[1];
      uVar11 = param_2[2];
      uVar18 = param_2[3];
      uVar13 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
               uVar7 >> 0x18;
      iVar14 = iVar17;
      puVar10 = puVar23;
      do {
        if (uVar21 == 0) {
          do {
            puVar10 = puVar10 + 1;
            iVar24 = iVar24 + 4;
          } while ((*puVar10 & 0x80808080) == 0x80808080);
          uVar21 = *puVar10 & 0x80808080 ^ 0x80808080;
        }
        uVar8 = iVar24 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                        (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3);
        uVar6 = uVar11 ^ puVar23[uVar8 * -3 + -3];
        uVar15 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
                 uVar18 >> 0x18;
        lVar3 = (ulonglong)uVar15 * 0xb36a80d2;
        uVar19 = (uint)lVar3;
        uVar15 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                 uVar6 >> 0x18) * -0x4c957f2e +
                 uVar15 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
        uVar9 = (uint)((ulonglong)uVar6 * 0x2df45158) ^ puVar23[uVar8 * -3 + -2] ^
                (uVar15 * 0x1000000 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                uVar15 >> 0x18);
        uVar6 = uVar18 * 0x2df45158 +
                uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20) ^
                (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                uVar19 >> 0x18);
        uVar15 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                 uVar6 >> 0x18;
        lVar3 = (ulonglong)uVar15 * 0xb36a80d2;
        uVar19 = (uint)lVar3;
        uVar19 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                 uVar19 >> 0x18) ^
                 uVar6 * 0x2df45158 +
                 uVar9 * 0x2d7f954c + (int)((ulonglong)uVar9 * 0x2df45158 >> 0x20);
        uVar20 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                 uVar19 >> 0x18;
        lVar4 = (ulonglong)~uVar5 * (ulonglong)uVar20;
        uVar16 = (uint)lVar4;
        uVar6 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                uVar9 >> 0x18) * -0x4c957f2e +
                uVar15 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
        uVar9 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                uVar6 >> 0x18) ^ (uint)((ulonglong)uVar9 * 0x2df45158);
        uVar6 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                uVar9 >> 0x18) * ~uVar5 + uVar20 * ~uVar7 + (int)((ulonglong)lVar4 >> 0x20);
        lVar3 = (ulonglong)uVar13 * (ulonglong)uVar9;
        uVar6 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                uVar6 >> 0x18) ^ (uint)lVar3;
        uVar19 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                 uVar16 >> 0x18) ^
                 uVar19 * uVar13 +
                 uVar9 * (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8
                         | uVar5 >> 0x18) + (int)((ulonglong)lVar3 >> 0x20);
        uVar15 = uVar19;
        if ((uVar9 & 0x20) != 0) {
          uVar15 = uVar6;
          uVar6 = uVar19;
        }
        uVar6 = uVar6 << (uVar9 & 0x1f) | (uVar15 >> 1) >> (~uVar9 & 0x1f);
        uVar15 = local_30 & uVar6;
        uVar9 = *(uint *)((int)local_34 + uVar15) & 0x80808080;
        if (uVar9 == 0) {
          iVar25 = 4;
          do {
            uVar15 = uVar15 + iVar25;
            iVar25 = iVar25 + 4;
            uVar15 = uVar15 & local_30;
            uVar9 = *(uint *)((int)local_34 + uVar15) & 0x80808080;
          } while (uVar9 == 0);
        }
        uVar15 = uVar15 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                         (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                 local_30;
        if (-1 < *(char *)((int)local_34 + uVar15)) {
          uVar15 = *local_34 & 0x80808080;
          uVar15 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                 (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
        }
        uVar21 = uVar21 - 1 & uVar21;
        bVar2 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)local_34 + uVar15) = bVar2;
        iVar14 = iVar14 + -1;
        *(byte *)((int)local_34 + (uVar15 - 4 & local_30) + 4) = bVar2;
        FUN_01bed4e2(local_34 + ~uVar15 * 3,puVar23 + ~uVar8 * 3,0xc);
      } while (iVar14 != 0);
      iVar14 = iVar17;
    }
    local_38 = iVar14;
    local_3c = local_2c - iVar14;
    iVar17 = 0;
    do {
      puVar10 = (uint *)param_1[iVar17];
      param_1[iVar17] = (&local_44)[iVar17];
      iVar14 = iVar17 + 1;
      (&local_44)[iVar17] = puVar10;
      iVar17 = iVar14;
    } while (iVar14 != 4);
    FUN_016660b8(&local_50);
  }
  else {
    if (uVar11 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar11 >> 2;
      if ((uVar11 & 3) != 0) {
        uVar5 = (uVar11 >> 2) + 1;
      }
      puVar10 = (uint *)*param_1;
      iVar17 = 0;
      do {
        puVar10[-iVar17] = (~(puVar10[-iVar17] >> 7) & 0x1010101) + (puVar10[-iVar17] | 0x7f7f7f7f);
        iVar17 = iVar17 + -1;
      } while (-iVar17 != uVar5);
      if (uVar11 < 4) {
        FUN_01bed864(puVar10 + 1,puVar10);
      }
      else {
        *(uint *)((int)puVar10 + uVar11) = *puVar10;
      }
      uVar7 = *param_2;
      uVar11 = param_2[1];
      uVar13 = param_2[2];
      iVar17 = 0;
      uVar21 = param_2[3];
      uVar6 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
              uVar11 >> 0x18;
      uVar5 = 0;
      local_54 = uVar18;
      do {
        puVar23 = puVar10;
        if (*(char *)((int)puVar10 + uVar5) == -0x80) {
          puVar22 = puVar10;
          while( true ) {
            uVar15 = uVar13 ^ puVar22[uVar5 * -3 + -3];
            uVar8 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                    uVar21 >> 0x18;
            lVar3 = (ulonglong)uVar8 * 0xb36a80d2;
            uVar9 = (uint)lVar3;
            uVar8 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                    uVar15 >> 0x18) * -0x4c957f2e +
                    uVar8 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar16 = (uint)((ulonglong)uVar15 * 0x2df45158) ^ puVar22[uVar5 * -3 + -2] ^
                     (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8
                     | uVar8 >> 0x18);
            uVar15 = uVar21 * 0x2df45158 +
                     uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20) ^
                     (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                     uVar9 >> 0x18);
            uVar9 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                    uVar15 >> 0x18;
            lVar3 = (ulonglong)uVar9 * 0xb36a80d2;
            uVar19 = (uint)lVar3;
            uVar8 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                    uVar16 >> 0x18) * -0x4c957f2e +
                    uVar9 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar9 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                    uVar19 >> 0x18) ^
                    uVar15 * 0x2df45158 +
                    uVar16 * 0x2d7f954c + (int)((ulonglong)uVar16 * 0x2df45158 >> 0x20);
            uVar15 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                     uVar9 >> 0x18;
            lVar3 = (ulonglong)~uVar7 * (ulonglong)uVar15;
            uVar20 = (uint)lVar3;
            uVar19 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8
                     | uVar8 >> 0x18) ^ (uint)((ulonglong)uVar16 * 0x2df45158);
            uVar15 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                     uVar19 >> 0x18) * ~uVar7 + uVar15 * ~uVar11 + (int)((ulonglong)lVar3 >> 0x20);
            lVar3 = (ulonglong)uVar6 * (ulonglong)uVar19;
            uVar15 = (uVar15 * 0x1000000 | (uVar15 >> 8 & 0xff) << 0x10 |
                      (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) ^ (uint)lVar3;
            uVar8 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                    uVar20 >> 0x18) ^
                    uVar9 * uVar6 +
                    uVar19 * (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                              (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) +
                    (int)((ulonglong)lVar3 >> 0x20);
            uVar9 = uVar8;
            if ((uVar19 & 0x20) != 0) {
              uVar9 = uVar15;
              uVar15 = uVar8;
            }
            uVar8 = uVar15 << (uVar19 & 0x1f) | (uVar9 >> 1) >> (~uVar19 & 0x1f);
            uVar9 = local_54 & uVar8;
            uVar19 = *(uint *)((int)puVar22 + uVar9) & 0x80808080;
            uVar15 = uVar9;
            if (uVar19 == 0) {
              iVar14 = 4;
              do {
                uVar15 = uVar15 + iVar14 & local_54;
                iVar14 = iVar14 + 4;
                uVar19 = *(uint *)((int)puVar22 + uVar15) & 0x80808080;
              } while (uVar19 == 0);
            }
            uVar15 = uVar15 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                             (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) &
                     local_54;
            if (-1 < *(char *)((int)puVar22 + uVar15)) {
              uVar15 = *puVar22 & 0x80808080;
              uVar15 = (uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                     (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar8 >> 0x18);
            if (((uVar15 - uVar9 ^ uVar5 - uVar9) & local_54) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar22 + uVar5) = bVar2;
              puVar23 = (uint *)*param_1;
              *(byte *)((int)puVar23 + (local_54 & uVar5 - 4) + 4) = bVar2;
              goto LAB_0152cb3c;
            }
            cVar1 = *(char *)((int)puVar22 + uVar15);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar22 + uVar15) = bVar2;
            puVar23 = (uint *)*param_1;
            *(byte *)((int)puVar23 + (uVar15 - 4 & local_54) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar14 = -0xc;
            do {
              uVar12 = *(undefined4 *)((int)puVar10 + iVar14 + iVar17);
              *(undefined4 *)((int)puVar10 + iVar14 + iVar17) =
                   *(undefined4 *)((int)puVar22 + iVar14 + uVar15 * -0xc);
              *(undefined4 *)((int)puVar22 + iVar14 + uVar15 * -0xc) = uVar12;
              iVar14 = iVar14 + 4;
            } while (iVar14 != 0);
            puVar22 = (uint *)*param_1;
            local_54 = param_1[1];
          }
          local_54 = param_1[1];
          *(undefined1 *)((int)puVar23 + uVar5) = 0xff;
          *(undefined1 *)((int)puVar23 + (local_54 & uVar5 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar22 + ~uVar15 * 3,puVar10 + ~uVar5 * 3,0xc);
        }
LAB_0152cb3c:
        iVar17 = iVar17 + -0xc;
        bVar26 = uVar5 != uVar18;
        uVar5 = uVar5 + 1;
        puVar10 = puVar23;
      } while (bVar26);
      uVar5 = param_1[1];
      if (7 < uVar5) {
        uVar5 = (uVar5 + 1 & 0xfffffff8) - (uVar5 + 1 >> 3);
      }
    }
    param_1[2] = uVar5 - param_1[3];
  }
  return 0x80000001;
}

