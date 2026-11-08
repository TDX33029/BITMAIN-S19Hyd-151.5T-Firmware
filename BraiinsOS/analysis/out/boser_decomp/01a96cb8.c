// FUN_01a96cb8 @ 01a96cb8 size=4696 calls_out=17 calls_in=2
// strings: EnumReservedRange | EnumReservedRange | start | start | EnumDescriptorProto | reserved_range

code * FUN_01a96cb8(char param_1,int *param_2,int *param_3,int param_4)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *******pppppppuVar4;
  byte bVar5;
  int iVar6;
  code *pcVar7;
  uint *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  code *pcVar11;
  char *pcVar12;
  uint uVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70 [2];
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c [2];
  undefined4 *******local_54;
  code *local_50;
  undefined4 *******local_48;
  code *local_44;
  undefined4 ******local_40;
  code *local_3c;
  undefined4 *******local_38;
  code *local_34;
  undefined4 ******local_30;
  undefined4 local_2c;
  
  local_30 = (undefined4 ******)CONCAT31(local_30._1_3_,param_1);
  local_48 = (undefined4 *******)CONCAT31(local_48._1_3_,2);
  if (param_1 != '\x02') {
    local_38 = &local_48;
    local_34 = FUN_01a924ac;
    local_3c = FUN_01a924ac;
    local_40 = &local_30;
    FUN_01a924e8(&local_54,&local_40);
    pcVar11 = (code *)FUN_01aa428c(&local_54);
    return pcVar11;
  }
  local_ac = -0x80000000;
  local_a0 = -0x80000000;
  local_c8 = 0;
  local_cc = 4;
  local_d0 = 0;
  local_b0 = 0;
  local_b4 = 4;
  local_b8 = 0;
  local_bc = 0;
  local_c0 = 4;
  local_c4 = 0;
  if (param_4 == 0) {
    uVar14 = 0x17;
    pcVar12 = "recursion limit reached";
  }
  else {
    iVar21 = *param_3;
    FUN_01a9d538(&local_40,iVar21);
    if (local_40 == (undefined4 ******)&DAT_00000001) {
LAB_01a96d40:
      pcVar11 = local_3c;
      goto LAB_01a97a28;
    }
    if ((uint)-(int)local_34 < (uint)(local_38 <= *(undefined4 ********)(iVar21 + 4))) {
      uVar13 = (int)*(undefined4 ********)(iVar21 + 4) - (int)local_38;
      iVar19 = param_4 + -1;
      iVar6 = param_4 + -2;
      do {
        if (*(uint *)(iVar21 + 4) <= uVar13) {
          if (*(uint *)(iVar21 + 4) == uVar13) {
            iVar21 = param_2[2];
            if (iVar21 == *param_2) {
              FUN_01aa1b60(param_2);
            }
            piVar9 = (int *)(param_2[1] + iVar21 * 0x40);
            *piVar9 = local_d0;
            piVar9[1] = local_cc;
            piVar9[2] = local_c8;
            piVar9[3] = local_c4;
            piVar9[4] = local_c0;
            piVar9[5] = local_bc;
            piVar9[6] = local_b8;
            piVar9[7] = local_b4;
            piVar9[8] = local_b0;
            piVar9[9] = local_ac;
            piVar9[10] = local_a8;
            piVar9[0xb] = local_a4;
            piVar9[0xc] = local_a0;
            piVar9[0xd] = local_9c;
            piVar9[0xe] = local_98;
            piVar9[0xf] = local_94;
            param_2[2] = iVar21 + 1;
            return (code *)0x0;
          }
          uVar14 = 0x19;
          pcVar12 = "delimited length exceeded";
          goto LAB_01a97d18;
        }
        FUN_01a9d538(&local_40,iVar21);
        if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_01a96d40;
        local_44 = local_34;
        local_48 = local_38;
        pppppppuVar4 = local_48;
        if (local_34 != (code *)0x0) {
          local_50 = FUN_012fd074;
          local_54 = &local_48;
          FUN_01a8da38(&local_40,&DAT_00591421,&local_54);
          pcVar11 = (code *)FUN_01aa428c(&local_40);
          goto LAB_01a97d1c;
        }
        local_30 = (undefined4 ******)((uint)local_38 & 7);
        bVar15 = false;
        local_2c = 0;
        bVar5 = 0;
        switch(local_30) {
        case (undefined4 ******)0x0:
          break;
        case (undefined4 ******)0x1:
          bVar5 = 1;
          break;
        case (undefined4 ******)0x2:
          bVar5 = 2;
          bVar15 = true;
          break;
        case (undefined4 ******)0x3:
          bVar5 = 3;
          break;
        case (undefined4 ******)0x4:
          bVar5 = 4;
          break;
        case (undefined4 ******)0x5:
          bVar5 = 5;
          break;
        default:
          local_50 = FUN_012fd074;
          local_54 = &local_30;
          FUN_01a8da38(&local_40,&DAT_00596158,&local_54);
          pcVar11 = (code *)FUN_01aa428c(&local_40);
          goto LAB_01a97d1c;
        }
        uVar20 = (uint)local_38 >> 3;
        if (uVar20 == 0) {
          pcVar11 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
          goto LAB_01a97d1c;
        }
        local_48._1_3_ = (undefined3)((uint)local_38 >> 8);
        local_48 = pppppppuVar4;
        switch(uVar20) {
        case 1:
          if (local_ac == -0x80000000) {
            local_a4 = 0;
            local_a8 = 1;
            local_ac = 0;
          }
          pcVar7 = (code *)FUN_01a9e23c(bVar5,&local_ac,param_3);
          pcVar11 = (code *)0x0;
          if (pcVar7 != (code *)0x0) {
            iVar21 = *(int *)(pcVar7 + 8);
            if (iVar21 == *(int *)pcVar7) {
              FUN_018fa978(pcVar7);
            }
            puVar10 = (undefined4 *)(*(int *)(pcVar7 + 4) + iVar21 * 0x10);
            *puVar10 = "EnumDescriptorProto";
            pcVar12 = &DAT_0056ee18;
            uVar14 = 4;
LAB_01a97aa8:
            puVar10[1] = 0x13;
            puVar10[2] = pcVar12;
            puVar10[3] = uVar14;
            *(int *)(pcVar7 + 8) = iVar21 + 1;
            pcVar11 = pcVar7;
            goto LAB_01a97a28;
          }
          break;
        case 2:
          local_30 = (undefined4 ******)(uint)bVar5;
          local_48 = (undefined4 *******)CONCAT31(local_48._1_3_,2);
          if (bVar15) {
            local_90 = 0;
            local_88 = 0x80000000;
            local_7c = 0x80000000;
            if (iVar19 == 0) {
              uVar14 = 0x17;
              pcVar12 = "recursion limit reached";
LAB_01a97e40:
              pcVar11 = (code *)FUN_01aa0da0(pcVar12,uVar14);
LAB_01a97efc:
            }
            else {
              FUN_01a9d538(&local_40,iVar21);
              if (local_40 != (undefined4 ******)&DAT_00000001) {
                if ((uint)-(int)local_34 < (uint)(local_38 <= *(undefined4 ********)(iVar21 + 4))) {
                  uVar20 = (int)*(undefined4 ********)(iVar21 + 4) - (int)local_38;
                  while (iVar3 = local_c8, uVar20 < *(uint *)(iVar21 + 4)) {
                    FUN_01a9d538(&local_40,iVar21);
                    if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_01a9773c;
                    local_44 = local_34;
                    local_48 = local_38;
                    if (local_34 != (code *)0x0) {
                      local_50 = FUN_012fd074;
                      local_54 = &local_48;
                      FUN_01a8da38(&local_40,&DAT_00591421,&local_54);
                      pcVar11 = (code *)FUN_01aa428c(&local_40);
                      goto LAB_01a97efc;
                    }
                    local_30 = (undefined4 ******)((uint)local_38 & 7);
                    bVar15 = false;
                    local_2c = 0;
                    bVar5 = 0;
                    switch(local_30) {
                    case (undefined4 ******)0x0:
                      break;
                    case (undefined4 ******)0x1:
                      bVar5 = 1;
                      break;
                    case (undefined4 ******)0x2:
                      bVar5 = 2;
                      bVar15 = true;
                      break;
                    case (undefined4 ******)0x3:
                      bVar5 = 3;
                      break;
                    case (undefined4 ******)0x4:
                      bVar5 = 4;
                      break;
                    case (undefined4 ******)0x5:
                      bVar5 = 5;
                      break;
                    default:
                      local_50 = FUN_012fd074;
                      local_54 = &local_30;
                      FUN_01a8da38(&local_40,&DAT_00596158,&local_54);
                      pcVar11 = (code *)FUN_01aa428c(&local_40);
                      goto LAB_01a97efc;
                    }
                    uVar17 = (uint)local_38 >> 3;
                    if (uVar17 == 0) {
                      pcVar11 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                      goto LAB_01a97efc;
                    }
                    if (uVar17 == 1) {
                      if (local_88 == 0x80000000) {
                        local_80 = 0;
                        local_84 = 1;
                        local_88 = 0;
                      }
                      pcVar7 = (code *)FUN_01a9e23c(bVar5,&local_88,param_3);
                      pcVar11 = (code *)0x0;
                      if (pcVar7 != (code *)0x0) {
                        iVar21 = *(int *)(pcVar7 + 8);
                        if (iVar21 == *(int *)pcVar7) {
                          FUN_018fa978(pcVar7);
                        }
                        puVar10 = (undefined4 *)(*(int *)(pcVar7 + 4) + iVar21 * 0x10);
                        *puVar10 = "EnumValueDescriptorProto";
                        pcVar12 = &DAT_0056ee18;
                        uVar14 = 4;
LAB_01a97b34:
                        puVar10[1] = 0x18;
                        puVar10[2] = pcVar12;
                        puVar10[3] = uVar14;
                        *(int *)(pcVar7 + 8) = iVar21 + 1;
                        pcVar11 = pcVar7;
                        goto LAB_01a978d8;
                      }
                    }
                    else if (uVar17 == 2) {
                      if ((local_90 & 1) == 0) {
                        local_8c = 0;
                        local_90 = 1;
                      }
                      pcVar7 = (code *)FUN_01a9dd84(bVar5,(uint)&local_90 | 4,iVar21);
                      pcVar11 = (code *)0x0;
                      if (pcVar7 != (code *)0x0) {
                        iVar21 = *(int *)(pcVar7 + 8);
                        if (iVar21 == *(int *)pcVar7) {
                          FUN_018fa978(pcVar7);
                        }
                        puVar10 = (undefined4 *)(*(int *)(pcVar7 + 4) + iVar21 * 0x10);
                        *puVar10 = "EnumValueDescriptorProto";
                        pcVar12 = "number";
                        uVar14 = 6;
                        goto LAB_01a97b34;
                      }
                    }
                    else {
                      if (uVar17 == 3) {
                        if (local_7c == 0x80000000) {
                          local_70[0] = CONCAT31(local_70[0]._1_3_,2);
                          local_74 = 0;
                          local_78 = 8;
                          local_7c = 0;
                        }
                        local_30 = (undefined4 ******)(uint)bVar5;
                        local_48._1_3_ = (undefined3)((uint)local_38 >> 8);
                        local_48 = (undefined4 *******)CONCAT31(local_48._1_3_,2);
                        if (bVar15) {
                          if (iVar6 == 0) {
                            uVar14 = 0x17;
                            pcVar12 = "recursion limit reached";
LAB_01a97ec4:
                            pcVar11 = (code *)FUN_01aa0da0(pcVar12,uVar14);
                            goto LAB_01a97734;
                          }
                          FUN_01a9d538(&local_40,iVar21);
                          if (local_40 != (undefined4 ******)&DAT_00000001) {
                            if ((uint)-(int)local_34 <
                                (uint)(local_38 <= *(undefined4 ********)(iVar21 + 4))) {
                              uVar17 = (int)*(undefined4 ********)(iVar21 + 4) - (int)local_38;
                              while (uVar17 < *(uint *)(iVar21 + 4)) {
                                FUN_01a9d538(&local_40,iVar21);
                                if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_01a976fc;
                                local_48 = local_38;
                                local_44 = local_34;
                                if (local_34 != (code *)0x0) {
                                  local_50 = FUN_012fd074;
                                  local_54 = &local_48;
                                  FUN_01a8da38(&local_40,&DAT_00591421,&local_54);
                                  pcVar11 = (code *)FUN_01aa428c(&local_40);
                                  goto LAB_01a97734;
                                }
                                local_30 = (undefined4 ******)((uint)local_38 & 7);
                                uVar18 = ((uint)local_38 ^ 4) & 7;
                                local_2c = 0;
                                if ((0xf3U >> uVar18 & 1) == 0) {
                                  local_50 = FUN_012fd074;
                                  local_54 = &local_30;
                                  FUN_01a8da38(&local_40,&DAT_00596158,&local_54);
                                  pcVar11 = (code *)FUN_01aa428c(&local_40);
                                  goto LAB_01a97734;
                                }
                                uVar1 = (uint)local_38 >> 3;
                                if (uVar1 == 0) {
                                  pcVar11 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                                  goto LAB_01a97734;
                                }
                                uVar2 = (&DAT_00571008)[uVar18];
                                if (uVar1 == 1) {
                                  uVar16 = 0;
                                  if ((local_70[0] & 0xff) != 2) {
                                    uVar16 = (char)local_70[0];
                                  }
                                  local_70[0] = CONCAT31(local_70[0]._1_3_,uVar16);
                                  pcVar11 = (code *)FUN_01a9cbb8(uVar2,local_70,iVar21);
                                  pcVar7 = (code *)0x0;
                                  if (pcVar11 != (code *)0x0) {
                                    iVar21 = *(int *)(pcVar11 + 8);
                                    if (iVar21 == *(int *)pcVar11) {
                                      FUN_018fa978(pcVar11);
                                    }
                                    puVar10 = (undefined4 *)(*(int *)(pcVar11 + 4) + iVar21 * 0x10);
                                    *puVar10 = &DAT_00568ae8;
                                    pcVar12 = "deprecated";
                                    uVar14 = 10;
LAB_01a97870:
                                    puVar10[1] = 0x10;
                                    puVar10[2] = pcVar12;
                                    puVar10[3] = uVar14;
                                    *(int *)(pcVar11 + 8) = iVar21 + 1;
                                    goto LAB_01a9788c;
                                  }
                                }
                                else if (uVar1 == 999) {
                                  pcVar11 = (code *)FUN_01a949ec(uVar2,&local_7c,param_3,
                                                                 param_4 + -3);
                                  pcVar7 = (code *)0x0;
                                  if (pcVar11 != (code *)0x0) {
                                    iVar21 = *(int *)(pcVar11 + 8);
                                    if (iVar21 == *(int *)pcVar11) {
                                      FUN_018fa978(pcVar11);
                                    }
                                    puVar10 = (undefined4 *)(*(int *)(pcVar11 + 4) + iVar21 * 0x10);
                                    *puVar10 = &DAT_00568ae8;
                                    pcVar12 = "uninterpreted_option";
                                    uVar14 = 0x14;
                                    goto LAB_01a97870;
                                  }
                                }
                                else {
                                  pcVar7 = (code *)FUN_01a9d744(uVar2,uVar1,param_3,param_4 + -3);
                                }
                                pcVar11 = pcVar7;
                                if (pcVar7 != (code *)0x0) goto LAB_01a9788c;
                              }
                              pcVar11 = (code *)0x0;
                              if (*(uint *)(iVar21 + 4) == uVar17) goto LAB_01a9755c;
                              uVar14 = 0x19;
                              pcVar12 = "delimited length exceeded";
                            }
                            else {
                              uVar14 = 0x10;
                              pcVar12 = "buffer underflow";
                            }
                            goto LAB_01a97ec4;
                          }
LAB_01a976fc:
                          pcVar11 = local_3c;
                        }
                        else {
                          local_38 = &local_48;
                          local_34 = FUN_01a924ac;
                          local_3c = FUN_01a924ac;
                          local_40 = &local_30;
                          FUN_01a924e8(&local_54,&local_40);
                          pcVar11 = (code *)FUN_01aa428c(&local_54);
LAB_01a97734:
                        }
LAB_01a9788c:
                        iVar21 = *(int *)(pcVar11 + 8);
                        if (iVar21 == *(int *)pcVar11) {
                          FUN_018fa978(pcVar11);
                        }
                        puVar10 = (undefined4 *)(*(int *)(pcVar11 + 4) + iVar21 * 0x10);
                        *puVar10 = "EnumValueDescriptorProto";
                        puVar10[1] = 0x18;
                        puVar10[2] = "options";
                        puVar10[3] = 7;
                        *(int *)(pcVar11 + 8) = iVar21 + 1;
                        goto LAB_01a978d8;
                      }
                      pcVar11 = (code *)FUN_01a9d744(bVar5,uVar17,param_3,iVar6);
                    }
LAB_01a9755c:
                    if (pcVar11 != (code *)0x0) goto LAB_01a978d8;
                  }
                  if (*(uint *)(iVar21 + 4) == uVar20) {
                    if (local_c8 == local_d0) {
                      FUN_01aa1c20(&local_d0);
                    }
                    puVar8 = (uint *)(local_cc + iVar3 * 0x24);
                    *puVar8 = local_90;
                    puVar8[1] = local_8c;
                    puVar8[2] = local_88;
                    puVar8[3] = local_84;
                    puVar8[4] = local_80;
                    puVar8[5] = local_7c;
                    puVar8[6] = local_78;
                    puVar8[7] = local_74;
                    puVar8[8] = local_70[0];
                    local_c8 = iVar3 + 1;
LAB_01a97614:
                    pcVar11 = (code *)0x0;
                    break;
                  }
                  uVar14 = 0x19;
                  pcVar12 = "delimited length exceeded";
                }
                else {
                  uVar14 = 0x10;
                  pcVar12 = "buffer underflow";
                }
                goto LAB_01a97e40;
              }
LAB_01a9773c:
              pcVar11 = local_3c;
            }
LAB_01a978d8:
            FUN_01a94918(&local_90);
          }
          else {
            local_38 = &local_48;
            local_34 = FUN_01a924ac;
            local_3c = FUN_01a924ac;
            local_40 = &local_30;
            FUN_01a924e8(&local_54,&local_40);
            pcVar11 = (code *)FUN_01aa428c(&local_54);
          }
          iVar21 = *(int *)(pcVar11 + 8);
          if (iVar21 == *(int *)pcVar11) {
            FUN_018fa978(pcVar11);
          }
          puVar10 = (undefined4 *)(*(int *)(pcVar11 + 4) + iVar21 * 0x10);
          *puVar10 = "EnumDescriptorProto";
          pcVar12 = "value";
          uVar14 = 5;
          goto LAB_01a97a10;
        case 3:
          if (local_a0 == -0x80000000) {
            local_94 = CONCAT22(local_94._2_2_,0x202);
            local_98 = 0;
            local_9c = 8;
            local_a0 = 0;
          }
          local_30 = (undefined4 ******)(uint)bVar5;
          local_48 = (undefined4 *******)CONCAT31(local_48._1_3_,2);
          if (bVar15) {
            if (iVar19 == 0) {
              uVar14 = 0x17;
              pcVar12 = "recursion limit reached";
LAB_01a97e54:
              pcVar11 = (code *)FUN_01aa0da0(pcVar12,uVar14);
              goto LAB_01a976a0;
            }
            FUN_01a9d538(&local_40,iVar21);
            if (local_40 != (undefined4 ******)&DAT_00000001) {
              if ((uint)-(int)local_34 < (uint)(local_38 <= *(undefined4 ********)(iVar21 + 4))) {
                uVar20 = (int)*(undefined4 ********)(iVar21 + 4) - (int)local_38;
                while (uVar20 < *(uint *)(iVar21 + 4)) {
                  FUN_01a9d538(&local_40,iVar21);
                  if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_01a97630;
                  local_48 = local_38;
                  local_44 = local_34;
                  if (local_34 != (code *)0x0) {
                    local_50 = FUN_012fd074;
                    local_54 = &local_48;
                    FUN_01a8da38(&local_40,&DAT_00591421,&local_54);
                    pcVar11 = (code *)FUN_01aa428c(&local_40);
                    goto LAB_01a976a0;
                  }
                  local_30 = (undefined4 ******)((uint)local_38 & 7);
                  uVar17 = ((uint)local_38 ^ 4) & 7;
                  local_2c = 0;
                  if ((0xf3U >> uVar17 & 1) == 0) {
                    local_50 = FUN_012fd074;
                    local_54 = &local_30;
                    FUN_01a8da38(&local_40,&DAT_00596158,&local_54);
                    pcVar11 = (code *)FUN_01aa428c(&local_40);
                    goto LAB_01a976a0;
                  }
                  uVar18 = (uint)local_38 >> 3;
                  if (uVar18 == 0) {
                    pcVar11 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                    goto LAB_01a976a0;
                  }
                  uVar2 = (&DAT_00571008)[uVar17];
                  if (uVar18 == 2) {
                    uVar16 = 0;
                    if ((local_94 & 0xff) != 2) {
                      uVar16 = (undefined1)local_94;
                    }
                    local_94 = CONCAT31(local_94._1_3_,uVar16);
                    pcVar11 = (code *)FUN_01a9cbb8(uVar2,&local_94,iVar21);
                    pcVar7 = (code *)0x0;
                    if (pcVar11 != (code *)0x0) {
                      iVar21 = *(int *)(pcVar11 + 8);
                      if (iVar21 == *(int *)pcVar11) {
                        FUN_018fa978(pcVar11);
                      }
                      puVar10 = (undefined4 *)(*(int *)(pcVar11 + 4) + iVar21 * 0x10);
                      *puVar10 = "EnumOptions";
                      uVar14 = 0xb;
                      pcVar12 = "allow_alias";
                      puVar10[1] = 0xb;
LAB_01a979c8:
                      puVar10[2] = pcVar12;
                      puVar10[3] = uVar14;
                      *(int *)(pcVar11 + 8) = iVar21 + 1;
                      goto LAB_01a979dc;
                    }
                  }
                  else if (uVar18 == 3) {
                    uVar16 = 0;
                    if ((local_94 >> 8 & 0xff) != 2) {
                      uVar16 = (char)(local_94 >> 8);
                    }
                    local_94._0_2_ = CONCAT11(uVar16,(undefined1)local_94);
                    pcVar11 = (code *)FUN_01a9cbb8(uVar2,(int)&local_94 + 1,iVar21);
                    pcVar7 = (code *)0x0;
                    if (pcVar11 != (code *)0x0) {
                      iVar21 = *(int *)(pcVar11 + 8);
                      if (iVar21 == *(int *)pcVar11) {
                        FUN_018fa978(pcVar11);
                      }
                      puVar10 = (undefined4 *)(*(int *)(pcVar11 + 4) + iVar21 * 0x10);
                      *puVar10 = "EnumOptions";
                      pcVar12 = "deprecated";
                      uVar14 = 10;
LAB_01a979c0:
                      puVar10[1] = 0xb;
                      goto LAB_01a979c8;
                    }
                  }
                  else if (uVar18 == 999) {
                    pcVar11 = (code *)FUN_01a949ec(uVar2,&local_a0,param_3,iVar6);
                    pcVar7 = (code *)0x0;
                    if (pcVar11 != (code *)0x0) {
                      iVar21 = *(int *)(pcVar11 + 8);
                      if (iVar21 == *(int *)pcVar11) {
                        FUN_018fa978(pcVar11);
                      }
                      puVar10 = (undefined4 *)(*(int *)(pcVar11 + 4) + iVar21 * 0x10);
                      *puVar10 = "EnumOptions";
                      pcVar12 = "uninterpreted_option";
                      uVar14 = 0x14;
                      goto LAB_01a979c0;
                    }
                  }
                  else {
                    pcVar7 = (code *)FUN_01a9d744(uVar2,uVar18,param_3,iVar6);
                  }
                  pcVar11 = pcVar7;
                  if (pcVar7 != (code *)0x0) goto LAB_01a979dc;
                }
                pcVar11 = (code *)0x0;
                if (*(uint *)(iVar21 + 4) == uVar20) break;
                uVar14 = 0x19;
                pcVar12 = "delimited length exceeded";
              }
              else {
                uVar14 = 0x10;
                pcVar12 = "buffer underflow";
              }
              goto LAB_01a97e54;
            }
LAB_01a97630:
            pcVar11 = local_3c;
          }
          else {
            local_38 = &local_48;
            local_34 = FUN_01a924ac;
            local_3c = FUN_01a924ac;
            local_40 = &local_30;
            FUN_01a924e8(&local_54,&local_40);
            pcVar11 = (code *)FUN_01aa428c(&local_54);
LAB_01a976a0:
          }
LAB_01a979dc:
          iVar21 = *(int *)(pcVar11 + 8);
          if (iVar21 == *(int *)pcVar11) {
            FUN_018fa978(pcVar11);
          }
          puVar10 = (undefined4 *)(*(int *)(pcVar11 + 4) + iVar21 * 0x10);
          *puVar10 = "EnumDescriptorProto";
          pcVar12 = "options";
          uVar14 = 7;
          goto LAB_01a97a10;
        case 4:
          local_30 = (undefined4 ******)(uint)bVar5;
          local_48 = (undefined4 *******)CONCAT31(local_48._1_3_,2);
          if (bVar15) {
            local_60 = 0;
            local_68 = 0;
            if (iVar19 == 0) {
              uVar14 = 0x17;
              pcVar12 = "recursion limit reached";
LAB_01a97e68:
              pcVar11 = (code *)FUN_01aa0da0(pcVar12,uVar14);
              goto LAB_01a97668;
            }
            FUN_01a9d538(&local_40,iVar21);
            if (local_40 != (undefined4 ******)&DAT_00000001) {
              if ((uint)-(int)local_34 < (uint)(local_38 <= *(undefined4 ********)(iVar21 + 4))) {
                uVar20 = (int)*(undefined4 ********)(iVar21 + 4) - (int)local_38;
                while (iVar3 = local_bc, uVar20 < *(uint *)(iVar21 + 4)) {
                  FUN_01a9d538(&local_40,iVar21);
                  if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_01a97628;
                  local_48 = local_38;
                  local_44 = local_34;
                  if (local_34 != (code *)0x0) {
                    local_50 = FUN_012fd074;
                    local_54 = &local_48;
                    FUN_01a8da38(&local_40,&DAT_00591421,&local_54);
                    pcVar11 = (code *)FUN_01aa428c(&local_40);
                    goto LAB_01a97668;
                  }
                  local_30 = (undefined4 ******)((uint)local_38 & 7);
                  uVar17 = ((uint)local_38 ^ 4) & 7;
                  local_2c = 0;
                  if ((0xf3U >> uVar17 & 1) == 0) {
                    local_50 = FUN_012fd074;
                    local_54 = &local_30;
                    FUN_01a8da38(&local_40,&DAT_00596158,&local_54);
                    pcVar11 = (code *)FUN_01aa428c(&local_40);
                    goto LAB_01a97668;
                  }
                  uVar18 = (uint)local_38 >> 3;
                  if (uVar18 == 0) {
                    pcVar11 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                    goto LAB_01a97668;
                  }
                  uVar2 = (&DAT_00571008)[uVar17];
                  if (uVar18 == 1) {
                    if ((local_68 & 1) == 0) {
                      local_64 = 0;
                      local_68 = 1;
                    }
                    pcVar11 = (code *)FUN_01a9dd84(uVar2,(uint)&local_68 | 4,iVar21);
                    pcVar7 = (code *)0x0;
                    if (pcVar11 != (code *)0x0) {
                      iVar21 = *(int *)(pcVar11 + 8);
                      if (iVar21 == *(int *)pcVar11) {
                        FUN_018fa978(pcVar11);
                      }
                      puVar10 = (undefined4 *)(*(int *)(pcVar11 + 4) + iVar21 * 0x10);
                      *puVar10 = "EnumReservedRange";
                      pcVar12 = "start";
                      uVar14 = 5;
LAB_01a977b0:
                      puVar10[1] = 0x11;
                      puVar10[2] = pcVar12;
                      puVar10[3] = uVar14;
                      *(int *)(pcVar11 + 8) = iVar21 + 1;
                      goto LAB_01a977cc;
                    }
                  }
                  else if (uVar18 == 2) {
                    if ((local_60 & 1) == 0) {
                      local_5c[0] = 0;
                      local_60 = 1;
                    }
                    pcVar11 = (code *)FUN_01a9dd84(uVar2,local_5c,iVar21);
                    pcVar7 = (code *)0x0;
                    if (pcVar11 != (code *)0x0) {
                      iVar21 = *(int *)(pcVar11 + 8);
                      if (iVar21 == *(int *)pcVar11) {
                        FUN_018fa978(pcVar11);
                      }
                      puVar10 = (undefined4 *)(*(int *)(pcVar11 + 4) + iVar21 * 0x10);
                      *puVar10 = "EnumReservedRange";
                      pcVar12 = "end";
                      uVar14 = 3;
                      goto LAB_01a977b0;
                    }
                  }
                  else {
                    pcVar7 = (code *)FUN_01a9d744(uVar2,uVar18,param_3,iVar6);
                  }
                  pcVar11 = pcVar7;
                  if (pcVar7 != (code *)0x0) goto LAB_01a977cc;
                }
                if (*(uint *)(iVar21 + 4) == uVar20) {
                  if (local_bc == local_c4) {
                    FUN_01aa1b90(&local_c4);
                  }
                  puVar8 = (uint *)(local_c0 + iVar3 * 0x10);
                  *puVar8 = local_68;
                  puVar8[1] = local_64;
                  puVar8[2] = local_60;
                  puVar8[3] = local_5c[0];
                  local_bc = iVar3 + 1;
                  goto LAB_01a97614;
                }
                uVar14 = 0x19;
                pcVar12 = "delimited length exceeded";
              }
              else {
                uVar14 = 0x10;
                pcVar12 = "buffer underflow";
              }
              goto LAB_01a97e68;
            }
LAB_01a97628:
            pcVar11 = local_3c;
          }
          else {
            local_38 = &local_48;
            local_34 = FUN_01a924ac;
            local_3c = FUN_01a924ac;
            local_40 = &local_30;
            FUN_01a924e8(&local_54,&local_40);
            pcVar11 = (code *)FUN_01aa428c(&local_54);
LAB_01a97668:
          }
LAB_01a977cc:
          iVar21 = *(int *)(pcVar11 + 8);
          if (iVar21 == *(int *)pcVar11) {
            FUN_018fa978(pcVar11);
          }
          puVar10 = (undefined4 *)(*(int *)(pcVar11 + 4) + iVar21 * 0x10);
          *puVar10 = "EnumDescriptorProto";
          pcVar12 = "reserved_range";
          uVar14 = 0xe;
LAB_01a97a10:
          puVar10[1] = 0x13;
          puVar10[2] = pcVar12;
          puVar10[3] = uVar14;
          *(int *)(pcVar11 + 8) = iVar21 + 1;
          goto LAB_01a97a28;
        case 5:
          pcVar7 = (code *)FUN_01a9e124(bVar5,&local_b8,param_3);
          pcVar11 = (code *)0x0;
          if (pcVar7 != (code *)0x0) {
            iVar21 = *(int *)(pcVar7 + 8);
            if (iVar21 == *(int *)pcVar7) {
              FUN_018fa978(pcVar7);
            }
            puVar10 = (undefined4 *)(*(int *)(pcVar7 + 4) + iVar21 * 0x10);
            *puVar10 = "EnumDescriptorProto";
            pcVar12 = "reserved_name";
            uVar14 = 0xd;
            goto LAB_01a97aa8;
          }
          break;
        default:
          pcVar11 = (code *)FUN_01a9d744(bVar5,uVar20,param_3,iVar19);
        }
      } while (pcVar11 == (code *)0x0);
      goto LAB_01a97a28;
    }
    uVar14 = 0x10;
    pcVar12 = "buffer underflow";
  }
LAB_01a97d18:
  pcVar11 = (code *)FUN_01aa0da0(pcVar12,uVar14);
LAB_01a97d1c:
LAB_01a97a28:
  FUN_01a9815c(&local_d0);
  return pcVar11;
}

