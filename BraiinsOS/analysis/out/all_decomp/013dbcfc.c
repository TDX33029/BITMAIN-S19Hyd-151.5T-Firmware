// FUN_013dbcfc @ 013dbcfc size=3788 calls_out=12 calls_in=1
// strings: 

void FUN_013dbcfc(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined *puVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint *puVar23;
  undefined4 uVar24;
  byte bVar25;
  int iVar26;
  int *piVar27;
  bool bVar28;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  uint uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  iVar5 = FUN_013d2518(param_2);
  if (((iVar5 != 0x78) && (iVar5 = FUN_013d2518(param_2), iVar5 != 0x75)) &&
     (iVar5 = FUN_013d2518(param_2), iVar5 != 0x55)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_003cef4e,0x50,&DAT_01894eb8);
  }
  iVar5 = FUN_013d2518(param_2);
  bVar4 = 2;
  if (iVar5 == 0x75) {
    bVar4 = 1;
  }
  bVar25 = 0;
  if (iVar5 != 0x78) {
    bVar25 = bVar4;
  }
  iVar5 = FUN_013d2d20(param_2);
  if (iVar5 == 0) {
    iVar5 = *param_2;
    iVar22 = param_2[2];
LAB_013dbdb4:
    local_38 = *(undefined4 *)(iVar5 + 0x50);
    uStack_34 = *(undefined4 *)(iVar5 + 0x54);
    local_30 = *(undefined4 *)(iVar5 + 0x58);
    iVar5 = param_2[1];
    local_2c = local_38;
    uStack_28 = uStack_34;
    local_24 = local_30;
    if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar22);
    }
    if (iVar22 == 0) {
      iVar7 = 0;
      iVar8 = 1;
    }
    else {
      iVar8 = thunk_FUN_016d4a50(iVar22);
      iVar7 = iVar22;
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar22);
      }
    }
    FUN_016dd1aa(iVar8,iVar5,iVar22);
    param_1[10] = local_38;
    param_1[0xb] = uStack_34;
    param_1[0xc] = local_30;
    param_1[0xd] = local_2c;
    param_1[0xe] = uStack_28;
    param_1[0xf] = local_24;
    param_1[7] = iVar7;
    param_1[8] = iVar8;
    param_1[9] = iVar22;
    *param_1 = 10;
    return;
  }
  FUN_013d2168(param_2);
  iVar5 = *param_2;
  iVar22 = *(int *)(iVar5 + 0x50);
  if (iVar22 == param_2[2]) goto LAB_013dbdb4;
  iVar5 = FUN_013d2518(param_2);
  if (iVar5 == 0x7b) {
    iVar5 = *param_2;
    if (*(int *)(iVar5 + 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_01894c48);
    }
    puVar23 = (uint *)(iVar5 + 0x50);
    uVar20 = *puVar23;
    uVar14 = *(undefined4 *)(iVar5 + 0x54);
    uVar19 = *(uint *)(iVar5 + 0x58);
    *(undefined4 *)(iVar5 + 0x4c) = 0;
    *(undefined4 *)(iVar5 + 0x40) = 0xffffffff;
    uVar6 = FUN_013d2518(param_2);
    uVar12 = 1;
    if (0x7f < uVar6) {
      uVar12 = 2;
    }
    if ((0x7ff < uVar6) && (uVar12 = 4, uVar6 < 0x10000)) {
      uVar12 = 3;
    }
    puVar15 = &DAT_01894f38;
    if (CARRY4(uVar12,uVar20)) {
LAB_013de364:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar15);
    }
    iVar22 = *(int *)(iVar5 + 0x58);
    puVar15 = &DAT_01894f28;
    if (iVar22 == -1) goto LAB_013de364;
    iVar7 = *(int *)(iVar5 + 0x54);
    iVar8 = FUN_013d2518(param_2);
    uVar6 = param_2[2];
    iVar22 = iVar22 + 1;
    if (iVar8 == 10) {
      iVar7 = iVar7 + 1;
      iVar22 = 1;
    }
    while (((iVar8 = FUN_013d2d20(param_2), iVar8 != 0 && (FUN_013d2168(param_2), *puVar23 != uVar6)
            ) && (iVar8 = FUN_013d2518(param_2), iVar8 != 0x7d))) {
      uVar9 = FUN_013d2518(param_2);
      if (9 < uVar9 - 0x30) {
        bVar28 = 5 < uVar9 - 0x41;
        if (bVar28) {
          uVar9 = uVar9 - 0x61;
        }
        if (bVar28 && 5 < uVar9) {
          uVar20 = *puVar23;
          uVar19 = FUN_013d2518(param_2);
          uVar12 = 1;
          puVar15 = &DAT_01894f38;
          if (0x7f < uVar19) {
            uVar12 = 2;
          }
          if ((0x7ff < uVar19) && (uVar12 = 4, uVar19 < 0x10000)) {
            uVar12 = 3;
          }
          if (CARRY4(uVar12,uVar20)) goto LAB_013de364;
          iVar7 = uVar12 + uVar20;
          iVar22 = *(int *)(iVar5 + 0x58);
          puVar15 = &DAT_01894f28;
          if (iVar22 == -1) goto LAB_013de364;
          iVar26 = *(int *)(iVar5 + 0x54);
          iVar8 = FUN_013d2518(param_2);
          uVar12 = *puVar23;
          uVar14 = *(undefined4 *)(iVar5 + 0x54);
          uVar18 = *(undefined4 *)(iVar5 + 0x58);
          iVar21 = param_2[1];
          FUN_01401878(&local_40,uVar6,1,1);
          if (local_40 == 1) {
            uVar14 = local_3c;
            uVar6 = local_38;
            goto LAB_013de13c;
          }
          FUN_016dd1aa(local_38,iVar21,uVar6);
          iVar22 = iVar22 + 1;
          if (iVar8 == 10) {
            iVar22 = 1;
            iVar26 = iVar26 + 1;
          }
          param_1[0xf] = iVar22;
          param_1[10] = uVar12;
          param_1[0xb] = uVar14;
          param_1[0xc] = uVar18;
          param_1[0xd] = iVar7;
          param_1[7] = local_3c;
          param_1[8] = local_38;
          param_1[9] = uVar6;
          param_1[0xe] = iVar26;
          *param_1 = 9;
          goto LAB_013de24c;
        }
      }
      uVar10 = FUN_013d2518(param_2);
      iVar8 = *(int *)(iVar5 + 0x4c);
      uVar9 = 1;
      if (0x7f < uVar10) {
        uVar9 = 2;
      }
      if ((0x7ff < uVar10) && (uVar9 = 4, uVar10 < 0x10000)) {
        uVar9 = 3;
      }
      if ((uint)(*(int *)(iVar5 + 0x44) - iVar8) < uVar9) {
        FUN_01401968((int *)(iVar5 + 0x44),iVar8,uVar9,1,1);
        pbVar11 = (byte *)(*(int *)(iVar5 + 0x48) + *(int *)(iVar5 + 0x4c));
        if (uVar10 < 0x80) goto LAB_013dddbc;
LAB_013dde6c:
        bVar4 = (byte)uVar10 & 0x3f | 0x80;
        bVar2 = (byte)(uVar10 >> 6);
        if (uVar10 < 0x800) {
          pbVar11[1] = bVar4;
          *pbVar11 = bVar2 | 0xc0;
        }
        else {
          bVar2 = bVar2 & 0x3f | 0x80;
          bVar3 = (byte)(uVar10 >> 0xc);
          if (uVar10 >> 0x10 == 0) {
            pbVar11[1] = bVar2;
            pbVar11[2] = bVar4;
            *pbVar11 = bVar3 | 0xe0;
          }
          else {
            pbVar11[3] = bVar4;
            pbVar11[2] = bVar2;
            pbVar11[1] = bVar3 & 0x3f | 0x80;
            *pbVar11 = (byte)(uVar10 >> 0x12) | 0xf0;
          }
        }
      }
      else {
        pbVar11 = (byte *)(*(int *)(iVar5 + 0x48) + iVar8);
        if (0x7f < uVar10) goto LAB_013dde6c;
LAB_013dddbc:
        *pbVar11 = (byte)uVar10;
      }
      *(uint *)(iVar5 + 0x4c) = uVar9 + iVar8;
    }
    if (*puVar23 == uVar6) {
      uStack_34 = *puVar23;
      local_30 = *(undefined4 *)(iVar5 + 0x54);
      local_2c = *(undefined4 *)(iVar5 + 0x58);
      iVar22 = param_2[1];
      local_40 = uVar20;
      local_3c = uVar14;
      local_38 = uVar19;
      if ((int)uVar6 < 0) {
LAB_013de138:
        uVar14 = 0;
LAB_013de13c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar14,uVar6);
      }
      if (uVar6 == 0) {
        iVar7 = 1;
        uVar12 = 0;
      }
      else {
        iVar7 = thunk_FUN_016d4a50(uVar6);
        if (iVar7 == 0) {
LAB_013de398:
          uVar14 = 1;
          goto LAB_013de13c;
        }
        uVar12 = uVar6;
      }
      FUN_016dd1aa(iVar7,iVar22,uVar6);
      param_1[10] = local_40;
      param_1[0xb] = local_3c;
      param_1[0xc] = local_38;
      param_1[0xd] = uStack_34;
      param_1[0xe] = local_30;
      param_1[0xf] = local_2c;
      param_1[7] = uVar12;
      param_1[8] = iVar7;
      param_1[9] = uVar6;
      uVar14 = 10;
    }
    else {
      uVar9 = *puVar23;
      uVar18 = *(undefined4 *)(iVar5 + 0x54);
      uVar16 = *(undefined4 *)(iVar5 + 0x58);
      pbVar11 = *(byte **)(iVar5 + 0x48);
      uVar10 = *(uint *)(iVar5 + 0x4c);
      local_44 = FUN_013d2518(param_2);
      if (local_44 != 0x7d) {
        FUN_013ff7ac(&local_44,&DAT_00567d18,&DAT_01894c38);
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x13de394);
        (*pcVar1)();
      }
      iVar8 = FUN_013d2d20(param_2);
      if (iVar8 != 0) {
        FUN_013d2168(param_2);
      }
      if (uVar10 != 0) {
        if (uVar10 == 1) {
          bVar4 = *pbVar11;
          if (bVar4 != 0x2b && bVar4 != 0x2d) goto LAB_013de034;
        }
        else {
          bVar4 = *pbVar11;
LAB_013de034:
          if (bVar4 == 0x2b) {
            pbVar11 = pbVar11 + 1;
            uVar10 = uVar10 - 1;
          }
          if (uVar10 < 9) {
            uVar19 = 0;
            if (uVar10 != 0) {
              do {
                uVar17 = (uint)*pbVar11;
                uVar13 = uVar17 - 0x30;
                if (0x39 < uVar17) {
                  uVar13 = (uVar17 - 0x41 & 0xffffffdf) + 10;
                }
                if (0xf < uVar13) goto LAB_013de130;
                uVar19 = uVar13 | uVar19 << 4;
                pbVar11 = pbVar11 + 1;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
LAB_013de084:
              if ((uVar19 ^ 0xd800) - 0x110000 < 0xffef0800) goto LAB_013de130;
            }
            uVar6 = *puVar23;
            uVar14 = *(undefined4 *)(iVar5 + 0x54);
            uVar18 = *(undefined4 *)(iVar5 + 0x58);
            param_1[1] = uVar19;
            param_1[2] = uVar12 + uVar20;
            *(byte *)((int)param_1 + 0x21) = bVar25;
            param_1[3] = iVar7;
            *(undefined1 *)(param_1 + 8) = 5;
            *param_1 = 0x22;
            param_1[4] = iVar22;
            param_1[5] = uVar6;
            param_1[6] = uVar14;
            param_1[7] = uVar18;
            goto LAB_013de24c;
          }
          uVar19 = 0;
          while( true ) {
            if (uVar10 == 0) goto LAB_013de084;
            if (0xfffffff < uVar19) break;
            uVar13 = (uint)*pbVar11;
            uVar17 = uVar13 - 0x30;
            if (0x39 < uVar13) {
              uVar17 = (uVar13 - 0x41 & 0xffffffdf) + 10;
            }
            uVar13 = uVar19 * 0x10;
            uVar19 = uVar17 + uVar13;
            if ((0xf < uVar17) ||
               (uVar10 = uVar10 - 1, pbVar11 = pbVar11 + 1, CARRY4(uVar17,uVar13))) break;
          }
        }
LAB_013de130:
        if (-1 < (int)uVar6) {
          iVar8 = param_2[1];
          if (uVar6 == 0) {
            uVar19 = 0;
            iVar21 = 1;
          }
          else {
            iVar21 = thunk_FUN_016d4a50(uVar6);
            if (iVar21 == 0) goto LAB_013de398;
            uVar19 = uVar6;
          }
          FUN_016dd1aa(iVar21,iVar8,uVar6);
          *param_1 = 8;
          param_1[10] = uVar12 + uVar20;
          param_1[0xb] = iVar7;
          param_1[0xc] = iVar22;
          param_1[7] = uVar19;
          param_1[8] = iVar21;
          param_1[9] = uVar6;
          param_1[0xd] = uVar9;
          param_1[0xe] = uVar18;
          param_1[0xf] = uVar16;
          goto LAB_013de24c;
        }
        goto LAB_013de138;
      }
      uStack_34 = *puVar23;
      local_30 = *(undefined4 *)(iVar5 + 0x54);
      iVar22 = param_2[1];
      local_2c = *(undefined4 *)(iVar5 + 0x58);
      local_40 = uVar20;
      local_3c = uVar14;
      local_38 = uVar19;
      if ((int)uVar6 < 0) goto LAB_013de138;
      if (uVar6 == 0) {
        uVar12 = 0;
        iVar7 = 1;
      }
      else {
        iVar7 = thunk_FUN_016d4a50(uVar6);
        if (iVar7 == 0) goto LAB_013de398;
        uVar12 = uVar6;
      }
      FUN_016dd1aa(iVar7,iVar22,uVar6);
      param_1[10] = local_40;
      param_1[0xb] = local_3c;
      param_1[0xc] = local_38;
      param_1[0xd] = uStack_34;
      param_1[0xe] = local_30;
      param_1[0xf] = local_2c;
      param_1[7] = uVar12;
      param_1[8] = iVar7;
      param_1[9] = uVar6;
      uVar14 = 7;
    }
    *param_1 = uVar14;
