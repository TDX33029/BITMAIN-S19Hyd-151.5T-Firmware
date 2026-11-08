// FUN_01a8f438 @ 01a8f438 size=9832 calls_out=22 calls_in=1
// strings: FileDescriptorProto | FileDescriptorProto | FileDescriptorProto | FileDescriptorProto | FileDescriptorProto | FileDescriptorProto

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

code * FUN_01a8f438(int *param_1,undefined4 param_2,uint param_3,int *param_4)

{
  uint uVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  char *pcVar12;
  code *pcVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined *puVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  char *pcVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  int iVar24;
  uint uVar25;
  undefined4 *******pppppppuVar26;
  uint *puVar27;
  char *local_134;
  char *local_118;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
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
  
  uVar18 = (undefined1)param_3;
  switch(param_2) {
  case 1:
    if (param_1[0x3b] == -0x80000000) {
      param_1[0x3b] = 0;
      param_1[0x3c] = 1;
      param_1[0x3d] = 0;
    }
    pcVar5 = (code *)FUN_01a9e23c(param_3,param_1 + 0x3b,param_4);
    if (pcVar5 == (code *)0x0) {
      return (code *)0x0;
    }
    iVar24 = *(int *)(pcVar5 + 8);
    if (iVar24 == *(int *)pcVar5) {
      FUN_018fa978(pcVar5);
    }
    puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
    *puVar3 = "FileDescriptorProto";
    pcVar19 = &DAT_0056ee18;
    uVar15 = 4;
    break;
  case 2:
    if (param_1[0x3e] == -0x80000000) {
      param_1[0x3e] = 0;
      param_1[0x3f] = 1;
      param_1[0x40] = 0;
    }
    pcVar5 = (code *)FUN_01a9e23c(param_3,param_1 + 0x3e,param_4);
    if (pcVar5 == (code *)0x0) {
      return (code *)0x0;
    }
    iVar24 = *(int *)(pcVar5 + 8);
    if (iVar24 == *(int *)pcVar5) {
      FUN_018fa978(pcVar5);
    }
    iVar4 = *(int *)(pcVar5 + 4);
    pcVar19 = "package";
    goto LAB_01a91170;
  case 3:
    pcVar5 = (code *)FUN_01a9e124(param_3,param_1 + 0x26,param_4);
    if (pcVar5 == (code *)0x0) {
      return (code *)0x0;
    }
    iVar24 = *(int *)(pcVar5 + 8);
    if (iVar24 == *(int *)pcVar5) {
      FUN_018fa978(pcVar5);
    }
    puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
    *puVar3 = "FileDescriptorProto";
    pcVar19 = "dependency";
    uVar15 = 10;
    break;
  case 4:
    pcVar5 = (code *)FUN_01a928cc(param_3,param_1 + 0x2f,param_4,99);
    if (pcVar5 == (code *)0x0) {
      return (code *)0x0;
    }
    iVar24 = *(int *)(pcVar5 + 8);
    if (iVar24 == *(int *)pcVar5) {
      FUN_018fa978(pcVar5);
    }
    puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
    *puVar3 = "FileDescriptorProto";
    pcVar19 = "message_type";
    uVar15 = 0xc;
    break;
  case 5:
    pcVar5 = (code *)FUN_01a96cb8(param_3,param_1 + 0x32,param_4,99);
    if (pcVar5 == (code *)0x0) {
      return (code *)0x0;
    }
    iVar24 = *(int *)(pcVar5 + 8);
    if (iVar24 == *(int *)pcVar5) {
      FUN_018fa978(pcVar5);
    }
    iVar4 = *(int *)(pcVar5 + 4);
    pcVar19 = "enum_type";
    goto LAB_01a8f8b0;
  case 6:
    local_30 = (undefined4 ******)CONCAT31(local_30._1_3_,uVar18);
    local_48 = (undefined4 *******)CONCAT31(local_48._1_3_,2);
    if ((param_3 & 0xff) == 2) {
      iVar24 = *param_4;
      local_ec = -0x80000000;
      local_e0 = -0x80000000;
      local_f0 = 0;
      local_f4 = 4;
      local_f8 = 0;
      FUN_01a9d538(&local_40,iVar24);
      if (local_40 == (undefined4 ******)&DAT_00000001) {
LAB_01a8f85c:
        pcVar5 = local_3c;
      }
      else if ((uint)-(int)local_34 < (uint)(local_38 <= *(undefined4 ********)(iVar24 + 4))) {
        uVar25 = (int)*(undefined4 ********)(iVar24 + 4) - (int)local_38;
        local_134 = "buffer underflow";
        do {
          if (*(uint *)(iVar24 + 4) <= uVar25) {
            if (*(uint *)(iVar24 + 4) == uVar25) {
              iVar24 = param_1[0x37];
              if (iVar24 == param_1[0x35]) {
                FUN_00a20cf4(param_1 + 0x35);
              }
              piVar14 = (int *)(param_1[0x36] + iVar24 * 0x28);
              *piVar14 = local_f8;
              piVar14[1] = local_f4;
              piVar14[2] = local_f0;
              piVar14[3] = local_ec;
              piVar14[4] = local_e8;
              piVar14[5] = local_e4;
              piVar14[6] = local_e0;
              piVar14[7] = local_dc;
              piVar14[8] = local_d8;
              piVar14[9] = local_d4;
              param_1[0x37] = iVar24 + 1;
              return (code *)0x0;
            }
            uVar15 = 0x19;
            pcVar19 = "delimited length exceeded";
            goto LAB_01a91a94;
          }
          FUN_01a9d538(&local_40,iVar24);
          if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_01a8f85c;
          local_44 = local_34;
          local_48 = local_38;
          pppppppuVar26 = local_48;
          if (local_34 != (code *)0x0) {
            local_50 = FUN_012fd074;
            local_54 = &local_48;
            FUN_01a8da38(&local_40,&DAT_00591421,&local_54);
            pcVar5 = (code *)FUN_01aa428c(&local_40);
            goto LAB_01a91bc0;
          }
          local_30 = (undefined4 ******)((uint)local_38 & 7);
          bVar23 = false;
          local_2c = 0;
          bVar2 = 0;
          switch(local_30) {
          case (undefined4 ******)0x0:
            break;
          case (undefined4 ******)0x1:
            bVar2 = 1;
            break;
          case (undefined4 ******)0x2:
            bVar2 = 2;
            bVar23 = true;
            break;
          case (undefined4 ******)0x3:
            bVar2 = 3;
            break;
          case (undefined4 ******)0x4:
            bVar2 = 4;
            break;
          case (undefined4 ******)0x5:
            bVar2 = 5;
            break;
          default:
            local_50 = FUN_012fd074;
            local_54 = &local_30;
            FUN_01a8da38(&local_40,&DAT_00596158,&local_54);
            pcVar5 = (code *)FUN_01aa428c(&local_40);
            goto LAB_01a91bc0;
          }
          uVar20 = (uint)local_38 >> 3;
          if (uVar20 == 0) {
            pcVar5 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
            goto LAB_01a91bc0;
          }
          if (uVar20 != 1) {
            local_48._1_3_ = (undefined3)((uint)local_38 >> 8);
            if (uVar20 == 2) {
              local_30 = (undefined4 ******)(uint)bVar2;
              local_48 = (undefined4 *******)CONCAT31(local_48._1_3_,2);
              if (bVar23) {
                local_d0 = 2;
                local_a0 = 0x80000000;
                local_ac = 0x80000000;
                local_b8 = 0x80000000;
                local_94 = CONCAT22(local_94._2_2_,0x202);
                FUN_01a9d538(&local_40,iVar24);
                if (local_40 == (undefined4 ******)&DAT_00000001) {
LAB_01a90c04:
                  pcVar5 = local_3c;
                }
                else {
                  if ((uint)-(int)local_34 < (uint)(local_38 <= *(undefined4 ********)(iVar24 + 4)))
                  {
                    uVar20 = (int)*(undefined4 ********)(iVar24 + 4) - (int)local_38;
                    while( true ) {
                      iVar4 = local_f0;
                      if (*(uint *)(iVar24 + 4) <= uVar20) break;
                      FUN_01a9d538(&local_40,iVar24);
                      if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_01a90c04;
                      local_44 = local_34;
                      local_48 = local_38;
                      if (local_34 != (code *)0x0) {
                        local_50 = FUN_012fd074;
                        local_54 = &local_48;
                        FUN_01a8da38(&local_40,&DAT_00591421,&local_54);
                        pcVar5 = (code *)FUN_01aa428c(&local_40);
                        goto LAB_01a91b60;
                      }
                      local_30 = (undefined4 ******)((uint)local_38 & 7);
                      bVar23 = false;
                      local_2c = 0;
                      bVar2 = 0;
                      switch(local_30) {
                      case (undefined4 ******)0x0:
                        break;
                      case (undefined4 ******)0x1:
                        bVar2 = 1;
                        break;
                      case (undefined4 ******)0x2:
                        bVar2 = 2;
                        bVar23 = true;
                        break;
                      case (undefined4 ******)0x3:
                        bVar2 = 3;
                        break;
                      case (undefined4 ******)0x4:
                        bVar2 = 4;
                        break;
                      case (undefined4 ******)0x5:
                        bVar2 = 5;
                        break;
                      default:
                        local_50 = FUN_012fd074;
                        local_54 = &local_30;
                        FUN_01a8da38(&local_40,&DAT_00596158,&local_54);
                        pcVar5 = (code *)FUN_01aa428c(&local_40);
                        goto LAB_01a91b60;
                      }
                      uVar21 = (uint)local_38 >> 3;
                      if (uVar21 == 0) {
                        pcVar5 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                        goto LAB_01a91b60;
                      }
                      switch(uVar21) {
                      case 1:
                        if (local_b8 == 0x80000000) {
                          local_b0 = 0;
                          local_b4 = 1;
                          local_b8 = 0;
                        }
                        pcVar13 = (code *)FUN_01a9e23c(bVar2,&local_b8,param_4);
                        pcVar5 = (code *)0x0;
                        if (pcVar13 != (code *)0x0) {
                          iVar24 = *(int *)(pcVar13 + 8);
                          if (iVar24 == *(int *)pcVar13) {
                            FUN_018fa978(pcVar13);
                          }
                          puVar3 = (undefined4 *)(*(int *)(pcVar13 + 4) + iVar24 * 0x10);
                          *puVar3 = "MethodDescriptorProto";
                          pcVar19 = &DAT_0056ee18;
                          uVar15 = 4;
                          pcVar5 = pcVar13;
LAB_01a9170c:
                          puVar3[1] = 0x15;
                          puVar3[2] = pcVar19;
                          puVar3[3] = uVar15;
                          *(int *)(pcVar5 + 8) = iVar24 + 1;
                          goto LAB_01a910e8;
                        }
                        break;
                      case 2:
                        if (local_ac == 0x80000000) {
                          local_a4 = 0;
                          local_a8 = 1;
                          local_ac = 0;
                        }
                        pcVar13 = (code *)FUN_01a9e23c(bVar2,&local_ac,param_4);
                        pcVar5 = (code *)0x0;
                        if (pcVar13 != (code *)0x0) {
                          iVar24 = *(int *)(pcVar13 + 8);
                          if (iVar24 == *(int *)pcVar13) {
                            FUN_018fa978(pcVar13);
                          }
                          puVar3 = (undefined4 *)(*(int *)(pcVar13 + 4) + iVar24 * 0x10);
                          *puVar3 = "MethodDescriptorProto";
                          pcVar19 = "input_type";
                          uVar15 = 10;
                          pcVar5 = pcVar13;
                          goto LAB_01a9170c;
                        }
                        break;
                      case 3:
                        if (local_a0 == 0x80000000) {
                          local_98 = 0;
                          local_9c = 1;
                          local_a0 = 0;
                        }
                        pcVar13 = (code *)FUN_01a9e23c(bVar2,&local_a0,param_4);
                        pcVar5 = (code *)0x0;
                        if (pcVar13 != (code *)0x0) {
                          iVar24 = *(int *)(pcVar13 + 8);
                          if (iVar24 == *(int *)pcVar13) {
                            FUN_018fa978(pcVar13);
                          }
                          puVar3 = (undefined4 *)(*(int *)(pcVar13 + 4) + iVar24 * 0x10);
                          *puVar3 = "MethodDescriptorProto";
                          pcVar19 = "output_type";
                          uVar15 = 0xb;
                          pcVar5 = pcVar13;
                          goto LAB_01a9170c;
                        }
                        break;
                      case 4:
                        if (local_d0 == 2) {
                          local_bc = CONCAT31(local_bc._1_3_,2);
                          local_c0 = 0;
                          local_c4 = 8;
                          local_c8 = 0;
                          local_d0 = 0;
                        }
                        local_30 = (undefined4 ******)(uint)bVar2;
                        local_48._1_3_ = (undefined3)((uint)local_38 >> 8);
                        local_48 = (undefined4 *******)CONCAT31(local_48._1_3_,2);
                        if (bVar23) {
                          FUN_01a9d538(&local_40,iVar24);
                          if (local_40 != (undefined4 ******)&DAT_00000001) {
                            if ((uint)-(int)local_34 <
                                (uint)(local_38 <= *(undefined4 ********)(iVar24 + 4))) {
                              uVar21 = (int)*(undefined4 ********)(iVar24 + 4) - (int)local_38;
                              while (uVar21 < *(uint *)(iVar24 + 4)) {
                                FUN_01a9d538(&local_40,iVar24);
                                if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_01a90c0c;
                                local_48 = local_38;
                                local_44 = local_34;
                                if (local_34 != (code *)0x0) {
                                  local_50 = FUN_012fd074;
                                  local_54 = &local_48;
                                  FUN_01a8da38(&local_40,&DAT_00591421,&local_54);
                                  pcVar5 = (code *)FUN_01aa428c(&local_40);
                                  goto LAB_01a90ca8;
                                }
                                local_2c = 0;
                                local_30 = (undefined4 ******)((uint)local_38 & 7);
                                uVar22 = ((uint)local_38 ^ 4) & 7;
                                if ((0xf3U >> uVar22 & 1) == 0) {
                                  local_50 = FUN_012fd074;
                                  local_54 = &local_30;
                                  FUN_01a8da38(&local_40,&DAT_00596158,&local_54);
                                  pcVar5 = (code *)FUN_01aa428c(&local_40);
                                  goto LAB_01a90ca8;
                                }
                                uVar1 = (uint)local_38 >> 3;
                                if (uVar1 == 0) {
                                  pcVar5 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                                  goto LAB_01a90ca8;
                                }
                                uVar18 = (&DAT_00571008)[uVar22];
                                if (uVar1 == 0x21) {
                                  uVar17 = 0;
                                  if ((local_bc & 0xff) != 2) {
                                    uVar17 = (char)local_bc;
                                  }
                                  local_bc = CONCAT31(local_bc._1_3_,uVar17);
                                  pcVar5 = (code *)FUN_01a9cbb8(uVar18,&local_bc,iVar24);
                                  pcVar13 = (code *)0x0;
                                  if (pcVar5 != (code *)0x0) {
                                    iVar24 = *(int *)(pcVar5 + 8);
                                    if (iVar24 == *(int *)pcVar5) {
                                      FUN_018fa978(pcVar5);
                                    }
                                    puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
                                    *puVar3 = "MethodOptions";
                                    pcVar19 = "deprecated";
                                    uVar15 = 10;
LAB_01a91080:
                                    puVar3[1] = 0xd;
                                    puVar3[2] = pcVar19;
                                    puVar3[3] = uVar15;
                                    *(int *)(pcVar5 + 8) = iVar24 + 1;
                                    goto LAB_01a9109c;
                                  }
                                }
                                else if (uVar1 == 0x22) {
                                  if ((local_d0 & 1) == 0) {
                                    local_cc = 0;
                                    local_d0 = 1;
                                  }
                                  pcVar5 = (code *)FUN_01a9dd84(uVar18,(uint)&local_d0 | 4,iVar24);
                                  pcVar13 = (code *)0x0;
                                  if (pcVar5 != (code *)0x0) {
                                    iVar24 = *(int *)(pcVar5 + 8);
                                    if (iVar24 == *(int *)pcVar5) {
                                      FUN_018fa978(pcVar5);
                                    }
                                    puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
                                    *puVar3 = "MethodOptions";
                                    pcVar19 = "idempotency_level";
                                    uVar15 = 0x11;
                                    goto LAB_01a91080;
                                  }
                                }
                                else if (uVar1 == 999) {
                                  pcVar5 = (code *)FUN_01a949ec(uVar18,&local_c8,param_4,0x60);
                                  pcVar13 = (code *)0x0;
                                  if (pcVar5 != (code *)0x0) {
                                    iVar24 = *(int *)(pcVar5 + 8);
                                    if (iVar24 == *(int *)pcVar5) {
                                      FUN_018fa978(pcVar5);
                                    }
                                    puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
                                    *puVar3 = "MethodOptions";
                                    pcVar19 = "uninterpreted_option";
                                    uVar15 = 0x14;
                                    goto LAB_01a91080;
                                  }
                                }
                                else {
                                  pcVar13 = (code *)FUN_01a9d744(uVar18,uVar1,param_4,0x60);
                                }
                                pcVar5 = pcVar13;
                                if (pcVar13 != (code *)0x0) goto LAB_01a9109c;
                              }
                              pcVar5 = (code *)0x0;
                              if (*(uint *)(iVar24 + 4) == uVar21) break;
                              uVar15 = 0x19;
                              local_134 = "delimited length exceeded";
                            }
                            else {
                              uVar15 = 0x10;
                            }
                            pcVar5 = (code *)FUN_01aa0da0(local_134,uVar15);
                            goto LAB_01a90ca8;
                          }
LAB_01a90c0c:
                          pcVar5 = local_3c;
                        }
                        else {
                          local_38 = &local_48;
                          local_34 = FUN_01a924ac;
                          local_3c = FUN_01a924ac;
                          local_40 = &local_30;
                          FUN_01a924e8(&local_54,&local_40);
                          pcVar5 = (code *)FUN_01aa428c(&local_54);
LAB_01a90ca8:
                        }
LAB_01a9109c:
                        iVar24 = *(int *)(pcVar5 + 8);
                        if (iVar24 == *(int *)pcVar5) {
                          FUN_018fa978(pcVar5);
                        }
                        puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
                        *puVar3 = "MethodDescriptorProto";
                        puVar3[1] = 0x15;
                        puVar3[2] = "options";
                        puVar3[3] = 7;
                        *(int *)(pcVar5 + 8) = iVar24 + 1;
                        goto LAB_01a910e8;
                      case 5:
                        uVar18 = 0;
                        if ((local_94 & 0xff) != 2) {
                          uVar18 = (undefined1)local_94;
                        }
                        local_94 = CONCAT31(local_94._1_3_,uVar18);
                        pcVar13 = (code *)FUN_01a9cbb8(bVar2,&local_94,iVar24);
                        pcVar5 = (code *)0x0;
                        if (pcVar13 != (code *)0x0) {
                          iVar24 = *(int *)(pcVar13 + 8);
                          if (iVar24 == *(int *)pcVar13) {
                            FUN_018fa978(pcVar13);
                          }
                          iVar4 = *(int *)(pcVar13 + 4);
                          pcVar19 = &UNK_00567be8;
LAB_01a91694:
                          puVar3 = (undefined4 *)(iVar4 + iVar24 * 0x10);
                          *puVar3 = "MethodDescriptorProto";
                          uVar15 = 0x10;
                          pcVar5 = pcVar13;
                          goto LAB_01a9170c;
                        }
                        break;
                      case 6:
                        uVar18 = 0;
                        if ((local_94 >> 8 & 0xff) != 2) {
                          uVar18 = (char)(local_94 >> 8);
                        }
                        local_94._0_2_ = CONCAT11(uVar18,(undefined1)local_94);
                        pcVar13 = (code *)FUN_01a9cbb8(bVar2,(int)&local_94 + 1,iVar24);
                        pcVar5 = (code *)0x0;
                        if (pcVar13 != (code *)0x0) {
                          iVar24 = *(int *)(pcVar13 + 8);
                          if (iVar24 == *(int *)pcVar13) {
                            FUN_018fa978(pcVar13);
                          }
                          iVar4 = *(int *)(pcVar13 + 4);
                          pcVar19 = &DAT_00567b38;
                          goto LAB_01a91694;
                        }
                        break;
                      default:
                        pcVar5 = (code *)FUN_01a9d744(bVar2,uVar21,param_4,0x61);
                      }
                      if (pcVar5 != (code *)0x0) goto LAB_01a910e8;
                    }
                    if (*(uint *)(iVar24 + 4) == uVar20) {
                      if (local_f0 == local_f8) {
                        FUN_01aa1b60(&local_f8);
                      }
                      puVar27 = (uint *)(local_f4 + iVar4 * 0x40);
                      *puVar27 = local_d0;
                      puVar27[1] = local_cc;
                      puVar27[2] = local_c8;
                      puVar27[3] = local_c4;
                      puVar27[4] = local_c0;
                      puVar27[5] = local_bc;
                      puVar27[6] = local_b8;
                      puVar27[7] = local_b4;
                      puVar27[8] = local_b0;
                      puVar27[9] = local_ac;
                      puVar27[10] = local_a8;
                      puVar27[0xb] = local_a4;
                      puVar27[0xc] = local_a0;
                      puVar27[0xd] = local_9c;
                      puVar27[0xe] = local_98;
                      puVar27[0xf] = local_94;
                      pcVar5 = (code *)0x0;
                      local_f0 = iVar4 + 1;
                      goto LAB_01a90af8;
                    }
                    uVar15 = 0x19;
                    local_134 = "delimited length exceeded";
                  }
                  else {
                    uVar15 = 0x10;
                  }
                  pcVar5 = (code *)FUN_01aa0da0(local_134,uVar15);
LAB_01a91b60:
                }
LAB_01a910e8:
                FUN_01a9499c(&local_d0);
              }
              else {
                local_38 = &local_48;
                local_34 = FUN_01a924ac;
                local_3c = FUN_01a924ac;
                local_40 = &local_30;
                FUN_01a924e8(&local_54,&local_40);
                pcVar5 = (code *)FUN_01aa428c(&local_54);
              }
              iVar24 = *(int *)(pcVar5 + 8);
              if (iVar24 == *(int *)pcVar5) {
                FUN_018fa978(pcVar5);
              }
              puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
              *puVar3 = "ServiceDescriptorProto";
              pcVar19 = 
              "methodevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-web-0.13.1/src/service.rs:102content_typeevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-web-0.13.1/src/service.rs:112application/grpc-webapplication/grpc-web+protoapplication/grpc-web-textapplication/grpc-web-text+proto\r\ntrailers couldn\'t parse valuenightlymissing stable versionmissing RC iterRC is zerorcrequest timed outoverflow in Duration::newassertion failed: retry_percent >= 0.0assertion failed: retry_percent <= 1000.0generation lockoverflow when subtracting durations./\x02.//[consistency] already confirmed that there are no more dot segments[consistency] loop condition of the previous loopdeflatebrinternal error: entered unreachable code: this case should be handled by the callerInvalidUriimage/image/svg+xmltext/event-stream"
              ;
              uVar15 = 6;
            }
            else {
              if (uVar20 != 3) {
                local_48 = pppppppuVar26;
                pcVar5 = (code *)FUN_01a9d744(bVar2,uVar20,param_4,0x62);
                goto LAB_01a90af8;
              }
              if (local_e0 == -0x80000000) {
                local_d4 = CONCAT31(local_d4._1_3_,2);
                local_d8 = 0;
                local_dc = 8;
                local_e0 = 0;
              }
              local_30 = (undefined4 ******)(uint)bVar2;
              local_48 = (undefined4 *******)CONCAT31(local_48._1_3_,2);
              if (bVar23) {
                FUN_01a9d538(&local_40,iVar24);
                if (local_40 != (undefined4 ******)&DAT_00000001) {
                  if ((uint)-(int)local_34 < (uint)(local_38 <= *(undefined4 ********)(iVar24 + 4)))
                  {
                    uVar20 = (int)*(undefined4 ********)(iVar24 + 4) - (int)local_38;
                    while (uVar20 < *(uint *)(iVar24 + 4)) {
                      FUN_01a9d538(&local_40,iVar24);
                      if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_01a90bc4;
                      local_48 = local_38;
                      local_44 = local_34;
                      if (local_34 != (code *)0x0) {
                        local_50 = FUN_012fd074;
                        local_54 = &local_48;
                        FUN_01a8da38(&local_40,&DAT_00591421,&local_54);
                        pcVar5 = (code *)FUN_01aa428c(&local_40);
                        goto LAB_01a90bfc;
                      }
                      local_2c = 0;
                      local_30 = (undefined4 ******)((uint)local_38 & 7);
                      uVar21 = ((uint)local_38 ^ 4) & 7;
                      if ((0xf3U >> uVar21 & 1) == 0) {
                        local_50 = FUN_012fd074;
                        local_54 = &local_30;
                        FUN_01a8da38(&local_40,&DAT_00596158,&local_54);
                        pcVar5 = (code *)FUN_01aa428c(&local_40);
                        goto LAB_01a90bfc;
                      }
                      uVar22 = (uint)local_38 >> 3;
                      if (uVar22 == 0) {
                        pcVar5 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                        goto LAB_01a90bfc;
                      }
                      uVar18 = (&DAT_00571008)[uVar21];
                      if (uVar22 == 0x21) {
                        uVar17 = 0;
                        if ((local_d4 & 0xff) != 2) {
                          uVar17 = (char)local_d4;
                        }
                        local_d4 = CONCAT31(local_d4._1_3_,uVar17);
                        pcVar13 = (code *)FUN_01a9cbb8(uVar18,&local_d4,iVar24);
                        pcVar5 = (code *)0x0;
                        if (pcVar13 != (code *)0x0) {
                          iVar24 = *(int *)(pcVar13 + 8);
                          if (iVar24 == *(int *)pcVar13) {
                            FUN_018fa978(pcVar13);
                          }
                          puVar3 = (undefined4 *)(*(int *)(pcVar13 + 4) + iVar24 * 0x10);
                          *puVar3 = "ServiceOptions";
                          pcVar19 = "deprecated";
                          uVar15 = 10;
LAB_01a90ef4:
                          puVar3[1] = 0xe;
                          puVar3[2] = pcVar19;
                          puVar3[3] = uVar15;
                          *(int *)(pcVar13 + 8) = iVar24 + 1;
                          pcVar5 = pcVar13;
                          goto LAB_01a90f10;
                        }
                      }
                      else if (uVar22 == 999) {
                        pcVar13 = (code *)FUN_01a949ec(uVar18,&local_e0,param_4,0x61);
                        pcVar5 = (code *)0x0;
                        if (pcVar13 != (code *)0x0) {
                          iVar24 = *(int *)(pcVar13 + 8);
                          if (iVar24 == *(int *)pcVar13) {
                            FUN_018fa978(pcVar13);
                          }
                          puVar3 = (undefined4 *)(*(int *)(pcVar13 + 4) + iVar24 * 0x10);
                          *puVar3 = "ServiceOptions";
                          pcVar19 = "uninterpreted_option";
                          uVar15 = 0x14;
                          goto LAB_01a90ef4;
                        }
                      }
                      else {
                        pcVar5 = (code *)FUN_01a9d744(uVar18,uVar22,param_4,0x61);
                      }
                      if (pcVar5 != (code *)0x0) goto LAB_01a90f10;
                    }
                    pcVar5 = (code *)0x0;
                    if (*(uint *)(iVar24 + 4) == uVar20) goto LAB_01a90af8;
                    uVar15 = 0x19;
                    local_134 = "delimited length exceeded";
                  }
                  else {
                    uVar15 = 0x10;
                  }
                  pcVar5 = (code *)FUN_01aa0da0(local_134,uVar15);
                  goto LAB_01a90bfc;
                }
LAB_01a90bc4:
                pcVar5 = local_3c;
              }
              else {
                local_38 = &local_48;
                local_34 = FUN_01a924ac;
                local_3c = FUN_01a924ac;
                local_40 = &local_30;
                FUN_01a924e8(&local_54,&local_40);
                pcVar5 = (code *)FUN_01aa428c(&local_54);
LAB_01a90bfc:
              }
LAB_01a90f10:
              iVar24 = *(int *)(pcVar5 + 8);
              if (iVar24 == *(int *)pcVar5) {
                FUN_018fa978(pcVar5);
              }
              puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
              *puVar3 = "ServiceDescriptorProto";
              pcVar19 = "options";
              uVar15 = 7;
            }
            puVar3[1] = 0x16;
            puVar3[2] = pcVar19;
            puVar3[3] = uVar15;
            *(int *)(pcVar5 + 8) = iVar24 + 1;
            break;
          }
          if (local_ec == -0x80000000) {
            local_e4 = 0;
            local_e8 = 1;
            local_ec = 0;
          }
          pcVar13 = (code *)FUN_01a9e23c(bVar2,&local_ec,param_4);
          pcVar5 = (code *)0x0;
          if (pcVar13 != (code *)0x0) {
            iVar24 = *(int *)(pcVar13 + 8);
            if (iVar24 == *(int *)pcVar13) {
              FUN_018fa978(pcVar13);
            }
            puVar3 = (undefined4 *)(*(int *)(pcVar13 + 4) + iVar24 * 0x10);
            *puVar3 = "ServiceDescriptorProto";
            puVar3[1] = 0x16;
            puVar3[2] = &DAT_0056ee18;
            puVar3[3] = 4;
            *(int *)(pcVar13 + 8) = iVar24 + 1;
            pcVar5 = pcVar13;
            break;
          }
LAB_01a90af8:
        } while (pcVar5 == (code *)0x0);
      }
      else {
        uVar15 = 0x10;
        pcVar19 = "buffer underflow";
LAB_01a91a94:
        pcVar5 = (code *)FUN_01aa0da0(pcVar19,uVar15);
LAB_01a91bc0:
      }
      FUN_01a92820(&local_f8);
    }
    else {
      local_38 = &local_48;
      local_34 = FUN_01a924ac;
      local_3c = FUN_01a924ac;
      local_40 = &local_30;
      FUN_01a924e8(&local_54,&local_40);
      pcVar5 = (code *)FUN_01aa428c(&local_54);
    }
    iVar24 = *(int *)(pcVar5 + 8);
    if (iVar24 == *(int *)pcVar5) {
      FUN_018fa978(pcVar5);
    }
    iVar4 = *(int *)(pcVar5 + 4);
    pcVar19 = "service";
    goto LAB_01a91170;
  case 7:
    pcVar5 = (code *)FUN_01a95cfc(param_3,param_1 + 0x38,param_4,99);
    if (pcVar5 == (code *)0x0) {
      return (code *)0x0;
    }
    iVar24 = *(int *)(pcVar5 + 8);
    if (iVar24 == *(int *)pcVar5) {
      FUN_018fa978(pcVar5);
    }
    iVar4 = *(int *)(pcVar5 + 4);
    pcVar19 = "extension";
LAB_01a8f8b0:
    puVar3 = (undefined4 *)(iVar4 + iVar24 * 0x10);
    *puVar3 = "FileDescriptorProto";
    uVar15 = 9;
    break;
  case 8:
    if (*param_1 == 2) {
      param_1[0x23] = 0x2020202;
      param_1[0x24] = 0x2020202;
      param_1[0x20] = -0x80000000;
      param_1[0x1d] = -0x80000000;
      param_1[0x1a] = -0x80000000;
      param_1[0x17] = -0x80000000;
      param_1[0x14] = -0x80000000;
      param_1[0x11] = -0x80000000;
      param_1[0xe] = -0x80000000;
      param_1[0xb] = -0x80000000;
      param_1[8] = -0x80000000;
      param_1[2] = 0;
      param_1[3] = 8;
      param_1[4] = 0;
      param_1[5] = -0x80000000;
      *param_1 = 0;
      *(undefined1 *)(param_1 + 0x25) = 2;
    }
    local_30 = (undefined4 ******)CONCAT31(local_30._1_3_,uVar18);
    local_48 = (undefined4 *******)CONCAT31(local_48._1_3_,2);
    if ((param_3 & 0xff) == 2) {
      iVar24 = *param_4;
      FUN_01a9d538(&local_40,iVar24);
      if (local_40 == (undefined4 ******)&DAT_00000001) {
LAB_01a8f768:
        pcVar5 = local_3c;
      }
      else if ((uint)-(int)local_34 < (uint)(local_38 <= *(undefined4 ********)(iVar24 + 4))) {
        uVar25 = (int)*(undefined4 ********)(iVar24 + 4) - (int)local_38;
        piVar14 = param_1 + 0x23;
        pcVar19 = (char *)((int)param_1 + 0x8f);
        piVar6 = param_1 + 0x24;
        pcVar7 = (char *)((int)param_1 + 0x91);
        pcVar8 = (char *)((int)param_1 + 0x8d);
        pcVar9 = (char *)((int)param_1 + 0x93);
        pcVar10 = (char *)((int)param_1 + 0x8e);
        piVar11 = param_1 + 0x25;
        pcVar12 = (char *)((int)param_1 + 0x92);
        do {
          if (*(uint *)(iVar24 + 4) <= uVar25) {
            if (*(uint *)(iVar24 + 4) == uVar25) {
              return (code *)0x0;
            }
            uVar15 = 0x19;
            pcVar19 = "delimited length exceeded";
            goto LAB_01a917ac;
          }
          FUN_01a9d538(&local_40,iVar24);
          if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_01a8f768;
          local_48 = local_38;
          local_44 = local_34;
          if (local_34 != (code *)0x0) {
            puVar16 = &DAT_00591421;
            local_54 = &local_48;
LAB_01a90f60:
            local_50 = FUN_012fd074;
            pppppppuVar26 = &local_40;
            FUN_01a8da38(pppppppuVar26,puVar16,&local_54);
            goto LAB_01a90f74;
          }
          local_30 = (undefined4 ******)((uint)local_38 & 7);
          local_2c = 0;
          uVar20 = ((uint)local_38 ^ 4) & 7;
          if ((0xf3U >> uVar20 & 1) == 0) {
            puVar16 = &DAT_00596158;
            local_54 = &local_30;
            goto LAB_01a90f60;
          }
          uVar21 = (uint)local_38 >> 3;
          if (uVar21 == 0) {
            uVar15 = 0x14;
            pcVar19 = "invalid tag value: 0";
            goto LAB_01a917ac;
          }
          uVar18 = (&DAT_00571008)[uVar20];
          switch(uVar21) {
          case 1:
            if (param_1[5] == -0x80000000) {
              param_1[5] = 0;
              param_1[6] = 1;
              param_1[7] = 0;
            }
            pcVar13 = (code *)FUN_01a9e23c(uVar18,param_1 + 5,param_4);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = "java_package";
LAB_01a91310:
              puVar3 = (undefined4 *)(iVar4 + iVar24 * 0x10);
              *puVar3 = "FileOptions";
              uVar15 = 0xc;
              pcVar5 = pcVar13;
LAB_01a91764:
              puVar3[1] = 0xb;
              puVar3[2] = pcVar19;
              puVar3[3] = uVar15;
              *(int *)(pcVar5 + 8) = iVar24 + 1;
              goto LAB_01a8f76c;
            }
            break;
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x13:
          case 0x15:
          case 0x16:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x26:
          case 0x2b:
switchD_01a8fae0_caseD_2:
            pcVar5 = (code *)FUN_01a9d744(uVar18,uVar21,param_4,0x62);
            break;
          case 8:
            if (param_1[8] == -0x80000000) {
              param_1[8] = 0;
              param_1[9] = 1;
              param_1[10] = 0;
            }
            pcVar13 = (code *)FUN_01a9e23c(uVar18,param_1 + 8,param_4);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = "java_outer_classname";
LAB_01a9175c:
              puVar3 = (undefined4 *)(iVar4 + iVar24 * 0x10);
              *puVar3 = "FileOptions";
              uVar15 = 0x14;
              pcVar5 = pcVar13;
              goto LAB_01a91764;
            }
            break;
          case 9:
            if (*param_1 == 0) {
              *param_1 = 1;
              param_1[1] = 0;
            }
            pcVar13 = (code *)FUN_01a9dd84(uVar18,param_1 + 1,iVar24);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = "optimize_for";
              goto LAB_01a91310;
            }
            break;
          case 10:
            if ((char)*piVar14 == '\x02') {
              *(char *)piVar14 = '\0';
            }
            pcVar13 = (code *)FUN_01a9cbb8(uVar18,piVar14,iVar24);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = "java_multiple_filesoptimize_for";
LAB_01a91578:
              puVar3 = (undefined4 *)(iVar4 + iVar24 * 0x10);
              *puVar3 = "FileOptions";
              uVar15 = 0x13;
              pcVar5 = pcVar13;
              goto LAB_01a91764;
            }
            break;
          case 0xb:
            if (param_1[0xb] == -0x80000000) {
              param_1[0xb] = 0;
              param_1[0xc] = 1;
              param_1[0xd] = 0;
            }
            pcVar13 = (code *)FUN_01a9e23c(uVar18,param_1 + 0xb,param_4);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = "go_package";
LAB_01a914cc:
              puVar3 = (undefined4 *)(iVar4 + iVar24 * 0x10);
              *puVar3 = "FileOptions";
              uVar15 = 10;
              pcVar5 = pcVar13;
              goto LAB_01a91764;
            }
            break;
          case 0x10:
            if (*pcVar19 == '\x02') {
              *pcVar19 = '\0';
            }
            pcVar13 = (code *)FUN_01a9cbb8(uVar18,pcVar19,iVar24);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = "cc_generic_servicesswift_prefixjava_string_check_utf8";
              goto LAB_01a91578;
            }
            break;
          case 0x11:
            if ((char)*piVar6 == '\x02') {
              *(char *)piVar6 = '\0';
            }
            pcVar13 = (code *)FUN_01a9cbb8(uVar18,piVar6,iVar24);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              puVar3 = (undefined4 *)(*(int *)(pcVar13 + 4) + iVar24 * 0x10);
              *puVar3 = "FileOptions";
              pcVar19 = "java_generic_services";
              uVar15 = 0x15;
              pcVar5 = pcVar13;
              goto LAB_01a91764;
            }
            break;
          case 0x12:
            if (*pcVar7 == '\x02') {
              *pcVar7 = '\0';
            }
            pcVar13 = (code *)FUN_01a9cbb8(uVar18,pcVar7,iVar24);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = "py_generic_servicescc_generic_servicesswift_prefixjava_string_check_utf8";
              goto LAB_01a91578;
            }
            break;
          case 0x14:
            if (*pcVar8 == '\x02') {
              *pcVar8 = '\0';
            }
            pcVar13 = (code *)FUN_01a9cbb8(uVar18,pcVar8,iVar24);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              puVar3 = (undefined4 *)(*(int *)(pcVar13 + 4) + iVar24 * 0x10);
              *puVar3 = "FileOptions";
              pcVar19 = "java_generate_equals_and_hashjava_multiple_filesoptimize_for";
              uVar15 = 0x1d;
              pcVar5 = pcVar13;
              goto LAB_01a91764;
            }
            break;
          case 0x17:
            if (*pcVar9 == '\x02') {
              *pcVar9 = '\0';
            }
            pcVar13 = (code *)FUN_01a9cbb8(uVar18,pcVar9,iVar24);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = "deprecated";
              goto LAB_01a914cc;
            }
            break;
          case 0x1b:
            if (*pcVar10 == '\x02') {
              *pcVar10 = '\0';
            }
            pcVar13 = (code *)FUN_01a9cbb8(uVar18,pcVar10,iVar24);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = "java_string_check_utf8";
