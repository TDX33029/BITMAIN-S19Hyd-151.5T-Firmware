// FUN_0167efb0 @ 0167efb0 size=7520 calls_out=14 calls_in=12
// strings: 

void FUN_0167efb0(undefined4 *param_1,uint *param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined *puVar17;
  uint unaff_r4;
  int iVar18;
  code *pcVar19;
  uint uVar20;
  uint uVar21;
  code *pcVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  uint local_88;
  undefined4 local_84;
  uint local_80;
  undefined4 local_7c;
  int local_68;
  uint local_64;
  undefined4 local_5c;
  code *local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined1 local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  code *local_30;
  uint *local_2c;
  code *local_28;
  
  uVar20 = param_3[4];
  uVar23 = param_3[5];
  if (uVar23 < uVar20) {
LAB_0167efd0:
    uVar5 = 0;
    goto LAB_0167efd4;
  }
  iVar24 = *param_3;
  if ((iVar24 - 1U < 2) || ((char)param_2[0x13] == '\x02')) {
    if ((char)param_3[6] != '\0') {
      uVar29 = FUN_016b394c(param_2,param_3);
      uVar25 = (uint)(uVar29 >> 0x20);
      if ((uVar29 & 1) != 0) {
        *param_1 = 2;
        param_1[1] = uVar25;
        return;
      }
      if (uVar20 < uVar23) {
        uVar26 = param_3[3];
        iVar24 = param_3[2];
        puVar7 = (uint *)(iVar24 + uVar26);
        do {
          uVar8 = *param_2;
          uVar11 = param_2[0x15];
          do {
            uVar25 = *(uint *)(uVar11 + (uVar25 + *(byte *)((int)param_2 +
                                                           *(byte *)(iVar24 + uVar20) + 0x5c)) * 4);
            if (uVar25 <= uVar8) break;
            if (uVar23 <= uVar20 + 3) break;
            iVar14 = iVar24 + uVar20;
            unaff_r4 = uVar25 + *(byte *)((int)param_2 + *(byte *)(iVar14 + 1) + 0x5c);
            uVar25 = *(uint *)(uVar11 + unaff_r4 * 4);
            if (uVar25 <= uVar8) {
              uVar20 = uVar20 + 1;
              break;
            }
            unaff_r4 = uVar25 + *(byte *)((int)param_2 + *(byte *)(iVar14 + 2) + 0x5c);
            uVar25 = *(uint *)(uVar11 + unaff_r4 * 4);
            if (uVar25 <= uVar8) {
              uVar20 = uVar20 + 2;
              break;
            }
            uVar25 = *(uint *)(uVar11 + (uVar25 + *(byte *)((int)param_2 +
                                                           *(byte *)(iVar14 + 3) + 0x5c)) * 4);
            if (uVar25 <= uVar8) {
              uVar20 = uVar20 + 3;
              break;
            }
            uVar20 = uVar20 + 4;
          } while (uVar20 < uVar23);
          uVar11 = uVar26;
          if (uVar8 < uVar25) {
LAB_0167f95c:
            uVar20 = uVar20 + 1;
          }
          else {
            if (uVar25 == 0) {
LAB_0167f980:
              if (uVar25 != 0) {
                bVar28 = uVar25 <= param_2[2];
                bVar27 = param_2[2] == uVar25;
                if (!bVar28 || bVar27) {
                  bVar28 = param_2[3] <= uVar25;
                  bVar27 = uVar25 == param_2[3];
                }
                if (!bVar28 || bVar27) {
                  uVar5 = FUN_01680e24(param_2,uVar25);
                  param_1[1] = uVar5;
                  param_1[2] = uVar20;
                  *param_1 = 1;
                  return;
                }
              }
              if ((uVar25 == 0) || (uVar25 < param_2[4])) {
                if (uVar25 == 0) goto LAB_0167efd0;
              }
              else if (uVar25 <= param_2[5]) {
                uVar29 = FUN_01680ef8(param_2,uVar25);
                local_34 = (uint *)(uVar29 >> 0x20);
                pbVar6 = (byte *)uVar29;
                if (0x3ffffffff < uVar29) goto LAB_01680b78;
                unaff_r4 = uVar20 + 1;
                switch(local_34) {
                case (uint *)0x0:
                  goto switchD_0167f9e0_caseD_0;
                case (uint *)0x1:
                  if (uVar26 < unaff_r4) {
                    puVar17 = &DAT_01d0749c;
LAB_01680c00:
                    /* WARNING: Subroutine does not return */
                    FUN_012faff4(unaff_r4,uVar26,uVar26,puVar17);
                  }
                  uVar8 = uVar26 - unaff_r4;
                  if (uVar26 == unaff_r4) goto LAB_0167fe8c;
                  uVar15 = (uint)*pbVar6;
                  puVar13 = (uint *)(iVar24 + unaff_r4);
                  uVar10 = unaff_r4;
                  if (uVar8 < 4) {
                    while (uVar15 != *(byte *)(iVar24 + uVar10)) {
                      uVar10 = uVar10 + 1;
                      if (uVar26 == uVar10) goto LAB_0167fe8c;
                    }
                    puVar13 = (uint *)(iVar24 + uVar10);
                  }
                  else {
                    uVar12 = uVar15 * 0x1010101;
                    if ((~(0x1010100 - (*puVar13 ^ uVar12) | *puVar13 ^ uVar12) & 0x80808080) == 0)
                    {
                      uVar10 = 4 - ((uint)puVar13 & 3);
                      if (uVar8 < 9) {
                        if (uVar10 < uVar8) {
                          iVar14 = (((uint)puVar13 & 3) - uVar20) + -5;
                          while (uVar15 != *(byte *)(iVar24 - iVar14)) {
                            iVar14 = iVar14 + -1;
                            if (uVar26 + iVar14 == 0) goto LAB_0167fe8c;
                          }
                          puVar13 = (uint *)(iVar24 - iVar14);
                          break;
                        }
                      }
                      else {
                        for (puVar13 = (uint *)((int)puVar13 + uVar10); puVar13 <= puVar7 + -2;
                            puVar13 = puVar13 + 2) {
                          uVar8 = ~(0x1010100 - (*puVar13 ^ uVar12) | *puVar13 ^ uVar12);
                          bVar27 = (uVar8 & 0x80808080) == 0;
                          if (bVar27) {
                            uVar8 = ~(0x1010100 - (puVar13[1] ^ uVar12) | puVar13[1] ^ uVar12);
                          }
                          if (!bVar27 || (uVar8 & 0x80808080) != 0) break;
                        }
                        if (puVar13 < puVar7) {
                          while (uVar15 != (byte)*puVar13) {
                            puVar13 = (uint *)((int)puVar13 + 1);
                            if (puVar13 == puVar7) goto LAB_01680760;
                          }
                          break;
                        }
                      }
LAB_01680760:
                      unaff_r4 = uVar20 + 1;
                      goto LAB_0167fe8c;
                    }
                    while (uVar15 != *(byte *)(iVar24 + uVar10)) {
                      uVar10 = uVar10 + 1;
                      if (uVar26 == uVar10) goto LAB_01680760;
                    }
                    puVar13 = (uint *)(iVar24 + uVar10);
                  }
                  break;
                case (uint *)0x2:
                  if (uVar26 < unaff_r4) {
                    puVar17 = &DAT_01d074ac;
                    goto LAB_01680c00;
                  }
                  if (uVar26 == unaff_r4) goto LAB_0167fe8c;
                  uVar10 = (uint)*pbVar6;
                  uVar15 = (uint)pbVar6[1];
                  uVar8 = unaff_r4;
                  if (uVar26 - unaff_r4 < 4) {
                    while (uVar10 != *(byte *)(iVar24 + uVar8) &&
                           uVar15 != *(byte *)(iVar24 + uVar8)) {
                      uVar8 = uVar8 + 1;
                      if (uVar26 == uVar8) goto LAB_0167fe8c;
                    }
                    puVar13 = (uint *)(iVar24 + uVar8);
                  }
                  else {
                    uVar21 = *(uint *)(iVar24 + unaff_r4);
                    uVar12 = uVar21 ^ uVar10 * 0x1010101;
                    if (((~(0x1010100 - uVar12 | uVar12) & 0x80808080) == 0) &&
                       (uVar21 = uVar21 ^ uVar15 * 0x1010101,
                       (~(0x1010100 - uVar21 | uVar21) & 0x80808080) == 0)) {
                      puVar13 = (uint *)(iVar24 + unaff_r4 & 0xfffffffc);
                      do {
                        puVar13 = puVar13 + 1;
                        if (puVar7 + -1 < puVar13) break;
                        uVar8 = *puVar13 ^ uVar10 * 0x1010101;
                        uVar8 = ~(0x1010100 - uVar8 | uVar8);
                        bVar27 = (uVar8 & 0x80808080) == 0;
                        if (bVar27) {
                          uVar8 = *puVar13 ^ uVar15 * 0x1010101;
                          uVar8 = ~(0x1010100 - uVar8 | uVar8);
                        }
                      } while (bVar27 && (uVar8 & 0x80808080) == 0);
                      if (puVar7 <= puVar13) goto LAB_01680760;
                      while (uVar10 != (byte)*puVar13 && uVar15 != (byte)*puVar13) {
                        puVar13 = (uint *)((int)puVar13 + 1);
                        if (puVar13 == puVar7) goto LAB_0167fe8c;
                      }
                    }
                    else {
                      while (uVar10 != *(byte *)(iVar24 + uVar8) &&
                             uVar15 != *(byte *)(iVar24 + uVar8)) {
                        uVar8 = uVar8 + 1;
                        if (uVar26 == uVar8) goto LAB_01680760;
                      }
                      puVar13 = (uint *)(iVar24 + uVar8);
                    }
                  }
                  break;
                case (uint *)0x3:
                  if (unaff_r4 <= uVar26) {
                    bVar1 = *pbVar6;
                    bVar2 = pbVar6[1];
                    bVar3 = pbVar6[2];
                    goto LAB_0167fac8;
                  }
                  puVar17 = &DAT_01d074bc;
                  goto LAB_01680c00;
                }
                iVar14 = (int)puVar13 - (iVar24 + unaff_r4);
                goto LAB_0167fd4c;
              }
              if (uVar26 <= uVar20) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar20,uVar26,&DAT_01d0751c);
              }
              uVar4 = *(undefined1 *)(iVar24 + uVar20);
              local_58 = (code *)uVar20;
LAB_016807f4:
              local_5c._1_3_ = CONCAT21(local_5c._2_2_,uVar4);
              goto LAB_0168089c;
            }
            bVar28 = uVar25 <= param_2[6];
            bVar27 = param_2[6] == uVar25;
            if (!bVar28 || bVar27) {
              bVar28 = param_2[7] <= uVar25;
              bVar27 = uVar25 == param_2[7];
            }
            if (bVar28 && !bVar27) goto LAB_0167f980;
            bVar28 = uVar25 <= param_2[4];
            bVar27 = param_2[4] == uVar25;
            if (!bVar28 || bVar27) {
              bVar28 = param_2[5] <= uVar25;
              bVar27 = uVar25 == param_2[5];
            }
            if (bVar28 && !bVar27) goto LAB_0167f95c;
            uVar29 = FUN_01680ef8(param_2,uVar25);
            local_34 = (uint *)(uVar29 >> 0x20);
            pbVar6 = (byte *)uVar29;
            if (0x3ffffffff < uVar29) goto LAB_01680b78;
            uVar8 = uVar20 + 1;
            switch(local_34) {
            case (uint *)0x0:
              goto switchD_0167f9e0_caseD_0;
            case (uint *)0x1:
              if (uVar26 < uVar8) goto LAB_01680c24;
              uVar30 = FUN_0167ca50(*pbVar6,iVar24 + uVar8,uVar26 - uVar8);
              break;
            case (uint *)0x2:
              if (uVar26 < uVar8) goto LAB_01680c18;
              uVar30 = FUN_0167cd9c(*pbVar6,pbVar6[1],iVar24 + uVar8,uVar26 - uVar8);
              break;
            case (uint *)0x3:
              if (uVar26 < uVar8) goto LAB_01680c0c;
              bVar1 = *pbVar6;
              bVar2 = pbVar6[1];
              bVar3 = pbVar6[2];
LAB_0167fac8:
              uVar30 = FUN_00655b94(bVar1,bVar2,bVar3,iVar24 + uVar20 + 1,uVar26 - (uVar20 + 1));
            }
            iVar14 = (int)((ulonglong)uVar30 >> 0x20);
            if ((int)uVar30 != 1) goto LAB_01680760;
LAB_0167fd4c:
            unaff_r4 = uVar20 + 1;
            uVar20 = iVar14 + unaff_r4;
          }
        } while (uVar20 < uVar23);
      }
      else {
        uVar11 = param_3[3];
      }
LAB_0167fe8c:
      if (uVar23 < uVar11) {
        uVar20 = param_2[0x16];
        uVar25 = uVar25 + *(byte *)((int)param_2 + *(byte *)(param_3[2] + uVar23) + 0x5c);
        if (uVar20 <= uVar25) goto LAB_01680d10;
        uVar20 = *(uint *)(param_2[0x15] + uVar25 * 4);
        if (uVar20 != 0) {
          uVar25 = param_2[2];
          bVar28 = uVar20 <= uVar25;
          bVar27 = uVar25 == uVar20;
          if (!bVar28 || bVar27) {
            uVar25 = param_2[3];
            bVar28 = uVar25 <= uVar20;
            bVar27 = uVar20 == uVar25;
          }
          if (!bVar28 || bVar27) {
            uVar11 = uVar23;
            goto LAB_016806d0;
          }
        }
        uVar5 = 0;
        uVar11 = unaff_r4;
        if (uVar20 == 0) {
LAB_01680024:
          uVar5 = 0;
        }
        else {
          uVar25 = param_2[1];
          if (uVar25 == uVar20) {
            local_5c._1_3_ = CONCAT21(local_5c._2_2_,*(byte *)(param_3[2] + uVar23));
            local_58 = (code *)uVar23;
            goto LAB_0168089c;
          }
        }
      }
      else {
        uVar23 = FUN_016c2c08(*(byte *)((int)param_2 + 0x15b) + 1);
        uVar8 = param_2[0x16];
        uVar20 = (uVar23 & 0xffff) >> 8;
        if ((uVar23 & 1) != 0) {
          uVar20 = uVar23 >> 0x10;
        }
        uVar25 = uVar20 + uVar25;
        if (uVar8 <= uVar25) goto LAB_01680d1c;
        uVar5 = 0;
        uVar20 = *(uint *)(param_2[0x15] + uVar25 * 4);
        if ((uVar20 == 0) || (uVar25 = param_2[2], uVar20 < uVar25)) goto LAB_01680024;
        uVar25 = param_2[3];
        if (uVar20 <= uVar25) {
LAB_016806d0:
          uVar25 = FUN_01680e24(param_2);
          uVar5 = 1;
        }
      }
      *param_1 = uVar5;
      local_80 = uVar25;
LAB_01680934:
      param_1[1] = local_80;
      param_1[2] = uVar11;
      return;
    }
    uVar29 = FUN_016b394c(param_2,param_3);
    uVar25 = (uint)(uVar29 >> 0x20);
    if ((uVar29 & 1) != 0) goto LAB_0167fe68;
    if (uVar23 <= uVar20) {
      uVar26 = param_3[3];
      local_7c = 0;
      uVar11 = unaff_r4;
      goto LAB_01680830;
    }
    uVar26 = param_3[3];
    iVar24 = param_3[2];
    puVar7 = (uint *)(iVar24 + uVar26);
    local_7c = 0;
    uVar11 = uVar20;
