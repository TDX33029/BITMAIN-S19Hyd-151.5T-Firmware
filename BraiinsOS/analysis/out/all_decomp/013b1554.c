// FUN_013b1554 @ 013b1554 size=8456 calls_out=6 calls_in=6
// strings: cannot find with empty needles

void FUN_013b1554(undefined4 *param_1,uint *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint extraout_r3;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  byte *pbVar30;
  byte *pbVar31;
  uint uVar32;
  bool bVar33;
  bool bVar34;
  ulonglong uVar35;
  byte *local_88;
  undefined4 local_7c;
  undefined4 local_64;
  uint local_38;
  byte local_32;
  byte local_31;
  uint *local_30;
  byte *local_2c;
  uint *local_28;
  
  pbVar1 = *(byte **)(param_3 + 0x10);
  pbVar25 = *(byte **)(param_3 + 0x14);
  if (pbVar25 < pbVar1) {
LAB_013b1570:
    *param_1 = 0;
    return;
  }
  if (*(char *)(param_3 + 0x18) == '\0') {
    uVar35 = FUN_0136d230(param_2,param_3);
    uVar26 = (uint)(uVar35 >> 0x20);
    if ((uVar35 & 1) != 0) goto LAB_013b1690;
    if (pbVar1 == pbVar25) {
      if (pbVar1 == (byte *)0x0) {
        uVar21 = param_2[0x16];
        uVar26 = *(byte *)((int)param_2 + 0x15b) + uVar26 + 1;
        if (uVar21 <= uVar26) goto LAB_013b35e8;
        uVar19 = 0;
        uVar21 = *(uint *)(param_2[0x15] + uVar26 * 4);
        uVar26 = extraout_r3_00;
        if ((uVar21 == 0) || (uVar21 < param_2[2])) {
LAB_013b2e98:
          *param_1 = 0;
          param_1[1] = uVar26;
          param_1[2] = pbVar1;
          return;
        }
        uVar22 = extraout_r3_00;
        if (param_2[3] < uVar21) goto LAB_013b306c;
        if (param_2[0x5e] == 1) {
          *param_1 = 1;
          param_1[1] = 0;
          param_1[2] = 0;
          return;
        }
        uVar2 = param_2[0x5a];
        uVar21 = uVar21 - param_2[2] >> (param_2[0x57] & 0x1f);
        uVar26 = uVar21 << 1;
        if (uVar2 <= uVar21 * 2) goto LAB_013b3608;
        uVar26 = uVar26 | 1;
        if (uVar2 <= uVar26) goto LAB_013b3614;
        uVar21 = *(uint *)(param_2[0x59] + uVar21 * 8);
        uVar26 = *(uint *)(param_2[0x59] + uVar26 * 4);
        if ((CARRY4(uVar26,uVar21)) || (param_2[0x5d] < uVar26 + uVar21)) goto LAB_013b34b4;
        pbVar1 = (byte *)0x0;
      }
      else {
        pbVar20 = *(byte **)(param_3 + 0xc);
        if (pbVar20 <= pbVar1 + -1) goto LAB_013b35a0;
        uVar21 = param_2[0x16];
        uVar2 = (uint)(pbVar1 + -1)[*(int *)(param_3 + 8)];
        uVar26 = *(byte *)((int)param_2 + uVar2 + 0x5c) + uVar26;
        if (uVar21 <= uVar26) goto LAB_013b35d4;
        uVar22 = *(uint *)(param_2[0x15] + uVar26 * 4);
        if (((uVar22 == 0) || (uVar22 < param_2[2])) || (param_2[3] < uVar22)) {
          uVar19 = 0;
          uVar26 = 0;
          if (uVar22 == 0) goto LAB_013b2e98;
          if (param_2[1] != uVar22) goto LAB_013b306c;
          goto LAB_013b3244;
        }
        if (param_2[0x5e] == 1) {
          *param_1 = 1;
          param_1[1] = 0;
          param_1[2] = pbVar1;
          return;
        }
        uVar2 = param_2[0x5a];
        uVar21 = uVar22 - param_2[2] >> (param_2[0x57] & 0x1f);
        uVar26 = uVar21 << 1;
        if (uVar2 <= uVar21 * 2) goto LAB_013b3608;
        uVar26 = uVar26 | 1;
        if (uVar2 <= uVar26) goto LAB_013b3614;
        uVar21 = *(uint *)(param_2[0x59] + uVar21 * 8);
        uVar26 = *(uint *)(param_2[0x59] + uVar26 * 4);
        if ((CARRY4(uVar26,uVar21)) || (param_2[0x5d] < uVar26 + uVar21)) goto LAB_013b34b4;
      }
      if (uVar26 != 0) {
        uVar19 = 1;
        uVar22 = *(uint *)(param_2[0x5c] + uVar21 * 4);
LAB_013b306c:
        *param_1 = uVar19;
        param_1[1] = uVar22;
        param_1[2] = pbVar1;
        return;
      }
    }
    else {
      pbVar20 = *(byte **)(param_3 + 0xc);
      pbVar31 = pbVar1 + 3;
      uVar21 = param_2[0x5c];
      if ((byte *)0xfffffffc < pbVar1) {
        pbVar31 = (byte *)0xffffffff;
      }
      uVar22 = param_2[0x5d];
      uVar3 = param_2[0x5e];
      uVar17 = param_2[0x61];
      uVar4 = param_2[0x57] & 0x1f;
      uVar5 = param_2[0x59];
      uVar6 = param_2[0x5a];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      uVar14 = param_2[4];
      uVar23 = param_2[5];
      uVar28 = param_2[6];
      uVar10 = param_2[7];
      puVar9 = (uint *)param_2[0x60];
      pbVar30 = *(byte **)(param_3 + 8);
      uVar32 = *param_2;
      uVar29 = param_2[0x15];
      local_64 = 0;
      uVar2 = uVar17 << 2;
      do {
        pbVar15 = pbVar25 + -1;
        if (pbVar1 <= pbVar25 + -1) {
          pbVar25 = pbVar25 + -2;
          do {
            pbVar11 = pbVar25;
            uVar26 = *(uint *)(uVar29 + (uVar26 + *(byte *)((int)param_2 +
                                                           pbVar30[(int)(pbVar11 + 1)] + 0x5c)) * 4)
            ;
            pbVar15 = pbVar11 + 1;
            bVar34 = pbVar31 <= pbVar15;
            bVar33 = pbVar15 == pbVar31;
            if (bVar34 && !bVar33) {
              bVar34 = uVar32 <= uVar26;
              bVar33 = uVar26 == uVar32;
            }
            if (!bVar34 || bVar33) goto LAB_013b20d4;
            uVar26 = *(uint *)(uVar29 + (uVar26 + *(byte *)((int)param_2 +
                                                           pbVar30[(int)pbVar11] + 0x5c)) * 4);
            if (uVar26 <= uVar32) {
              pbVar15 = pbVar11;
              goto LAB_013b20d4;
            }
            uVar26 = *(uint *)(uVar29 + (uVar26 + *(byte *)((int)param_2 +
                                                           pbVar30[(int)(pbVar11 + -1)] + 0x5c)) * 4
                              );
            if (uVar26 <= uVar32) {
              pbVar15 = pbVar11 + -1;
              goto LAB_013b20d4;
            }
            uVar26 = *(uint *)(uVar29 + (uVar26 + *(byte *)((int)param_2 +
                                                           pbVar30[(int)(pbVar11 + -2)] + 0x5c)) * 4
                              );
            if (uVar26 <= uVar32) {
              pbVar15 = pbVar11 + -2;
              goto LAB_013b20d4;
            }
            pbVar25 = pbVar11 + -4;
          } while (pbVar1 <= pbVar11 + -3);
          pbVar15 = pbVar11 + -3;
        }
LAB_013b20d4:
        if (uVar26 <= uVar32) {
          if (uVar26 == 0) {
LAB_013b2270:
            if (((uVar26 == 0) || (uVar26 < uVar7)) || (uVar8 < uVar26)) {
              if (((uVar26 == 0) || (uVar26 < uVar14)) || (uVar23 < uVar26)) {
                if (uVar26 == 0) {
                  *param_1 = local_64;
                  param_1[1] = local_7c;
                  param_1[2] = local_88;
                  return;
                }
                if (pbVar15 < pbVar20) {
                  uVar19 = FUN_013c7204(pbVar30[(int)pbVar15]);
                  *param_1 = 2;
                  param_1[1] = uVar19;
                  return;
                }
                goto LAB_013b365c;
              }
              uVar13 = uVar26 - uVar14 >> uVar4;
              local_38 = uVar13;
              if (uVar17 == 0) goto LAB_013b358c;
              if (*puVar9 <= uVar13) goto LAB_013b3474;
              uVar12 = uVar13 << 3 | 4;
              if (uVar2 <= uVar12) goto LAB_013b35b4;
              local_38 = (uint)*(byte *)((int)puVar9 + uVar12);
              uVar12 = uVar13 << 3 | 5;
              uVar18 = uVar12 + local_38;
              if ((CARRY4(uVar12,local_38)) || (uVar2 < uVar18)) goto LAB_013b3460;
              if (3 < local_38) goto LAB_013b34fc;
              pbVar25 = (byte *)((int)puVar9 + uVar12);
              switch(local_38) {
              case 0:
                goto switchD_013b1878_caseD_0;
              case 1:
                local_38 = uVar13;
                if (pbVar20 < pbVar15) goto LAB_013b34d4;
                if (pbVar15 == (byte *)0x0) goto LAB_013b2efc;
                uVar12 = (uint)*pbVar25;
                pbVar25 = pbVar30 + (int)pbVar15;
                if (pbVar15 < (byte *)0x4) {
                  do {
                    if (pbVar25 <= pbVar30) goto LAB_013b2efc;
                    pbVar25 = pbVar25 + -1;
                  } while (uVar12 != *pbVar25);
                }
                else {
                  uVar18 = uVar12 * 0x1010101;
                  if ((~(0x1010100 - (*(uint *)(pbVar25 + -4) ^ uVar18) |
                        *(uint *)(pbVar25 + -4) ^ uVar18) & 0x80808080) == 0) {
                    iVar27 = (int)pbVar15 - ((uint)pbVar25 & 3);
                    if (pbVar15 < (byte *)0x9) {
                      pbVar25 = pbVar30 + iVar27;
                      do {
                        if (pbVar25 <= pbVar30) goto LAB_013b2efc;
                        pbVar25 = pbVar25 + -1;
                      } while (uVar12 != *pbVar25);
                    }
                    else {
                      do {
                        iVar16 = iVar27;
                        if ((iVar16 < 8) ||
                           ((~(0x1010100 - (*(uint *)(pbVar30 + iVar16 + -8) ^ uVar18) |
                              *(uint *)(pbVar30 + iVar16 + -8) ^ uVar18) & 0x80808080) != 0)) break;
                        iVar27 = iVar16 + -8;
                      } while ((~(0x1010100 - (*(uint *)(pbVar30 + iVar16 + -4) ^ uVar18) |
                                 *(uint *)(pbVar30 + iVar16 + -4) ^ uVar18) & 0x80808080) == 0);
                      pbVar25 = pbVar30 + iVar16;
                      do {
                        if (pbVar25 <= pbVar30) goto LAB_013b2efc;
                        pbVar25 = pbVar25 + -1;
                      } while (uVar12 != *pbVar25);
                    }
                  }
                  else {
                    do {
                      if (pbVar25 <= pbVar30) goto LAB_013b2efc;
                      pbVar25 = pbVar25 + -1;
                    } while (uVar12 != *pbVar25);
                  }
                }
                break;
              case 2:
                local_38 = uVar13;
                if (pbVar20 < pbVar15) goto LAB_013b34e8;
                if (pbVar15 == (byte *)0x0) goto LAB_013b2efc;
                uVar12 = (uint)*pbVar25;
                uVar18 = (uint)pbVar25[1];
                pbVar25 = pbVar30 + (int)pbVar15;
                if (pbVar15 < (byte *)0x4) {
                  do {
                    if (pbVar25 <= pbVar30) goto LAB_013b2efc;
                    pbVar25 = pbVar25 + -1;
                  } while ((uVar12 != *pbVar25) && (uVar18 != *pbVar25));
                }
                else {
                  uVar24 = *(uint *)(pbVar25 + -4) ^ uVar12 * 0x1010101;
                  if (((~(0x1010100 - uVar24 | uVar24) & 0x80808080) == 0) &&
                     (uVar24 = *(uint *)(pbVar25 + -4) ^ uVar18 * 0x1010101,
                     (~(0x1010100 - uVar24 | uVar24) & 0x80808080) == 0)) {
                    iVar27 = (int)pbVar15 - ((uint)pbVar25 & 3);
                    do {
                      iVar16 = iVar27;
                      if ((iVar16 < 4) ||
                         (uVar24 = *(uint *)(pbVar30 + iVar16 + -4) ^ uVar12 * 0x1010101,
                         (~(0x1010100 - uVar24 | uVar24) & 0x80808080) != 0)) break;
                      uVar24 = *(uint *)(pbVar30 + iVar16 + -4) ^ uVar18 * 0x1010101;
                      iVar27 = iVar16 + -4;
                    } while ((~(0x1010100 - uVar24 | uVar24) & 0x80808080) == 0);
                    pbVar25 = pbVar30 + iVar16;
                    do {
                      if (pbVar25 <= pbVar30) goto LAB_013b2efc;
                      pbVar25 = pbVar25 + -1;
                    } while ((uVar12 != *pbVar25) && (uVar18 != *pbVar25));
                  }
                  else {
                    do {
                      if (pbVar25 <= pbVar30) goto LAB_013b2efc;
                      pbVar25 = pbVar25 + -1;
                    } while (uVar12 != *pbVar25 && uVar18 != *pbVar25);
                  }
                }
                break;
              case 3:
                goto switchD_013b2220_caseD_3;
              }
            }
            else {
              local_7c = 0;
              if (uVar3 != 1) {
                uVar13 = uVar26 - uVar7 >> uVar4;
                if (uVar6 <= uVar13 * 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar13 << 1,uVar6,&DAT_01894868);
                }
                uVar12 = uVar13 << 1 | 1;
                if (uVar6 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar12,uVar6,&DAT_01894878);
                }
                uVar13 = *(uint *)(uVar5 + uVar13 * 8);
                uVar12 = *(uint *)(uVar5 + uVar12 * 4);
                if ((CARRY4(uVar12,uVar13)) || (uVar22 < uVar12 + uVar13)) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(uVar13,uVar12 + uVar13,uVar22,&DAT_01894888);
                }
                if (uVar12 == 0) goto LAB_013b35f4;
                local_7c = *(undefined4 *)(uVar21 + uVar13 * 4);
              }
              local_88 = pbVar15 + 1;
              local_64 = 1;
              if ((uVar26 < uVar14) || (uVar23 < uVar26)) goto LAB_013b20e0;
              uVar13 = uVar26 - uVar14 >> uVar4;
              local_38 = uVar13;
              if (uVar17 == 0) goto LAB_013b358c;
              if (*puVar9 <= uVar13) goto LAB_013b3474;
              uVar12 = uVar13 << 3 | 4;
              if (uVar2 <= uVar12) {
LAB_013b35b4:
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar12,uVar2,&DAT_01893730);
              }
              local_38 = (uint)*(byte *)((int)puVar9 + uVar12);
              uVar12 = uVar13 << 3 | 5;
              uVar18 = uVar12 + local_38;
              if ((CARRY4(uVar12,local_38)) || (uVar2 < uVar18)) {
LAB_013b3460:
                local_38 = uVar13;
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(uVar12,uVar18,uVar2,&DAT_01893740);
              }
              if (3 < local_38) goto LAB_013b34fc;
              pbVar25 = (byte *)((int)puVar9 + uVar12);
              switch(local_38) {
              case 0:
                goto switchD_013b1878_caseD_0;
              case 1:
                local_38 = uVar13;
                if (pbVar20 < pbVar15) {
LAB_013b34d4:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(0,pbVar15,pbVar20,&DAT_018937b0);
                }
                if (pbVar15 == (byte *)0x0) {
LAB_013b334c:
                  local_88 = (byte *)0x1;
LAB_013b2ef8:
                  local_64 = 1;
                  local_38 = uVar13;
                  goto LAB_013b2efc;
                }
                uVar12 = (uint)*pbVar25;
                pbVar25 = pbVar30 + (int)pbVar15;
                if (pbVar15 < (byte *)0x4) {
                  do {
                    if (pbVar25 <= pbVar30) goto LAB_013b2ef8;
                    pbVar25 = pbVar25 + -1;
                  } while (uVar12 != *pbVar25);
                }
                else {
                  uVar18 = uVar12 * 0x1010101;
                  if ((~(0x1010100 - (*(uint *)(pbVar25 + -4) ^ uVar18) |
                        *(uint *)(pbVar25 + -4) ^ uVar18) & 0x80808080) == 0) {
                    iVar27 = (int)pbVar15 - ((uint)pbVar25 & 3);
                    if (pbVar15 < (byte *)0x9) {
                      pbVar25 = pbVar30 + iVar27;
                      do {
                        if (pbVar25 <= pbVar30) goto LAB_013b2ef8;
                        pbVar25 = pbVar25 + -1;
                      } while (uVar12 != *pbVar25);
                    }
                    else {
                      do {
                        iVar16 = iVar27;
                        if ((iVar16 < 8) ||
                           ((~(0x1010100 - (*(uint *)(pbVar30 + iVar16 + -8) ^ uVar18) |
                              *(uint *)(pbVar30 + iVar16 + -8) ^ uVar18) & 0x80808080) != 0)) break;
                        iVar27 = iVar16 + -8;
                      } while ((~(0x1010100 - (*(uint *)(pbVar30 + iVar16 + -4) ^ uVar18) |
                                 *(uint *)(pbVar30 + iVar16 + -4) ^ uVar18) & 0x80808080) == 0);
                      pbVar25 = pbVar30 + iVar16;
                      do {
                        if (pbVar25 <= pbVar30) goto LAB_013b2ef8;
                        pbVar25 = pbVar25 + -1;
                      } while (uVar12 != *pbVar25);
                    }
                  }
                  else {
                    do {
                      if (pbVar25 <= pbVar30) goto LAB_013b2ef8;
                      pbVar25 = pbVar25 + -1;
                    } while (uVar12 != *pbVar25);
                  }
                }
                break;
              case 2:
                local_38 = uVar13;
                if (pbVar20 < pbVar15) {
LAB_013b34e8:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(0,pbVar15,pbVar20,&DAT_018937c0);
                }
                if (pbVar15 == (byte *)0x0) goto LAB_013b334c;
                uVar12 = (uint)*pbVar25;
                uVar18 = (uint)pbVar25[1];
                pbVar25 = pbVar30 + (int)pbVar15;
                if (pbVar15 < (byte *)0x4) {
                  do {
                    if (pbVar25 <= pbVar30) goto LAB_013b2ef8;
                    pbVar25 = pbVar25 + -1;
                  } while ((uVar12 != *pbVar25) && (uVar18 != *pbVar25));
                }
                else {
                  uVar24 = *(uint *)(pbVar25 + -4) ^ uVar12 * 0x1010101;
                  if (((~(0x1010100 - uVar24 | uVar24) & 0x80808080) == 0) &&
                     (uVar24 = *(uint *)(pbVar25 + -4) ^ uVar18 * 0x1010101,
                     (~(0x1010100 - uVar24 | uVar24) & 0x80808080) == 0)) {
                    iVar27 = (int)pbVar15 - ((uint)pbVar25 & 3);
                    do {
                      iVar16 = iVar27;
                      if ((iVar16 < 4) ||
                         (uVar24 = *(uint *)(pbVar30 + iVar16 + -4) ^ uVar12 * 0x1010101,
                         (~(0x1010100 - uVar24 | uVar24) & 0x80808080) != 0)) break;
                      uVar24 = *(uint *)(pbVar30 + iVar16 + -4) ^ uVar18 * 0x1010101;
                      iVar27 = iVar16 + -4;
                    } while ((~(0x1010100 - uVar24 | uVar24) & 0x80808080) == 0);
                    pbVar25 = pbVar30 + iVar16;
                    do {
                      if (pbVar25 <= pbVar30) goto LAB_013b2ef8;
                      pbVar25 = pbVar25 + -1;
                    } while ((uVar12 != *pbVar25) && (uVar18 != *pbVar25));
                  }
                  else {
                    do {
                      if (pbVar25 <= pbVar30) goto LAB_013b2ef8;
                      pbVar25 = pbVar25 + -1;
                    } while ((uVar12 != *pbVar25) && (uVar18 != *pbVar25));
                  }
                }
                break;
              case 3:
                local_38 = uVar13;
                if (pbVar20 < pbVar15) goto LAB_013b34c0;
                local_32 = *pbVar25;
                local_31 = pbVar25[1];
                local_38._1_3_ = (undefined3)(uVar13 >> 8);
                local_38 = CONCAT31(local_38._1_3_,pbVar25[2]);
                local_28 = &local_38;
                local_2c = &local_31;
                local_30 = (uint *)&local_32;
                uVar35 = FUN_013b3734(&local_30,pbVar30,pbVar30 + (int)pbVar15);
                iVar27 = (int)(uVar35 >> 0x20);
                if ((uVar35 & 1) != 0) goto LAB_013b265c;
                local_64 = 1;
LAB_013b3360:
                if (pbVar1 == (byte *)0x0) goto LAB_013b336c;
                goto LAB_013b2f04;
              }
            }
          }
          else {
            bVar34 = uVar26 <= uVar28;
            bVar33 = uVar28 == uVar26;
            if (!bVar34 || bVar33) {
              bVar34 = uVar10 <= uVar26;
              bVar33 = uVar26 == uVar10;
            }
            if (bVar34 && !bVar33) goto LAB_013b2270;
            if ((uVar26 < uVar14) || (uVar23 < uVar26)) goto LAB_013b20e0;
            uVar13 = uVar26 - uVar14 >> uVar4;
            local_38 = uVar13;
            if (uVar17 == 0) goto LAB_013b358c;
            if (*puVar9 <= uVar13) goto LAB_013b3474;
            uVar12 = uVar13 << 3 | 4;
            if (uVar2 <= uVar12) goto LAB_013b35b4;
            local_38 = (uint)*(byte *)((int)puVar9 + uVar12);
            uVar12 = uVar13 << 3 | 5;
            uVar18 = uVar12 + local_38;
            if ((CARRY4(uVar12,local_38)) || (uVar2 < uVar18)) goto LAB_013b3460;
            if (3 < local_38) goto LAB_013b34fc;
            pbVar25 = (byte *)((int)puVar9 + uVar12);
            switch(local_38) {
            case 0:
              goto switchD_013b1878_caseD_0;
            case 1:
              local_38 = uVar13;
              if (pbVar20 < pbVar15) goto LAB_013b34d4;
              if (pbVar15 == (byte *)0x0) goto LAB_013b2efc;
              uVar12 = (uint)*pbVar25;
              pbVar25 = pbVar30 + (int)pbVar15;
              if (pbVar15 < (byte *)0x4) {
                do {
                  if (pbVar25 <= pbVar30) goto LAB_013b2efc;
                  pbVar25 = pbVar25 + -1;
                } while (uVar12 != *pbVar25);
              }
              else {
                uVar18 = uVar12 * 0x1010101;
                if ((~(0x1010100 - (*(uint *)(pbVar25 + -4) ^ uVar18) |
                      *(uint *)(pbVar25 + -4) ^ uVar18) & 0x80808080) == 0) {
                  iVar27 = (int)pbVar15 - ((uint)pbVar25 & 3);
                  if (pbVar15 < (byte *)0x9) {
                    pbVar25 = pbVar30 + iVar27;
                    do {
                      if (pbVar25 <= pbVar30) goto LAB_013b2efc;
                      pbVar25 = pbVar25 + -1;
                    } while (uVar12 != *pbVar25);
                  }
                  else {
                    do {
                      iVar16 = iVar27;
                      if ((iVar16 < 8) ||
                         ((~(0x1010100 - (*(uint *)(pbVar30 + iVar16 + -8) ^ uVar18) |
                            *(uint *)(pbVar30 + iVar16 + -8) ^ uVar18) & 0x80808080) != 0)) break;
                      iVar27 = iVar16 + -8;
                    } while ((~(0x1010100 - (*(uint *)(pbVar30 + iVar16 + -4) ^ uVar18) |
                               *(uint *)(pbVar30 + iVar16 + -4) ^ uVar18) & 0x80808080) == 0);
                    pbVar25 = pbVar30 + iVar16;
                    do {
                      if (pbVar25 <= pbVar30) goto LAB_013b2efc;
                      pbVar25 = pbVar25 + -1;
                    } while (uVar12 != *pbVar25);
                  }
                }
                else {
                  do {
                    if (pbVar25 <= pbVar30) goto LAB_013b2efc;
                    pbVar25 = pbVar25 + -1;
                  } while (uVar12 != *pbVar25);
                }
              }
              break;
            case 2:
              local_38 = uVar13;
              if (pbVar20 < pbVar15) goto LAB_013b34e8;
              if (pbVar15 == (byte *)0x0) goto LAB_013b2efc;
              uVar12 = (uint)*pbVar25;
              uVar18 = (uint)pbVar25[1];
              pbVar25 = pbVar30 + (int)pbVar15;
              if (pbVar15 < (byte *)0x4) {
                do {
                  if (pbVar25 <= pbVar30) goto LAB_013b2efc;
                  pbVar25 = pbVar25 + -1;
                } while ((uVar12 != *pbVar25) && (uVar18 != *pbVar25));
              }
              else {
                uVar24 = *(uint *)(pbVar25 + -4) ^ uVar12 * 0x1010101;
                if (((~(0x1010100 - uVar24 | uVar24) & 0x80808080) == 0) &&
                   (uVar24 = *(uint *)(pbVar25 + -4) ^ uVar18 * 0x1010101,
                   (~(0x1010100 - uVar24 | uVar24) & 0x80808080) == 0)) {
                  iVar27 = (int)pbVar15 - ((uint)pbVar25 & 3);
                  do {
                    iVar16 = iVar27;
                    if ((iVar16 < 4) ||
                       (uVar24 = *(uint *)(pbVar30 + iVar16 + -4) ^ uVar12 * 0x1010101,
                       (~(0x1010100 - uVar24 | uVar24) & 0x80808080) != 0)) break;
                    uVar24 = *(uint *)(pbVar30 + iVar16 + -4) ^ uVar18 * 0x1010101;
                    iVar27 = iVar16 + -4;
                  } while ((~(0x1010100 - uVar24 | uVar24) & 0x80808080) == 0);
                  pbVar25 = pbVar30 + iVar16;
                  do {
                    if (pbVar25 <= pbVar30) goto LAB_013b2efc;
                    pbVar25 = pbVar25 + -1;
                  } while ((uVar12 != *pbVar25) && (uVar18 != *pbVar25));
                }
                else {
                  do {
                    if (pbVar25 <= pbVar30) goto LAB_013b2efc;
                    pbVar25 = pbVar25 + -1;
                  } while ((uVar12 != *pbVar25) && (uVar18 != *pbVar25));
                }
              }
              break;
            case 3:
switchD_013b2220_caseD_3:
              local_38 = uVar13;
              if (pbVar20 < pbVar15) {
LAB_013b34c0:
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(0,pbVar15,pbVar20,&DAT_018937d0);
              }
              local_32 = *pbVar25;
              local_31 = pbVar25[1];
              local_38 = CONCAT31(local_38._1_3_,pbVar25[2]);
              local_28 = &local_38;
              local_2c = &local_31;
              local_30 = (uint *)&local_32;
              uVar35 = FUN_013b3734(&local_30,pbVar30,pbVar30 + (int)pbVar15);
              iVar27 = (int)(uVar35 >> 0x20);
              if ((uVar35 & 1) == 0) goto LAB_013b3360;
LAB_013b265c:
              pbVar15 = (byte *)((iVar27 - (int)pbVar30) + 1);
              goto LAB_013b20e0;
            }
          }
          pbVar15 = pbVar25 + (1 - (int)pbVar30);
        }
