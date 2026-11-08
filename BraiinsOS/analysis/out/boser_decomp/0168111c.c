// FUN_0168111c @ 0168111c size=8464 calls_out=7 calls_in=6
// strings: 

void FUN_0168111c(undefined4 *param_1,uint *param_2,int param_3)

{
  uint3 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint extraout_r2;
  undefined *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint extraout_r3;
  uint extraout_r3_00;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  uint uVar26;
  byte *pbVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint *puVar33;
  bool bVar34;
  bool bVar35;
  ulonglong uVar36;
  uint local_7c;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_60;
  uint local_34;
  undefined4 local_30;
  code *local_2c;
  
  uVar31 = *(uint *)(param_3 + 0x10);
  uVar32 = *(uint *)(param_3 + 0x14);
  if (uVar32 < uVar31) {
    *param_1 = 0;
    return;
  }
  if (*(char *)(param_3 + 0x18) == '\0') {
    uVar36 = FUN_016b3ad4(param_2,param_3);
    uVar20 = (uint)(uVar36 >> 0x20);
    if ((uVar36 & 1) != 0) {
      *param_1 = 2;
      param_1[1] = uVar20;
      return;
    }
    if (uVar31 != uVar32) {
      uVar18 = param_2[0x57] & 0x1f;
      pbVar25 = *(byte **)(param_3 + 8);
      uVar5 = param_2[2];
      uVar3 = param_2[3];
      uVar4 = param_2[4];
      uVar6 = param_2[5];
      uVar7 = param_2[6];
      uVar8 = param_2[7];
      uVar9 = param_2[0x5c];
      uVar21 = param_2[0x5d];
      uVar23 = param_2[0x5e];
      uVar30 = param_2[0x59];
      uVar13 = param_2[0x5a];
      uVar12 = param_2[0x61];
      local_60 = *(uint *)(param_3 + 0xc);
      uVar15 = uVar31 + 3;
      puVar33 = (uint *)param_2[0x60];
      if (0xfffffffc < uVar31) {
        uVar15 = 0xffffffff;
      }
      uVar24 = *param_2;
      uVar22 = uVar12 << 2;
      uVar29 = param_2[0x15];
      local_6c = 0;
LAB_01681c5c:
      local_2c = (code *)(uVar32 - 1);
      if (uVar31 <= uVar32 - 1) {
        uVar32 = uVar32 - 2;
        do {
          uVar16 = uVar32;
          uVar20 = *(uint *)(uVar29 + (uVar20 + *(byte *)((int)param_2 + pbVar25[uVar16 + 1] + 0x5c)
                                      ) * 4);
          local_2c = (code *)(uVar16 + 1);
          bVar35 = uVar24 <= uVar20;
          bVar34 = uVar20 == uVar24;
          if (bVar35 && !bVar34) {
            bVar35 = uVar15 <= local_2c;
            bVar34 = local_2c == (code *)uVar15;
          }
          if (!bVar35 || bVar34) goto LAB_01681c68;
          uVar20 = *(uint *)(uVar29 + (uVar20 + *(byte *)((int)param_2 + pbVar25[uVar16] + 0x5c)) *
                                      4);
          if (uVar20 <= uVar24) {
            local_2c = (code *)uVar16;
            goto LAB_01681c68;
          }
          uVar20 = *(uint *)(uVar29 + (uVar20 + *(byte *)((int)param_2 + pbVar25[uVar16 - 1] + 0x5c)
                                      ) * 4);
          if (uVar20 <= uVar24) {
            local_2c = (code *)(uVar16 - 1);
            goto LAB_01681c68;
          }
          uVar20 = *(uint *)(uVar29 + (uVar20 + *(byte *)((int)param_2 + pbVar25[uVar16 - 2] + 0x5c)
                                      ) * 4);
          if (uVar20 <= uVar24) {
            local_2c = (code *)(uVar16 - 2);
            goto LAB_01681c68;
          }
          uVar32 = uVar16 - 4;
        } while (uVar31 <= uVar16 - 3);
        local_2c = (code *)(uVar16 - 3);
      }
LAB_01681c68:
      if (uVar24 < uVar20) {
LAB_01681c70:
        uVar32 = (uint)local_2c;
      }
      else {
        bVar2 = 0;
        if (uVar20 == 0) {
LAB_01681e00:
          if ((!(bool)(bVar2 & uVar5 <= uVar20)) || (uVar3 < uVar20)) {
            if ((uVar20 == 0) || (uVar20 < uVar4)) {
              if (uVar20 == 0) {
                *param_1 = local_6c;
                param_1[1] = local_68;
                param_1[2] = local_7c;
                return;
              }
LAB_01682e8c:
              if (local_60 <= local_2c) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(local_2c,local_60,&DAT_01d0752c);
              }
              bVar2 = pbVar25[(int)local_2c];
              goto LAB_01682e98;
            }
            if (uVar6 < uVar20) goto LAB_01682e8c;
            local_34 = uVar20 - uVar4 >> uVar18;
            if (uVar12 == 0) goto LAB_0168311c;
            if (*puVar33 <= local_34) goto LAB_01682fe0;
            uVar32 = local_34 << 3 | 4;
            if (uVar22 <= uVar32) goto LAB_01683130;
            uVar26 = (uint)*(byte *)((int)puVar33 + uVar32);
            uVar32 = local_34 << 3 | 5;
            uVar16 = uVar32 + uVar26;
            if ((CARRY4(uVar32,uVar26)) || (uVar22 < uVar16)) goto LAB_01682fcc;
            if (3 < uVar26) goto LAB_016830a0;
            pbVar27 = (byte *)((int)puVar33 + uVar32);
            switch(uVar26) {
            case 0:
              goto switchD_0168147c_caseD_0;
            case 1:
              if (local_60 < local_2c) goto LAB_01683020;
              if (local_2c != (code *)0x0) {
                uVar32 = (uint)*pbVar27;
                pbVar27 = pbVar25 + (int)local_2c;
                if (local_2c < 4) {
                  do {
                    uVar36 = ZEXT48(local_2c) << 0x20;
                    if (pbVar27 <= pbVar25) goto LAB_016828b4;
                    pbVar27 = pbVar27 + -1;
                    local_2c = (code *)(uint)*pbVar27;
                  } while ((code *)uVar32 != local_2c);
                }
                else {
                  uVar16 = uVar32 * 0x1010101;
                  if ((~(0x1010100 - (*(uint *)(pbVar27 + -4) ^ uVar16) |
                        *(uint *)(pbVar27 + -4) ^ uVar16) & 0x80808080) == 0) {
                    iVar28 = (int)local_2c - ((uint)pbVar27 & 3);
                    if (local_2c < 9) {
                      pbVar27 = pbVar25 + iVar28;
                      do {
                        uVar36 = ZEXT48(local_2c) << 0x20;
                        if (pbVar27 <= pbVar25) goto LAB_016828b4;
                        pbVar27 = pbVar27 + -1;
                        local_2c = (code *)(uint)*pbVar27;
                      } while ((code *)uVar32 != local_2c);
                    }
                    else {
                      do {
                        iVar17 = iVar28;
                        if ((iVar17 < 8) ||
                           (local_2c = (code *)~(0x1010100 -
                                                 (*(uint *)(pbVar25 + iVar17 + -8) ^ uVar16) |
                                                *(uint *)(pbVar25 + iVar17 + -8) ^ uVar16),
                           ((uint)local_2c & 0x80808080) != 0)) break;
                        local_2c = (code *)~(0x1010100 - (*(uint *)(pbVar25 + iVar17 + -4) ^ uVar16)
                                            | *(uint *)(pbVar25 + iVar17 + -4) ^ uVar16);
                        iVar28 = iVar17 + -8;
                      } while (((uint)local_2c & 0x80808080) == 0);
                      pbVar27 = pbVar25 + iVar17;
                      do {
                        uVar36 = ZEXT48(local_2c) << 0x20;
                        if (pbVar27 <= pbVar25) goto LAB_016828b4;
                        pbVar27 = pbVar27 + -1;
                        local_2c = (code *)(uint)*pbVar27;
                      } while ((code *)uVar32 != local_2c);
                    }
                  }
                  else {
                    do {
                      uVar36 = ZEXT48(local_2c) << 0x20;
                      if (pbVar27 <= pbVar25) goto LAB_016828b4;
                      pbVar27 = pbVar27 + -1;
                      local_2c = (code *)(uint)*pbVar27;
                    } while ((code *)uVar32 != local_2c);
                  }
                }
                goto LAB_016828a0;
              }
              break;
            case 2:
              if (local_60 < local_2c) goto LAB_0168302c;
              if (local_2c != (code *)0x0) {
                uVar32 = (uint)*pbVar27;
                uVar16 = (uint)pbVar27[1];
                pbVar27 = pbVar25 + (int)local_2c;
                if (local_2c < 4) {
                  do {
                    uVar36 = ZEXT48(local_2c) << 0x20;
                    if (pbVar27 <= pbVar25) goto LAB_016828b4;
                    pbVar27 = pbVar27 + -1;
                    local_2c = (code *)(uint)*pbVar27;
                  } while (((code *)uVar32 != local_2c) && ((code *)uVar16 != local_2c));
                }
                else {
                  uVar26 = *(uint *)(pbVar27 + -4) ^ uVar32 * 0x1010101;
                  if (((~(0x1010100 - uVar26 | uVar26) & 0x80808080) == 0) &&
                     (uVar26 = *(uint *)(pbVar27 + -4) ^ uVar16 * 0x1010101,
                     (~(0x1010100 - uVar26 | uVar26) & 0x80808080) == 0)) {
                    uVar26 = (int)local_2c - ((uint)pbVar27 & 3);
                    do {
                      uVar11 = uVar26;
                      if ((int)uVar11 < 4) break;
                      uVar26 = *(uint *)(pbVar25 + (uVar11 - 4));
                      uVar10 = uVar26 ^ uVar32 * 0x1010101;
                      uVar10 = ~(0x1010100 - uVar10 | uVar10);
                      bVar34 = (uVar10 & 0x80808080) == 0;
                      if (bVar34) {
                        uVar10 = uVar26 ^ uVar16 * 0x1010101;
                        uVar26 = uVar11 - 4;
                        uVar10 = ~(0x1010100 - uVar10 | uVar10);
                      }
                    } while (bVar34 && (uVar10 & 0x80808080) == 0);
                    pbVar27 = pbVar25 + uVar11;
                    do {
                      uVar36 = (ulonglong)uVar11 << 0x20;
                      if (pbVar27 <= pbVar25) goto LAB_016828b4;
                      pbVar27 = pbVar27 + -1;
                      uVar11 = (uint)*pbVar27;
                    } while ((uVar32 != uVar11) && (uVar16 != uVar11));
                  }
                  else {
                    do {
                      uVar36 = ZEXT48(local_2c) << 0x20;
                      if (pbVar27 <= pbVar25) goto LAB_016828b4;
                      pbVar27 = pbVar27 + -1;
                      local_2c = (code *)(uint)*pbVar27;
                    } while ((code *)uVar32 != local_2c && (code *)uVar16 != local_2c);
                  }
                }
                goto LAB_01682804;
              }
              break;
            case 3:
              goto switchD_01681dac_caseD_3;
            }
          }
          else {
            local_68 = 0;
            if (uVar23 != 1) {
              uVar32 = uVar20 - uVar5 >> uVar18;
              if (uVar13 <= uVar32 * 2) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar32 << 1,uVar13,&DAT_01d0866c);
              }
              uVar16 = uVar32 << 1 | 1;
              if (uVar13 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar16,uVar13,&DAT_01d0860c);
              }
              uVar32 = *(uint *)(uVar30 + uVar32 * 8);
              uVar16 = *(uint *)(uVar30 + uVar16 * 4);
              if ((CARRY4(uVar16,uVar32)) || (uVar21 < uVar16 + uVar32)) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(uVar32,uVar16 + uVar32,uVar21,&DAT_01d0867c);
              }
              if (uVar16 == 0) goto LAB_01683150;
              local_68 = *(undefined4 *)(uVar9 + uVar32 * 4);
            }
            local_7c = (int)local_2c + 1;
            local_6c = 1;
            if ((uVar20 < uVar4) || (uVar6 < uVar20)) goto LAB_01681c70;
            local_34 = uVar20 - uVar4 >> uVar18;
            if (uVar12 == 0) goto LAB_0168311c;
            if (*puVar33 <= local_34) goto LAB_01682fe0;
            uVar32 = local_34 << 3 | 4;
            if (uVar22 <= uVar32) {
LAB_01683130:
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar32,uVar22,&DAT_01d082bc);
            }
            uVar26 = (uint)*(byte *)((int)puVar33 + uVar32);
            uVar32 = local_34 << 3 | 5;
            uVar16 = uVar32 + uVar26;
            if ((CARRY4(uVar32,uVar26)) || (uVar22 < uVar16)) {
LAB_01682fcc:
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(uVar32,uVar16,uVar22,&DAT_01d082cc);
            }
            if (3 < uVar26) {
LAB_016830a0:
              local_34 = uVar26;
              goto LAB_016830dc;
            }
            pbVar27 = (byte *)((int)puVar33 + uVar32);
            switch(uVar26) {
            case 0:
              goto switchD_0168147c_caseD_0;
            case 1:
              if (local_60 < local_2c) {
LAB_01683020:
                puVar19 = &DAT_01d074cc;
                goto LAB_01683058;
              }
              if (local_2c != (code *)0x0) {
                uVar32 = (uint)*pbVar27;
                pbVar27 = pbVar25 + (int)local_2c;
                if (local_2c < 4) {
                  do {
                    uVar36 = ZEXT48(local_2c) << 0x20;
                    if (pbVar27 <= pbVar25) goto LAB_016828b4;
                    pbVar27 = pbVar27 + -1;
                    local_2c = (code *)(uint)*pbVar27;
                  } while ((code *)uVar32 != local_2c);
                }
                else {
                  uVar16 = uVar32 * 0x1010101;
                  if ((~(0x1010100 - (*(uint *)(pbVar27 + -4) ^ uVar16) |
                        *(uint *)(pbVar27 + -4) ^ uVar16) & 0x80808080) == 0) {
                    iVar28 = (int)local_2c - ((uint)pbVar27 & 3);
                    if (local_2c < 9) {
                      pbVar27 = pbVar25 + iVar28;
                      do {
                        uVar36 = ZEXT48(local_2c) << 0x20;
                        if (pbVar27 <= pbVar25) goto LAB_016828b4;
                        pbVar27 = pbVar27 + -1;
                        local_2c = (code *)(uint)*pbVar27;
                      } while ((code *)uVar32 != local_2c);
                    }
                    else {
                      do {
                        iVar17 = iVar28;
                        if ((iVar17 < 8) ||
                           (local_2c = (code *)~(0x1010100 -
                                                 (*(uint *)(pbVar25 + iVar17 + -8) ^ uVar16) |
                                                *(uint *)(pbVar25 + iVar17 + -8) ^ uVar16),
                           ((uint)local_2c & 0x80808080) != 0)) break;
                        local_2c = (code *)~(0x1010100 - (*(uint *)(pbVar25 + iVar17 + -4) ^ uVar16)
                                            | *(uint *)(pbVar25 + iVar17 + -4) ^ uVar16);
                        iVar28 = iVar17 + -8;
                      } while (((uint)local_2c & 0x80808080) == 0);
                      pbVar27 = pbVar25 + iVar17;
                      do {
                        uVar36 = ZEXT48(local_2c) << 0x20;
                        if (pbVar27 <= pbVar25) goto LAB_016828b4;
                        pbVar27 = pbVar27 + -1;
                        local_2c = (code *)(uint)*pbVar27;
                      } while ((code *)uVar32 != local_2c);
                    }
                  }
                  else {
                    do {
                      uVar36 = ZEXT48(local_2c) << 0x20;
                      if (pbVar27 <= pbVar25) goto LAB_016828b4;
                      pbVar27 = pbVar27 + -1;
                      local_2c = (code *)(uint)*pbVar27;
                    } while ((code *)uVar32 != local_2c);
                  }
                }
                goto LAB_016828a0;
              }
              break;
            case 2:
              if (local_60 < local_2c) {
LAB_0168302c:
                puVar19 = &DAT_01d074dc;
                goto LAB_01683058;
              }
              if (local_2c != (code *)0x0) {
                uVar32 = (uint)*pbVar27;
                uVar16 = (uint)pbVar27[1];
                pbVar27 = pbVar25 + (int)local_2c;
                if (local_2c < 4) {
                  do {
                    uVar36 = ZEXT48(local_2c) << 0x20;
                    if (pbVar27 <= pbVar25) goto LAB_016828b4;
                    pbVar27 = pbVar27 + -1;
                    local_2c = (code *)(uint)*pbVar27;
                  } while (((code *)uVar32 != local_2c) && ((code *)uVar16 != local_2c));
                }
                else {
                  uVar26 = *(uint *)(pbVar27 + -4) ^ uVar32 * 0x1010101;
                  if (((~(0x1010100 - uVar26 | uVar26) & 0x80808080) == 0) &&
                     (uVar26 = *(uint *)(pbVar27 + -4) ^ uVar16 * 0x1010101,
                     (~(0x1010100 - uVar26 | uVar26) & 0x80808080) == 0)) {
                    uVar26 = (int)local_2c - ((uint)pbVar27 & 3);
                    do {
                      uVar11 = uVar26;
                      if ((int)uVar11 < 4) break;
                      uVar26 = *(uint *)(pbVar25 + (uVar11 - 4));
                      uVar10 = uVar26 ^ uVar32 * 0x1010101;
                      uVar10 = ~(0x1010100 - uVar10 | uVar10);
                      bVar34 = (uVar10 & 0x80808080) == 0;
                      if (bVar34) {
                        uVar10 = uVar26 ^ uVar16 * 0x1010101;
                        uVar26 = uVar11 - 4;
                        uVar10 = ~(0x1010100 - uVar10 | uVar10);
                      }
                    } while (bVar34 && (uVar10 & 0x80808080) == 0);
                    pbVar27 = pbVar25 + uVar11;
                    do {
                      uVar36 = (ulonglong)uVar11 << 0x20;
                      if (pbVar27 <= pbVar25) goto LAB_016828b4;
                      pbVar27 = pbVar27 + -1;
                      uVar11 = (uint)*pbVar27;
                    } while ((uVar32 != uVar11) && (uVar16 != uVar11));
                  }
                  else {
                    do {
                      uVar36 = ZEXT48(local_2c) << 0x20;
                      if (pbVar27 <= pbVar25) goto LAB_016828b4;
                      pbVar27 = pbVar27 + -1;
                      local_2c = (code *)(uint)*pbVar27;
                    } while (((code *)uVar32 != local_2c) && ((code *)uVar16 != local_2c));
                  }
                }
                goto LAB_01682804;
              }
              break;
            case 3:
              if (local_2c <= local_60) {
                uVar36 = FUN_0168332c(*pbVar27,pbVar27[1],pbVar27[2],pbVar25,local_2c);
                goto LAB_016828b4;
              }
              goto LAB_0168308c;
            }
          }