LAB_0167f084:
    uVar20 = *param_2;
    uVar8 = param_2[0x15];
    do {
      uVar25 = *(uint *)(uVar8 + (uVar25 + *(byte *)((int)param_2 +
                                                    *(byte *)(iVar24 + uVar11) + 0x5c)) * 4);
      if (uVar25 <= uVar20) break;
      if (uVar23 <= uVar11 + 3) break;
      iVar14 = iVar24 + uVar11;
      uVar25 = *(uint *)(uVar8 + (uVar25 + *(byte *)((int)param_2 + *(byte *)(iVar14 + 1) + 0x5c)) *
                                 4);
      if (uVar25 <= uVar20) {
        uVar11 = uVar11 + 1;
        break;
      }
      uVar25 = *(uint *)(uVar8 + (uVar25 + *(byte *)((int)param_2 + *(byte *)(iVar14 + 2) + 0x5c)) *
                                 4);
      if (uVar25 <= uVar20) {
        uVar11 = uVar11 + 2;
        break;
      }
      uVar25 = *(uint *)(uVar8 + (uVar25 + *(byte *)((int)param_2 + *(byte *)(iVar14 + 3) + 0x5c)) *
                                 4);
      if (uVar25 <= uVar20) {
        uVar11 = uVar11 + 3;
        break;
      }
      uVar11 = uVar11 + 4;
    } while (uVar11 < uVar23);
    if (uVar20 < uVar25) {
LAB_0167f12c:
      uVar11 = uVar11 + 1;
      goto LAB_0167f60c;
    }
    if (uVar25 != 0) {
      bVar28 = uVar25 <= param_2[6];
      bVar27 = param_2[6] == uVar25;
      if (!bVar28 || bVar27) {
        bVar28 = param_2[7] <= uVar25;
        bVar27 = uVar25 == param_2[7];
      }
      if (bVar28 && !bVar27) goto LAB_0167f150;
      bVar28 = uVar25 <= param_2[4];
      bVar27 = param_2[4] == uVar25;
      if (!bVar28 || bVar27) {
        bVar28 = param_2[5] <= uVar25;
        bVar27 = uVar25 == param_2[5];
      }
      if (bVar28 && !bVar27) goto LAB_0167f12c;
      uVar29 = FUN_01680ef8(param_2,uVar25);
      local_34 = (uint *)(uVar29 >> 0x20);
      puVar9 = (undefined1 *)uVar29;
      if (0x3ffffffff < uVar29) goto LAB_01680b78;
      uVar8 = uVar11 + 1;
      switch(local_34) {
      case (uint *)0x0:
        goto switchD_0167f9e0_caseD_0;
      case (uint *)0x1:
        if (uVar26 < uVar8) goto LAB_01680c24;
        uVar30 = FUN_0167ca50(*puVar9,iVar24 + uVar8,uVar26 - uVar8);
        break;
      case (uint *)0x2:
        if (uVar26 < uVar8) goto LAB_01680c18;
        uVar30 = FUN_0167cd9c(*puVar9,puVar9[1],iVar24 + uVar8,uVar26 - uVar8);
        break;
      case (uint *)0x3:
        if (uVar26 < uVar8) goto LAB_01680c0c;
        uVar30 = FUN_00655b94(*puVar9,puVar9[1],puVar9[2],iVar24 + uVar8,uVar26 - uVar8);
      }
      if ((int)uVar30 == 1) {
        uVar11 = (int)((ulonglong)uVar30 >> 0x20) + uVar8;
        goto LAB_0167f60c;
      }
      goto LAB_0168082c;
    }
