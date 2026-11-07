// FUN_00b946b0 @ 00b946b0 size=3656 calls_out=8 calls_in=2
// strings: 

void FUN_00b946b0(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  undefined4 uVar22;
  uint *puVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  bool bVar30;
  bool bVar31;
  uint *local_50;
  uint local_40;
  uint *local_34;
  uint local_2c;
  uint local_28;
  
  if (0x20 < param_2) {
    local_50 = param_6;
LAB_00b94748:
    uVar28 = param_2;
    do {
      if (param_5 == 0) {
        FUN_00b94090(param_1,uVar28,param_3,param_4,1);
        return;
      }
      puVar7 = param_1 + (uVar28 >> 3) * 8;
      puVar10 = param_1 + ((uVar28 >> 3) * 8 - (uVar28 >> 3)) * 2;
      if (uVar28 < 0x40) {
        uVar26 = *param_1;
        uVar27 = *puVar7;
        bVar31 = uVar27 <= uVar26;
        if (uVar26 == uVar27) {
          bVar31 = puVar7[1] <= param_1[1];
        }
        uVar15 = *puVar10;
        bVar30 = uVar15 <= uVar26;
        if (uVar26 == uVar15) {
          bVar30 = puVar10[1] <= param_1[1];
        }
        puVar6 = param_1;
        if (!bVar31 == !bVar30) {
          bVar30 = uVar15 <= uVar27;
          if (uVar27 == uVar15) {
            bVar30 = puVar10[1] <= puVar7[1];
          }
          puVar6 = puVar7;
          if (!bVar31 != !bVar30) {
            puVar6 = puVar10;
          }
        }
      }
      else {
        puVar6 = (uint *)FUN_00b95520(param_1);
      }
      param_5 = param_5 + -1;
      local_2c = *puVar6;
      local_28 = puVar6[1];
      uVar26 = (uint)((int)puVar6 - (int)param_1) >> 3;
      if (local_50 != (uint *)0x0) {
        bVar31 = local_2c <= *local_50;
        if (*local_50 == local_2c) {
          bVar31 = local_28 <= local_50[1];
        }
        if (bVar31) goto LAB_00b94ac0;
      }
      if (param_4 < uVar28) goto LAB_00b954dc;
      puVar10 = param_3 + uVar28 * 2;
      param_2 = 0;
      puVar7 = param_1;
      uVar27 = uVar26;
      while( true ) {
        iVar12 = uVar27 - 3;
        if (uVar27 < 3) {
          iVar12 = 0;
        }
        if (puVar7 < param_1 + iVar12 * 2) {
          uVar19 = *puVar6;
          uVar15 = puVar6[1];
          do {
            uVar13 = puVar7[1];
            uVar20 = *puVar7;
            uVar9 = puVar7[2];
            uVar25 = puVar7[3];
            bVar31 = uVar19 <= uVar20;
            if (uVar20 == uVar19) {
              bVar31 = uVar15 <= uVar13;
            }
            puVar8 = param_3;
            if (!bVar31 == 0) {
              puVar8 = puVar10 + -2;
            }
            puVar8[param_2 * 2] = uVar20;
            iVar18 = param_2 + !bVar31;
            (puVar8 + param_2 * 2)[1] = uVar13;
            bVar31 = uVar19 <= uVar9;
            if (uVar9 == uVar19) {
              bVar31 = uVar15 <= uVar25;
            }
            puVar8 = param_3;
            if (!bVar31 == 0) {
              puVar8 = puVar10 + -4;
            }
            puVar8[iVar18 * 2] = uVar9;
            uVar9 = puVar7[4];
            (puVar8 + iVar18 * 2)[1] = uVar25;
            iVar18 = iVar18 + (uint)!bVar31;
            uVar25 = puVar7[5];
            bVar31 = uVar19 <= uVar9;
            if (uVar9 == uVar19) {
              bVar31 = uVar15 <= uVar25;
            }
            puVar8 = param_3;
            if (!bVar31 == 0) {
              puVar8 = puVar10 + -6;
            }
            puVar10 = puVar10 + -8;
            puVar8[iVar18 * 2] = uVar9;
            iVar11 = iVar18 + (uint)!bVar31;
            uVar9 = puVar7[6];
            (puVar8 + iVar18 * 2)[1] = uVar25;
            uVar25 = puVar7[7];
            puVar7 = puVar7 + 8;
            bVar31 = uVar19 <= uVar9;
            if (uVar9 == uVar19) {
              bVar31 = uVar15 <= uVar25;
            }
            param_2 = iVar11 + (uint)!bVar31;
            puVar8 = puVar10;
            if (!bVar31 != 0) {
              puVar8 = param_3;
            }
            puVar8[iVar11 * 2] = uVar9;
            (puVar8 + iVar11 * 2)[1] = uVar25;
          } while (puVar7 < param_1 + iVar12 * 2);
        }
        if (puVar7 < param_1 + uVar27 * 2) {
          uVar15 = *puVar6;
          uVar19 = puVar6[1];
          do {
            uVar25 = *puVar7;
            uVar9 = puVar7[1];
            puVar10 = puVar10 + -2;
            puVar7 = puVar7 + 2;
            bVar31 = uVar15 <= uVar25;
            if (uVar25 == uVar15) {
              bVar31 = uVar19 <= uVar9;
            }
            puVar8 = puVar10;
            if (!bVar31 != 0) {
              puVar8 = param_3;
            }
            iVar12 = param_2 * 2;
            puVar8[iVar12] = uVar25;
            param_2 = param_2 + !bVar31;
            (puVar8 + iVar12)[1] = uVar9;
          } while (puVar7 < param_1 + uVar27 * 2);
        }
        if (uVar27 == uVar28) break;
        puVar10 = puVar10 + -2;
        uVar27 = *puVar7;
        uVar15 = puVar7[1];
        puVar7 = puVar7 + 2;
        puVar10[param_2 * 2] = uVar27;
        (puVar10 + param_2 * 2)[1] = uVar15;
        uVar27 = uVar28;
      }
      FUN_016dd1aa(param_1,param_3,param_2 << 3);
      iVar12 = uVar28 - param_2;
      if (iVar12 != 0) {
        puVar10 = param_1 + param_2 * 2;
        puVar7 = param_3 + uVar28 * 2 + -2;
        iVar18 = iVar12;
        do {
          uVar27 = *puVar7;
          uVar15 = puVar7[1];
          puVar7 = puVar7 + -2;
          *puVar10 = uVar27;
          puVar10[1] = uVar15;
          puVar10 = puVar10 + 2;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
      if (param_2 == 0) goto LAB_00b94ac0;
      if (uVar28 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
      }
      FUN_00b946b0(param_1 + param_2 * 2,iVar12,param_3,param_4,param_5,&local_2c);
      uVar28 = param_2;
      if (param_2 < 0x21) break;
    } while( true );
  }
LAB_00b946d8:
  uVar28 = param_2 >> 1;
  if (uVar28 == 0) {
    return;
  }
  puVar7 = param_3 + param_2 * 2;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      uVar26 = param_1[1];
      *param_3 = *param_1;
      param_3[1] = uVar26;
      uVar26 = 1;
      param_3[uVar28 * 2] = param_1[uVar28 * 2];
      (param_3 + uVar28 * 2)[1] = (param_1 + uVar28 * 2)[1];
      local_40 = param_2 - uVar28;
      if (uVar28 < 2) goto LAB_00b95268;
    }
    else {
      bVar31 = param_1[4] <= param_1[6];
      if (param_1[6] == param_1[4]) {
        bVar31 = param_1[5] <= param_1[7];
      }
      bVar30 = *param_1 <= param_1[2];
      if (param_1[2] == *param_1) {
        bVar30 = param_1[1] <= param_1[3];
      }
      uVar26 = (uint)!bVar30;
      uVar27 = 3;
      puVar10 = param_1 + uVar26 * 2;
      if (!bVar31) {
        uVar27 = 2;
      }
      uVar15 = uVar26 ^ 1;
      puVar8 = param_1 + uVar27 * 2;
      uVar19 = 2;
      puVar6 = param_1 + uVar15 * 2;
      if (!bVar31) {
        uVar19 = 3;
      }
      puVar14 = param_1 + uVar19 * 2;
      bVar31 = *puVar6 <= *puVar8;
      if (*puVar8 == *puVar6) {
        bVar31 = puVar6[1] <= puVar8[1];
      }
      uVar25 = uVar15;
      puVar23 = puVar6;
      puVar4 = puVar8;
      if (!bVar31) {
        uVar25 = uVar19;
        puVar23 = puVar14;
        puVar4 = puVar6;
      }
      bVar30 = *puVar10 <= *puVar14;
      if (*puVar14 == *puVar10) {
        bVar30 = puVar10[1] <= puVar14[1];
      }
      if (bVar30) {
        uVar15 = uVar19;
        puVar24 = puVar10;
        puVar6 = puVar14;
        puVar10 = puVar23;
        uVar26 = uVar25;
      }
      else {
        puVar24 = puVar14;
      }
      if (!bVar31) {
        puVar6 = puVar8;
        uVar15 = uVar27;
      }
      uVar27 = *puVar24;
      uVar19 = puVar24[1];
      puVar8 = param_1 + uVar28 * 2;
      bVar31 = puVar8[4] <= puVar8[6];
      if (puVar8[6] == puVar8[4]) {
        bVar31 = puVar8[5] <= puVar8[7];
      }
      bVar30 = *puVar8 <= puVar8[2];
      if (puVar8[2] == *puVar8) {
        bVar30 = puVar8[1] <= puVar8[3];
      }
      uVar9 = (uint)!bVar30;
      uVar20 = uVar9 ^ 1;
      puVar14 = puVar8 + uVar9 * 2;
      uVar13 = 3;
      uVar25 = 2;
      if (!bVar31) {
        uVar13 = 2;
      }
      puVar23 = puVar8 + uVar20 * 2;
      if (!bVar31) {
        uVar25 = 3;
      }
      puVar29 = puVar8 + uVar13 * 2;
      puVar24 = puVar8 + uVar25 * 2;
      bVar31 = *puVar23 <= *puVar29;
      if (*puVar29 == *puVar23) {
        bVar31 = puVar23[1] <= puVar29[1];
      }
      puVar21 = puVar23;
      uVar2 = uVar20;
      if (!bVar31) {
        puVar21 = puVar24;
        uVar2 = uVar25;
      }
      bVar30 = *puVar14 <= *puVar24;
      if (*puVar24 == *puVar14) {
        bVar30 = puVar14[1] <= puVar24[1];
      }
      puVar3 = puVar24;
      puVar5 = puVar14;
      if (!bVar30) {
        uVar25 = uVar20;
        puVar3 = puVar23;
        puVar5 = puVar24;
        puVar21 = puVar14;
        uVar2 = uVar9;
      }
      if (bVar31) {
        puVar23 = puVar29;
      }
      else {
        puVar3 = puVar29;
      }
      uVar20 = *puVar4;
      uVar9 = puVar4[1];
      if (!bVar31) {
        uVar25 = uVar13;
      }
      bVar31 = param_1[uVar26 * 2] <= param_1[uVar15 * 2];
      if (param_1[uVar15 * 2] == param_1[uVar26 * 2]) {
        bVar31 = puVar10[1] <= puVar6[1];
      }
      if (bVar31) {
        puVar14 = puVar6;
        puVar6 = puVar10;
      }
      else {
        puVar14 = puVar10;
      }
      uVar26 = puVar8[uVar2 * 2];
      uVar15 = puVar14[1];
      param_3[4] = *puVar14;
      *param_3 = uVar27;
      param_3[1] = uVar19;
      param_3[5] = uVar15;
      uVar15 = puVar21[1];
      uVar27 = puVar3[1];
      param_3[6] = uVar20;
      uVar25 = puVar8[uVar25 * 2];
      param_3[7] = uVar9;
      uVar19 = *puVar6;
      bVar31 = uVar26 <= uVar25;
      if (uVar25 == uVar26) {
        bVar31 = uVar15 <= uVar27;
      }
      param_3[3] = puVar6[1];
      param_3[2] = uVar19;
      uVar27 = puVar5[1];
      puVar10 = puVar3;
      if (!bVar31) {
        puVar10 = puVar21;
        puVar21 = puVar3;
      }
      uVar25 = *puVar10;
      uVar9 = puVar10[1];
      uVar15 = *puVar21;
      uVar19 = puVar21[1];
      uVar13 = *puVar23;
      uVar20 = puVar23[1];
      puVar10 = param_3 + uVar28 * 2;
      *puVar10 = *puVar5;
      uVar26 = 4;
      puVar10[2] = uVar15;
      puVar10[3] = uVar19;
      puVar10[4] = uVar25;
      puVar10[1] = uVar27;
      puVar10[5] = uVar9;
      puVar10[6] = uVar13;
      puVar10[7] = uVar20;
      local_40 = param_2 - uVar28;
      if (uVar28 < 5) goto LAB_00b95268;
    }
  }
  else {
    FUN_00b88e80(param_1,param_3,puVar7);
    FUN_00b88e80(param_1 + uVar28 * 2,param_3 + uVar28 * 2,puVar7 + 0x10);
    uVar26 = 8;
    local_40 = param_2 - uVar28;
    if (uVar28 < 9) goto LAB_00b95268;
  }
  iVar18 = uVar26 * -8 + 8;
  iVar12 = uVar26 << 3;
  uVar27 = uVar26;
  do {
    uVar25 = param_1[uVar27 * 2];
    uVar15 = (param_1 + uVar27 * 2)[1];
    puVar10 = param_3 + uVar27 * 2;
    *puVar10 = uVar25;
    uVar19 = puVar10[-2];
    puVar10[1] = uVar15;
    bVar31 = uVar25 <= uVar19 && uVar19 != uVar25;
    if (uVar19 == uVar25) {
      bVar31 = uVar15 < puVar10[-1];
    }
    if (bVar31) {
      iVar11 = iVar18;
      iVar16 = iVar12;
      do {
        uVar22 = ((undefined4 *)((int)param_3 - iVar11))[1];
        *(undefined4 *)((int)param_3 + iVar16) = *(undefined4 *)((int)param_3 - iVar11);
        ((undefined4 *)((int)param_3 + iVar16))[1] = uVar22;
        if (iVar16 == 8) {
          puVar10 = param_3;
          goto LAB_00b951a0;
        }
        iVar11 = iVar11 + 8;
        iVar17 = iVar16 + -8;
        uVar19 = *(uint *)((int)param_3 + iVar16 + -0x10);
        bVar31 = uVar25 <= uVar19 && uVar19 != uVar25;
        if (uVar19 == uVar25) {
          bVar31 = uVar15 < *(uint *)((int)param_3 + iVar16 + -0xc);
        }
        iVar16 = iVar17;
      } while (bVar31);
      puVar10 = (uint *)((int)param_3 + iVar17);
LAB_00b951a0:
      *puVar10 = uVar25;
      puVar10[1] = uVar15;
    }
    uVar27 = uVar27 + 1;
    iVar18 = iVar18 + -8;
    iVar12 = iVar12 + 8;
  } while (uVar27 != uVar28);
LAB_00b95268:
  puVar10 = param_3 + uVar28 * 2;
  if (uVar26 < local_40) {
    local_34 = param_3 + uVar28 * 2 + -2;
    iVar12 = 8;
    puVar6 = puVar10;
    uVar27 = uVar26;
    do {
      uVar25 = param_1[uVar28 * 2 + uVar27 * 2];
      uVar15 = (param_1 + uVar28 * 2 + uVar27 * 2)[1];
      puVar8 = puVar10 + uVar27 * 2;
      *puVar8 = uVar25;
      uVar19 = puVar8[-2];
      puVar8[1] = uVar15;
      bVar31 = uVar25 <= uVar19 && uVar19 != uVar25;
      if (uVar19 == uVar25) {
        bVar31 = uVar15 < puVar8[-1];
      }
      if (bVar31) {
        iVar18 = iVar12;
        puVar8 = local_34;
        puVar14 = puVar6;
        do {
          uVar19 = (puVar8 + uVar26 * 2)[1];
          puVar14[uVar26 * 2] = puVar8[uVar26 * 2];
          (puVar14 + uVar26 * 2)[1] = uVar19;
          if (uVar26 * 8 == iVar18) {
            puVar8 = puVar10;
            goto LAB_00b952a8;
          }
          iVar18 = iVar18 + 8;
          puVar8 = puVar8 + -2;
          puVar23 = puVar14 + -2;
          uVar19 = puVar14[uVar26 * 2 + -4];
          bVar31 = uVar25 <= uVar19 && uVar19 != uVar25;
          if (uVar19 == uVar25) {
            bVar31 = uVar15 < puVar14[uVar26 * 2 + -3];
          }
          puVar14 = puVar23;
        } while (bVar31);
        puVar8 = puVar23 + uVar26 * 2;
LAB_00b952a8:
        *puVar8 = uVar25;
        puVar8[1] = uVar15;
      }
      uVar27 = uVar27 + 1;
      iVar12 = iVar12 + -8;
      puVar6 = puVar6 + 2;
      local_34 = local_34 + 2;
    } while (uVar27 != local_40);
  }
  puVar6 = puVar10 + -2;
  iVar12 = 0;
  puVar7 = puVar7 + -2;
  do {
    bVar31 = *param_3 <= *puVar10;
    if (*puVar10 == *param_3) {
      bVar31 = param_3[1] <= puVar10[1];
    }
    uVar26 = (uint)!bVar31;
    puVar8 = param_3;
    if (uVar26 != 0) {
      puVar8 = puVar10;
    }
    puVar10 = puVar10 + uVar26 * 2;
    uVar27 = puVar8[1];
    *(uint *)((int)param_1 + iVar12) = *puVar8;
    uVar15 = puVar7[1];
    ((uint *)((int)param_1 + iVar12))[1] = uVar27;
    bVar31 = *puVar6 <= *puVar7;
    if (*puVar7 == *puVar6) {
      bVar31 = puVar6[1] <= uVar15;
    }
    uVar27 = (uint)!bVar31;
    puVar14 = puVar7 + uVar27 * 2;
    puVar8 = puVar7;
    if (uVar27 != 0) {
      puVar8 = puVar6;
    }
    puVar6 = puVar6 + uVar27 * -2;
    puVar7 = puVar14 + -2;
    uVar27 = puVar8[1];
    uVar28 = uVar28 - 1;
    puVar23 = (uint *)((int)param_1 + ((param_2 * 8 + -8) - iVar12));
    *puVar23 = *puVar8;
    iVar12 = iVar12 + 8;
    puVar23[1] = uVar27;
    param_3 = param_3 + (uVar26 ^ 1) * 2;
  } while (uVar28 != 0);
  puVar6 = puVar6 + 2;
  if ((param_2 & 1) != 0) {
    bVar31 = puVar6 <= param_3;
    puVar8 = puVar10;
    if (!bVar31) {
      puVar8 = param_3;
    }
    uVar28 = puVar8[1];
    *(uint *)((int)param_1 + iVar12) = *puVar8;
    ((uint *)((int)param_1 + iVar12))[1] = uVar28;
    puVar10 = puVar10 + (uint)bVar31 * 2;
    param_3 = param_3 + (uint)!bVar31 * 2;
  }
  if (param_3 == puVar6) {
    puVar7 = puVar14;
  }
  if (param_3 == puVar6 && puVar10 == puVar7) {
    return;
  }
  FUN_00fb7254();
LAB_00b954dc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xb954dc);
  (*pcVar1)();