LAB_01682180:
          uVar36 = ZEXT48(local_2c) << 0x20;
        }
        else {
          bVar2 = 1;
          bVar35 = uVar20 <= uVar7;
          bVar34 = uVar7 == uVar20;
          if (!bVar35 || bVar34) {
            bVar35 = uVar8 <= uVar20;
            bVar34 = uVar20 == uVar8;
          }
          if (bVar35 && !bVar34) goto LAB_01681e00;
          if ((uVar20 < uVar4) || (uVar6 < uVar20)) goto LAB_01681c70;
          local_34 = uVar20 - uVar4 >> uVar18;
          if (uVar12 == 0) goto LAB_0168311c;
          if (*puVar33 <= local_34) goto LAB_01682fe0;
          uVar32 = local_34 << 3 | 4;
          if (uVar22 <= uVar32) goto LAB_01683130;
          uVar26 = (uint)*(byte *)((int)puVar33 + uVar32);
          uVar32 = local_34 << 3 | 5;
          uVar16 = uVar32 + uVar26;
          if ((CARRY4(uVar32,uVar26)) || (uVar22 < uVar16)) goto LAB_01682fcc;
          if (3 < uVar26) goto LAB_016830a0;
          pbVar27 = (byte *)((int)puVar33 + uVar32);
          switch(uVar26) {
          case 0:
            goto switchD_0168147c_caseD_0;
          case 1:
            if (local_60 < local_2c) goto LAB_01683020;
            if (local_2c == (code *)0x0) goto LAB_01682180;
            uVar32 = (uint)*pbVar27;
            pbVar27 = pbVar25 + (int)local_2c;
            if (local_2c < 4) {
              do {
                uVar36 = ZEXT48(local_2c) << 0x20;
                if (pbVar27 <= pbVar25) goto LAB_016828b4;
                pbVar27 = pbVar27 + -1;
                local_2c = (code *)(uint)*pbVar27;
              } while ((code *)uVar32 != local_2c);
            }
            else {
              uVar16 = uVar32 * 0x1010101;
              if ((~(0x1010100 - (*(uint *)(pbVar27 + -4) ^ uVar16) |
                    *(uint *)(pbVar27 + -4) ^ uVar16) & 0x80808080) == 0) {
                iVar28 = (int)local_2c - ((uint)pbVar27 & 3);
                if (local_2c < 9) {
                  pbVar27 = pbVar25 + iVar28;
                  do {
                    uVar36 = ZEXT48(local_2c) << 0x20;
                    if (pbVar27 <= pbVar25) goto LAB_016828b4;
                    pbVar27 = pbVar27 + -1;
                    local_2c = (code *)(uint)*pbVar27;
                  } while ((code *)uVar32 != local_2c);
                }
                else {
                  do {
                    iVar17 = iVar28;
                    if ((iVar17 < 8) ||
                       (local_2c = (code *)~(0x1010100 - (*(uint *)(pbVar25 + iVar17 + -8) ^ uVar16)
                                            | *(uint *)(pbVar25 + iVar17 + -8) ^ uVar16),
                       ((uint)local_2c & 0x80808080) != 0)) break;
                    local_2c = (code *)~(0x1010100 - (*(uint *)(pbVar25 + iVar17 + -4) ^ uVar16) |
                                        *(uint *)(pbVar25 + iVar17 + -4) ^ uVar16);
                    iVar28 = iVar17 + -8;
                  } while (((uint)local_2c & 0x80808080) == 0);
                  pbVar27 = pbVar25 + iVar17;
                  do {
                    uVar36 = ZEXT48(local_2c) << 0x20;
                    if (pbVar27 <= pbVar25) goto LAB_016828b4;
                    pbVar27 = pbVar27 + -1;
                    local_2c = (code *)(uint)*pbVar27;
                  } while ((code *)uVar32 != local_2c);
                }
              }
              else {
                do {
                  uVar36 = ZEXT48(local_2c) << 0x20;
                  if (pbVar27 <= pbVar25) goto LAB_016828b4;
                  pbVar27 = pbVar27 + -1;
                  local_2c = (code *)(uint)*pbVar27;
                } while ((code *)uVar32 != local_2c);
              }
            }
LAB_016828a0:
            uVar36 = CONCAT44((int)pbVar27 - (int)pbVar25,1);
            break;
          case 2:
            if (local_60 < local_2c) goto LAB_0168302c;
            if (local_2c == (code *)0x0) goto LAB_01682180;
            uVar32 = (uint)*pbVar27;
            uVar16 = (uint)pbVar27[1];
            pbVar27 = pbVar25 + (int)local_2c;
            if (local_2c < 4) {
              do {
                uVar36 = ZEXT48(local_2c) << 0x20;
                if (pbVar27 <= pbVar25) goto LAB_016828b4;
                pbVar27 = pbVar27 + -1;
                local_2c = (code *)(uint)*pbVar27;
              } while (((code *)uVar32 != local_2c) && ((code *)uVar16 != local_2c));
            }
            else {
              uVar26 = *(uint *)(pbVar27 + -4) ^ uVar32 * 0x1010101;
              if (((~(0x1010100 - uVar26 | uVar26) & 0x80808080) == 0) &&
                 (uVar26 = *(uint *)(pbVar27 + -4) ^ uVar16 * 0x1010101,
                 (~(0x1010100 - uVar26 | uVar26) & 0x80808080) == 0)) {
                uVar26 = (int)local_2c - ((uint)pbVar27 & 3);
                do {
                  uVar11 = uVar26;
                  if ((int)uVar11 < 4) break;
                  uVar26 = *(uint *)(pbVar25 + (uVar11 - 4));
                  uVar10 = uVar26 ^ uVar32 * 0x1010101;
                  uVar10 = ~(0x1010100 - uVar10 | uVar10);
                  bVar34 = (uVar10 & 0x80808080) == 0;
                  if (bVar34) {
                    uVar10 = uVar26 ^ uVar16 * 0x1010101;
                    uVar26 = uVar11 - 4;
                    uVar10 = ~(0x1010100 - uVar10 | uVar10);
                  }
                } while (bVar34 && (uVar10 & 0x80808080) == 0);
                pbVar27 = pbVar25 + uVar11;
                do {
                  uVar36 = (ulonglong)uVar11 << 0x20;
                  if (pbVar27 <= pbVar25) goto LAB_016828b4;
                  pbVar27 = pbVar27 + -1;
                  uVar11 = (uint)*pbVar27;
                } while ((uVar32 != uVar11) && (uVar16 != uVar11));
              }
              else {
                do {
                  uVar36 = ZEXT48(local_2c) << 0x20;
                  if (pbVar27 <= pbVar25) goto LAB_016828b4;
                  pbVar27 = pbVar27 + -1;
                  local_2c = (code *)(uint)*pbVar27;
                } while (((code *)uVar32 != local_2c) && ((code *)uVar16 != local_2c));
              }
            }
LAB_01682804:
            uVar36 = CONCAT44((int)pbVar27 - (int)pbVar25,1);
            break;
          case 3:
switchD_01681dac_caseD_3:
            if (local_60 < local_2c) {
              puVar19 = &DAT_01d074ec;
LAB_01683058:
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,local_2c,local_60,puVar19);
            }
            uVar36 = FUN_0168332c(*pbVar27,pbVar27[1],pbVar27[2],pbVar25,local_2c);
          }
        }