LAB_01a9126c:
              puVar3 = (undefined4 *)(iVar4 + iVar24 * 0x10);
              *puVar3 = "FileOptions";
              uVar15 = 0x16;
              pcVar5 = pcVar13;
              goto LAB_01a91764;
            }
            break;
          case 0x1f:
            if ((char)*piVar11 == '\x02') {
              *(char *)piVar11 = '\0';
            }
            pcVar13 = (code *)FUN_01a9cbb8(uVar18,piVar11,iVar24);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = &UNK_00568088;
LAB_01a91420:
              puVar3 = (undefined4 *)(iVar4 + iVar24 * 0x10);
              *puVar3 = "FileOptions";
              uVar15 = 0x10;
              pcVar5 = pcVar13;
              goto LAB_01a91764;
            }
            break;
          case 0x24:
            if (param_1[0xe] == -0x80000000) {
              param_1[0xe] = 0;
              param_1[0xf] = 1;
              param_1[0x10] = 0;
            }
            pcVar13 = (code *)FUN_01a9e23c(uVar18,param_1 + 0xe,param_4);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              puVar3 = (undefined4 *)(*(int *)(pcVar13 + 4) + iVar24 * 0x10);
              *puVar3 = "FileOptions";
              pcVar19 = "objc_class_prefix";
              uVar15 = 0x11;
              pcVar5 = pcVar13;
              goto LAB_01a91764;
            }
            break;
          case 0x25:
            if (param_1[0x11] == -0x80000000) {
              param_1[0x11] = 0;
              param_1[0x12] = 1;
              param_1[0x13] = 0;
            }
            pcVar13 = (code *)FUN_01a9e23c(uVar18,param_1 + 0x11,param_4);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = &UNK_00569448;
              goto LAB_01a91420;
            }
            break;
          case 0x27:
            if (param_1[0x14] == -0x80000000) {
              param_1[0x14] = 0;
              param_1[0x15] = 1;
              param_1[0x16] = 0;
            }
            pcVar13 = (code *)FUN_01a9e23c(uVar18,param_1 + 0x14,param_4);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = "swift_prefixjava_string_check_utf8";
              goto LAB_01a91310;
            }
            break;
          case 0x28:
            if (param_1[0x17] == -0x80000000) {
              param_1[0x17] = 0;
              param_1[0x18] = 1;
              param_1[0x19] = 0;
            }
            pcVar13 = (code *)FUN_01a9e23c(uVar18,param_1 + 0x17,param_4);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = "php_class_prefix";
              goto LAB_01a91420;
            }
            break;
          case 0x29:
            if (param_1[0x1a] == -0x80000000) {
              param_1[0x1a] = 0;
              param_1[0x1b] = 1;
              param_1[0x1c] = 0;
            }
            pcVar13 = (code *)FUN_01a9e23c(uVar18,param_1 + 0x1a,param_4);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              puVar3 = (undefined4 *)(*(int *)(pcVar13 + 4) + iVar24 * 0x10);
              *puVar3 = "FileOptions";
              pcVar19 = "php_namespace";
              uVar15 = 0xd;
              pcVar5 = pcVar13;
              goto LAB_01a91764;
            }
            break;
          case 0x2a:
            if (*pcVar12 == '\x02') {
              *pcVar12 = '\0';
            }
            pcVar13 = (code *)FUN_01a9cbb8(uVar18,pcVar12,iVar24);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = "php_generic_servicesjava_package";
              goto LAB_01a9175c;
            }
            break;
          case 0x2c:
            if (param_1[0x1d] == -0x80000000) {
              param_1[0x1d] = 0;
              param_1[0x1e] = 1;
              param_1[0x1f] = 0;
            }
            pcVar13 = (code *)FUN_01a9e23c(uVar18,param_1 + 0x1d,param_4);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = "php_metadata_namespacego_package";
              goto LAB_01a9126c;
            }
            break;
          case 0x2d:
            if (param_1[0x20] == -0x80000000) {
              param_1[0x20] = 0;
              param_1[0x21] = 1;
              param_1[0x22] = 0;
            }
            pcVar13 = (code *)FUN_01a9e23c(uVar18,param_1 + 0x20,param_4);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = "ruby_package";
              goto LAB_01a91310;
            }
            break;
          default:
            if (uVar21 != 999) goto switchD_01a8fae0_caseD_2;
            pcVar13 = (code *)FUN_01a949ec(uVar18,param_1 + 2,param_4,0x62);
            pcVar5 = (code *)0x0;
            if (pcVar13 != (code *)0x0) {
              iVar24 = *(int *)(pcVar13 + 8);
              if (iVar24 == *(int *)pcVar13) {
                FUN_018fa978(pcVar13);
              }
              iVar4 = *(int *)(pcVar13 + 4);
              pcVar19 = "uninterpreted_option";
              goto LAB_01a9175c;
            }
          }
        } while (pcVar5 == (code *)0x0);
      }
      else {
        uVar15 = 0x10;
        pcVar19 = "buffer underflow";
LAB_01a917ac:
        pcVar5 = (code *)FUN_01aa0da0(pcVar19,uVar15);
      }
    }
    else {
      local_38 = &local_48;
      pppppppuVar26 = &local_54;
      local_34 = FUN_01a924ac;
      local_3c = FUN_01a924ac;
      local_40 = &local_30;
      FUN_01a924e8(pppppppuVar26,&local_40);
LAB_01a90f74:
      pcVar5 = (code *)FUN_01aa428c(pppppppuVar26);
    }
