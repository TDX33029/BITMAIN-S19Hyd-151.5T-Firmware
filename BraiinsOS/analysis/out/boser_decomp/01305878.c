// FUN_01305878 @ 01305878 size=3976 calls_out=8 calls_in=5
// strings: 

void FUN_01305878(undefined1 *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  uint3 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  byte bVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  bool bVar24;
  bool bVar25;
  double dVar26;
  double dVar27;
  ulonglong uVar28;
  int local_668;
  uint local_658;
  uint local_654;
  uint local_650;
  uint local_648;
  undefined4 local_644;
  byte local_640 [768];
  byte local_340;
  uint local_338;
  uint local_334;
  uint local_330 [192];
  undefined1 local_30;
  
  if (param_3 == 0) {
    param_1[1] = 0;
    uVar7 = 1;
    goto LAB_01306718;
  }
  bVar1 = (byte)*param_2;
  if (bVar1 != 0x2d && bVar1 != 0x2b) {
LAB_013058b0:
    uVar28 = 0;
    puVar20 = param_2;
    uVar22 = param_3;
    uVar3 = 0;
    if (param_3 < 8) {
LAB_013059b4:
      uVar28 = uVar3;
      do {
        uVar9 = (byte)*puVar20 - 0x30;
        if (9 < (uVar9 & 0xff)) {
          if ((byte)*puVar20 != 0x2e) {
            iVar17 = 0;
            iVar11 = 0;
            iVar10 = 0;
            uVar9 = uVar22;
            goto LAB_01305bcc;
          }
          uVar14 = uVar22 - 1;
          if (uVar14 < 8) {
            puVar20 = (uint *)((int)puVar20 + 1);
            uVar9 = uVar14;
            goto LAB_01305b3c;
          }
          iVar10 = -1;
          goto LAB_01305a58;
        }
        puVar20 = (uint *)((int)puVar20 + 1);
        uVar22 = uVar22 - 1;
        uVar28 = (uVar28 & 0xffffffff) * 10 +
                 (CONCAT44((int)(uVar28 >> 0x20) * 10,uVar9) & 0xffffffff000000ff);
      } while (uVar22 != 0);
    }
    else {
      do {
        uVar9 = *puVar20;
        uVar14 = uVar9 + 0xcfcfcfd0;
        uVar19 = puVar20[1] + 0xcfcfcfcf + (uint)(0x3030302f < uVar9);
        if (((uVar9 + 0x46464646 | uVar14) & 0x80808080) != 0 ||
            ((puVar20[1] + 0x46464646 + (uint)(0xb9b9b9b9 < uVar9) | uVar19) & 0x80808080) != 0)
        goto LAB_013059b0;
        uVar9 = (uint)((ulonglong)uVar14 * 10);
        uVar15 = uVar14 >> 8 | uVar19 * 0x1000000;
        puVar20 = puVar20 + 2;
        uVar22 = uVar22 - 8;
        uVar14 = (int)((ulonglong)uVar14 * 10 >> 0x20) + uVar19 * 10 + (uVar19 >> 8) +
                 (uint)CARRY4(uVar9,uVar15);
        uVar9 = uVar9 + uVar15 & 0xff00ff;
        uVar28 = (uVar28 & 0xffffffff) * 100000000 +
                 CONCAT44((int)(uVar28 >> 0x20) * 100000000,
                          (short)(uVar9 >> 0x10) * 10000 + (uVar14 >> 0x10 & 0xff) +
                          (short)((ushort)uVar14 & 0xff) * 100 + (short)uVar9 * 1000000);
      } while (7 < uVar22);
      if (uVar22 != 0) {
LAB_013059b0:
        uVar3 = uVar28;
        goto LAB_013059b4;
      }
    }
    uVar22 = 0;
    bVar25 = true;
    uVar6 = 0;
    lVar4 = 0;
    uVar14 = param_3;
    goto LAB_01305c9c;
  }
  param_3 = param_3 - 1;
  if (param_3 != 0) {
    param_2 = (uint *)((int)param_2 + 1);
    goto LAB_013058b0;
  }
  goto LAB_01305f90;
  while( true ) {
    uVar22 = uVar15 - 1;
    bVar18 = *(byte *)((int)param_2 + uVar9 + uVar14 + 1);
    uVar14 = uVar19;
    if (9 < (byte)(bVar18 - 0x30)) break;
LAB_01306108:
    uVar15 = uVar22;
    uVar19 = uVar14 + 1;
    if (uVar14 >> 8 < 3) {
      *(byte *)((int)local_330 + uVar14) = bVar18 - 0x30;
    }
    local_338 = uVar19;
    if (~uVar9 + param_3 == uVar14) {
      puVar20 = (uint *)((int)param_2 + uVar14 + uVar9 + 1);
      uVar14 = 0;
      uVar22 = 0;
      goto LAB_013063d8;
    }
  }
  puVar20 = (uint *)((int)param_2 + uVar19 + uVar9);
  uVar14 = 0;
  if (bVar18 == 0x2e) {
    uVar15 = uVar15 - 2;
    puVar23 = (uint *)((int)param_2 + uVar19 + uVar9 + 1);
    uVar14 = uVar15;
    if (uVar19 == 0) {
LAB_013061a8:
      if (uVar14 == 0) {
        uVar14 = 0;
        uVar19 = 0;
        uVar22 = 0;
        puVar20 = puVar23;
      }
      else {
        puVar20 = (uint *)((int)puVar20 + uVar22);
        uVar22 = 0;
        do {
          if (*(byte *)((int)puVar23 + uVar22) != 0x30) {
            uVar15 = uVar14 - uVar22;
            puVar23 = (uint *)((int)puVar23 + uVar22);
            uVar19 = 0;
            goto LAB_01306268;
          }
          uVar22 = uVar22 + 1;
        } while (uVar14 != uVar22);
        uVar19 = 0;
        uVar22 = 0;
      }
    }
    else {
LAB_01306268:
      if (7 < uVar15) {
        do {
          uVar9 = uVar19 + 8;
          uVar22 = uVar15;
          if (0x2ff < uVar9) goto LAB_01306334;
          uVar21 = *puVar23;
          uVar16 = puVar23[1] + 0xcfcfcfcf + (uint)(0x3030302f < uVar21);
          if (((uVar21 + 0x46464646 | uVar21 + 0xcfcfcfd0) & 0x80808080) != 0 ||
              ((puVar23[1] + 0x46464646 + (uint)(0xb9b9b9b9 < uVar21) | uVar16) & 0x80808080) != 0)
          goto LAB_01306334;
          if (0x300 < uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(uVar19,0x300,0x300,&DAT_01ce46e0);
          }
          uVar15 = uVar15 - 8;
          puVar23 = puVar23 + 2;
          *(uint *)((int)local_330 + uVar19) = uVar21 + 0xcfcfcfd0;
          *(uint *)((int)local_330 + uVar19 + 4) = uVar16;
          uVar19 = uVar9;
        } while (7 < uVar15);
        local_338 = uVar9;
      }
      if (uVar15 == 0) {
        uVar22 = 0;
        puVar20 = puVar23;
      }
      else {
        uVar22 = uVar15;
LAB_01306334:
        bVar18 = (byte)*puVar23 - 0x30;
        if (bVar18 < 10) {
          iVar11 = 0;
          iVar10 = 0;
          do {
            iVar17 = iVar10;
            if (uVar19 + iVar11 >> 8 < 3) {
              *(byte *)((int)local_330 + (uVar19 - iVar17)) = bVar18;
            }
            if (uVar22 + iVar17 == 1) {
              uVar22 = 0;
              goto LAB_013063b8;
            }
            iVar11 = iVar11 + 1;
            bVar18 = *(byte *)((int)puVar23 + (1 - iVar17)) - 0x30;
            iVar10 = iVar17 + -1;
          } while (bVar18 < 10);
          uVar22 = uVar22 + iVar17 + -1;
LAB_013063b8:
          uVar19 = (uVar19 - iVar17) + 1;
          puVar23 = (uint *)((int)puVar23 + (1 - iVar17));
        }
        puVar20 = puVar23;
        local_338 = uVar19;
      }
    }
    uVar14 = uVar22 - uVar14;
    local_334 = uVar14;
  }
LAB_013063d8:
  if (uVar19 == 0) {
    uVar9 = 0;
  }
  else {
    if (param_3 < uVar22) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,param_3 - uVar22,param_3,&DAT_01ce46f0);
    }
    iVar10 = 0;
    if (param_3 != uVar22) {
      iVar11 = uVar22 - param_3;
      do {
        bVar18 = *(byte *)((int)param_2 + (-1 - iVar11));
        if (bVar18 != 0x2e) {
          if (bVar18 != 0x30) break;
          iVar10 = iVar10 + 1;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0);
    }
    uVar9 = uVar19 - iVar10;
    uVar14 = uVar14 + uVar19;
    local_338 = uVar9;
    local_334 = uVar14;
    if (0x300 < uVar9) {
      uVar9 = 0x300;
      local_30 = 1;
      local_338 = uVar9;
    }
  }