LAB_016828b4:
        uVar32 = uVar31;
        if ((uVar36 & 1) != 0) {
          uVar32 = (int)(uVar36 >> 0x20) + 1;
        }
      }
      if (uVar32 == uVar31) goto code_r0x016828c8;
      goto LAB_01681c5c;
    }
    if (uVar31 == 0) {
      uVar13 = FUN_016c2c08(*(byte *)((int)param_2 + 0x15b) + 1);
      uVar12 = param_2[0x16];
      uVar32 = (uVar13 & 0xffff) >> 8;
      if ((uVar13 & 1) != 0) {
        uVar32 = uVar13 >> 0x10;
      }
      uVar32 = uVar32 + uVar20;
      if (uVar12 <= uVar32) goto LAB_01683190;
      uVar20 = *(uint *)(param_2[0x15] + uVar32 * 4);
      uVar14 = 0;
      uVar32 = extraout_r3_00;
      if (((uVar20 != 0) && (uVar18 = param_2[2], uVar18 <= uVar20)) &&
         (uVar32 = param_2[3], uVar20 <= uVar32)) {
        if (param_2[0x5e] != 1) {
LAB_01682cb8:
          uVar13 = param_2[0x5a];
          uVar31 = uVar20 - uVar18 >> (param_2[0x57] & 0x1f);
          uVar32 = uVar31 << 1;
          if (uVar13 <= uVar31 * 2) {
LAB_016831a8:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar32,uVar13,&DAT_01d0866c);
          }
          uVar32 = uVar32 | 1;
          if (uVar13 <= uVar32) {
LAB_016831b4:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar32,uVar13,&DAT_01d0860c);
          }
          uVar20 = *(uint *)(param_2[0x59] + uVar31 * 8);
          uVar32 = *(uint *)(param_2[0x59] + uVar32 * 4);
          if ((CARRY4(uVar32,uVar20)) || (param_2[0x5d] < uVar32 + uVar20)) {
LAB_016830f0:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4();
          }
          uVar31 = 0;
LAB_01682d08:
          if (uVar32 != 0) {
            uVar32 = *(uint *)(param_2[0x5c] + uVar20 * 4);
            goto LAB_01682d18;
          }
          goto LAB_01683150;
        }
        uVar32 = 0;
        uVar14 = 1;
        uVar31 = 0;
      }
    }
    else {
      uVar32 = *(uint *)(param_3 + 0xc);
      if (uVar32 <= uVar31 - 1) goto LAB_0168319c;
      bVar2 = *(byte *)(*(int *)(param_3 + 8) + (uVar31 - 1));
      uVar32 = param_2[0x16];
      uVar20 = *(byte *)((int)param_2 + bVar2 + 0x5c) + uVar20;
      if (uVar32 <= uVar20) goto LAB_0168315c;
      uVar32 = *(uint *)(param_2[0x15] + uVar20 * 4);
      if (((uVar32 == 0) || (uVar20 = param_2[2], uVar32 < uVar20)) || (param_2[3] < uVar32)) {
        uVar14 = 0;
        if (uVar32 != 0) goto LAB_01682aa0;
      }
      else {
        if (param_2[0x5e] != 1) goto LAB_01682ab8;
        uVar32 = 0;
LAB_01682d18:
        uVar14 = 1;
      }
    }
  }
  else {
    uVar36 = FUN_016b3ad4(param_2,param_3);
    uVar20 = (uint)(uVar36 >> 0x20);
    if ((uVar36 & 1) != 0) {
      *param_1 = 2;
      param_1[1] = uVar20;
      return;
    }
    if (uVar31 != uVar32) {
      uVar13 = uVar31 + 3;
      local_60 = *(uint *)(param_3 + 0xc);
      if (0xfffffffc < uVar31) {
        uVar13 = 0xffffffff;
      }
      uVar3 = param_2[0x57] & 0x1f;
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[5];
      uVar7 = param_2[6];
      uVar8 = param_2[7];
      uVar9 = param_2[0x61];
      puVar33 = (uint *)param_2[0x60];
      uVar21 = param_2[4];
      uVar12 = param_2[0x16];
      uVar30 = *param_2;
      pbVar25 = *(byte **)(param_3 + 8);
      uVar23 = param_2[0x15];
      uVar18 = uVar9 << 2;
LAB_0168132c:
      local_2c = (code *)(uVar32 - 1);
      if (uVar31 <= uVar32 - 1) {
        uVar32 = uVar32 - 2;
        do {
          uVar15 = uVar32;
          uVar20 = *(uint *)(uVar23 + (uVar20 + *(byte *)((int)param_2 + pbVar25[uVar15 + 1] + 0x5c)
                                      ) * 4);
          local_2c = (code *)(uVar15 + 1);
          bVar35 = uVar30 <= uVar20;
          bVar34 = uVar20 == uVar30;
          if (bVar35 && !bVar34) {
            bVar35 = uVar13 <= local_2c;
            bVar34 = local_2c == (code *)uVar13;
          }
          if (!bVar35 || bVar34) goto LAB_01681338;
          uVar20 = *(uint *)(uVar23 + (uVar20 + *(byte *)((int)param_2 + pbVar25[uVar15] + 0x5c)) *
                                      4);
          if (uVar20 <= uVar30) {
            local_2c = (code *)uVar15;
            goto LAB_01681338;
          }
          uVar20 = *(uint *)(uVar23 + (uVar20 + *(byte *)((int)param_2 + pbVar25[uVar15 - 1] + 0x5c)
                                      ) * 4);
          if (uVar20 <= uVar30) {
            local_2c = (code *)(uVar15 - 1);
            goto LAB_01681338;
          }
          uVar20 = *(uint *)(uVar23 + (uVar20 + *(byte *)((int)param_2 + pbVar25[uVar15 - 2] + 0x5c)
                                      ) * 4);
          if (uVar20 <= uVar30) {
            local_2c = (code *)(uVar15 - 2);
            goto LAB_01681338;
          }
          uVar32 = uVar15 - 4;
        } while (uVar31 <= uVar15 - 3);
        local_2c = (code *)(uVar15 - 3);
      }
LAB_01681338:
      if (uVar30 < uVar20) {
LAB_01681340:
        uVar32 = (uint)local_2c;
        goto LAB_01681b0c;
      }
      bVar2 = 0;
      if (uVar20 == 0) {
LAB_016814d4:
        if (((bool)(bVar2 & uVar4 <= uVar20)) && (uVar20 <= uVar5)) {
          uVar14 = 0;
          if (param_2[0x5e] != 1) {
            uVar31 = param_2[0x5a];
            uVar32 = uVar20 - uVar4 >> uVar3;
            if (uVar31 <= uVar32 * 2) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar32 << 1,uVar31,&DAT_01d0866c);
            }
            uVar20 = uVar32 << 1 | 1;
            if (uVar31 <= uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar20,uVar31,&DAT_01d0860c);
            }
            uVar32 = *(uint *)(param_2[0x59] + uVar32 * 8);
            uVar31 = *(uint *)(param_2[0x59] + uVar20 * 4);
            if ((CARRY4(uVar31,uVar32)) || (param_2[0x5d] < uVar31 + uVar32)) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(uVar32,uVar31 + uVar32,param_2[0x5d],&DAT_01d0867c);
            }
            if (uVar31 == 0) goto LAB_01683150;
            uVar14 = *(undefined4 *)(param_2[0x5c] + uVar32 * 4);
          }
          *param_1 = 1;
          param_1[1] = uVar14;
          param_1[2] = (int)local_2c + 1;
          return;
        }
        if ((uVar20 == 0) || (uVar20 < uVar21)) {
          if (uVar20 == 0) {
            *param_1 = 0;
            return;
          }
LAB_01682e00:
          if (local_60 <= local_2c) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(local_2c,local_60,&DAT_01d0752c);
          }
          bVar2 = pbVar25[(int)local_2c];