LAB_00b94ac0:
  if (param_4 < uVar28) goto LAB_00b954dc;
  puVar10 = param_3 + uVar28 * 2;
  uVar27 = 0;
  puVar7 = param_1;
  while( true ) {
    iVar12 = uVar26 - 3;
    if (uVar26 < 3) {
      iVar12 = 0;
    }
    if (puVar7 < param_1 + iVar12 * 2) {
      uVar15 = *puVar6;
      uVar19 = puVar6[1];
      do {
        uVar9 = *puVar7;
        uVar13 = puVar7[1];
        uVar20 = puVar7[3];
        uVar25 = puVar7[2];
        bVar31 = uVar15 < uVar9;
        if (uVar15 == uVar9) {
          bVar31 = uVar19 < uVar13;
        }
        iVar18 = uVar27 + !bVar31;
        puVar8 = param_3;
        if (!bVar31 == 0) {
          puVar8 = puVar10 + -2;
        }
        puVar8[uVar27 * 2] = uVar9;
        (puVar8 + uVar27 * 2)[1] = uVar13;
        bVar31 = uVar15 < uVar25;
        if (uVar15 == uVar25) {
          bVar31 = uVar19 < uVar20;
        }
        puVar8 = param_3;
        if (!bVar31 == 0) {
          puVar8 = puVar10 + -4;
        }
        puVar8[iVar18 * 2] = uVar25;
        uVar27 = puVar7[4];
        (puVar8 + iVar18 * 2)[1] = uVar20;
        iVar18 = iVar18 + (uint)!bVar31;
        uVar25 = puVar7[5];
        bVar31 = uVar15 < uVar27;
        if (uVar15 == uVar27) {
          bVar31 = uVar19 < uVar25;
        }
        puVar8 = param_3;
        if (!bVar31 == 0) {
          puVar8 = puVar10 + -6;
        }
        puVar10 = puVar10 + -8;
        puVar8[iVar18 * 2] = uVar27;
        iVar11 = iVar18 + (uint)!bVar31;
        uVar9 = puVar7[6];
        (puVar8 + iVar18 * 2)[1] = uVar25;
        uVar25 = puVar7[7];
        puVar7 = puVar7 + 8;
        bVar31 = uVar15 < uVar9;
        if (uVar15 == uVar9) {
          bVar31 = uVar19 < uVar25;
        }
        puVar8 = puVar10;
        if (!bVar31 != 0) {
          puVar8 = param_3;
        }
        uVar27 = iVar11 + (uint)!bVar31;
        puVar8[iVar11 * 2] = uVar9;
        (puVar8 + iVar11 * 2)[1] = uVar25;
      } while (puVar7 < param_1 + iVar12 * 2);
    }
    if (puVar7 < param_1 + uVar26 * 2) {
      uVar15 = *puVar6;
      uVar19 = puVar6[1];
      do {
        uVar25 = *puVar7;
        uVar9 = puVar7[1];
        puVar10 = puVar10 + -2;
        bVar31 = uVar15 < uVar25;
        if (uVar15 == uVar25) {
          bVar31 = uVar19 < uVar9;
        }
        puVar8 = puVar10;
        if (!bVar31 != 0) {
          puVar8 = param_3;
        }
        puVar7 = puVar7 + 2;
        iVar12 = uVar27 * 2;
        puVar8[iVar12] = uVar25;
        uVar27 = uVar27 + !bVar31;
        (puVar8 + iVar12)[1] = uVar9;
      } while (puVar7 < param_1 + uVar26 * 2);
    }
    if (uVar26 == uVar28) break;
    puVar10 = puVar10 + -2;
    uVar26 = *puVar7;
    uVar15 = puVar7[1];
    puVar7 = puVar7 + 2;
    iVar12 = uVar27 * 2;
    param_3[iVar12] = uVar26;
    uVar27 = uVar27 + 1;
    (param_3 + iVar12)[1] = uVar15;
    uVar26 = uVar28;
  }
  FUN_016dd1aa(param_1,param_3,uVar27 << 3);
  param_2 = uVar28 - uVar27;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar27 * 2;
  puVar10 = param_3 + uVar28 * 2 + -2;
  uVar26 = param_2;
  puVar7 = param_1;
  do {
    uVar15 = *puVar10;
    uVar19 = puVar10[1];
    puVar10 = puVar10 + -2;
    *puVar7 = uVar15;
    puVar7[1] = uVar19;
    puVar7 = puVar7 + 2;
    uVar26 = uVar26 - 1;
  } while (uVar26 != 0);
  if (uVar28 < uVar27) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar27,uVar28,uVar28,&DAT_018af348);
  }
  local_50 = (uint *)0x0;
  if (param_2 < 0x21) goto LAB_00b946d8;
  goto LAB_00b94748;
}