LAB_013de24c:
    *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x40) + 1;
    return;
  }
  iVar5 = *param_2;
  if (*(int *)(iVar5 + 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01894cd8);
  }
  puVar23 = (uint *)(iVar5 + 0x50);
  uVar6 = *puVar23;
  uVar19 = param_2[2];
  *(undefined4 *)(iVar5 + 0x4c) = 0;
  iVar7 = *(int *)(&UNK_00421960 + (uint)bVar25 * 4);
  *(undefined4 *)(iVar5 + 0x40) = 0xffffffff;
  uVar14 = *(undefined4 *)(iVar5 + 0x54);
  uVar18 = *(undefined4 *)(iVar5 + 0x58);
  iVar22 = FUN_013d2518(param_2);
  uVar12 = iVar22 - 0x30;
  bVar28 = 9 < uVar12;
  if (bVar28) {
    uVar12 = iVar22 - 0x61;
  }
  if ((bVar28 && 5 < uVar12) && (5 < iVar22 - 0x41U)) {
LAB_013de4c8:
    uVar20 = *puVar23;
    uVar6 = FUN_013d2518(param_2);
    uVar12 = 1;
    if (0x7f < uVar6) {
      uVar12 = 2;
    }
    if ((0x7ff < uVar6) && (uVar12 = 4, uVar6 < 0x10000)) {
      uVar12 = 3;
    }
    if (CARRY4(uVar12,uVar20)) {
      puVar15 = &DAT_01894f38;
LAB_013dea78:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar15);
    }
    iVar22 = *(int *)(iVar5 + 0x58);
    if (iVar22 == -1) {
      puVar15 = &DAT_01894f28;
      goto LAB_013dea78;
    }
    iVar7 = *(int *)(iVar5 + 0x54);
    iVar8 = FUN_013d2518(param_2);
    iVar21 = param_2[1];
    uVar6 = *puVar23;
    uVar14 = *(undefined4 *)(iVar5 + 0x54);
    uVar18 = *(undefined4 *)(iVar5 + 0x58);
    iVar22 = iVar22 + 1;
    if (iVar8 == 10) {
      iVar7 = iVar7 + 1;
      iVar22 = 1;
    }
    if (-1 < (int)uVar19) {
      if (uVar19 == 0) {
        iVar8 = 1;
        uVar9 = 0;
LAB_013de58c:
        FUN_016dd1aa(iVar8,iVar21,uVar19);
        param_1[0xf] = iVar22;
        param_1[10] = uVar6;
        param_1[0xb] = uVar14;
        param_1[0xc] = uVar18;
        param_1[0xd] = uVar12 + uVar20;
        param_1[7] = uVar9;
        param_1[8] = iVar8;
        param_1[9] = uVar19;
        param_1[0xe] = iVar7;
        *param_1 = 9;
        goto LAB_013dea54;
      }
      iVar8 = thunk_FUN_016d4a50(uVar19);
      if (iVar8 != 0) {
        uVar9 = uVar19;
        goto LAB_013de58c;
      }
LAB_013dea68:
      uVar14 = 1;
      goto LAB_013de9ec;
    }