LAB_0130644c:
  if ((uVar22 != 0) && (pbVar13 = (byte *)((int)puVar20 + 1), (byte)((byte)*puVar20 | 0x20) == 0x65)
     ) {
    iVar10 = uVar22 - 1;
    if (iVar10 == 0) {
      iVar11 = 0;
    }
    else {
      bVar18 = *pbVar13;
      if (bVar18 == 0x2d || bVar18 == 0x2b) {
        iVar10 = uVar22 - 2;
        if (iVar10 != 0) {
          pbVar13 = (byte *)((int)puVar20 + 2);
          goto LAB_0130648c;
        }
        iVar11 = 0;
      }
      else {
LAB_0130648c:
        iVar11 = 0;
        iVar17 = 0;
        do {
          bVar2 = *pbVar13;
          if (9 < (byte)(bVar2 - 0x30)) break;
          pbVar13 = pbVar13 + 1;
          iVar12 = iVar17 * 10 + (uint)(byte)(bVar2 - 0x30);
          if (iVar17 < 0x10000) {
            iVar11 = iVar12;
            iVar17 = iVar12;
          }
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      if (bVar18 == 0x2d) {
        iVar11 = -iVar11;
      }
    }
    local_334 = uVar14 + iVar11;
  }
  if (uVar9 < 0x13) {
LAB_013064f4:
    FUN_01bed93e((int)local_330 + uVar9,0,0x13 - uVar9);
  }
  FUN_01bed4e2(&local_648,&local_338,0x30c);
  local_650 = 0;
  if (local_648 == 0) goto LAB_013066e8;
  local_658 = 0;
  local_654 = 0;
  if ((-0x145 < (int)local_644) && (local_650 = 0x7ff, (int)local_644 < 0x136)) {
    iVar10 = 0;
    if (0 < (int)local_644) {
      do {
        uVar22 = 0x3c;
        if (local_644 < 0x13) {
          uVar22 = (uint)(byte)(&DAT_00422aaa)[local_644];
        }
        FUN_013054c8(&local_648,uVar22);
        if ((int)local_644 < -0x7ff) {
          local_650 = 0;
          goto LAB_013066e8;
        }
        iVar10 = uVar22 + iVar10;
      } while (0 < (int)local_644);
    }
    do {
      if (local_644 == 0) {
        if (4 < local_640[0]) break;
        uVar22 = 1;
        if (local_640[0] < 2) {
          uVar22 = 2;
        }
      }
      else {
        uVar22 = 0x3c;
        if (-local_644 < 0x13) {
          uVar22 = (uint)(byte)(&DAT_00422aaa)[-local_644];
        }
      }
      FUN_01305198(&local_648,uVar22);
      if (0x7ff < (int)local_644) goto LAB_013066e8;
      iVar10 = iVar10 - uVar22;
    } while ((int)local_644 < 1);
    uVar22 = iVar10 - 1;
    if ((int)uVar22 < -0x3fe) {
      do {
        uVar9 = -uVar22 - 0x3fe;
        if (0x3b < uVar9) {
          uVar9 = 0x3c;
        }
        FUN_013054c8(&local_648,uVar9);
        uVar22 = uVar9 + uVar22;
      } while (uVar22 < 0xfffffc02);
    }
    if ((int)(uVar22 + 0x3ff) < 0x7ff) {
      FUN_01305198(&local_648,0x35);
      if ((local_648 != 0) && (-1 < (int)local_644)) {
        if (local_644 < 0x13) {
          uVar9 = 0;
          if (local_644 == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = 0;
            uVar19 = 0;
            do {
              uVar28 = (ulonglong)uVar9;
              uVar9 = (uint)(uVar28 * 10);
              uVar14 = (int)(uVar28 * 10 >> 0x20) + uVar14 * 10;
              if (uVar19 < local_648) {
                bVar25 = CARRY4(uVar9,(uint)local_640[uVar19]);
                uVar9 = uVar9 + local_640[uVar19];
                uVar14 = uVar14 + bVar25;
              }
              uVar19 = uVar19 + 1;
            } while (local_644 != uVar19);
          }
          if (local_644 < local_648) {
            if (local_644 + 1 == local_648 && local_640[local_644] == 5) {
              if ((local_340 & 1) == 0) {
                bVar18 = 0;
                if (local_644 != 0) {
                  bVar18 = local_640[local_644 - 1];
                }
                if (local_644 == 0 || (bVar18 & 1) == 0) goto LAB_01306774;
              }
            }
            else if (local_640[local_644] < 5) goto LAB_01306774;
            bVar25 = 0xfffffffe < uVar9;
            uVar9 = uVar9 + 1;
            uVar14 = uVar14 + bVar25;
          }
LAB_01306774:
          uVar28 = CONCAT44(uVar14,uVar9);
          if (0x1fffff < uVar14) goto LAB_0130677c;
        }
        else {
LAB_0130677c:
          FUN_013054c8(&local_648,1);
          uVar28 = FUN_01305790(&local_648);
          local_658 = 0;
          local_654 = 0;
          if (0x7fe < (int)(uVar22 + 0x400)) goto LAB_013066f4;
          uVar22 = uVar22 + 1;
        }
        local_658 = (uint)uVar28;
        iVar10 = 0x3ff;
        if (uVar28 < 0x10000000000000) {
          iVar10 = 0x3fe;
        }
        local_650 = iVar10 + uVar22;
        local_654 = (uint)(uVar28 >> 0x20) & 0xfffff;
        goto LAB_013066f4;
      }
      local_650 = uVar22 + 0x3fe;
    }
LAB_013066e8:
    local_658 = 0;
    local_654 = 0;
  }
LAB_013066f4:
  local_654 = local_654 | local_650 << 0x14;
  dVar26 = (double)CONCAT44(local_654,local_658);
  dVar27 = -(double)CONCAT44(local_654,local_658);
LAB_01306708:
  uVar7 = 0;
  if (bVar1 == 0x2d) {
    dVar26 = dVar27;
  }
  *(double *)(param_1 + 8) = dVar26;
  goto LAB_01306718;
  while( true ) {
    uVar9 = (uint)((ulonglong)uVar16 * 10);
    uVar21 = uVar16 >> 8 | uVar15 * 0x1000000;
    iVar10 = iVar10 + -8;
    uVar19 = (int)((ulonglong)uVar16 * 10 >> 0x20) + uVar15 * 10 + (uVar15 >> 8) +
             (uint)CARRY4(uVar9,uVar21);
    uVar9 = uVar9 + uVar21 & 0xff00ff;
    uVar28 = (uVar28 & 0xffffffff) * 100000000 +
             CONCAT44((int)(uVar28 >> 0x20) * 100000000,
                      (short)(uVar9 >> 0x10) * 10000 + (uVar19 >> 0x10 & 0xff) +
                      (short)((ushort)uVar19 & 0xff) * 100 + (short)uVar9 * 1000000);
    if (uVar22 + iVar10 < 8) break;
LAB_01305a58:
    uVar19 = *(uint *)((int)puVar20 - iVar10);
    uVar9 = ((uint *)((int)puVar20 - iVar10))[1];
    uVar16 = uVar19 + 0xcfcfcfd0;
    uVar15 = uVar9 + 0xcfcfcfcf + (uint)(0x3030302f < uVar19);
    if (((uVar19 + 0x46464646 | uVar16) & 0x80808080) != 0 ||
        ((uVar9 + 0x46464646 + (uint)(0xb9b9b9b9 < uVar19) | uVar15) & 0x80808080) != 0) {
      uVar9 = uVar22 + iVar10;
      puVar20 = (uint *)((int)puVar20 - iVar10);
      goto LAB_01305b78;
    }
  }
  puVar20 = (uint *)((int)puVar20 - iVar10);
  uVar9 = uVar22 + iVar10;
LAB_01305b3c:
  if (uVar9 == 0) {
    uVar9 = 0;
  }
  else {
LAB_01305b78:
    puVar23 = (uint *)((int)puVar20 + uVar9);
    do {
      uVar19 = (byte)*puVar20 - 0x30;
      if (9 < (uVar19 & 0xff)) goto LAB_01305bc0;
      puVar20 = (uint *)((int)puVar20 + 1);
      uVar9 = uVar9 - 1;
      uVar28 = (uVar28 & 0xffffffff) * 10 +
               (CONCAT44((int)(uVar28 >> 0x20) * 10,uVar19) & 0xffffffff000000ff);
    } while (uVar9 != 0);
    uVar9 = 0;
    puVar20 = puVar23;
  }
LAB_01305bc0:
  iVar17 = uVar14 - uVar9;
  iVar11 = -iVar17;
  iVar10 = iVar11 >> 0x1f;
LAB_01305bcc:
  lVar4 = CONCAT44(iVar10,iVar11);
  uVar14 = iVar17 + (param_3 - uVar22);
  if (uVar14 == 0) goto LAB_01305eec;
  if (uVar9 == 0) {
    bVar25 = true;
LAB_01305c94:
    uVar6 = 0;
LAB_01305c9c:
    bVar24 = false;
    if (0x13 < (int)uVar14) {
      iVar10 = uVar14 - 0x13;
      uVar9 = param_3;
      puVar20 = param_2;
      do {
        bVar18 = (byte)*puVar20;
        if (bVar18 != 0x2e && bVar18 != 0x30) break;
        bVar18 = UnsignedSaturate(bVar18 - 0x2f,0x10);
        UnsignedSaturate(0,0x10);
        UnsignedSaturate(0,0x10);
        UnsignedSaturate(0,0x10);
        puVar20 = (uint *)((int)puVar20 + 1);
        uVar9 = uVar9 - 1;
        iVar10 = iVar10 - (uint)bVar18;
      } while (uVar9 != 0);
      if (0 < iVar10) {
        uVar28 = 0;
        iVar10 = -param_3;
        puVar20 = param_2;
        do {
          iVar11 = iVar10;
          uVar9 = (byte)*puVar20 - 0x30;
          iVar10 = iVar11;
          if (9 < (uVar9 & 0xff)) goto joined_r0x01305d88;
          puVar20 = (uint *)((int)puVar20 + 1);
          iVar10 = iVar11 + 1;
          uVar28 = (uVar28 & 0xffffffff) * 10 +
                   (CONCAT44((int)(uVar28 >> 0x20) * 10,uVar9) & 0xffffffff000000ff);
          uVar9 = (uint)(uVar28 >> 0x20);
        } while ((uVar9 < 0xde0b6b3 || 0xde0b6b3 - uVar9 < (uint)((uint)uVar28 < 0xa7640000)) &&
                (iVar11 != -1));
        if (uVar9 < 0xde0b6b3 || 0xde0b6b3 - uVar9 < (uint)((uint)uVar28 < 0xa7640000)) {
          if (iVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(1,0,0,&DAT_01ce4720);
          }
joined_r0x01305d88:
          iVar10 = -1 - iVar10;
          if (iVar10 == 0) {
            iVar17 = 0;
          }
          else {
            iVar11 = iVar10;
            do {
              puVar20 = (uint *)((int)puVar20 + 1);
              if (9 < (*(byte *)puVar20 - 0x30 & 0xff)) {
                iVar17 = iVar11 - iVar10;
                goto LAB_01305e0c;
              }
              iVar17 = iVar11 + -1;
              uVar28 = (uVar28 & 0xffffffff) * 10 +
                       (CONCAT44((int)(uVar28 >> 0x20) * 10,*(byte *)puVar20 - 0x30) &
                       0xffffffff000000ff);
              uVar22 = (uint)(uVar28 >> 0x20);
            } while ((uVar22 < 0xde0b6b3 || 0xde0b6b3 - uVar22 < (uint)((uint)uVar28 < 0xa7640000))
                    && (bVar24 = iVar11 != 1, iVar11 = iVar17, bVar24));
            iVar17 = iVar17 - iVar10;
          }
        }
        else {
          iVar17 = -(uVar22 + iVar10);
        }
LAB_01305e0c:
        bVar24 = true;
        lVar4 = uVar6 + (longlong)iVar17;
      }
    }
    local_668 = (int)((ulonglong)lVar4 >> 0x20);
    uVar9 = (uint)lVar4;
    uVar22 = (uint)(uVar28 >> 0x20);
    if (bVar25) {
      bVar25 = (uint)((int)uVar28 == 0) <= 0x200000 - uVar22;
      uVar14 = (uint)(0x1fffff < uVar22 && bVar25);
      if (((uint)(0xffffffc3 < uVar9 - 0x26) <= (local_668 - (uint)(uVar9 < 0x26)) + 1 ||
          0x1fffff < uVar22 && bVar25) || bVar24) {
LAB_01305e74:
        FUN_01306834(&local_658,uVar14,uVar9,local_668,uVar28);
        if ((bool)(bVar24 & local_650 < 0x80000000)) {
          FUN_01306834(&local_338,(int)(uVar28 + 1 >> 0x20),uVar9,local_668,uVar28 + 1);
          uVar9 = local_658 ^ local_338 | local_654 ^ local_334;
          uVar22 = uVar9;
          if (uVar9 == 0) {
            uVar22 = local_330[0];
          }
          local_658 = local_338;
          local_654 = local_334;
          if (uVar9 != 0 || local_650 != uVar22) goto LAB_01306000;
        }
        else {
          if ((int)local_650 < 0) {
LAB_01306000:
            uVar9 = 0;
            FUN_01bed93e(&local_338,0,0x309);
            uVar22 = param_3;
            do {
              puVar20 = (uint *)((int)param_2 + uVar9);
              bVar18 = (byte)*puVar20;
              if (bVar18 != 0x30) {
                if ((byte)(bVar18 - 0x30) < 10) {
                  uVar14 = 0;
                  goto LAB_01306108;
                }
                uVar9 = 0;
                if (bVar18 != 0x2e) {
                  uVar14 = 0;
                  goto LAB_0130644c;
                }
                puVar23 = (uint *)((int)puVar20 + 1);
                uVar14 = uVar22 - 1;
                goto LAB_013061a8;
              }
              uVar9 = uVar9 + 1;
              uVar22 = uVar22 - 1;
            } while (param_3 != uVar9);
            uVar9 = 0;
            goto LAB_013064f4;
          }
        }
        goto LAB_013066f4;
      }
      if ((int)-(local_668 + (uint)(0x16 < uVar9)) < 0 ==
          (SBORROW4(0,local_668) != SBORROW4(-local_668,(uint)(0x16 < uVar9)))) {
        dVar26 = (double)FUN_01bf0e80((int)uVar28,uVar22);
        if (lVar4 < 0) {
          dVar26 = dVar26 / *(double *)(&DAT_0042c9a0 + uVar9 * -8);
        }
        else {
          dVar26 = *(double *)(&DAT_0042c9a0 + uVar9 * 8) * dVar26;
        }
      }
      else {
        lVar4 = (uVar28 & 0xffffffff) * (ulonglong)*(uint *)(&DAT_004252c4 + uVar9 * 8);
        lVar5 = (ulonglong)*(uint *)(&DAT_004252c0 + uVar9 * 8) * (uVar28 & 0xffffffff);
        iVar10 = (int)lVar5;
        uVar15 = (uint)((ulonglong)lVar5 >> 0x20);
        lVar5 = (ulonglong)*(uint *)(&DAT_004252c0 + uVar9 * 8) * (ulonglong)uVar22;
        uVar14 = (int)lVar5 + (int)lVar4;
        uVar19 = uVar15 + uVar14;
        uVar14 = (uint)(((uVar22 != 0 && *(uint *)(&DAT_004252c4 + uVar9 * 8) != 0 ||
                         (int)((ulonglong)lVar5 >> 0x20) != 0) ||
                        (int)((ulonglong)lVar4 >> 0x20) != 0) || CARRY4(uVar15,uVar14));
        if ((uVar14 != 0) ||
           (uVar14 = 0x200000 - (uVar19 + (iVar10 != 0)),
           0x1fffff < uVar19 && (uint)(iVar10 == 0) <= 0x200000 - uVar19)) goto LAB_01305e74;
        dVar26 = (double)FUN_01bf0e80(iVar10,uVar19);
        dVar26 = dVar26 * 1e+22;
      }
      dVar27 = -dVar26;
      goto LAB_01306708;
    }
  }
  else {
    if ((byte)((byte)*puVar20 | 0x20) != 0x65) {
      bVar25 = false;
      goto LAB_01305c94;
    }
    iVar10 = uVar9 - 1;
    if (iVar10 != 0) {
      pbVar13 = (byte *)((int)puVar20 + 1);
      uVar19 = (uint)*pbVar13;
      if ((uVar19 == 0x2d) || (uVar15 = uVar19, uVar19 == 0x2b)) {
        iVar10 = uVar9 - 2;
        if (iVar10 == 0) goto LAB_01305eec;
        pbVar13 = (byte *)((int)puVar20 + 2);
        uVar15 = (uint)*pbVar13;
      }
      if (9 < uVar15 - 0x30) goto LAB_01305eec;
      uVar3 = 0;
      do {
        iVar11 = (int)(uVar3 >> 0x20);
        if (9 < (*pbVar13 - 0x30 & 0xff)) goto LAB_013061e4;
        bVar25 = 0xffff < (uint)uVar3;
        if ((int)-(iVar11 + (uint)bVar25) < 0 ==
            (SBORROW4(0,iVar11) != SBORROW4(-iVar11,(uint)bVar25))) {
          uVar3 = (uVar3 & 0xffffffff) * 10 +
                  (CONCAT44(iVar11 * 10,*pbVar13 - 0x30) & 0xffffffff000000ff);
        }
        iVar10 = iVar10 + -1;
        pbVar13 = pbVar13 + 1;
      } while (iVar10 != 0);
      iVar10 = 0;
LAB_013061e4:
      uVar6 = CONCAT44(-((int)(uVar3 >> 0x20) + (uint)((int)uVar3 != 0)),-(int)uVar3);
      if (uVar19 != 0x2d) {
        uVar6 = uVar3;
      }
      lVar4 = uVar6 + lVar4;
      bVar25 = iVar10 == 0;
      goto LAB_01305c9c;
    }
  }
LAB_01305eec:
  if (param_3 == 3) {
    uVar8 = (uint3)*param_2 & 0xdfdfdf;
    if (uVar8 == 0x464e49) goto LAB_01305fdc;
    if (uVar8 == 0x4e414e) {
      dVar26 = NAN;
      dVar27 = -NAN;
      goto LAB_01306708;
    }
  }
  else if ((param_3 == 8) &&
          ((*param_2 & 0xdfdfdfdf) == 0x49464e49 && (param_2[1] & 0xdfdfdfdf) == 0x5954494e)) {
LAB_01305fdc:
    dVar26 = INFINITY;
    dVar27 = -INFINITY;
    goto LAB_01306708;
  }
LAB_01305f90:
  uVar7 = 1;
  param_1[1] = 1;
LAB_01306718:
  *param_1 = uVar7;
  return;
}