LAB_01682e98:
          local_30 = (uint *)((uint)CONCAT21(local_30._2_2_,bVar2) << 8);
          uVar14 = FUN_016cc61c(&local_30);
          *param_1 = 2;
          param_1[1] = uVar14;
          return;
        }
        if (uVar6 < uVar20) goto LAB_01682e00;
        local_34 = uVar20 - uVar21 >> uVar3;
        if (uVar9 == 0) goto LAB_0168311c;
        if (*puVar33 <= local_34) {
LAB_01682fe0:
          local_30 = &local_34;
          local_2c = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_00587011,&local_30,&DAT_01d082dc);
        }
        uVar32 = local_34 << 3 | 4;
        if (uVar18 <= uVar32) {
LAB_01683140:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar32,uVar18,&DAT_01d082bc);
        }
        uVar22 = (uint)*(byte *)((int)puVar33 + uVar32);
        uVar32 = local_34 << 3 | 5;
        uVar15 = uVar32 + uVar22;
        if ((CARRY4(uVar32,uVar22)) || (uVar18 < uVar15)) {
LAB_0168300c:
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar32,uVar15,uVar18,&DAT_01d082cc);
        }
        if (3 < uVar22) {
LAB_016830c0:
          local_34 = uVar22;
LAB_016830dc:
          local_2c = FUN_012fd02c;
          local_30 = &local_34;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005af82d,&local_30,&DAT_01d0750c);
        }
        pbVar27 = (byte *)((int)puVar33 + uVar32);
        switch(uVar22) {
        case 0:
switchD_0168147c_caseD_0:
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_004ce59c,0x3d,&DAT_01d074fc);
        case 1:
          if (local_2c <= local_60) {
            if (local_2c == (code *)0x0) goto LAB_0168165c;
            uVar32 = (uint)*pbVar27;
            pbVar27 = pbVar25 + (int)local_2c;
            if (local_2c < 4) {
              do {
                if (pbVar27 <= pbVar25) goto LAB_01681b9c;
                pbVar27 = pbVar27 + -1;
                local_2c = (code *)(uint)*pbVar27;
              } while ((code *)uVar32 != local_2c);
            }
            else {
              uVar15 = uVar32 * 0x1010101;
              if ((~(0x1010100 - (*(uint *)(pbVar27 + -4) ^ uVar15) |
                    *(uint *)(pbVar27 + -4) ^ uVar15) & 0x80808080) == 0) {
                iVar28 = (int)local_2c - ((uint)pbVar27 & 3);
                if (local_2c < 9) {
                  pbVar27 = pbVar25 + iVar28;
                  do {
                    if (pbVar27 <= pbVar25) goto LAB_01681b9c;
                    pbVar27 = pbVar27 + -1;
                    local_2c = (code *)(uint)*pbVar27;
                  } while ((code *)uVar32 != local_2c);
                }
                else {
                  do {
                    iVar17 = iVar28;
                    if ((iVar17 < 8) ||
                       (local_2c = (code *)~(0x1010100 - (*(uint *)(pbVar25 + iVar17 + -8) ^ uVar15)
                                            | *(uint *)(pbVar25 + iVar17 + -8) ^ uVar15),
                       ((uint)local_2c & 0x80808080) != 0)) break;
                    local_2c = (code *)~(0x1010100 - (*(uint *)(pbVar25 + iVar17 + -4) ^ uVar15) |
                                        *(uint *)(pbVar25 + iVar17 + -4) ^ uVar15);
                    iVar28 = iVar17 + -8;
                  } while (((uint)local_2c & 0x80808080) == 0);
                  pbVar27 = pbVar25 + iVar17;
                  do {
                    if (pbVar27 <= pbVar25) goto LAB_01681b9c;
                    pbVar27 = pbVar27 + -1;
                    local_2c = (code *)(uint)*pbVar27;
                  } while ((code *)uVar32 != local_2c);
                }
              }
              else {
                do {
                  if (pbVar27 <= pbVar25) goto LAB_01681b9c;
                  pbVar27 = pbVar27 + -1;
                  local_2c = (code *)(uint)*pbVar27;
                } while ((code *)uVar32 != local_2c);
              }
            }
            goto LAB_01681b90;
          }
          goto LAB_01683038;
        case 2:
          if (local_2c <= local_60) {
            if (local_2c == (code *)0x0) goto LAB_016816ac;
            uVar32 = (uint)*pbVar27;
            uVar15 = (uint)pbVar27[1];
            pbVar27 = pbVar25 + (int)local_2c;
            if (local_2c < 4) {
              do {
                if (pbVar27 <= pbVar25) goto LAB_01681af0;
                pbVar27 = pbVar27 + -1;
                local_2c = (code *)(uint)*pbVar27;
              } while (((code *)uVar32 != local_2c) && ((code *)uVar15 != local_2c));
            }
            else {
              uVar22 = *(uint *)(pbVar27 + -4) ^ uVar32 * 0x1010101;
              if (((~(0x1010100 - uVar22 | uVar22) & 0x80808080) == 0) &&
                 (uVar22 = *(uint *)(pbVar27 + -4) ^ uVar15 * 0x1010101,
                 (~(0x1010100 - uVar22 | uVar22) & 0x80808080) == 0)) {
                uVar22 = (int)local_2c - ((uint)pbVar27 & 3);
                do {
                  local_2c = (code *)uVar22;
                  if ((int)local_2c < 4) break;
                  uVar22 = *(uint *)(pbVar25 + ((int)local_2c - 4));
                  uVar24 = uVar22 ^ uVar32 * 0x1010101;
                  uVar24 = ~(0x1010100 - uVar24 | uVar24);
                  bVar34 = (uVar24 & 0x80808080) == 0;
                  if (bVar34) {
                    uVar24 = uVar22 ^ uVar15 * 0x1010101;
                    uVar22 = (int)local_2c - 4;
                    uVar24 = ~(0x1010100 - uVar24 | uVar24);
                  }
                } while (bVar34 && (uVar24 & 0x80808080) == 0);
                pbVar27 = pbVar25 + (int)local_2c;
                do {
                  if (pbVar27 <= pbVar25) goto LAB_01681af0;
                  pbVar27 = pbVar27 + -1;
                  local_2c = (code *)(uint)*pbVar27;
                } while (((code *)uVar32 != local_2c) && ((code *)uVar15 != local_2c));
              }
              else {
                do {
                  if (pbVar27 <= pbVar25) goto LAB_01681af0;
                  pbVar27 = pbVar27 + -1;
                  local_2c = (code *)(uint)*pbVar27;
                } while ((code *)uVar32 != local_2c && (code *)uVar15 != local_2c);
              }
            }
            goto LAB_01681ae0;
          }
          goto LAB_01683044;
        case 3:
          if (local_60 < local_2c) {
            puVar19 = &DAT_01d074ec;
            goto LAB_01683080;
          }
          uVar36 = FUN_0168332c(*pbVar27,pbVar27[1],pbVar27[2],pbVar25,local_2c);
        }
      }
      else {
        bVar2 = 1;
        bVar35 = uVar20 <= uVar7;
        bVar34 = uVar7 == uVar20;
        if (!bVar35 || bVar34) {
          bVar35 = uVar8 <= uVar20;
          bVar34 = uVar20 == uVar8;
        }
        if (bVar35 && !bVar34) goto LAB_016814d4;
        if ((uVar20 < uVar21) || (uVar6 < uVar20)) goto LAB_01681340;
        local_34 = uVar20 - uVar21 >> uVar3;
        if (uVar9 == 0) goto LAB_0168311c;
        if (*puVar33 <= local_34) goto LAB_01682fe0;
        uVar32 = local_34 << 3 | 4;
        if (uVar18 <= uVar32) goto LAB_01683140;
        uVar22 = (uint)*(byte *)((int)puVar33 + uVar32);
        uVar32 = local_34 << 3 | 5;
        uVar15 = uVar32 + uVar22;
        if ((CARRY4(uVar32,uVar22)) || (uVar18 < uVar15)) goto LAB_0168300c;
        if (3 < uVar22) goto LAB_016830c0;
        pbVar27 = (byte *)((int)puVar33 + uVar32);
        switch(uVar22) {
        case 0:
          goto switchD_0168147c_caseD_0;
        case 1:
          if (local_60 < local_2c) {
LAB_01683038:
            puVar19 = &DAT_01d074cc;
LAB_01683080:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,local_2c,local_60,puVar19);
          }
          if (local_2c == (code *)0x0) {
LAB_0168165c:
            uVar36 = ZEXT48(local_2c) << 0x20;
          }
          else {
            uVar32 = (uint)*pbVar27;
            pbVar27 = pbVar25 + (int)local_2c;
            if (local_2c < 4) {
              do {
                if (pbVar27 <= pbVar25) goto LAB_01681b9c;
                pbVar27 = pbVar27 + -1;
                local_2c = (code *)(uint)*pbVar27;
              } while ((code *)uVar32 != local_2c);
            }
            else {
              uVar15 = uVar32 * 0x1010101;
              if ((~(0x1010100 - (*(uint *)(pbVar27 + -4) ^ uVar15) |
                    *(uint *)(pbVar27 + -4) ^ uVar15) & 0x80808080) == 0) {
                iVar28 = (int)local_2c - ((uint)pbVar27 & 3);
                if (local_2c < 9) {
                  pbVar27 = pbVar25 + iVar28;
                  do {
                    if (pbVar27 <= pbVar25) goto LAB_01681b9c;
                    pbVar27 = pbVar27 + -1;
                    local_2c = (code *)(uint)*pbVar27;
                  } while ((code *)uVar32 != local_2c);
                }
                else {
                  do {
                    iVar17 = iVar28;
                    if ((iVar17 < 8) ||
                       (local_2c = (code *)~(0x1010100 - (*(uint *)(pbVar25 + iVar17 + -8) ^ uVar15)
                                            | *(uint *)(pbVar25 + iVar17 + -8) ^ uVar15),
                       ((uint)local_2c & 0x80808080) != 0)) break;
                    local_2c = (code *)~(0x1010100 - (*(uint *)(pbVar25 + iVar17 + -4) ^ uVar15) |
                                        *(uint *)(pbVar25 + iVar17 + -4) ^ uVar15);
                    iVar28 = iVar17 + -8;
                  } while (((uint)local_2c & 0x80808080) == 0);
                  pbVar27 = pbVar25 + iVar17;
                  do {
                    if (pbVar27 <= pbVar25) goto LAB_01681b9c;
                    pbVar27 = pbVar27 + -1;
                    local_2c = (code *)(uint)*pbVar27;
                  } while ((code *)uVar32 != local_2c);
                }
              }
              else {
                do {
                  if (pbVar27 <= pbVar25) goto LAB_01681b9c;
                  pbVar27 = pbVar27 + -1;
                  local_2c = (code *)(uint)*pbVar27;
                } while ((code *)uVar32 != local_2c);
              }
            }
LAB_01681b90:
            uVar36 = CONCAT44((int)pbVar27 - (int)pbVar25,1);
          }
          break;
        case 2:
          if (local_60 < local_2c) {
LAB_01683044:
            puVar19 = &DAT_01d074dc;
            goto LAB_01683080;
          }
          if (local_2c == (code *)0x0) {
LAB_016816ac:
            uVar36 = ZEXT48(local_2c) << 0x20;
          }
          else {
            uVar32 = (uint)*pbVar27;
            uVar15 = (uint)pbVar27[1];
            pbVar27 = pbVar25 + (int)local_2c;
            if (local_2c < 4) {
              do {
                if (pbVar27 <= pbVar25) goto LAB_01681af0;
                pbVar27 = pbVar27 + -1;
                local_2c = (code *)(uint)*pbVar27;
              } while (((code *)uVar32 != local_2c) && ((code *)uVar15 != local_2c));
            }
            else {
              uVar22 = *(uint *)(pbVar27 + -4) ^ uVar32 * 0x1010101;
              if (((~(0x1010100 - uVar22 | uVar22) & 0x80808080) == 0) &&
                 (uVar22 = *(uint *)(pbVar27 + -4) ^ uVar15 * 0x1010101,
                 (~(0x1010100 - uVar22 | uVar22) & 0x80808080) == 0)) {
                uVar22 = (int)local_2c - ((uint)pbVar27 & 3);
                do {
                  local_2c = (code *)uVar22;
                  if ((int)local_2c < 4) break;
                  uVar22 = *(uint *)(pbVar25 + ((int)local_2c - 4));
                  uVar24 = uVar22 ^ uVar32 * 0x1010101;
                  uVar24 = ~(0x1010100 - uVar24 | uVar24);
                  bVar34 = (uVar24 & 0x80808080) == 0;
                  if (bVar34) {
                    uVar24 = uVar22 ^ uVar15 * 0x1010101;
                    uVar22 = (int)local_2c - 4;
                    uVar24 = ~(0x1010100 - uVar24 | uVar24);
                  }
                } while (bVar34 && (uVar24 & 0x80808080) == 0);
                pbVar27 = pbVar25 + (int)local_2c;
                do {
                  if (pbVar27 <= pbVar25) goto LAB_01681af0;
                  pbVar27 = pbVar27 + -1;
                  local_2c = (code *)(uint)*pbVar27;
                } while (((code *)uVar32 != local_2c) && ((code *)uVar15 != local_2c));
              }
              else {
                do {
                  if (pbVar27 <= pbVar25) goto LAB_01681af0;
                  pbVar27 = pbVar27 + -1;
                  local_2c = (code *)(uint)*pbVar27;
                } while (((code *)uVar32 != local_2c) && ((code *)uVar15 != local_2c));
              }
            }
LAB_01681ae0:
            uVar36 = CONCAT44((int)pbVar27 - (int)pbVar25,1);
          }
          break;
        case 3:
          if (local_60 < local_2c) {
LAB_0168308c:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,local_2c,local_60,&DAT_01d074ec);
          }
          uVar36 = FUN_0168332c(*pbVar27,pbVar27[1],pbVar27[2],pbVar25,local_2c);
        }
      }
      goto LAB_01681b00;
    }
    if (uVar31 == 0) {
      uVar13 = FUN_016c2c08(*(byte *)((int)param_2 + 0x15b) + 1);
      uVar12 = param_2[0x16];
      uVar32 = (uVar13 & 0xffff) >> 8;
      if ((uVar13 & 1) != 0) {
        uVar32 = uVar13 >> 0x10;
      }
      uVar32 = uVar32 + uVar20;
      if (uVar12 <= uVar32) goto LAB_01683190;
      uVar20 = *(uint *)(param_2[0x15] + uVar32 * 4);
      uVar14 = 0;
      uVar32 = extraout_r3;
      if ((uVar20 == 0) || (uVar18 = param_2[2], uVar20 < uVar18)) {
LAB_01682a90:
        uVar14 = 0;
        goto LAB_01682d64;
      }
      uVar32 = param_2[3];
      if (uVar32 < uVar20) goto LAB_01682d64;
      if (param_2[0x5e] != 1) goto LAB_01682cb8;
      uVar31 = 0;
    }
    else {
      uVar32 = *(uint *)(param_3 + 0xc);
      if (uVar32 <= uVar31 - 1) {
LAB_0168319c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar31 - 1,uVar32,&DAT_01d0754c);
      }
      bVar2 = *(byte *)(*(int *)(param_3 + 8) + (uVar31 - 1));
      uVar32 = param_2[0x16];
      uVar20 = *(byte *)((int)param_2 + bVar2 + 0x5c) + uVar20;
      if (uVar32 <= uVar20) goto LAB_0168315c;
      uVar32 = *(uint *)(param_2[0x15] + uVar20 * 4);
      if (((uVar32 == 0) || (uVar20 = param_2[2], uVar32 < uVar20)) || (param_2[3] < uVar32)) {
        if (uVar32 != 0) {
LAB_01682aa0:
          uVar14 = 0;
          if (param_2[1] == uVar32) {
            uVar1 = CONCAT21(local_30._2_2_,bVar2);
LAB_01682d44:
            local_2c = (code *)(uVar31 - 1);
            local_30 = (uint *)((uint)uVar1 << 8);
            uVar14 = FUN_016cc61c(&local_30);
            *param_1 = 2;
            param_1[1] = uVar14;
            return;
          }
          goto LAB_01682d64;
        }
        goto LAB_01682a90;
      }
      if (param_2[0x5e] != 1) {
LAB_01682ab8:
        uVar13 = param_2[0x5a];
        uVar20 = uVar32 - uVar20 >> (param_2[0x57] & 0x1f);
        uVar32 = uVar20 << 1;
        if (uVar13 <= uVar20 * 2) goto LAB_016831a8;
        uVar32 = uVar32 | 1;
        if (uVar13 <= uVar32) goto LAB_016831b4;
        uVar20 = *(uint *)(param_2[0x59] + uVar20 * 8);
        uVar32 = *(uint *)(param_2[0x59] + uVar32 * 4);
        if ((CARRY4(uVar32,uVar20)) || (param_2[0x5d] < uVar32 + uVar20)) goto LAB_016830f0;
        goto LAB_01682d08;
      }
    }
    uVar14 = 1;
    uVar32 = 0;
  }