LAB_01a8f76c:
    iVar24 = *(int *)(pcVar5 + 8);
    if (iVar24 == *(int *)pcVar5) {
      FUN_018fa978(pcVar5);
    }
    iVar4 = *(int *)(pcVar5 + 4);
    pcVar19 = "options";
LAB_01a91170:
    puVar3 = (undefined4 *)(iVar4 + iVar24 * 0x10);
    *puVar3 = "FileDescriptorProto";
    uVar15 = 7;
    break;
  case 9:
    if (param_1[0x41] == -0x80000000) {
      param_1[0x41] = 0;
      param_1[0x42] = 4;
      param_1[0x43] = 0;
    }
    local_30 = (undefined4 ******)CONCAT31(local_30._1_3_,uVar18);
    local_48 = (undefined4 *******)CONCAT31(local_48._1_3_,2);
    if ((param_3 & 0xff) == 2) {
      iVar24 = *param_4;
      FUN_01a9d538(&local_40,iVar24);
      if (local_40 == (undefined4 ******)&DAT_00000001) {
LAB_01a8f96c:
        pcVar5 = local_3c;
      }
      else if ((uint)-(int)local_34 < (uint)(local_38 <= *(undefined4 ********)(iVar24 + 4))) {
        uVar25 = (int)*(undefined4 ********)(iVar24 + 4) - (int)local_38;
        local_118 = "buffer underflow";
        do {
          if (*(uint *)(iVar24 + 4) <= uVar25) {
            if (*(uint *)(iVar24 + 4) == uVar25) {
              return (code *)0x0;
            }
            uVar15 = 0x19;
            pcVar19 = "delimited length exceeded";
            goto LAB_01a91a7c;
          }
          FUN_01a9d538(&local_40,iVar24);
          if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_01a8f96c;
          local_48 = local_38;
          if (local_34 != (code *)0x0) {
            puVar16 = &DAT_00591421;
            local_54 = &local_48;
LAB_01a918a4:
            local_50 = FUN_012fd074;
            pppppppuVar26 = &local_40;
            FUN_01a8da38(pppppppuVar26,puVar16,&local_54);
            goto LAB_01a91974;
          }
          local_30 = (undefined4 ******)((uint)local_38 & 7);
          bVar23 = false;
          local_2c = 0;
          bVar2 = 0;
          switch(local_30) {
          case (undefined4 ******)0x0:
            break;
          case (undefined4 ******)0x1:
            bVar2 = 1;
            break;
          case (undefined4 ******)0x2:
            bVar2 = 2;
            bVar23 = true;
            break;
          case (undefined4 ******)0x3:
            bVar2 = 3;
            break;
          case (undefined4 ******)0x4:
            bVar2 = 4;
            break;
          case (undefined4 ******)0x5:
            bVar2 = 5;
            break;
          default:
            puVar16 = &DAT_00596158;
            local_54 = &local_30;
            goto LAB_01a918a4;
          }
          uVar20 = (uint)local_38 >> 3;
          if (uVar20 == 0) {
            uVar15 = 0x14;
            pcVar19 = "invalid tag value: 0";
            goto LAB_01a91a7c;
          }
          if (uVar20 == 1) {
            local_30 = (undefined4 ******)(uint)bVar2;
            local_48._1_3_ = (undefined3)((uint)local_38 >> 8);
            local_48 = (undefined4 *******)CONCAT31(local_48._1_3_,2);
            if (bVar23) {
              local_60 = -0x80000000;
              local_6c = -0x80000000;
              local_7c = 0;
              local_80 = 4;
              local_84 = 0;
              local_88 = 0;
              local_8c = 4;
              local_90 = 0;
              local_70 = 0;
              local_74 = 4;
              local_78 = 0;
              FUN_01a9d538(&local_40,iVar24);
              if (local_40 == (undefined4 ******)&DAT_00000001) {
LAB_01a90b84:
                pcVar5 = local_3c;
              }
              else {
                if ((uint)-(int)local_34 < (uint)(local_38 <= *(undefined4 ********)(iVar24 + 4))) {
                  uVar20 = (int)*(undefined4 ********)(iVar24 + 4) - (int)local_38;
                  while (uVar20 < *(uint *)(iVar24 + 4)) {
                    FUN_01a9d538(&local_40,iVar24);
                    if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_01a90b84;
                    local_48 = local_38;
                    if (local_34 != (code *)0x0) {
                      local_50 = FUN_012fd074;
                      local_54 = &local_48;
                      FUN_01a8da38(&local_40,&DAT_00591421,&local_54);
                      pcVar5 = (code *)FUN_01aa428c(&local_40);
                      goto LAB_01a90bbc;
                    }
                    local_30 = (undefined4 ******)((uint)local_38 & 7);
                    local_2c = 0;
                    uVar21 = ((uint)local_38 ^ 4) & 7;
                    if ((0xf3U >> uVar21 & 1) == 0) {
                      local_50 = FUN_012fd074;
                      local_54 = &local_30;
                      FUN_01a8da38(&local_40,&DAT_00596158,&local_54);
                      pcVar5 = (code *)FUN_01aa428c(&local_40);
                      goto LAB_01a90bbc;
                    }
                    uVar22 = (uint)local_38 >> 3;
                    if (uVar22 == 0) {
                      pcVar5 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                      goto LAB_01a90bbc;
                    }
                    uVar18 = (&DAT_00571008)[uVar21];
                    switch(uVar22) {
                    case 1:
                      pcVar5 = (code *)FUN_01a9dbac(uVar18,&local_90,iVar24);
                      pcVar13 = (code *)0x0;
                      if (pcVar5 != (code *)0x0) {
                        iVar24 = *(int *)(pcVar5 + 8);
                        if (iVar24 == *(int *)pcVar5) {
                          FUN_018fa978(pcVar5);
                        }
                        puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
                        *puVar3 = &DAT_00571178;
                        puVar3[1] = 8;
                        puVar3[2] = &DAT_0056ef14;
                        puVar3[3] = 4;
                        *(int *)(pcVar5 + 8) = iVar24 + 1;
                        goto LAB_01a90dfc;
                      }
                      break;
                    case 2:
                      pcVar5 = (code *)FUN_01a9dbac(uVar18,&local_84,iVar24);
                      pcVar13 = (code *)0x0;
                      if (pcVar5 != (code *)0x0) {
                        iVar24 = *(int *)(pcVar5 + 8);
                        if (iVar24 == *(int *)pcVar5) {
                          FUN_018fa978(pcVar5);
                        }
                        puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
                        *puVar3 = &DAT_00571178;
                        pcVar19 = &DAT_0056e6e8;
                        uVar15 = 4;
LAB_01a90de0:
                        puVar3[1] = 8;
                        puVar3[2] = pcVar19;
                        puVar3[3] = uVar15;
                        *(int *)(pcVar5 + 8) = iVar24 + 1;
                        goto LAB_01a90dfc;
                      }
                      break;
                    case 3:
                      if (local_6c == -0x80000000) {
                        local_64 = 0;
                        local_68 = 1;
                        local_6c = 0;
                      }
                      pcVar5 = (code *)FUN_01a9e23c(uVar18,&local_6c,param_4);
                      pcVar13 = (code *)0x0;
                      if (pcVar5 != (code *)0x0) {
                        iVar24 = *(int *)(pcVar5 + 8);
                        if (iVar24 == *(int *)pcVar5) {
                          FUN_018fa978(pcVar5);
                        }
                        puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
                        *puVar3 = &DAT_00571178;
                        pcVar19 = &DAT_0056a7b8;
                        uVar15 = 0x10;
                        goto LAB_01a90de0;
                      }
                      break;
                    case 4:
                      if (local_60 == -0x80000000) {
                        local_58 = 0;
                        local_5c = 1;
                        local_60 = 0;
                      }
                      pcVar5 = (code *)FUN_01a9e23c(uVar18,&local_60,param_4);
                      pcVar13 = (code *)0x0;
                      if (pcVar5 != (code *)0x0) {
                        iVar24 = *(int *)(pcVar5 + 8);
                        if (iVar24 == *(int *)pcVar5) {
                          FUN_018fa978(pcVar5);
                        }
                        puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
                        *puVar3 = &DAT_00571178;
                        pcVar19 = "trailing_comments";
                        uVar15 = 0x11;
                        goto LAB_01a90de0;
                      }
                      break;
                    default:
                      pcVar13 = (code *)FUN_01a9d744(uVar18,uVar22,param_4,0x61);
                      break;
                    case 6:
                      pcVar5 = (code *)FUN_01a9e124(uVar18,&local_78,param_4);
                      pcVar13 = (code *)0x0;
                      if (pcVar5 != (code *)0x0) {
                        iVar24 = *(int *)(pcVar5 + 8);
                        if (iVar24 == *(int *)pcVar5) {
                          FUN_018fa978(pcVar5);
                        }
                        puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
                        *puVar3 = &DAT_00571178;
                        pcVar19 = "leading_detached_comments";
                        uVar15 = 0x19;
                        goto LAB_01a90de0;
                      }
                    }
                    pcVar5 = pcVar13;
                    if (pcVar5 != (code *)0x0) goto LAB_01a90dfc;
                  }
                  if (*(uint *)(iVar24 + 4) == uVar20) {
                    iVar4 = param_1[0x43];
                    if (iVar4 == param_1[0x41]) {
                      FUN_00a20c10(param_1 + 0x41);
                    }
                    puVar3 = (undefined4 *)(param_1[0x42] + iVar4 * 0x3c);
                    *puVar3 = local_90;
                    puVar3[1] = local_8c;
                    puVar3[2] = local_88;
                    puVar3[3] = local_84;
                    puVar3[4] = local_80;
                    puVar3[5] = local_7c;
                    puVar3[6] = local_78;
                    puVar3[7] = local_74;
                    puVar3[8] = local_70;
                    puVar3[9] = local_6c;
                    puVar3[10] = local_68;
                    puVar3[0xb] = local_64;
                    puVar3[0xc] = local_60;
                    puVar3[0xd] = local_5c;
                    puVar3[0xe] = local_58;
                    pcVar5 = (code *)0x0;
                    param_1[0x43] = iVar4 + 1;
                    goto LAB_01a902f4;
                  }
                  uVar15 = 0x19;
                  local_118 = "delimited length exceeded";
                }
                else {
                  uVar15 = 0x10;
                }
                pcVar5 = (code *)FUN_01aa0da0(local_118,uVar15);
LAB_01a90bbc:
              }
LAB_01a90dfc:
              FUN_01a94948(&local_90);
            }
            else {
              local_38 = &local_48;
              local_34 = FUN_01a924ac;
              local_3c = FUN_01a924ac;
              local_40 = &local_30;
              FUN_01a924e8(&local_54,&local_40);
              pcVar5 = (code *)FUN_01aa428c(&local_54);
            }
            iVar24 = *(int *)(pcVar5 + 8);
            if (iVar24 == *(int *)pcVar5) {
              FUN_018fa978(pcVar5);
            }
            puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
            *puVar3 = "SourceCodeInfo";
            puVar3[1] = 0xe;
            puVar3[2] = &DAT_005704f8;
            puVar3[3] = 8;
            *(int *)(pcVar5 + 8) = iVar24 + 1;
            break;
          }
          pcVar5 = (code *)FUN_01a9d744(bVar2,uVar20,param_4,0x62);
LAB_01a902f4:
        } while (pcVar5 == (code *)0x0);
      }
      else {
        uVar15 = 0x10;
        pcVar19 = "buffer underflow";
LAB_01a91a7c:
        pcVar5 = (code *)FUN_01aa0da0(pcVar19,uVar15);
      }
    }
    else {
      local_38 = &local_48;
      pppppppuVar26 = &local_54;
      local_34 = FUN_01a924ac;
      local_3c = FUN_01a924ac;
      local_40 = &local_30;
      FUN_01a924e8(pppppppuVar26,&local_40);
LAB_01a91974:
      pcVar5 = (code *)FUN_01aa428c(pppppppuVar26);
    }
    iVar24 = *(int *)(pcVar5 + 8);
    if (iVar24 == *(int *)pcVar5) {
      FUN_018fa978(pcVar5);
    }
    puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
    *puVar3 = "FileDescriptorProto";
    pcVar19 = &DAT_0056a3a8;
    uVar15 = 0x10;
    break;
  case 10:
    pcVar5 = (code *)FUN_01a9dbac(param_3,param_1 + 0x29,*param_4);
    if (pcVar5 == (code *)0x0) {
      return (code *)0x0;
    }
    iVar24 = *(int *)(pcVar5 + 8);
    if (iVar24 == *(int *)pcVar5) {
      FUN_018fa978(pcVar5);
    }
    puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
    *puVar3 = "FileDescriptorProto";
    pcVar19 = "public_dependency";
    uVar15 = 0x11;
    break;
  case 0xb:
    pcVar5 = (code *)FUN_01a9dbac(param_3,param_1 + 0x2c,*param_4);
    if (pcVar5 == (code *)0x0) {
      return (code *)0x0;
    }
    iVar24 = *(int *)(pcVar5 + 8);
    if (iVar24 == *(int *)pcVar5) {
      FUN_018fa978(pcVar5);
    }
    puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
    *puVar3 = "FileDescriptorProto";
    pcVar19 = "weak_dependency";
    uVar15 = 0xf;
    break;
  case 0xc:
    if (param_1[0x44] == -0x80000000) {
      param_1[0x44] = 0;
      param_1[0x45] = 1;
      param_1[0x46] = 0;
    }
    pcVar5 = (code *)FUN_01a9e23c(param_3,param_1 + 0x44,param_4);
    if (pcVar5 == (code *)0x0) {
      return (code *)0x0;
    }
    iVar24 = *(int *)(pcVar5 + 8);
    if (iVar24 == *(int *)pcVar5) {
      FUN_018fa978(pcVar5);
    }
    puVar3 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar24 * 0x10);
    *puVar3 = "FileDescriptorProto";
    pcVar19 = "synta";
    uVar15 = 6;
    break;
  default:
    pcVar5 = (code *)FUN_01a9d744(param_3,param_2,param_4,99);
    return pcVar5;
  }
  puVar3[1] = 0x13;
  puVar3[2] = pcVar19;
  puVar3[3] = uVar15;
  *(int *)(pcVar5 + 8) = iVar24 + 1;
  return pcVar5;
}