LAB_0167f150:
    if (((uVar25 != 0) && (param_2[2] <= uVar25)) && (uVar25 <= param_2[3])) {
      local_80 = 0;
      if (param_2[0x5e] != 1) {
        uVar10 = param_2[0x5a];
        uVar8 = uVar25 - param_2[2] >> (param_2[0x57] & 0x1f);
        uVar20 = uVar8 << 1;
        if (uVar10 <= uVar8 * 2) goto LAB_01680d28;
        uVar20 = uVar20 | 1;
        if (uVar10 <= uVar20) goto LAB_01680d34;
        uVar8 = *(uint *)(param_2[0x59] + uVar8 * 8);
        uVar20 = *(uint *)(param_2[0x59] + uVar20 * 4);
        if ((CARRY4(uVar20,uVar8)) || (param_2[0x5d] < uVar20 + uVar8)) goto LAB_01680ba8;
        if (uVar20 == 0) goto LAB_01680d44;
        local_80 = *(uint *)(param_2[0x5c] + uVar8 * 4);
      }
      local_7c = 1;
      bVar28 = uVar25 <= param_2[4];
      bVar27 = param_2[4] == uVar25;
      if (!bVar28 || bVar27) {
        bVar28 = param_2[5] <= uVar25;
        bVar27 = uVar25 == param_2[5];
      }
      local_88 = uVar11;
      if (bVar28 && !bVar27) goto LAB_0167f12c;
      uVar29 = FUN_01680ef8(param_2,uVar25);
      local_34 = (uint *)(uVar29 >> 0x20);
      puVar9 = (undefined1 *)uVar29;
      if (0x3ffffffff < uVar29) goto LAB_01680b78;
      uVar20 = uVar11 + 1;
      switch(local_34) {
      case (uint *)0x0:
        goto switchD_0167f9e0_caseD_0;
      case (uint *)0x1:
        if (uVar26 < uVar20) {
          puVar17 = &DAT_01d0749c;
LAB_01680d00:
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar20,uVar26,uVar26,puVar17);
        }
        uVar30 = FUN_0167ca50(*puVar9,iVar24 + uVar20,uVar26 - uVar20);
        break;
      case (uint *)0x2:
        if (uVar26 < uVar20) {
          puVar17 = &DAT_01d074ac;
          goto LAB_01680d00;
        }
        uVar30 = FUN_0167cd9c(*puVar9,puVar9[1],iVar24 + uVar20,uVar26 - uVar20);
        break;
      case (uint *)0x3:
        if (uVar26 < uVar20) {
          puVar17 = &DAT_01d074bc;
          goto LAB_01680d00;
        }
        uVar30 = FUN_00655b94(*puVar9,puVar9[1],puVar9[2],iVar24 + uVar20,uVar26 - uVar20);
      }
      if ((int)uVar30 == 1) {
        uVar11 = (int)((ulonglong)uVar30 >> 0x20) + uVar20;
        local_7c = 1;
        goto LAB_0167f60c;
      }
      local_7c = 1;
      goto LAB_01680830;
    }
    if ((uVar25 == 0) || (uVar25 < param_2[4])) {
      if (uVar25 == 0) {
        *param_1 = local_7c;
        param_1[1] = local_80;
        param_1[2] = local_88;
        return;
      }
LAB_016807e4:
      if (uVar26 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar11,uVar26,&DAT_01d0751c);
      }
      uVar4 = *(undefined1 *)(iVar24 + uVar11);
      local_58 = (code *)uVar11;
      goto LAB_016807f4;
    }
    if (param_2[5] < uVar25) goto LAB_016807e4;
    uVar29 = FUN_01680ef8(param_2,uVar25);
    local_34 = (uint *)(uVar29 >> 0x20);
    pbVar6 = (byte *)uVar29;
    if (0x3ffffffff < uVar29) goto LAB_01680b78;
    unaff_r4 = uVar11 + 1;
    uVar20 = unaff_r4;
    switch(local_34) {
    case (uint *)0x0:
      goto switchD_0167f9e0_caseD_0;
    case (uint *)0x1:
      if (uVar26 < unaff_r4) {
        puVar17 = &DAT_01d0749c;
        goto LAB_01680c00;
      }
      uVar8 = uVar26 - unaff_r4;
      if (uVar26 == unaff_r4) goto LAB_0168082c;
      uVar10 = (uint)*pbVar6;
      puVar13 = (uint *)(iVar24 + unaff_r4);
      if (uVar8 < 4) {
        while (uVar10 != *(byte *)(iVar24 + uVar20)) {
          uVar20 = uVar20 + 1;
          if (uVar26 == uVar20) goto LAB_0168082c;
        }
      }
      else {
        uVar15 = uVar10 * 0x1010101;
        if ((~(0x1010100 - (*puVar13 ^ uVar15) | *puVar13 ^ uVar15) & 0x80808080) == 0) {
          uVar20 = 4 - ((uint)puVar13 & 3);
          if (uVar8 < 9) {
            if (uVar20 < uVar8) {
              iVar14 = (((uint)puVar13 & 3) - uVar11) + -5;
              while (uVar10 != *(byte *)(iVar24 - iVar14)) {
                iVar14 = iVar14 + -1;
                if (uVar26 + iVar14 == 0) goto LAB_0168082c;
              }
              puVar13 = (uint *)(iVar24 - iVar14);
              break;
            }
            goto LAB_0168082c;
          }
          for (puVar13 = (uint *)((int)puVar13 + uVar20); puVar13 <= puVar7 + -2;
              puVar13 = puVar13 + 2) {
            uVar20 = ~(0x1010100 - (*puVar13 ^ uVar15) | *puVar13 ^ uVar15);
            bVar27 = (uVar20 & 0x80808080) == 0;
            if (bVar27) {
              uVar20 = ~(0x1010100 - (puVar13[1] ^ uVar15) | puVar13[1] ^ uVar15);
            }
            if (!bVar27 || (uVar20 & 0x80808080) != 0) break;
          }
          if (puVar7 <= puVar13) goto LAB_0168082c;
          while (uVar10 != (byte)*puVar13) {
            puVar13 = (uint *)((int)puVar13 + 1);
            if (puVar13 == puVar7) goto LAB_0168082c;
          }
          break;
        }
        while (uVar10 != *(byte *)(iVar24 + uVar20)) {
          uVar20 = uVar20 + 1;
          if (uVar26 == uVar20) goto LAB_0168082c;
        }
      }
LAB_0167f600:
      puVar13 = (uint *)(iVar24 + uVar20);
      break;
    case (uint *)0x2:
      if (uVar26 < unaff_r4) {
        puVar17 = &DAT_01d074ac;
        goto LAB_01680c00;
      }
      if (uVar26 == unaff_r4) goto LAB_0168082c;
      uVar11 = (uint)*pbVar6;
      uVar8 = (uint)pbVar6[1];
      if (uVar26 - unaff_r4 < 4) {
        while (uVar11 != *(byte *)(iVar24 + uVar20) && uVar8 != *(byte *)(iVar24 + uVar20)) {
          uVar20 = uVar20 + 1;
          if (uVar26 == uVar20) goto LAB_0168082c;
        }
        puVar13 = (uint *)(iVar24 + uVar20);
      }
      else {
        uVar15 = *(uint *)(iVar24 + unaff_r4);
        uVar10 = uVar15 ^ uVar11 * 0x1010101;
        if (((~(0x1010100 - uVar10 | uVar10) & 0x80808080) != 0) ||
           (uVar15 = uVar15 ^ uVar8 * 0x1010101, (~(0x1010100 - uVar15 | uVar15) & 0x80808080) != 0)
           ) {
          while (uVar11 != *(byte *)(iVar24 + uVar20) && uVar8 != *(byte *)(iVar24 + uVar20)) {
            uVar20 = uVar20 + 1;
            if (uVar26 == uVar20) goto LAB_0168082c;
          }
          goto LAB_0167f600;
        }
        puVar13 = (uint *)(iVar24 + unaff_r4 & 0xfffffffc);
        do {
          puVar13 = puVar13 + 1;
          if (puVar7 + -1 < puVar13) break;
          uVar20 = *puVar13 ^ uVar11 * 0x1010101;
          uVar20 = ~(0x1010100 - uVar20 | uVar20);
          bVar27 = (uVar20 & 0x80808080) == 0;
          if (bVar27) {
            uVar20 = *puVar13 ^ uVar8 * 0x1010101;
            uVar20 = ~(0x1010100 - uVar20 | uVar20);
          }
        } while (bVar27 && (uVar20 & 0x80808080) == 0);
        if (puVar7 <= puVar13) goto LAB_0168082c;
        while (uVar11 != (byte)*puVar13 && uVar8 != (byte)*puVar13) {
          puVar13 = (uint *)((int)puVar13 + 1);
          if (puVar13 == puVar7) goto LAB_0168082c;
        }
      }
      break;
    case (uint *)0x3:
      if (uVar26 < unaff_r4) {
        puVar17 = &DAT_01d074bc;
        goto LAB_01680c00;
      }
      uVar30 = FUN_00655b94(*pbVar6,pbVar6[1],pbVar6[2],iVar24 + unaff_r4,uVar26 - unaff_r4);
      iVar14 = (int)((ulonglong)uVar30 >> 0x20);
      if ((int)uVar30 == 1) goto LAB_0167f608;
      goto LAB_0168082c;
    }
    iVar14 = (int)puVar13 - (iVar24 + unaff_r4);