LAB_01682d64:
  *param_1 = uVar14;
  param_1[1] = uVar32;
  goto LAB_01682f90;
LAB_0168311c:
  puVar19 = &DAT_01d09968;
  goto LAB_01683124;
LAB_01681af0:
  uVar36 = ZEXT48(local_2c) << 0x20;
  goto LAB_01681b00;
LAB_01681b9c:
  uVar36 = ZEXT48(local_2c) << 0x20;
LAB_01681b00:
  uVar32 = uVar31;
  if ((uVar36 & 1) != 0) {
    uVar32 = (int)(uVar36 >> 0x20) + 1;
  }
LAB_01681b0c:
  if (uVar32 == uVar31) goto LAB_01682938;
  goto LAB_0168132c;
LAB_01682938:
  if (uVar31 == 0) {
    uVar13 = FUN_016c2c08(*(byte *)((int)param_2 + 0x15b) + 1);
    uVar32 = (uVar13 & 0xffff) >> 8;
    if ((uVar13 & 1) != 0) {
      uVar32 = uVar13 >> 0x10;
    }
    uVar32 = uVar32 + uVar20;
    if (uVar12 <= uVar32) {
LAB_01683190:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar32,uVar12,&DAT_01d2f26c);
    }
    uVar20 = *(uint *)(uVar23 + uVar32 * 4);
    uVar14 = 0;
    uVar32 = extraout_r2;
    if ((uVar20 == 0) || (uVar32 = uVar4, uVar20 < uVar4)) goto LAB_01682ec4;
    if (uVar20 <= uVar5) {
      if (param_2[0x5e] == 1) {
        uVar31 = 0;
        goto LAB_01682cb0;
      }
      uVar13 = param_2[0x5a];
      uVar31 = uVar20 - uVar4 >> uVar3;
      uVar32 = uVar31 << 1;
      if (uVar13 <= uVar31 * 2) goto LAB_016831a8;
      uVar32 = uVar32 | 1;
      if (uVar13 <= uVar32) goto LAB_016831b4;
      uVar20 = *(uint *)(param_2[0x59] + uVar31 * 8);
      uVar32 = *(uint *)(param_2[0x59] + uVar32 * 4);
      if ((CARRY4(uVar32,uVar20)) || (param_2[0x5d] < uVar32 + uVar20)) goto LAB_016830f0;
      uVar31 = 0;
      goto LAB_01682f78;
    }
  }
  else {
    uVar13 = uVar31 - 1;
    if (local_60 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar13,local_60,&DAT_01d0754c);
    }
    uVar20 = uVar20 + *(byte *)((int)param_2 + pbVar25[uVar13] + 0x5c);
    if (uVar12 <= uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar20,uVar12,&DAT_01d0828c);
    }
    uVar32 = *(uint *)(uVar23 + uVar20 * 4);
    if (((uVar32 == 0) || (uVar32 < uVar4)) || (uVar5 < uVar32)) {
      uVar14 = 0;
      if (uVar32 == 0) {
LAB_01682ec4:
        uVar5 = uVar32;
        uVar14 = 0;
      }
      else {
        uVar5 = uVar32;
        if (param_2[1] == uVar32) {
          uVar1 = CONCAT21(local_30._2_2_,pbVar25[uVar13]);
          goto LAB_01682d44;
        }
      }
    }
    else if (param_2[0x5e] == 1) {
LAB_01682cb0:
      uVar14 = 1;
      uVar5 = 0;
    }
    else {
      uVar13 = param_2[0x5a];
      uVar20 = uVar32 - uVar4 >> uVar3;
      uVar32 = uVar20 << 1;
      if (uVar13 <= uVar20 * 2) goto LAB_016831a8;
      uVar32 = uVar32 | 1;
      if (uVar13 <= uVar32) goto LAB_016831b4;
      uVar20 = *(uint *)(param_2[0x59] + uVar20 * 8);
      uVar32 = *(uint *)(param_2[0x59] + uVar32 * 4);
      if ((CARRY4(uVar32,uVar20)) || (param_2[0x5d] < uVar32 + uVar20)) goto LAB_016830f0;
LAB_01682f78:
      if (uVar32 == 0) goto LAB_01683150;
      uVar14 = 1;
      uVar5 = *(uint *)(param_2[0x5c] + uVar20 * 4);
    }
  }
  *param_1 = uVar14;
  param_1[1] = uVar5;