LAB_013de9e8:
    uVar14 = 0;
LAB_013de9ec:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar14,uVar19);
  }
  uVar20 = FUN_013d2518(param_2);
  iVar22 = *(int *)(iVar5 + 0x4c);
  piVar27 = (int *)(iVar5 + 0x44);
  uVar12 = 1;
  if (0x7f < uVar20) {
    uVar12 = 2;
  }
  if ((0x7ff < uVar20) && (uVar12 = 4, uVar20 < 0x10000)) {
    uVar12 = 3;
  }
  if ((uint)(*piVar27 - iVar22) < uVar12) {
    FUN_01401968(piVar27,iVar22,uVar12,1,1);
    pbVar11 = (byte *)(*(int *)(iVar5 + 0x48) + *(int *)(iVar5 + 0x4c));
    if (0x7f < uVar20) goto LAB_013de60c;
LAB_013de4b4:
    *pbVar11 = (byte)uVar20;
  }
  else {
    pbVar11 = (byte *)(*(int *)(iVar5 + 0x48) + iVar22);
    if (uVar20 < 0x80) goto LAB_013de4b4;
LAB_013de60c:
    bVar4 = (byte)uVar20 & 0x3f | 0x80;
    bVar2 = (byte)(uVar20 >> 6);
    if (uVar20 < 0x800) {
      pbVar11[1] = bVar4;
      *pbVar11 = bVar2 | 0xc0;
    }
    else {
      bVar2 = bVar2 & 0x3f | 0x80;
      bVar3 = (byte)(uVar20 >> 0xc);
      if (uVar20 < 0x10000) {
        pbVar11[1] = bVar2;
        pbVar11[2] = bVar4;
        *pbVar11 = bVar3 | 0xe0;
      }
      else {
        pbVar11[1] = bVar3 & 0x3f | 0x80;
        pbVar11[3] = bVar4;
        pbVar11[2] = bVar2;
        *pbVar11 = (byte)(uVar20 >> 0x12) | 0xf0;
      }
    }
  }
  iVar7 = iVar7 + -1;
  *(uint *)(iVar5 + 0x4c) = uVar12 + iVar22;
  do {
    iVar22 = FUN_013d2d20(param_2);
    if ((iVar22 == 0) || (FUN_013d2168(param_2), *puVar23 == uVar19)) {
      uVar12 = *puVar23;
      uVar14 = *(undefined4 *)(iVar5 + 0x54);
      iVar22 = *(int *)(iVar5 + 0x58);
      iVar7 = param_2[1];
      local_44 = iVar22;
      if ((int)uVar19 < 0) goto LAB_013de9e8;
      if (uVar19 == 0) {
        uVar6 = 0;
        iVar8 = 1;
      }
      else {
        iVar8 = thunk_FUN_016d4a50(uVar19);
        if (iVar8 == 0) goto LAB_013dea68;
        uVar6 = uVar19;
      }
      FUN_016dd1aa(iVar8,iVar7,uVar19);
      param_1[10] = uVar12;
      param_1[0xb] = uVar14;
      param_1[0xc] = iVar22;
      param_1[0xd] = uVar12;
      param_1[0xe] = uVar14;
      param_1[0xf] = local_44;
      param_1[7] = uVar6;
      param_1[8] = iVar8;
      param_1[9] = uVar19;
      uVar14 = 10;
      goto LAB_013dea50;
    }
    uVar12 = FUN_013d2518(param_2);
    if (9 < uVar12 - 0x30) {
      bVar28 = 5 < uVar12 - 0x41;
      if (bVar28) {
        uVar12 = uVar12 - 0x61;
      }
      if (bVar28 && 5 < uVar12) goto LAB_013de4c8;
    }
    uVar20 = FUN_013d2518(param_2);
    iVar22 = *(int *)(iVar5 + 0x4c);
    uVar12 = 1;
    if (0x7f < uVar20) {
      uVar12 = 2;
    }
    if ((0x7ff < uVar20) && (uVar12 = 4, uVar20 < 0x10000)) {
      uVar12 = 3;
    }
    if ((uint)(*piVar27 - iVar22) < uVar12) {
      FUN_01401968(piVar27,iVar22,uVar12,1,1);
      pbVar11 = (byte *)(*(int *)(iVar5 + 0x48) + *(int *)(iVar5 + 0x4c));
      if (uVar20 < 0x80) goto LAB_013de690;
LAB_013de73c:
      bVar4 = (byte)uVar20 & 0x3f | 0x80;
      bVar2 = (byte)(uVar20 >> 6);
      if (uVar20 < 0x800) {
        pbVar11[1] = bVar4;
        *pbVar11 = bVar2 | 0xc0;
      }
      else {
        bVar2 = bVar2 & 0x3f | 0x80;
        bVar3 = (byte)(uVar20 >> 0xc);
        if (uVar20 >> 0x10 == 0) {
          pbVar11[1] = bVar2;
          pbVar11[2] = bVar4;
          *pbVar11 = bVar3 | 0xe0;
        }
        else {
          pbVar11[3] = bVar4;
          pbVar11[2] = bVar2;
          pbVar11[1] = bVar3 & 0x3f | 0x80;
          *pbVar11 = (byte)(uVar20 >> 0x12) | 0xf0;
        }
      }
    }
    else {
      pbVar11 = (byte *)(*(int *)(iVar5 + 0x48) + iVar22);
      if (0x7f < uVar20) goto LAB_013de73c;
LAB_013de690:
      *pbVar11 = (byte)uVar20;
    }
    iVar7 = iVar7 + -1;
    *(uint *)(iVar5 + 0x4c) = uVar12 + iVar22;
  } while (iVar7 != 0);
  iVar22 = FUN_013d2d20(param_2);
  if (iVar22 != 0) {
    FUN_013d2168(param_2);
  }
  uVar12 = *(uint *)(iVar5 + 0x4c);
  if (uVar12 == 0) {
LAB_013de9bc:
    iVar22 = param_2[1];
    local_44 = *(int *)(iVar5 + 0x58);
    uVar12 = *puVar23;
    uVar16 = *(undefined4 *)(iVar5 + 0x54);
    if ((int)uVar19 < 0) goto LAB_013de9e8;
    if (uVar19 == 0) {
      uVar20 = 0;
      iVar7 = 1;
    }
    else {
      iVar7 = thunk_FUN_016d4a50(uVar19);
      if (iVar7 == 0) goto LAB_013dea68;
      uVar20 = uVar19;
    }
    FUN_016dd1aa(iVar7,iVar22,uVar19);
    param_1[10] = uVar6;
    param_1[0xb] = uVar14;
    param_1[0xc] = uVar18;
    param_1[0xd] = uVar12;
    param_1[0xe] = uVar16;
    param_1[0xf] = local_44;
    param_1[7] = uVar20;
    param_1[8] = iVar7;
    param_1[9] = uVar19;
    uVar14 = 8;
  }
  else {
    pbVar11 = *(byte **)(iVar5 + 0x48);
    if (uVar12 == 1) {
      bVar4 = *pbVar11;
      if (bVar4 == 0x2b || bVar4 == 0x2d) goto LAB_013de9bc;
    }
    else {
      bVar4 = *pbVar11;
    }
    if (bVar4 == 0x2b) {
      pbVar11 = pbVar11 + 1;
      uVar12 = uVar12 - 1;
    }
    if (8 < uVar12) {
      uVar20 = 0;
      while( true ) {
        if (uVar12 == 0) goto LAB_013de904;
        if (0xfffffff < uVar20) break;
        uVar10 = (uint)*pbVar11;
        uVar9 = uVar10 - 0x30;
        if (0x39 < uVar10) {
          uVar9 = (uVar10 - 0x41 & 0xffffffdf) + 10;
        }
        uVar10 = uVar20 * 0x10;
        uVar20 = uVar9 + uVar10;
        if ((0xf < uVar9) || (uVar12 = uVar12 - 1, pbVar11 = pbVar11 + 1, CARRY4(uVar9,uVar10)))
        break;
      }
      goto LAB_013de9bc;
    }
    uVar20 = 0;
    if (uVar12 != 0) {
      do {
        uVar10 = (uint)*pbVar11;
        uVar9 = uVar10 - 0x30;
        if (0x39 < uVar10) {
          uVar9 = (uVar10 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar9) goto LAB_013de9bc;
        uVar20 = uVar9 | uVar20 << 4;
        pbVar11 = pbVar11 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
LAB_013de904:
      if ((uVar20 ^ 0xd800) - 0x110000 < 0xffef0800) goto LAB_013de9bc;
    }
    uVar24 = *(undefined4 *)(iVar5 + 0x54);
    param_1[1] = uVar20;
    uVar12 = *puVar23;
    uVar16 = *(undefined4 *)(iVar5 + 0x58);
    param_1[2] = uVar6;
    param_1[3] = uVar14;
    param_1[4] = uVar18;
    param_1[5] = uVar12;
    param_1[6] = uVar24;
    param_1[7] = uVar16;
    *(byte *)((int)param_1 + 0x21) = bVar25;
    *(undefined1 *)(param_1 + 8) = 4;
    uVar14 = 0x22;
  }
LAB_013dea50:
  *param_1 = uVar14;
LAB_013dea54:
  *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x40) + 1;
  return;
}