LAB_0167f608:
    uVar11 = iVar14 + unaff_r4;
LAB_0167f60c:
    if (uVar23 <= uVar11) goto LAB_0168082c;
    goto LAB_0167f084;
  }
  iVar14 = param_3[1];
  if ((char)param_3[6] == '\0') {
    uVar11 = param_2[100];
    uVar29 = FUN_016b394c(param_2,param_3);
    uVar25 = (uint)(uVar29 >> 0x20);
    if ((uVar29 & 1) != 0) goto LAB_0167fe68;
    iVar18 = param_3[2];
    uVar26 = param_3[3];
    (**(code **)(param_2[0x11] + 0x10))
              (&local_34,param_2[0x10] + (*(int *)(param_2[0x11] + 8) - 1U & 0xfffffff8) + 8,iVar18,
               uVar26,uVar20,uVar23);
    uVar5 = 0;
    if (local_34 == (uint *)0x0) {
LAB_01680018:
      *param_1 = uVar5;
      return;
    }
    if (uVar11 == 0) {
      local_44 = 0;
      local_5c = (uint **)iVar24;
      local_58 = (code *)iVar14;
      local_54 = iVar18;
      local_50 = uVar26;
      local_4c = uVar20;
      local_48 = uVar23;
      FUN_0168105c(&local_5c,local_30);
      uVar29 = FUN_016b394c(param_2,&local_5c);
      uVar25 = (uint)(uVar29 >> 0x20);
      if ((uVar29 & 1) != 0) {
LAB_0168000c:
        param_1[1] = uVar25;
        uVar5 = 2;
        goto LAB_01680018;
      }
    }
    if (local_30 < uVar23) {
      local_80 = 0;
      pcVar19 = local_30;
      do {
        uVar20 = *param_2;
        uVar8 = param_2[0x15];
        pcVar22 = pcVar19;
        do {
          uVar25 = *(uint *)(uVar8 + (uVar25 + *(byte *)((int)param_2 +
                                                        *(byte *)(iVar18 + (int)pcVar22) + 0x5c)) *
                                     4);
          if (uVar25 <= uVar20) break;
          if (uVar23 <= (int)pcVar22 + 3U) break;
          iVar16 = iVar18 + (int)pcVar22;
          uVar25 = *(uint *)(uVar8 + (uVar25 + *(byte *)((int)param_2 + *(byte *)(iVar16 + 1) + 0x5c
                                                        )) * 4);
          if (uVar25 <= uVar20) {
            pcVar22 = (code *)((int)pcVar22 + 1);
            break;
          }
          uVar25 = *(uint *)(uVar8 + (uVar25 + *(byte *)((int)param_2 + *(byte *)(iVar16 + 2) + 0x5c
                                                        )) * 4);
          if (uVar25 <= uVar20) {
            pcVar22 = (code *)((int)pcVar22 + 2);
            break;
          }
          uVar25 = *(uint *)(uVar8 + (uVar25 + *(byte *)((int)param_2 + *(byte *)(iVar16 + 3) + 0x5c
                                                        )) * 4);
          if (uVar25 <= uVar20) {
            pcVar22 = (code *)((int)pcVar22 + 3U);
            break;
          }
          pcVar22 = (code *)((int)pcVar22 + 4);
        } while (pcVar22 < uVar23);
        if (uVar20 < uVar25) {
LAB_01680398:
          pcVar19 = (code *)((int)pcVar22 + 1);
        }
        else if (uVar25 == 0) {
LAB_016803bc:
          if (((uVar25 == 0) || (uVar25 < param_2[2])) || (param_2[3] < uVar25)) {
            if ((uVar25 == 0) || (uVar25 < param_2[4])) {
              if (uVar25 == 0) {
LAB_01680ad8:
                *param_1 = local_80;
                param_1[1] = local_84;
                param_1[2] = local_88;
                return;
              }
            }
            else if (uVar25 <= param_2[5]) {
              uVar29 = FUN_01680ef8(param_2,uVar25);
              local_34 = (uint *)(uVar29 >> 0x20);
              puVar9 = (undefined1 *)uVar29;
              if (0x3ffffffff < uVar29) goto LAB_01680b78;
              uVar8 = (int)pcVar22 + 1;
              switch(local_34) {
              case (uint *)0x0:
                goto switchD_0167f9e0_caseD_0;
              case (uint *)0x1:
                if (uVar26 < uVar8) goto LAB_01680c24;
                uVar30 = FUN_0167ca50(*puVar9,iVar18 + uVar8,uVar26 - uVar8);
                break;
              case (uint *)0x2:
                if (uVar26 < uVar8) goto LAB_01680c18;
                uVar30 = FUN_0167cd9c(*puVar9,puVar9[1],iVar18 + uVar8,uVar26 - uVar8);
                break;
              case (uint *)0x3:
                if (uVar26 < uVar8) goto LAB_01680c0c;
                uVar30 = FUN_00655b94(*puVar9,puVar9[1],puVar9[2],iVar18 + uVar8,uVar26 - uVar8);
              }
              if ((int)uVar30 == 1) {
                pcVar19 = (code *)((int)((ulonglong)uVar30 >> 0x20) + uVar8);
                goto LAB_016805f8;
              }
              break;
            }
            if (uVar26 <= pcVar22) goto LAB_01680d80;
            uVar4 = *(undefined1 *)(iVar18 + (int)pcVar22);
            goto LAB_01680aac;
          }
          local_84 = 0;
          if (param_2[0x5e] != 1) {
            uVar10 = param_2[0x5a];
            uVar8 = uVar25 - param_2[2] >> (param_2[0x57] & 0x1f);
            uVar20 = uVar8 << 1;
            if (uVar10 <= uVar8 * 2) {
LAB_01680d28:
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar20,uVar10,&DAT_01d0866c);
            }
            uVar20 = uVar20 | 1;
            if (uVar10 <= uVar20) {
LAB_01680d34:
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar20,uVar10,&DAT_01d0860c);
            }
            uVar8 = *(uint *)(param_2[0x59] + uVar8 * 8);
            uVar20 = *(uint *)(param_2[0x59] + uVar20 * 4);
            if ((CARRY4(uVar20,uVar8)) || (param_2[0x5d] < uVar20 + uVar8)) {
LAB_01680ba8:
                    /* WARNING: Subroutine does not return */
              FUN_012faff4();
            }
            if (uVar20 == 0) {
LAB_01680d44:
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(0,0,&DAT_01d085fc);
            }
            local_84 = *(undefined4 *)(param_2[0x5c] + uVar8 * 4);
          }
          local_80 = 1;
          bVar28 = uVar25 <= param_2[4];
          bVar27 = param_2[4] == uVar25;
          if (!bVar28 || bVar27) {
            bVar28 = param_2[5] <= uVar25;
            bVar27 = uVar25 == param_2[5];
          }
          local_88 = (uint)pcVar22;
          if (bVar28 && !bVar27) goto LAB_01680398;
          uVar29 = FUN_01680ef8(param_2,uVar25);
          local_34 = (uint *)(uVar29 >> 0x20);
          puVar9 = (undefined1 *)uVar29;
          if (0x3ffffffff < uVar29) goto LAB_01680b78;
          uVar8 = (int)pcVar22 + 1;
          switch(local_34) {
          case (uint *)0x0:
            goto switchD_0167f9e0_caseD_0;
          case (uint *)0x1:
            if (uVar26 < uVar8) goto LAB_01680c24;
            uVar30 = FUN_0167ca50(*puVar9,iVar18 + uVar8,uVar26 - uVar8);
            break;
          case (uint *)0x2:
            if (uVar26 < uVar8) goto LAB_01680c18;
            uVar30 = FUN_0167cd9c(*puVar9,puVar9[1],iVar18 + uVar8,uVar26 - uVar8);
            break;
          case (uint *)0x3:
            if (uVar26 < uVar8) goto LAB_01680c0c;
            uVar30 = FUN_00655b94(*puVar9,puVar9[1],puVar9[2],iVar18 + uVar8,uVar26 - uVar8);
          }
          if ((int)uVar30 != 1) {
            local_80 = 1;
            break;
          }
          pcVar19 = (code *)((int)((ulonglong)uVar30 >> 0x20) + uVar8);
          local_80 = 1;
        }
        else {
          bVar28 = uVar25 <= param_2[6];
          bVar27 = param_2[6] == uVar25;
          if (!bVar28 || bVar27) {
            bVar28 = param_2[7] <= uVar25;
            bVar27 = uVar25 == param_2[7];
          }
          if (bVar28 && !bVar27) goto LAB_016803bc;
          (**(code **)(param_2[0x11] + 0x10))
                    (&local_68,param_2[0x10] + (*(int *)(param_2[0x11] + 8) - 1U & 0xfffffff8) + 8,
                     iVar18,uVar26,pcVar22,uVar23);
          pcVar19 = (code *)local_64;
          if (local_68 != 1) goto LAB_01680ad8;
          if (local_64 <= pcVar22) goto LAB_01680398;
          if (uVar11 == 0) {
            local_44 = 0;
            bVar28 = uVar26 <= uVar23;
            bVar27 = uVar23 == uVar26;
            if (!bVar28 || bVar27) {
              bVar28 = uVar23 + 1 <= local_64;
              bVar27 = local_64 == uVar23 + 1;
            }
            local_40 = local_64;
            if (bVar28 && !bVar27) {
              local_54 = iVar18;
              goto LAB_01680cbc;
            }
            local_4c = local_64;
            local_5c = (uint **)iVar24;
            local_58 = (code *)iVar14;
            local_54 = iVar18;
            local_50 = uVar26;
            local_48 = uVar23;
            local_3c = uVar23;
            uVar29 = FUN_016b394c(param_2,&local_5c);
            uVar25 = (uint)(uVar29 >> 0x20);
            if ((uVar29 & 1) != 0) {
              *param_1 = 2;
              param_1[1] = uVar25;
              return;
            }
          }
        }
LAB_016805f8:
      } while (pcVar19 < uVar23);
    }
    else {
      local_80 = 0;
    }
    if (uVar23 < uVar26) {
      uVar4 = *(undefined1 *)(iVar18 + uVar23);
      uVar20 = FUN_016810e0(param_2,uVar25,uVar4);
      if (uVar20 != 0) {
        bVar28 = uVar20 <= param_2[2];
        bVar27 = param_2[2] == uVar20;
        if (!bVar28 || bVar27) {
          bVar28 = param_2[3] <= uVar20;
          bVar27 = uVar20 == param_2[3];
        }
        if (!bVar28 || bVar27) {
          uVar26 = uVar23;
          goto LAB_01680990;
        }
      }
      if (uVar20 != 0) {
        if (param_2[1] != uVar20) goto LAB_016809a0;
        goto LAB_01680a10;
      }
    }
    else {
      uVar20 = FUN_01681010(param_2,uVar25);
      if ((uVar20 != 0) && (param_2[2] <= uVar20)) {
        if (param_2[3] < uVar20) goto LAB_016809a0;
LAB_01680990:
        local_84 = FUN_01680e24(param_2);
        local_80 = 1;
        local_88 = uVar26;
        goto LAB_016809a0;
      }
    }