LAB_013b20e0:
        pbVar25 = pbVar15;
      } while (pbVar15 != pbVar1);
LAB_013b2efc:
      if (pbVar1 == (byte *)0x0) {
LAB_013b336c:
        uVar21 = param_2[0x16];
        uVar26 = *(byte *)((int)param_2 + 0x15b) + uVar26 + 1;
        if (uVar21 <= uVar26) goto LAB_013b35e8;
        uVar26 = *(uint *)(param_2[0x15] + uVar26 * 4);
        if (((uVar26 == 0) || (uVar26 < param_2[2])) || (param_2[3] < uVar26)) {
LAB_013b33e4:
          *param_1 = local_64;
          param_1[1] = local_7c;
          param_1[2] = local_88;
          return;
        }
        if (param_2[0x5e] == 1) {
          *param_1 = 1;
          param_1[1] = 0;
          param_1[2] = 0;
          return;
        }
        uVar2 = param_2[0x5a];
        uVar21 = uVar26 - param_2[2] >> (param_2[0x57] & 0x1f);
        uVar26 = uVar21 << 1;
        if (uVar2 <= uVar21 * 2) {
LAB_013b3608:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar26,uVar2,&DAT_01894868);
        }
        uVar26 = uVar26 | 1;
        if (uVar2 <= uVar26) {
LAB_013b3614:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar26,uVar2,&DAT_01894878);
        }
        uVar21 = *(uint *)(param_2[0x59] + uVar21 * 8);
        uVar26 = *(uint *)(param_2[0x59] + uVar26 * 4);
        if ((CARRY4(uVar26,uVar21)) || (param_2[0x5d] < uVar26 + uVar21)) {
LAB_013b34b4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c();
        }
        pbVar1 = (byte *)0x0;
      }
      else {
LAB_013b2f04:
        pbVar20 = *(byte **)(param_3 + 0xc);
        if (pbVar20 <= pbVar1 + -1) goto LAB_013b35a0;
        uVar21 = param_2[0x16];
        uVar26 = uVar26 + *(byte *)((int)param_2 + (pbVar1 + -1)[*(int *)(param_3 + 8)] + 0x5c);
        if (uVar21 <= uVar26) {
LAB_013b35d4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar26,uVar21,&DAT_018936f0);
        }
        uVar26 = *(uint *)(param_2[0x15] + uVar26 * 4);
        if (((uVar26 == 0) || (uVar26 < param_2[2])) || (param_2[3] < uVar26)) {
          if ((uVar26 != 0) && (param_2[1] == uVar26)) {
            uVar19 = FUN_013c7204();
            *param_1 = 2;
            param_1[1] = uVar19;
            return;
          }
          goto LAB_013b33e4;
        }
        if (param_2[0x5e] == 1) {
          *param_1 = 1;
          param_1[1] = 0;
          param_1[2] = pbVar1;
          return;
        }
        uVar2 = param_2[0x5a];
        uVar21 = uVar26 - param_2[2] >> (param_2[0x57] & 0x1f);
        uVar26 = uVar21 << 1;
        if (uVar2 <= uVar21 * 2) goto LAB_013b3608;
        uVar26 = uVar26 | 1;
        if (uVar2 <= uVar26) goto LAB_013b3614;
        uVar21 = *(uint *)(param_2[0x59] + uVar21 * 8);
        uVar26 = *(uint *)(param_2[0x59] + uVar26 * 4);
        if ((CARRY4(uVar26,uVar21)) || (param_2[0x5d] < uVar26 + uVar21)) goto LAB_013b34b4;
      }
      if (uVar26 != 0) {
        uVar19 = *(undefined4 *)(param_2[0x5c] + uVar21 * 4);
        *param_1 = 1;
        param_1[1] = uVar19;
        param_1[2] = pbVar1;
        return;
      }
    }
    goto LAB_013b35f4;
  }
  uVar35 = FUN_0136d230(param_2,param_3);
  uVar26 = (uint)(uVar35 >> 0x20);
  if ((uVar35 & 1) != 0) {
LAB_013b1690:
    *param_1 = 2;
    param_1[1] = uVar26;
    return;
  }
  if (pbVar1 == pbVar25) {
    if (pbVar1 == (byte *)0x0) {
      uVar21 = param_2[0x16];
      uVar26 = *(byte *)((int)param_2 + 0x15b) + uVar26 + 1;
      if (uVar21 <= uVar26) goto LAB_013b35e8;
      uVar19 = 0;
      uVar26 = *(uint *)(param_2[0x15] + uVar26 * 4);
      uVar22 = extraout_r3;
      if ((uVar26 != 0) && (param_2[2] <= uVar26)) {
        if (param_2[3] < uVar26) goto LAB_013b3314;
        if (param_2[0x5e] == 1) goto LAB_013b321c;
        uVar2 = param_2[0x5a];
        uVar21 = uVar26 - param_2[2] >> (param_2[0x57] & 0x1f);
        uVar26 = uVar21 << 1;
        if (uVar2 <= uVar21 * 2) goto LAB_013b3608;
        uVar26 = uVar26 | 1;
        if (uVar2 <= uVar26) goto LAB_013b3614;
        uVar21 = *(uint *)(param_2[0x59] + uVar21 * 8);
        uVar26 = *(uint *)(param_2[0x59] + uVar26 * 4);
        if ((CARRY4(uVar26,uVar21)) || (param_2[0x5d] < uVar26 + uVar21)) goto LAB_013b34b4;
        pbVar1 = (byte *)0x0;
LAB_013b2df0:
        if (uVar26 == 0) goto LAB_013b35f4;
        uVar26 = param_2[0x5c];
        goto LAB_013b330c;
      }
    }
    else {
      pbVar20 = *(byte **)(param_3 + 0xc);
      if (pbVar20 <= pbVar1 + -1) goto LAB_013b35a0;
      uVar21 = param_2[0x16];
      uVar2 = (uint)(pbVar1 + -1)[*(int *)(param_3 + 8)];
      uVar26 = *(byte *)((int)param_2 + uVar2 + 0x5c) + uVar26;
      if (uVar21 <= uVar26) goto LAB_013b35d4;
      uVar22 = *(uint *)(param_2[0x15] + uVar26 * 4);
      if (((uVar22 != 0) && (param_2[2] <= uVar22)) && (uVar22 <= param_2[3])) {
        if (param_2[0x5e] == 1) goto LAB_013b31c0;
        uVar2 = param_2[0x5a];
        uVar21 = uVar22 - param_2[2] >> (param_2[0x57] & 0x1f);
        uVar26 = uVar21 << 1;
        if (uVar2 <= uVar21 * 2) goto LAB_013b3608;
        uVar26 = uVar26 | 1;
        if (uVar2 <= uVar26) goto LAB_013b3614;
        uVar21 = *(uint *)(param_2[0x59] + uVar21 * 8);
        uVar26 = *(uint *)(param_2[0x59] + uVar26 * 4);
        if ((CARRY4(uVar26,uVar21)) || (param_2[0x5d] < uVar26 + uVar21)) goto LAB_013b34b4;
        goto LAB_013b2df0;
      }
      if (uVar22 != 0) {
        uVar26 = param_2[1];
        goto LAB_013b323c;
      }
    }
  }
  else {
    pbVar20 = *(byte **)(param_3 + 0xc);
    pbVar31 = pbVar1 + 3;
    if ((byte *)0xfffffffc < pbVar1) {
      pbVar31 = (byte *)0xffffffff;
    }
    uVar14 = param_2[0x61];
    uVar3 = param_2[0x57] & 0x1f;
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[5];
    uVar7 = param_2[6];
    uVar8 = param_2[7];
    pbVar30 = *(byte **)(param_3 + 8);
    uVar22 = param_2[4];
    puVar9 = (uint *)param_2[0x60];
    uVar28 = *param_2;
    uVar23 = param_2[0x15];
    uVar21 = param_2[0x16];
    uVar2 = uVar14 << 2;
    do {
      pbVar15 = pbVar25 + -1;
      if (pbVar1 <= pbVar25 + -1) {
        pbVar25 = pbVar25 + -2;
        do {
          pbVar11 = pbVar25;
          uVar26 = *(uint *)(uVar23 + (uVar26 + *(byte *)((int)param_2 +
                                                         pbVar30[(int)(pbVar11 + 1)] + 0x5c)) * 4);
          pbVar15 = pbVar11 + 1;
          bVar34 = pbVar31 <= pbVar15;
          bVar33 = pbVar15 == pbVar31;
          if (bVar34 && !bVar33) {
            bVar34 = uVar28 <= uVar26;
            bVar33 = uVar26 == uVar28;
          }
          if (!bVar34 || bVar33) goto LAB_013b17d0;
          uVar26 = *(uint *)(uVar23 + (uVar26 + *(byte *)((int)param_2 +
                                                         pbVar30[(int)pbVar11] + 0x5c)) * 4);
          if (uVar26 <= uVar28) {
            pbVar15 = pbVar11;
            goto LAB_013b17d0;
          }
          uVar26 = *(uint *)(uVar23 + (uVar26 + *(byte *)((int)param_2 +
                                                         pbVar30[(int)(pbVar11 + -1)] + 0x5c)) * 4);
          if (uVar26 <= uVar28) {
            pbVar15 = pbVar11 + -1;
            goto LAB_013b17d0;
          }
          uVar26 = *(uint *)(uVar23 + (uVar26 + *(byte *)((int)param_2 +
                                                         pbVar30[(int)(pbVar11 + -2)] + 0x5c)) * 4);
          if (uVar26 <= uVar28) {
            pbVar15 = pbVar11 + -2;
            goto LAB_013b17d0;
          }
          pbVar25 = pbVar11 + -4;
        } while (pbVar1 <= pbVar11 + -3);
        pbVar15 = pbVar11 + -3;
      }
LAB_013b17d0:
      if (uVar26 <= uVar28) {
        if (uVar26 == 0) {
LAB_013b1958:
          if (((uVar26 != 0) && (uVar4 <= uVar26)) && (uVar26 <= uVar5)) {
            uVar19 = 0;
            if (param_2[0x5e] != 1) {
              uVar21 = param_2[0x5a];
              uVar26 = uVar26 - uVar4 >> uVar3;
              if (uVar21 <= uVar26 * 2) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar26 << 1,uVar21,&DAT_01894868);
              }
              uVar2 = uVar26 << 1 | 1;
              if (uVar21 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar2,uVar21,&DAT_01894878);
              }
              uVar26 = *(uint *)(param_2[0x59] + uVar26 * 8);
              uVar21 = *(uint *)(param_2[0x59] + uVar2 * 4);
              if ((CARRY4(uVar21,uVar26)) || (param_2[0x5d] < uVar21 + uVar26)) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(uVar26,uVar21 + uVar26,param_2[0x5d],&DAT_01894888);
              }
              if (uVar21 == 0) goto LAB_013b35f4;
              uVar19 = *(undefined4 *)(param_2[0x5c] + uVar26 * 4);
            }
            *param_1 = 1;
            param_1[1] = uVar19;
            param_1[2] = pbVar15 + 1;
            return;
          }
          if (((uVar26 == 0) || (uVar26 < uVar22)) || (uVar6 < uVar26)) {
            if (uVar26 == 0) goto LAB_013b1570;
            if (pbVar20 <= pbVar15) {
LAB_013b365c:
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(pbVar15,pbVar20,&DAT_01893810);
            }
            uVar2 = (uint)pbVar30[(int)pbVar15];
            goto LAB_013b3244;
          }
          uVar13 = uVar26 - uVar22 >> uVar3;
          local_38 = uVar13;
          if (uVar14 == 0) {
LAB_013b358c:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(0,0,&DAT_01892d90);
          }
          if (*puVar9 <= uVar13) {
LAB_013b3474:
            local_30 = &local_38;
            local_2c = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_005855ae,&local_30,&DAT_01893750);
          }
          uVar10 = uVar13 << 3 | 4;
          if (uVar2 <= uVar10) {
LAB_013b35c4:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar10,uVar2,&DAT_01893730);
          }
          local_38 = (uint)*(byte *)((int)puVar9 + uVar10);
          uVar10 = uVar13 << 3 | 5;
          uVar17 = uVar10 + local_38;
          if ((CARRY4(uVar10,local_38)) || (uVar2 < uVar17)) {
LAB_013b34a0:
            local_38 = uVar13;
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar10,uVar17,uVar2,&DAT_01893740);
          }
          if (3 < local_38) {
LAB_013b34fc:
            local_2c = &LAB_00fac484;
            local_30 = &local_38;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00587cb5,&local_30,&DAT_018937f0);
          }
          pbVar25 = (byte *)((int)puVar9 + uVar10);
          switch(local_38) {
          case 0:
            goto switchD_013b1878_caseD_0;
          case 1:
            local_38 = uVar13;
            if (pbVar20 < pbVar15) {
LAB_013b352c:
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,pbVar15,pbVar20,&DAT_018937b0);
            }
            if (pbVar15 == (byte *)0x0) goto LAB_013b315c;
            uVar10 = (uint)*pbVar25;
            pbVar25 = pbVar30 + (int)pbVar15;
            if (pbVar15 < (byte *)0x4) {
              do {
                if (pbVar25 <= pbVar30) goto LAB_013b315c;
                pbVar25 = pbVar25 + -1;
              } while (uVar10 != *pbVar25);
            }
            else {
              uVar17 = uVar10 * 0x1010101;
              if ((~(0x1010100 - (*(uint *)(pbVar25 + -4) ^ uVar17) |
                    *(uint *)(pbVar25 + -4) ^ uVar17) & 0x80808080) == 0) {
                iVar27 = (int)pbVar15 - ((uint)pbVar25 & 3);
                if (pbVar15 < (byte *)0x9) {
                  pbVar25 = pbVar30 + iVar27;
                  do {
                    if (pbVar25 <= pbVar30) goto LAB_013b315c;
                    pbVar25 = pbVar25 + -1;
                  } while (uVar10 != *pbVar25);
                }
                else {
                  do {
                    iVar16 = iVar27;
                    if ((iVar16 < 8) ||
                       ((~(0x1010100 - (*(uint *)(pbVar30 + iVar16 + -8) ^ uVar17) |
                          *(uint *)(pbVar30 + iVar16 + -8) ^ uVar17) & 0x80808080) != 0)) break;
                    iVar27 = iVar16 + -8;
                  } while ((~(0x1010100 - (*(uint *)(pbVar30 + iVar16 + -4) ^ uVar17) |
                             *(uint *)(pbVar30 + iVar16 + -4) ^ uVar17) & 0x80808080) == 0);
                  pbVar25 = pbVar30 + iVar16;
                  do {
                    if (pbVar25 <= pbVar30) goto LAB_013b315c;
                    pbVar25 = pbVar25 + -1;
                  } while (uVar10 != *pbVar25);
                }
              }
              else {
                do {
                  if (pbVar25 <= pbVar30) goto LAB_013b315c;
                  pbVar25 = pbVar25 + -1;
                } while (uVar10 != *pbVar25);
              }
            }
            break;
          case 2:
            local_38 = uVar13;
            if (pbVar20 < pbVar15) {
LAB_013b3554:
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,pbVar15,pbVar20,&DAT_018937c0);
            }
            if (pbVar15 == (byte *)0x0) goto LAB_013b315c;
            uVar10 = (uint)*pbVar25;
            uVar17 = (uint)pbVar25[1];
            pbVar25 = pbVar30 + (int)pbVar15;
            if (pbVar15 < (byte *)0x4) {
              do {
                if (pbVar25 <= pbVar30) goto LAB_013b315c;
                pbVar25 = pbVar25 + -1;
              } while ((uVar10 != *pbVar25) && (uVar17 != *pbVar25));
            }
            else {
              uVar29 = *(uint *)(pbVar25 + -4) ^ uVar10 * 0x1010101;
              if (((~(0x1010100 - uVar29 | uVar29) & 0x80808080) == 0) &&
                 (uVar29 = *(uint *)(pbVar25 + -4) ^ uVar17 * 0x1010101,
                 (~(0x1010100 - uVar29 | uVar29) & 0x80808080) == 0)) {
                iVar27 = (int)pbVar15 - ((uint)pbVar25 & 3);
                do {
                  iVar16 = iVar27;
                  if ((iVar16 < 4) ||
                     (uVar29 = *(uint *)(pbVar30 + iVar16 + -4) ^ uVar10 * 0x1010101,
                     (~(0x1010100 - uVar29 | uVar29) & 0x80808080) != 0)) break;
                  uVar29 = *(uint *)(pbVar30 + iVar16 + -4) ^ uVar17 * 0x1010101;
                  iVar27 = iVar16 + -4;
                } while ((~(0x1010100 - uVar29 | uVar29) & 0x80808080) == 0);
                pbVar25 = pbVar30 + iVar16;
                do {
                  if (pbVar25 <= pbVar30) goto LAB_013b315c;
                  pbVar25 = pbVar25 + -1;
                } while ((uVar10 != *pbVar25) && (uVar17 != *pbVar25));
              }
              else {
                do {
                  if (pbVar25 <= pbVar30) goto LAB_013b315c;
                  pbVar25 = pbVar25 + -1;
                } while (uVar10 != *pbVar25 && uVar17 != *pbVar25);
              }
            }
            break;
          case 3:
            goto switchD_013b1878_caseD_3;
          }
        }
        else {
          bVar34 = uVar26 <= uVar7;
          bVar33 = uVar7 == uVar26;
          if (!bVar34 || bVar33) {
            bVar34 = uVar8 <= uVar26;
            bVar33 = uVar26 == uVar8;
          }
          if (bVar34 && !bVar33) goto LAB_013b1958;
          if ((uVar26 < uVar22) || (uVar6 < uVar26)) goto LAB_013b17bc;
          uVar13 = uVar26 - uVar22 >> uVar3;
          local_38 = uVar13;
          if (uVar14 == 0) goto LAB_013b358c;
          if (*puVar9 <= uVar13) goto LAB_013b3474;
          uVar10 = uVar13 << 3 | 4;
          if (uVar2 <= uVar10) goto LAB_013b35c4;
          local_38 = (uint)*(byte *)((int)puVar9 + uVar10);
          uVar10 = uVar13 << 3 | 5;
          uVar17 = uVar10 + local_38;
          if ((CARRY4(uVar10,local_38)) || (uVar2 < uVar17)) goto LAB_013b34a0;
          if (3 < local_38) goto LAB_013b34fc;
          pbVar25 = (byte *)((int)puVar9 + uVar10);
          switch(local_38) {
          case 0:
            goto switchD_013b1878_caseD_0;
          case 1:
            local_38 = uVar13;
            if (pbVar20 < pbVar15) goto LAB_013b352c;
            if (pbVar15 == (byte *)0x0) goto LAB_013b315c;
            uVar10 = (uint)*pbVar25;
            pbVar25 = pbVar30 + (int)pbVar15;
            if (pbVar15 < (byte *)0x4) {
              do {
                if (pbVar25 <= pbVar30) goto LAB_013b315c;
                pbVar25 = pbVar25 + -1;
              } while (uVar10 != *pbVar25);
            }
            else {
              uVar17 = uVar10 * 0x1010101;
              if ((~(0x1010100 - (*(uint *)(pbVar25 + -4) ^ uVar17) |
                    *(uint *)(pbVar25 + -4) ^ uVar17) & 0x80808080) == 0) {
                iVar27 = (int)pbVar15 - ((uint)pbVar25 & 3);
                if (pbVar15 < (byte *)0x9) {
                  pbVar25 = pbVar30 + iVar27;
                  do {
                    if (pbVar25 <= pbVar30) goto LAB_013b315c;
                    pbVar25 = pbVar25 + -1;
                  } while (uVar10 != *pbVar25);
                }
                else {
                  do {
                    iVar16 = iVar27;
                    if ((iVar16 < 8) ||
                       ((~(0x1010100 - (*(uint *)(pbVar30 + iVar16 + -8) ^ uVar17) |
                          *(uint *)(pbVar30 + iVar16 + -8) ^ uVar17) & 0x80808080) != 0)) break;
                    iVar27 = iVar16 + -8;
                  } while ((~(0x1010100 - (*(uint *)(pbVar30 + iVar16 + -4) ^ uVar17) |
                             *(uint *)(pbVar30 + iVar16 + -4) ^ uVar17) & 0x80808080) == 0);
                  pbVar25 = pbVar30 + iVar16;
                  do {
                    if (pbVar25 <= pbVar30) goto LAB_013b315c;
                    pbVar25 = pbVar25 + -1;
                  } while (uVar10 != *pbVar25);
                }
              }
              else {
                do {
                  if (pbVar25 <= pbVar30) goto LAB_013b315c;
                  pbVar25 = pbVar25 + -1;
                } while (uVar10 != *pbVar25);
              }
            }
            break;
          case 2:
            local_38 = uVar13;
            if (pbVar20 < pbVar15) goto LAB_013b3554;
            if (pbVar15 == (byte *)0x0) goto LAB_013b315c;
            uVar10 = (uint)*pbVar25;
            uVar17 = (uint)pbVar25[1];
            pbVar25 = pbVar30 + (int)pbVar15;
            if (pbVar15 < (byte *)0x4) {
              do {
                if (pbVar25 <= pbVar30) goto LAB_013b315c;
                pbVar25 = pbVar25 + -1;
              } while ((uVar10 != *pbVar25) && (uVar17 != *pbVar25));
            }
            else {
              uVar29 = *(uint *)(pbVar25 + -4) ^ uVar10 * 0x1010101;
              if (((~(0x1010100 - uVar29 | uVar29) & 0x80808080) == 0) &&
                 (uVar29 = *(uint *)(pbVar25 + -4) ^ uVar17 * 0x1010101,
                 (~(0x1010100 - uVar29 | uVar29) & 0x80808080) == 0)) {
                iVar27 = (int)pbVar15 - ((uint)pbVar25 & 3);
                do {
                  iVar16 = iVar27;
                  if ((iVar16 < 4) ||
                     (uVar29 = *(uint *)(pbVar30 + iVar16 + -4) ^ uVar10 * 0x1010101,
                     (~(0x1010100 - uVar29 | uVar29) & 0x80808080) != 0)) break;
                  uVar29 = *(uint *)(pbVar30 + iVar16 + -4) ^ uVar17 * 0x1010101;
                  iVar27 = iVar16 + -4;
                } while ((~(0x1010100 - uVar29 | uVar29) & 0x80808080) == 0);
                pbVar25 = pbVar30 + iVar16;
                do {
                  if (pbVar25 <= pbVar30) goto LAB_013b315c;
                  pbVar25 = pbVar25 + -1;
                } while ((uVar10 != *pbVar25) && (uVar17 != *pbVar25));
              }
              else {
                do {
                  if (pbVar25 <= pbVar30) goto LAB_013b315c;
                  pbVar25 = pbVar25 + -1;
                } while ((uVar10 != *pbVar25) && (uVar17 != *pbVar25));
              }
            }
            break;
          case 3:
switchD_013b1878_caseD_3:
            local_38 = uVar13;
            if (pbVar20 < pbVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,pbVar15,pbVar20,&DAT_018937d0);
            }
            local_32 = *pbVar25;
            local_31 = pbVar25[1];
            local_38 = CONCAT31(local_38._1_3_,pbVar25[2]);
            local_28 = &local_38;
            local_2c = &local_31;
            local_30 = (uint *)&local_32;
            uVar35 = FUN_013b3734(&local_30,pbVar30,pbVar30 + (int)pbVar15);
            if ((uVar35 & 1) != 0) {
              pbVar15 = (byte *)(((int)(uVar35 >> 0x20) - (int)pbVar30) + 1);
              goto LAB_013b17bc;
            }
            uVar22 = extraout_r3_01;
            goto LAB_013b315c;
          }
        }
        pbVar15 = pbVar25 + (1 - (int)pbVar30);
      }