LAB_01682f90:
  param_1[2] = uVar31;
  return;
code_r0x016828c8:
  if (uVar31 == 0) {
    uVar31 = FUN_016c2c08(*(byte *)((int)param_2 + 0x15b) + 1);
    uVar12 = param_2[0x16];
    uVar32 = (uVar31 & 0xffff) >> 8;
    if ((uVar31 & 1) != 0) {
      uVar32 = uVar31 >> 0x10;
    }
    uVar32 = uVar32 + uVar20;
    if (uVar12 <= uVar32) goto LAB_01683190;
    uVar32 = *(uint *)(param_2[0x15] + uVar32 * 4);
    if ((uVar32 == 0 || uVar32 < uVar5) || uVar3 < uVar32) goto LAB_01682e78;
    local_6c = 1;
    local_68 = 0;
    local_7c = 0;
    if (uVar23 == 1) goto LAB_01682e78;
    uVar32 = uVar32 - uVar5 >> (param_2[0x57] & 0x1f);
    if (uVar13 <= uVar32 * 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar32 << 1,uVar13,&DAT_01d0866c);
    }
    uVar31 = uVar32 << 1 | 1;
    if (uVar13 <= uVar31) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar31,uVar13,&DAT_01d0860c);
    }
    uVar20 = *(uint *)(uVar30 + uVar32 * 8);
    uVar13 = *(uint *)(uVar30 + uVar31 * 4);
    uVar32 = uVar13 + uVar20;
    if ((CARRY4(uVar13,uVar20)) || (uVar21 < uVar32)) {
LAB_016830fc:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar20,uVar32,uVar21,&DAT_01d0867c);
    }
    uVar31 = 0;