LAB_016809a0:
    *param_1 = local_80;
    param_1[1] = local_84;
    param_1[2] = local_88;
    return;
  }
  uVar11 = param_2[100];
  uVar29 = FUN_016b394c(param_2,param_3);
  uVar25 = (uint)(uVar29 >> 0x20);
  if ((uVar29 & 1) != 0) {
LAB_0167fe68:
    *param_1 = 2;
    param_1[1] = uVar25;
    return;
  }
  iVar18 = param_3[2];
  uVar26 = param_3[3];
  (**(code **)(param_2[0x11] + 0x10))
            (&local_34,param_2[0x10] + (*(int *)(param_2[0x11] + 8) - 1U & 0xfffffff8) + 8,iVar18,
             uVar26,uVar20,uVar23);
  uVar5 = 0;
  if (local_34 == (uint *)0x0) {
LAB_0167efd4:
    *param_1 = uVar5;
    return;
  }
  if (uVar11 == 0) {
    local_44 = 1;
    local_5c = (uint **)iVar24;
    local_58 = (code *)iVar14;
    local_54 = iVar18;
    local_50 = uVar26;
    local_4c = uVar20;
    local_48 = uVar23;
    FUN_0168105c(&local_5c,local_30);
    uVar29 = FUN_016b394c(param_2,&local_5c);
    uVar25 = (uint)(uVar29 >> 0x20);
    if ((uVar29 & 1) != 0) {
      uVar5 = 2;
      param_1[1] = uVar25;
      goto LAB_0167efd4;
    }
  }
  if (local_30 < uVar23) {
    pcVar22 = local_30;
LAB_0168004c:
    uVar8 = *param_2;
    uVar20 = param_2[0x15];
    do {
      uVar25 = *(uint *)(uVar20 + (uVar25 + *(byte *)((int)param_2 +
                                                     *(byte *)(iVar18 + (int)pcVar22) + 0x5c)) * 4);
      if (uVar25 <= uVar8) break;
      if (uVar23 <= (int)pcVar22 + 3U) break;
      iVar16 = iVar18 + (int)pcVar22;
      uVar25 = *(uint *)(uVar20 + (uVar25 + *(byte *)((int)param_2 + *(byte *)(iVar16 + 1) + 0x5c))
                                  * 4);
      if (uVar25 <= uVar8) {
        pcVar22 = (code *)((int)pcVar22 + 1);
        break;
      }
      uVar25 = *(uint *)(uVar20 + (uVar25 + *(byte *)((int)param_2 + *(byte *)(iVar16 + 2) + 0x5c))
                                  * 4);
      if (uVar25 <= uVar8) {
        pcVar22 = (code *)((int)pcVar22 + 2);
        break;
      }
      uVar25 = *(uint *)(uVar20 + (uVar25 + *(byte *)((int)param_2 + *(byte *)(iVar16 + 3) + 0x5c))
                                  * 4);
      if (uVar25 <= uVar8) {
        pcVar22 = (code *)((int)pcVar22 + 3U);
        break;
      }
      pcVar22 = (code *)((int)pcVar22 + 4);
    } while (pcVar22 < uVar23);
    if (uVar8 < uVar25) {
LAB_016800f0:
      uVar20 = (int)pcVar22 + 1;
LAB_016802bc:
      pcVar22 = (code *)uVar20;
      if (uVar23 <= uVar20) goto LAB_016809b4;
      goto LAB_0168004c;
    }
    if (uVar25 == 0) {
LAB_01680114:
      if (uVar25 != 0) {
        bVar28 = uVar25 <= param_2[2];
        bVar27 = param_2[2] == uVar25;
        if (!bVar28 || bVar27) {
          bVar28 = param_2[3] <= uVar25;
          bVar27 = uVar25 == param_2[3];
        }
        if (!bVar28 || bVar27) {
          uVar5 = FUN_01680e24(param_2,uVar25);
          param_1[1] = uVar5;
          param_1[2] = pcVar22;
          *param_1 = 1;
          return;
        }
      }
      if ((uVar25 != 0) && (param_2[4] <= uVar25)) {
        if (param_2[5] < uVar25) {
LAB_01680974:
          if (uVar26 <= pcVar22) {
LAB_01680d80:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(pcVar22,uVar26,&DAT_01d0751c);
          }
          uVar4 = *(undefined1 *)(iVar18 + (int)pcVar22);
LAB_01680aac:
          local_5c = (uint **)((uint)CONCAT21(local_5c._2_2_,uVar4) << 8);
          local_58 = pcVar22;
          uVar5 = FUN_016cc61c(&local_5c);
          *param_1 = 2;
          param_1[1] = uVar5;
          return;
        }
        uVar29 = FUN_01680ef8(param_2,uVar25);
        local_34 = (uint *)(uVar29 >> 0x20);
        puVar9 = (undefined1 *)uVar29;
        if (0x3ffffffff < uVar29) {
LAB_01680b78:
          local_5c = &local_34;
          local_58 = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005af82d,&local_5c,&DAT_01d082fc);
        }
        uVar20 = (int)pcVar22 + 1;
        switch(local_34) {
        case (uint *)0x0:
switchD_0167f9e0_caseD_0:
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_004ce59c,0x3d,&DAT_01d082ec);
        case (uint *)0x1:
          if (uVar26 < uVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(uVar20,uVar26,uVar26,&DAT_01d0749c);
          }
          uVar30 = FUN_0167ca50(*puVar9,iVar18 + uVar20,uVar26 - uVar20);
          break;
        case (uint *)0x2:
          if (uVar26 < uVar20) {
            puVar17 = &DAT_01d074ac;
LAB_01680c50:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(uVar20,uVar26,uVar26,puVar17);
          }
          uVar30 = FUN_0167cd9c(*puVar9,puVar9[1],iVar18 + uVar20,uVar26 - uVar20);
          break;
        case (uint *)0x3:
          if (uVar26 < uVar20) {
            puVar17 = &DAT_01d074bc;
            goto LAB_01680c50;
          }
          uVar30 = FUN_00655b94(*puVar9,puVar9[1],puVar9[2],iVar18 + uVar20,uVar26 - uVar20);
        }
        if ((int)uVar30 == 1) {
          uVar20 = (int)((ulonglong)uVar30 >> 0x20) + uVar20;
          goto LAB_016802bc;
        }
        goto LAB_016809b4;
      }
      if (uVar25 != 0) goto LAB_01680974;
    }
    else {
      bVar28 = uVar25 <= param_2[6];
      bVar27 = param_2[6] == uVar25;
      if (!bVar28 || bVar27) {
        bVar28 = param_2[7] <= uVar25;
        bVar27 = uVar25 == param_2[7];
      }
      if (bVar28 && !bVar27) goto LAB_01680114;
      (**(code **)(param_2[0x11] + 0x10))
                (&local_68,param_2[0x10] + (*(int *)(param_2[0x11] + 8) - 1U & 0xfffffff8) + 8,
                 iVar18,uVar26,pcVar22,uVar23);
      uVar20 = local_64;
      if (local_68 == 1) {
        if (local_64 <= pcVar22) goto LAB_016800f0;
        if (uVar11 != 0) goto LAB_016802bc;
        local_44 = 1;
        bVar28 = uVar26 <= uVar23;
        bVar27 = uVar23 == uVar26;
        if (!bVar28 || bVar27) {
          bVar28 = uVar23 + 1 <= local_64;
          bVar27 = local_64 == uVar23 + 1;
        }
        local_40 = local_64;
        local_54 = iVar18;
        if (bVar28 && !bVar27) {
LAB_01680cbc:
          local_30 = FUN_0065fd28;
          local_34 = &local_40;
          local_28 = FUN_012fd02c;
          local_2c = &local_38;
          local_5c = (uint **)iVar24;
          local_58 = (code *)iVar14;
          local_50 = uVar26;
          local_48 = uVar23;
          local_3c = uVar23;
          local_38 = uVar26;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005a4e9e,&local_34,&DAT_01d08154);
        }
        local_4c = local_64;
        local_5c = (uint **)iVar24;
        local_58 = (code *)iVar14;
        local_50 = uVar26;
        local_48 = uVar23;
        local_3c = uVar23;
        uVar29 = FUN_016b394c(param_2,&local_5c);
        uVar25 = (uint)(uVar29 >> 0x20);
        if ((uVar29 & 1) != 0) goto LAB_0168000c;
        goto LAB_016802bc;
      }
    }
    uVar5 = 0;
    goto LAB_01680018;
  }