LAB_013b17bc:
      pbVar25 = pbVar15;
    } while (pbVar15 != pbVar1);
LAB_013b315c:
    if (pbVar1 == (byte *)0x0) {
      uVar26 = *(byte *)((int)param_2 + 0x15b) + uVar26 + 1;
      if (uVar21 <= uVar26) {
LAB_013b35e8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar26,uVar21,&DAT_018ae9c4);
      }
      uVar26 = *(uint *)(uVar23 + uVar26 * 4);
      uVar19 = 0;
      if ((uVar26 != 0) && (uVar4 <= uVar26)) {
        if (uVar5 < uVar26) goto LAB_013b3314;
        if (param_2[0x5e] == 1) {
LAB_013b321c:
          uVar19 = 1;
          pbVar1 = (byte *)0x0;
          uVar22 = 0;
          goto LAB_013b3314;
        }
        uVar2 = param_2[0x5a];
        uVar21 = uVar26 - uVar4 >> uVar3;
        uVar26 = uVar21 << 1;
        if (uVar2 <= uVar21 * 2) goto LAB_013b3608;
        uVar26 = uVar26 | 1;
        if (uVar2 <= uVar26) goto LAB_013b3614;
        uVar21 = *(uint *)(param_2[0x59] + uVar21 * 8);
        uVar26 = *(uint *)(param_2[0x59] + uVar26 * 4);
        if ((CARRY4(uVar26,uVar21)) || (param_2[0x5d] < uVar26 + uVar21)) goto LAB_013b34b4;
        pbVar1 = (byte *)0x0;
        goto LAB_013b3300;
      }
    }
    else {
      if (pbVar20 <= pbVar1 + -1) {
LAB_013b35a0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(pbVar1 + -1,pbVar20,&DAT_01893830);
      }
      uVar2 = (uint)pbVar30[(int)(pbVar1 + -1)];
      uVar26 = uVar26 + *(byte *)((int)param_2 + uVar2 + 0x5c);
      if (uVar21 <= uVar26) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar26,uVar21,&DAT_018936f0);
      }
      uVar22 = *(uint *)(uVar23 + uVar26 * 4);
      if (((uVar22 != 0) && (uVar4 <= uVar22)) && (uVar22 <= uVar5)) {
        if (param_2[0x5e] == 1) {
LAB_013b31c0:
          uVar19 = 1;
          uVar22 = 0;
          goto LAB_013b3314;
        }
        uVar2 = param_2[0x5a];
        uVar21 = uVar22 - uVar4 >> uVar3;
        uVar26 = uVar21 << 1;
        if (uVar2 <= uVar21 * 2) goto LAB_013b3608;
        uVar26 = uVar26 | 1;
        if (uVar2 <= uVar26) goto LAB_013b3614;
        uVar21 = *(uint *)(param_2[0x59] + uVar21 * 8);
        uVar26 = *(uint *)(param_2[0x59] + uVar26 * 4);
        if ((CARRY4(uVar26,uVar21)) || (param_2[0x5d] < uVar26 + uVar21)) goto LAB_013b34b4;
LAB_013b3300:
        if (uVar26 == 0) {
LAB_013b35f4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(0,0,&DAT_01894818);
        }
        uVar26 = param_2[0x5c];
LAB_013b330c:
        uVar22 = *(uint *)(uVar26 + uVar21 * 4);
        uVar19 = 1;
        goto LAB_013b3314;
      }
      if (uVar22 != 0) {
        uVar26 = param_2[1];
LAB_013b323c:
        uVar19 = 0;
        if (uVar26 == uVar22) {
LAB_013b3244:
          uVar19 = FUN_013c7204(uVar2);
          *param_1 = 2;
          param_1[1] = uVar19;
          return;
        }
        goto LAB_013b3314;
      }
    }
  }
  uVar19 = 0;
LAB_013b3314:
  *param_1 = uVar19;
  param_1[1] = uVar22;
  param_1[2] = pbVar1;
  return;
switchD_013b1878_caseD_0:
  local_38 = uVar13;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478("cannot find with empty needles",0x3d,&DAT_018937e0);
}