LAB_01682e64:
    if (uVar13 == 0) {
LAB_01683150:
      puVar19 = &DAT_01d085fc;
LAB_01683124:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(0,0,puVar19);
    }
    local_68 = *(undefined4 *)(uVar9 + uVar20 * 4);
    local_7c = uVar31;
  }
  else {
    local_2c = (code *)(uVar31 - 1);
    if (local_60 <= local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(local_2c,local_60,&DAT_01d0754c);
    }
    uVar32 = param_2[0x16];
    uVar20 = uVar20 + *(byte *)((int)param_2 + pbVar25[(int)local_2c] + 0x5c);
    if (uVar32 <= uVar20) {
LAB_0168315c:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar20,uVar32,&DAT_01d0828c);
    }
    uVar32 = *(uint *)(param_2[0x15] + uVar20 * 4);
    if (((uVar32 == 0) || (uVar32 < uVar5)) || (uVar3 < uVar32)) {
      if ((uVar32 != 0) && (param_2[1] == uVar32)) {
        local_30 = (uint *)((uint)CONCAT21((short)((uint)local_30 >> 0x10),pbVar25[(int)local_2c])
                           << 8);
        uVar14 = FUN_016cc61c(&local_30);
        *param_1 = 2;
        param_1[1] = uVar14;
        return;
      }
      goto LAB_01682e78;
    }
    if (uVar23 != 1) {
      uVar20 = uVar32 - uVar5 >> (param_2[0x57] & 0x1f);
      uVar32 = uVar20 << 1;
      if (uVar13 <= uVar20 * 2) goto LAB_016831a8;
      uVar32 = uVar32 | 1;
      if (uVar13 <= uVar32) goto LAB_016831b4;
      uVar20 = *(uint *)(uVar30 + uVar20 * 8);
      uVar13 = *(uint *)(uVar30 + uVar32 * 4);
      uVar32 = uVar13 + uVar20;
      if ((CARRY4(uVar13,uVar20)) || (uVar21 < uVar32)) goto LAB_016830fc;
      goto LAB_01682e64;
    }
    local_68 = 0;
    local_7c = uVar31;
  }
  local_6c = 1;
LAB_01682e78:
  *param_1 = local_6c;
  param_1[1] = local_68;
  param_1[2] = local_7c;
  return;
}