LAB_016809b4:
  if (uVar23 < uVar26) {
    uVar4 = *(undefined1 *)(iVar18 + uVar23);
    uVar25 = FUN_016810e0(param_2,uVar25,uVar4);
    uVar20 = 0;
    if (uVar25 != 0) {
      uVar20 = param_2[2];
      bVar28 = uVar25 <= uVar20;
      bVar27 = uVar20 == uVar25;
      if (!bVar28 || bVar27) {
        uVar20 = param_2[3];
        bVar28 = uVar20 <= uVar25;
        bVar27 = uVar25 == uVar20;
      }
      uVar26 = uVar23;
      if (!bVar28 || bVar27) goto LAB_01680a78;
    }
    uVar5 = 0;
    if (uVar25 != 0) {
      uVar20 = param_2[1];
      if (uVar20 == uVar25) {
LAB_01680a10:
        local_5c = (uint **)((uint)CONCAT21((short)((uint)local_5c >> 0x10),uVar4) << 8);
        local_58 = (code *)uVar23;
        uVar5 = FUN_016cc61c(&local_5c);
        *param_1 = 2;
        param_1[1] = uVar5;
        return;
      }
    }
  }
  else {
    uVar25 = FUN_01681010(param_2,uVar25);
    uVar5 = 0;
    uVar20 = 0;
    if (((uVar25 == 0) || (uVar20 = param_2[2], uVar25 < uVar20)) ||
       (uVar20 = param_2[3], uVar20 < uVar25)) goto LAB_01680a88;
LAB_01680a78:
    uVar20 = FUN_01680e24(param_2);
    uVar5 = 1;
    uVar23 = uVar26;
  }
