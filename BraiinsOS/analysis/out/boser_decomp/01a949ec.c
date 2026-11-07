// FUN_01a949ec @ 01a949ec size=4284 calls_out=19 calls_in=4
// strings: is_extension | name_part | is_extension | name_part | UninterpretedOption | string_valuepositive_int_value

/* WARNING: Restarted to delay deadcode elimination for space: stack */

code * FUN_01a949ec(char param_1,int *param_2,undefined4 *param_3,int param_4)

{
  undefined1 uVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  uint *puVar7;
  code *pcVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined4 *******pppppppuVar13;
  undefined4 *******pppppppuVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  char *pcVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint local_c8 [10];
  undefined8 local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_8c [3];
  undefined4 *******local_80;
  undefined4 local_7c;
  int local_78;
  int local_74 [3];
  undefined4 *******local_68 [2];
  undefined4 *******local_60;
  code *local_5c;
  undefined4 *******local_58;
  code *local_54;
  undefined4 *******local_50;
  uint uStack_4c;
  undefined4 *******local_48;
  code *local_44;
  undefined4 *******local_40;
  uint local_3c;
  undefined4 *******local_38;
  code *local_34;
  undefined4 *******local_30;
  code *local_2c;
  
  local_58 = (undefined4 *******)CONCAT31(local_58._1_3_,param_1);
  local_60 = (undefined4 *******)CONCAT31(local_60._1_3_,2);
  if (param_1 != '\x02') {
    local_30 = &local_60;
    local_2c = FUN_01a924ac;
    local_34 = FUN_01a924ac;
    local_38 = &local_58;
    FUN_01a924e8(&local_48,&local_38);
    pcVar8 = (code *)FUN_01aa428c(&local_48);
    return pcVar8;
  }
  local_c8[4] = 0;
  local_c8[1] = 0;
  local_c8[9] = 0;
  local_c8[8] = 0;
  local_c8[5] = 0;
  local_c8[0] = 0;
  local_8c[0] = -0x80000000;
  local_90 = 0;
  local_94 = 4;
  local_98 = 0;
  local_74[0] = -0x80000000;
  local_80 = (undefined4 *******)&DAT_80000000;
  if (param_4 == 0) {
    uVar11 = 0x17;
    pcVar18 = "recursion limit reached";
  }
  else {
    puVar20 = (undefined4 *)*param_3;
    FUN_01a9d538(&local_38,puVar20);
    if (local_38 == (undefined4 *******)&DAT_00000001) {
LAB_01a94a8c:
      pcVar8 = local_34;
      goto LAB_01a95620;
    }
    if ((uint)-(int)local_2c < (uint)(local_30 <= (undefined4 *******)puVar20[1])) {
      uVar4 = (int)puVar20[1] - (int)local_30;
      pcVar18 = "recursion limit reached";
LAB_01a94b1c:
      if ((uint)puVar20[1] <= uVar4) {
        if (puVar20[1] == uVar4) {
          iVar17 = param_2[2];
          if (iVar17 == *param_2) {
            FUN_00f84cec(param_2);
          }
          FUN_01bed4e2(param_2[1] + iVar17 * 0x60,local_c8,0x60);
          param_2[2] = iVar17 + 1;
          return (code *)0x0;
        }
        uVar11 = 0x19;
        pcVar18 = "delimited length exceeded";
        goto LAB_01a95828;
      }
      FUN_01a9d538(&local_38,puVar20);
      if (local_38 == (undefined4 *******)&DAT_00000001) goto LAB_01a94a8c;
      local_5c = local_2c;
      local_60 = local_30;
      if (local_2c != (code *)0x0) {
        local_44 = FUN_012fd074;
        local_48 = &local_60;
        FUN_01a8da38(&local_38,&DAT_00591421,&local_48);
        pcVar8 = (code *)FUN_01aa428c(&local_38);
        goto LAB_01a95620;
      }
      local_58 = (undefined4 *******)((uint)local_30 & 7);
      bVar12 = false;
      local_54 = (code *)0x0;
      bVar15 = true;
      bVar2 = false;
      bVar3 = 0;
      switch(local_58) {
      case (undefined4 *******)0x0:
        goto switchD_01a94b90_caseD_0;
      case (undefined4 *******)0x1:
        bVar2 = true;
        bVar15 = false;
        bVar3 = 1;
        goto switchD_01a94b90_caseD_0;
      case (undefined4 *******)0x2:
        bVar3 = 2;
        bVar12 = true;
        break;
      case (undefined4 *******)0x3:
        bVar3 = 3;
        break;
      case (undefined4 *******)0x4:
        bVar3 = 4;
        break;
      case (undefined4 *******)0x5:
        bVar3 = 5;
        break;
      default:
        local_44 = FUN_012fd074;
        local_48 = &local_58;
        FUN_01a8da38(&local_38,&DAT_00596158,&local_48);
        pcVar8 = (code *)FUN_01aa428c(&local_38);
        goto LAB_01a95620;
      }
      bVar15 = false;
switchD_01a94b90_caseD_0:
      uVar5 = (uint)local_30 >> 3;
      if (uVar5 == 0) {
        pcVar8 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
        goto LAB_01a95620;
      }
      local_60._1_3_ = (undefined3)((uint)local_30 >> 8);
      switch(uVar5) {
      case 2:
        local_58 = (undefined4 *******)(uint)bVar3;
        local_60 = (undefined4 *******)CONCAT31(local_60._1_3_,2);
        if (bVar12) {
          local_3c = local_3c & 0xffffff00;
          local_40 = (undefined4 *******)0x0;
          local_48 = (undefined4 *******)0x0;
          local_44 = (code *)0x1;
          if (param_4 + -1 == 0) {
            uVar11 = 0x17;
LAB_01a95aa8:
            pcVar8 = (code *)FUN_01aa0da0(pcVar18,uVar11);
LAB_01a95538:
          }
          else {
            FUN_01a9d538(&local_38,puVar20);
            if (local_38 != (undefined4 *******)&DAT_00000001) {
              if ((uint)-(int)local_2c < (uint)(local_30 <= (undefined4 *******)puVar20[1])) {
                uVar5 = (int)puVar20[1] - (int)local_30;
                while( true ) {
                  uVar16 = local_3c;
                  pppppppuVar14 = local_40;
                  pcVar8 = local_44;
                  pppppppuVar13 = local_48;
                  iVar17 = local_90;
                  if ((uint)puVar20[1] <= uVar5) break;
                  FUN_01a9d538(&local_38,puVar20);
                  if (local_38 == (undefined4 *******)&DAT_00000001) goto LAB_01a95500;
                  local_68[0] = local_30;
                  if (local_2c != (code *)0x0) {
                    local_54 = FUN_012fd074;
                    local_58 = local_68;
                    FUN_01a8da38(&local_38,&DAT_00591421,&local_58);
                    pcVar8 = (code *)FUN_01aa428c(&local_38);
                    goto LAB_01a95538;
                  }
                  local_5c = (code *)0x0;
                  local_60 = (undefined4 *******)((uint)local_30 & 7);
                  uVar16 = ((uint)local_30 ^ 4) & 7;
                  if ((0xf3U >> uVar16 & 1) == 0) {
                    local_54 = FUN_012fd074;
                    local_58 = &local_60;
                    FUN_01a8da38(&local_38,&DAT_00596158,&local_58);
                    pcVar8 = (code *)FUN_01aa428c(&local_38);
                    goto LAB_01a95538;
                  }
                  uVar19 = (uint)local_30 >> 3;
                  if (uVar19 == 0) {
                    pcVar8 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                    goto LAB_01a95538;
                  }
                  uVar1 = (&DAT_00571008)[uVar16];
                  if (uVar19 == 1) {
                    pcVar6 = (code *)FUN_01a9e23c(uVar1,&local_48,param_3);
                    pcVar8 = (code *)0x0;
                    if (pcVar6 != (code *)0x0) {
                      iVar17 = *(int *)(pcVar6 + 8);
                      if (iVar17 == *(int *)pcVar6) {
                        FUN_018fa978(pcVar6);
                      }
                      puVar20 = (undefined4 *)(*(int *)(pcVar6 + 4) + iVar17 * 0x10);
                      *puVar20 = &DAT_00570f10;
                      pcVar18 = "name_part";
                      uVar11 = 9;
LAB_01a955ac:
                      puVar20[1] = 8;
                      puVar20[2] = pcVar18;
                      puVar20[3] = uVar11;
                      *(int *)(pcVar6 + 8) = iVar17 + 1;
                      pcVar8 = pcVar6;
                      goto LAB_01a955c8;
                    }
                  }
                  else if (uVar19 == 2) {
                    pcVar6 = (code *)FUN_01a9cbb8(uVar1,&local_3c,puVar20);
                    pcVar8 = (code *)0x0;
                    if (pcVar6 != (code *)0x0) {
                      iVar17 = *(int *)(pcVar6 + 8);
                      if (iVar17 == *(int *)pcVar6) {
                        FUN_018fa978(pcVar6);
                      }
                      puVar20 = (undefined4 *)(*(int *)(pcVar6 + 4) + iVar17 * 0x10);
                      *puVar20 = &DAT_00570f10;
                      pcVar18 = "is_extension";
                      uVar11 = 0xc;
                      goto LAB_01a955ac;
                    }
                  }
                  else {
                    pcVar8 = (code *)FUN_01a9d744(uVar1,uVar19,param_3,param_4 + -2);
                  }
                  if (pcVar8 != (code *)0x0) goto LAB_01a955c8;
                }
                if (puVar20[1] == uVar5) {
                  if (local_90 == local_98) {
                    FUN_01aa1b90(&local_98);
                  }
                  puVar7 = (uint *)(local_94 + iVar17 * 0x10);
                  *puVar7 = (uint)pppppppuVar13;
                  puVar7[1] = (uint)pcVar8;
                  puVar7[2] = (uint)pppppppuVar14;
                  puVar7[3] = uVar16;
                  local_90 = iVar17 + 1;
                  goto LAB_01a9545c;
                }
                uVar11 = 0x19;
                pcVar18 = "delimited length exceeded";
              }
              else {
                uVar11 = 0x10;
                pcVar18 = "buffer underflow";
              }
              goto LAB_01a95aa8;
            }
LAB_01a95500:
            pcVar8 = local_34;
          }
LAB_01a955c8:
          FUN_019bb7e0(local_48,local_44);
        }
        else {
          local_30 = &local_60;
          local_2c = FUN_01a924ac;
          local_34 = FUN_01a924ac;
          local_38 = &local_58;
          FUN_01a924e8(&local_48,&local_38);
          pcVar8 = (code *)FUN_01aa428c(&local_48);
        }
        iVar17 = *(int *)(pcVar8 + 8);
        if (iVar17 == *(int *)pcVar8) {
          FUN_018fa978(pcVar8);
        }
        puVar20 = (undefined4 *)(*(int *)(pcVar8 + 4) + iVar17 * 0x10);
        *puVar20 = "UninterpretedOption";
        pcVar18 = &DAT_0056ee18;
        uVar11 = 4;
        break;
      case 3:
        if (local_8c[0] == -0x80000000) {
          local_8c[2] = 0;
          local_8c[1] = 1;
          local_8c[0] = 0;
        }
        pcVar8 = (code *)FUN_01a9e23c(bVar3,local_8c,param_3);
        pcVar6 = (code *)0x0;
        if (pcVar8 == (code *)0x0) goto LAB_01a95460;
        iVar17 = *(int *)(pcVar8 + 8);
        if (iVar17 == *(int *)pcVar8) {
          FUN_018fa978(pcVar8);
        }
        puVar20 = (undefined4 *)(*(int *)(pcVar8 + 4) + iVar17 * 0x10);
        *puVar20 = "UninterpretedOption";
        pcVar18 = "identifier_valuecontent-length: \x01";
        uVar11 = 0x10;
LAB_01a956a0:
        puVar20[1] = 0x13;
        puVar20[2] = pcVar18;
        puVar20[3] = uVar11;
        *(int *)(pcVar8 + 8) = iVar17 + 1;
        goto LAB_01a95620;
      case 4:
        if ((local_c8[0] & 1) == 0) {
          local_c8[1] = 0;
          local_c8[2] = 0;
          local_c8[3] = 0;
          local_c8[0] = 1;
        }
        local_58 = (undefined4 *******)(uint)bVar3;
        local_60 = (undefined4 *******)((uint)local_30 & 0xffffff00);
        if (bVar15) {
          uVar5 = puVar20[1];
          if (uVar5 == 0) {
LAB_01a95984:
            pcVar8 = (code *)FUN_01aa0da0("invalid varint",0xe);
            goto LAB_01a95994;
          }
          pbVar10 = (byte *)*puVar20;
          pppppppuVar13 = (undefined4 *******)(int)(char)*pbVar10;
          if (-1 < (int)pppppppuVar13) {
            *puVar20 = pbVar10 + 1;
            puVar20[1] = uVar5 - 1;
            pcVar8 = (code *)((int)pppppppuVar13 >> 0x1f);
LAB_01a95420:
            puVar7 = local_c8 + 2;
LAB_01a95458:
            *puVar7 = (uint)pppppppuVar13;
            puVar7[1] = (uint)pcVar8;
            goto LAB_01a9545c;
          }
          if ((10 < uVar5) || (-1 < (char)pbVar10[uVar5 - 1])) {
            pppppppuVar13 = (undefined4 *******)((uint)*pbVar10 + (uint)pbVar10[1] * 0x80 + -0x80);
            if ((char)pbVar10[1] < '\0') {
              pppppppuVar14 = pppppppuVar13 + (uint)pbVar10[2] * 0x1000 + -0x1000;
              if ((char)pbVar10[2] < '\0') {
                bVar3 = pbVar10[3];
                pppppppuVar13 = pppppppuVar14 + (uint)bVar3 * 0x80000 + -0x80000;
                if ((char)bVar3 < '\0') {
                  uVar16 = (uint)pbVar10[4];
                  pppppppuVar14 = pppppppuVar14 + (uint)bVar3 * 0x80000 + -0x4080000;
                  uVar19 = (uint)(char)pbVar10[4];
                  if ((int)uVar19 < 0) {
                    uVar19 = (uVar16 + (uint)pbVar10[5] * 0x80) - 0x80;
                    if ((char)pbVar10[5] < '\0') {
                      uVar19 = (uVar19 + (uint)pbVar10[6] * 0x4000) - 0x4000;
                      if ((char)pbVar10[6] < '\0') {
                        iVar17 = uVar19 + (uint)pbVar10[7] * 0x200000;
                        if ((char)pbVar10[7] < '\0') {
                          bVar3 = pbVar10[8];
                          pppppppuVar13 = pppppppuVar14 + uVar16 * 0x4000000;
                          iVar17 = (iVar17 + 0xefe00000U >> 4) +
                                   (uint)CARRY4((uint)pppppppuVar14,uVar16 * 0x10000000);
                          if ((char)bVar3 < '\0') {
                            if (1 < pbVar10[9]) goto LAB_01a95984;
                            pcVar8 = (code *)(iVar17 + (bVar3 & 0x7f | (uint)pbVar10[9] << 7) *
                                                       0x1000000);
                            iVar17 = 10;
                          }
                          else {
                            pcVar8 = (code *)(iVar17 + (uint)bVar3 * 0x1000000);
                            iVar17 = 9;
                          }
                        }
                        else {
                          pppppppuVar13 = pppppppuVar14 + uVar16 * 0x4000000;
                          pcVar8 = (code *)((iVar17 - 0x200000U >> 4) +
                                           (uint)CARRY4((uint)pppppppuVar14,uVar16 * 0x10000000));
                          iVar17 = 8;
                        }
                      }
                      else {
                        pppppppuVar13 = pppppppuVar14 + uVar16 * 0x4000000;
                        pcVar8 = (code *)((uVar19 >> 4) +
                                         (uint)CARRY4((uint)pppppppuVar14,uVar16 * 0x10000000));
                        iVar17 = 7;
                      }
                    }
                    else {
                      pppppppuVar13 = pppppppuVar14 + uVar16 * 0x4000000;
                      pcVar8 = (code *)((uVar19 >> 4) +
                                       (uint)CARRY4((uint)pppppppuVar14,uVar16 * 0x10000000));
                      iVar17 = 6;
                    }
                  }
                  else {
                    pppppppuVar13 = pppppppuVar14 + uVar19 * 0x4000000;
                    iVar17 = 5;
                    pcVar8 = (code *)((((int)uVar19 >> 0x1f) << 0x1c | uVar19 >> 4) +
                                     (uint)CARRY4((uint)pppppppuVar14,uVar19 * 0x10000000));
                  }
                }
                else {
                  pcVar8 = (code *)0x0;
                  iVar17 = 4;
                }
              }
              else {
                pcVar8 = (code *)0x0;
                iVar17 = 3;
                pppppppuVar13 = pppppppuVar14;
              }
            }
            else {
              pcVar8 = (code *)0x0;
              iVar17 = 2;
            }
            *puVar20 = pbVar10 + iVar17;
            puVar20[1] = uVar5 - iVar17;
            goto LAB_01a95420;
          }
          FUN_01a9df74(&local_38,puVar20);
          if (local_38 == (undefined4 *******)0x0) {
            pppppppuVar13 = local_30;
            pcVar8 = local_2c;
            goto LAB_01a95420;
          }
          pcVar8 = local_34;
        }
        else {
          local_30 = &local_60;
          local_2c = FUN_01a9c210;
          local_34 = FUN_01a9c210;
          local_38 = &local_58;
          FUN_01a924e8(&local_48,&local_38);
          pcVar8 = (code *)FUN_01aa428c(&local_48);
LAB_01a95994:
        }
        iVar17 = *(int *)(pcVar8 + 8);
        if (iVar17 == *(int *)pcVar8) {
          FUN_018fa978(pcVar8);
        }
        iVar9 = *(int *)(pcVar8 + 4);
        pcVar18 = "positive_int_value";
        goto LAB_01a95a08;
      case 5:
        if ((local_c8[4] & 1) == 0) {
          local_c8[6] = 0;
          local_c8[7] = 0;
          local_c8[4] = 1;
          local_c8[5] = 0;
        }
        local_58 = (undefined4 *******)(uint)bVar3;
        local_60 = (undefined4 *******)((uint)local_30 & 0xffffff00);
        if (bVar15) {
          uVar5 = puVar20[1];
          if (uVar5 == 0) {
LAB_01a959c8:
            pcVar8 = (code *)FUN_01aa0da0("invalid varint",0xe);
            goto LAB_01a959d8;
          }
          pbVar10 = (byte *)*puVar20;
          pppppppuVar13 = (undefined4 *******)(int)(char)*pbVar10;
          if (-1 < (int)pppppppuVar13) {
            *puVar20 = pbVar10 + 1;
            puVar20[1] = uVar5 - 1;
            pcVar8 = (code *)((int)pppppppuVar13 >> 0x1f);
LAB_01a95454:
            puVar7 = local_c8 + 6;
            goto LAB_01a95458;
          }
          if ((10 < uVar5) || (-1 < (char)pbVar10[uVar5 - 1])) {
            pppppppuVar13 = (undefined4 *******)((uint)*pbVar10 + (uint)pbVar10[1] * 0x80 + -0x80);
            if ((char)pbVar10[1] < '\0') {
              pppppppuVar14 = pppppppuVar13 + (uint)pbVar10[2] * 0x1000 + -0x1000;
              if ((char)pbVar10[2] < '\0') {
                bVar3 = pbVar10[3];
                pppppppuVar13 = pppppppuVar14 + (uint)bVar3 * 0x80000 + -0x80000;
                if ((char)bVar3 < '\0') {
                  uVar16 = (uint)pbVar10[4];
                  pppppppuVar14 = pppppppuVar14 + (uint)bVar3 * 0x80000 + -0x4080000;
                  uVar19 = (uint)(char)pbVar10[4];
                  if ((int)uVar19 < 0) {
                    uVar19 = (uVar16 + (uint)pbVar10[5] * 0x80) - 0x80;
                    if ((char)pbVar10[5] < '\0') {
                      uVar19 = (uVar19 + (uint)pbVar10[6] * 0x4000) - 0x4000;
                      if ((char)pbVar10[6] < '\0') {
                        iVar17 = uVar19 + (uint)pbVar10[7] * 0x200000;
                        if ((char)pbVar10[7] < '\0') {
                          bVar3 = pbVar10[8];
                          pppppppuVar13 = pppppppuVar14 + uVar16 * 0x4000000;
                          iVar17 = (iVar17 + 0xefe00000U >> 4) +
                                   (uint)CARRY4((uint)pppppppuVar14,uVar16 * 0x10000000);
                          if ((char)bVar3 < '\0') {
                            if (1 < pbVar10[9]) goto LAB_01a959c8;
                            pcVar8 = (code *)(iVar17 + (bVar3 & 0x7f | (uint)pbVar10[9] << 7) *
                                                       0x1000000);
                            iVar17 = 10;
                          }
                          else {
                            pcVar8 = (code *)(iVar17 + (uint)bVar3 * 0x1000000);
                            iVar17 = 9;
                          }
                        }
                        else {
                          pppppppuVar13 = pppppppuVar14 + uVar16 * 0x4000000;
                          pcVar8 = (code *)((iVar17 - 0x200000U >> 4) +
                                           (uint)CARRY4((uint)pppppppuVar14,uVar16 * 0x10000000));
                          iVar17 = 8;
                        }
                      }
                      else {
                        pppppppuVar13 = pppppppuVar14 + uVar16 * 0x4000000;
                        pcVar8 = (code *)((uVar19 >> 4) +
                                         (uint)CARRY4((uint)pppppppuVar14,uVar16 * 0x10000000));
                        iVar17 = 7;
                      }
                    }
                    else {
                      pppppppuVar13 = pppppppuVar14 + uVar16 * 0x4000000;
                      pcVar8 = (code *)((uVar19 >> 4) +
                                       (uint)CARRY4((uint)pppppppuVar14,uVar16 * 0x10000000));
                      iVar17 = 6;
                    }
                  }
                  else {
                    pppppppuVar13 = pppppppuVar14 + uVar19 * 0x4000000;
                    iVar17 = 5;
                    pcVar8 = (code *)((((int)uVar19 >> 0x1f) << 0x1c | uVar19 >> 4) +
                                     (uint)CARRY4((uint)pppppppuVar14,uVar19 * 0x10000000));
                  }
                }
                else {
                  pcVar8 = (code *)0x0;
                  iVar17 = 4;
                }
              }
              else {
                pcVar8 = (code *)0x0;
                iVar17 = 3;
                pppppppuVar13 = pppppppuVar14;
              }
            }
            else {
              pcVar8 = (code *)0x0;
              iVar17 = 2;
            }
            *puVar20 = pbVar10 + iVar17;
            puVar20[1] = uVar5 - iVar17;
            goto LAB_01a95454;
          }
          FUN_01a9df74(&local_38,puVar20);
          if (local_38 == (undefined4 *******)0x0) {
            pppppppuVar13 = local_30;
            pcVar8 = local_2c;
            goto LAB_01a95454;
          }
          pcVar8 = local_34;
        }
        else {
          local_30 = &local_60;
          local_2c = FUN_01a9d9ec;
          local_34 = FUN_01a9d9ec;
          local_38 = &local_58;
          FUN_01a924e8(&local_48,&local_38);
          pcVar8 = (code *)FUN_01aa428c(&local_48);
LAB_01a959d8:
        }
        iVar17 = *(int *)(pcVar8 + 8);
        if (iVar17 == *(int *)pcVar8) {
          FUN_018fa978(pcVar8);
        }
        iVar9 = *(int *)(pcVar8 + 4);
        pcVar18 = "negative_int_value";
LAB_01a95a08:
        puVar20 = (undefined4 *)(iVar9 + iVar17 * 0x10);
        *puVar20 = "UninterpretedOption";
        uVar11 = 0x12;
        break;
      case 6:
        if ((local_c8[8] & 1) == 0) {
          local_a0 = 0;
          local_c8[8] = 1;
          local_c8[9] = 0;
        }
        local_58 = (undefined4 *******)(uint)bVar3;
        local_60 = (undefined4 *******)CONCAT31(local_60._1_3_,1);
        if (bVar2) {
          if (7 < (uint)puVar20[1]) {
            local_a0 = *(undefined8 *)*puVar20;
            puVar20[1] = puVar20[1] - 8;
            *puVar20 = (undefined8 *)*puVar20 + 1;
LAB_01a9545c:
            pcVar6 = (code *)0x0;
            goto LAB_01a95460;
          }
          pcVar8 = (code *)FUN_01aa0da0("buffer underflow",0x10);
        }
        else {
          local_30 = &local_60;
          local_2c = FUN_01a9dd48;
          local_34 = FUN_01a9dd48;
          local_38 = &local_58;
          FUN_01a924e8(&local_48,&local_38);
          pcVar8 = (code *)FUN_01aa428c(&local_48);
        }
        iVar17 = *(int *)(pcVar8 + 8);
        if (iVar17 == *(int *)pcVar8) {
          FUN_018fa978(pcVar8);
        }
        *(int *)(pcVar8 + 8) = iVar17 + 1;
        puVar20 = (undefined4 *)(*(int *)(pcVar8 + 4) + iVar17 * 0x10);
        *puVar20 = "UninterpretedOption";
        puVar20[1] = 0x13;
        puVar20[2] = "double_value";
        puVar20[3] = 0xc;
        goto LAB_01a95620;
      case 7:
        if (local_80 == (undefined4 *******)&DAT_80000000) {
          local_78 = 0;
          local_7c = 1;
          local_80 = (undefined4 *******)0x0;
        }
        pppppppuVar13 = local_80;
        local_58 = (undefined4 *******)(uint)bVar3;
        local_60 = (undefined4 *******)CONCAT31(local_60._1_3_,2);
        if (bVar12) {
          FUN_01a9d538(&local_38,puVar20);
          if (local_38 != (undefined4 *******)&DAT_00000001) {
            if ((uint)-(int)local_2c < (uint)(local_30 <= (undefined4 *******)puVar20[1])) {
              FUN_01aa0a20(&local_58,puVar20);
              local_78 = 0;
              if (pppppppuVar13 < local_50) {
                FUN_0132b898(&local_80,0,local_50,1,1);
                pppppppuVar13 = local_80;
              }
              local_48 = local_58;
              local_44 = local_54;
              local_40 = local_50;
              local_3c = uStack_4c;
              if ((undefined4 *******)((int)pppppppuVar13 - local_78) < local_50) {
                FUN_0132b898(&local_80,local_78,local_50,1,1);
              }
              for (; pppppppuVar13 = local_40, local_40 != (undefined4 *******)0x0;
                  local_40 = (undefined4 *******)((int)local_40 - (int)pppppppuVar13)) {
                FUN_01ac6cbc(&local_80,local_44,local_40);
                local_68[0] = pppppppuVar13;
                if (local_40 < pppppppuVar13) {
                  local_60 = local_40;
                  local_30 = &local_60;
                  local_38 = local_68;
                  local_2c = (code *)&LAB_01a6a304;
                  local_34 = (code *)&LAB_01a6a304;
                    /* WARNING: Subroutine does not return */
                  FUN_012fb100(&DAT_005ac267,&local_38,&DAT_01d2e534);
                }
                local_44 = local_44 + (int)pppppppuVar13;
              }
              (*(code *)local_48[4])(&local_3c,local_44,0);
              goto LAB_01a9545c;
            }
            pcVar8 = (code *)FUN_01aa0da0("buffer underflow",0x10);
            goto LAB_01a95a94;
          }
          pcVar8 = local_34;
        }
        else {
          local_30 = &local_60;
          local_2c = FUN_01a9d9b0;
          local_34 = FUN_01a9d9b0;
          local_38 = &local_58;
          FUN_01a924e8(&local_48,&local_38);
          pcVar8 = (code *)FUN_01aa428c(&local_48);
LAB_01a95a94:
        }
        iVar17 = *(int *)(pcVar8 + 8);
        if (iVar17 == *(int *)pcVar8) {
          FUN_018fa978(pcVar8);
        }
        puVar20 = (undefined4 *)(*(int *)(pcVar8 + 4) + iVar17 * 0x10);
        *puVar20 = "UninterpretedOption";
        pcVar18 = "string_valuepositive_int_value";
        uVar11 = 0xc;
        break;
      case 8:
        if (local_74[0] == -0x80000000) {
          local_74[2] = 0;
          local_74[1] = 1;
          local_74[0] = 0;
        }
        pcVar8 = (code *)FUN_01a9e23c(bVar3,local_74,param_3);
        pcVar6 = (code *)0x0;
        if (pcVar8 != (code *)0x0) {
          iVar17 = *(int *)(pcVar8 + 8);
          if (iVar17 == *(int *)pcVar8) {
            FUN_018fa978(pcVar8);
          }
          puVar20 = (undefined4 *)(*(int *)(pcVar8 + 4) + iVar17 * 0x10);
          *puVar20 = "UninterpretedOption";
          pcVar18 = "aggregate_value";
          uVar11 = 0xf;
          goto LAB_01a956a0;
        }
        goto LAB_01a95460;
      default:
        pcVar6 = (code *)FUN_01a9d744(bVar3,uVar5,param_3,param_4 + -1);
LAB_01a95460:
        pcVar8 = pcVar6;
        if (pcVar8 != (code *)0x0) goto LAB_01a95620;
        goto LAB_01a94b1c;
      }
      puVar20[1] = 0x13;
      puVar20[2] = pcVar18;
      puVar20[3] = uVar11;
      *(int *)(pcVar8 + 8) = iVar17 + 1;
      goto LAB_01a95620;
    }
    uVar11 = 0x10;
    pcVar18 = "buffer underflow";
  }
LAB_01a95828:
  pcVar8 = (code *)FUN_01aa0da0(pcVar18,uVar11);
LAB_01a95620:
  FUN_01a95c7c(local_c8);
  return pcVar8;
}