LAB_01680a88:
  *param_1 = uVar5;
  param_1[1] = uVar20;
  param_1[2] = uVar23;
  return;
LAB_0168082c:
  uVar11 = local_88;
LAB_01680830:
  if (uVar23 < uVar26) {
    uVar20 = param_2[0x16];
    uVar25 = uVar25 + *(byte *)((int)param_2 + *(byte *)(param_3[2] + uVar23) + 0x5c);
    if (uVar20 <= uVar25) {
LAB_01680d10:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar25,uVar20,&DAT_01d0828c);
    }
    uVar20 = *(uint *)(param_2[0x15] + uVar25 * 4);
    if (uVar20 != 0) {
      bVar28 = uVar20 <= param_2[2];
      bVar27 = param_2[2] == uVar20;
      if (!bVar28 || bVar27) {
        bVar28 = param_2[3] <= uVar20;
        bVar27 = uVar20 == param_2[3];
      }
      uVar26 = uVar23;
      if (!bVar28 || bVar27) goto LAB_01680918;
    }
    if ((uVar20 != 0) && (param_2[1] == uVar20)) {
      local_5c._1_3_ = CONCAT21(local_5c._2_2_,*(byte *)(param_3[2] + uVar23));
      local_58 = (code *)uVar23;
LAB_0168089c:
      local_5c = (uint **)((uint)local_5c._1_3_ << 8);
      uVar5 = FUN_016cc61c(&local_5c);
      *param_1 = 2;
      param_1[1] = uVar5;
      return;
    }
  }
  else {
    uVar23 = FUN_016c2c08(*(byte *)((int)param_2 + 0x15b) + 1);
    uVar8 = param_2[0x16];
    uVar20 = (uVar23 & 0xffff) >> 8;
    if ((uVar23 & 1) != 0) {
      uVar20 = uVar23 >> 0x10;
    }
    uVar25 = uVar20 + uVar25;
    if (uVar8 <= uVar25) {
LAB_01680d1c:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar25,uVar8,&DAT_01d2f26c);
    }
    uVar20 = *(uint *)(param_2[0x15] + uVar25 * 4);
    if (((uVar20 != 0) && (param_2[2] <= uVar20)) && (uVar20 <= param_2[3])) {
LAB_01680918:
      uVar11 = uVar26;
      local_80 = FUN_01680e24(param_2);
      local_7c = 1;
    }
  }
  *param_1 = local_7c;
  goto LAB_01680934;
LAB_01680c0c:
  puVar17 = &DAT_01d074bc;
  goto LAB_01680c2c;
LAB_01680c18:
  puVar17 = &DAT_01d074ac;
  goto LAB_01680c2c;
LAB_01680c24:
  puVar17 = &DAT_01d0749c;
LAB_01680c2c:
                    /* WARNING: Subroutine does not return */
  FUN_012faff4(uVar8,uVar26,uVar26,puVar17);
}

