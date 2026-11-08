// FUN_01a928cc @ 01a928cc size=6892 calls_out=23 calls_in=2
// strings: OneofOptions | uninterpreted_option | uninterpreted_option | OneofDescriptorProto | options | options

code * FUN_01a928cc(char param_1,int *param_2,int *param_3,int param_4)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *******pppppppuVar4;
  byte bVar5;
  int iVar6;
  code *pcVar7;
  uint *puVar8;
  undefined4 *puVar9;
  code *pcVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_130 [6];
  undefined4 local_118;
  undefined4 *******local_110;
  code *local_10c;
  undefined4 *******local_108;
  code *local_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 *******local_68;
  code *local_64;
  undefined4 *******local_60;
  code *local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 *******local_48;
  code *local_44;
  undefined4 *******local_38;
  code *local_34;
  undefined4 *******local_30;
  code *local_2c;
  
  local_68 = (undefined4 *******)CONCAT31(local_68._1_3_,param_1);
  local_48 = (undefined4 *******)CONCAT31(local_48._1_3_,2);
  if (param_1 != '\x02') {
    local_108 = &local_48;
    local_104 = FUN_01a924ac;
    local_10c = FUN_01a924ac;
    local_110 = &local_68;
    FUN_01a924e8(&local_190,&local_110);
    pcVar10 = (code *)FUN_01aa428c(&local_190);
    return pcVar10;
  }
  local_130[3] = -0x80000000;
  local_14c = 0;
  local_150 = 4;
  local_154 = 0;
  local_158 = 0;
  local_15c = 4;
  local_160 = 0;
  local_164 = 0;
  local_168 = 4;
  local_16c = 0;
  local_170 = 0;
  local_174 = 4;
  local_178 = 0;
  local_17c = 0;
  local_180 = 4;
  local_184 = 0;
  local_188 = 0;
  local_18c = 4;
  local_190 = 0;
  local_130[0] = -0x80000000;
  local_134 = 0;
  local_138 = 4;
  local_13c = 0;
  local_140 = 0;
  local_144 = 4;
  local_148 = 0;
  if (param_4 == 0) {
    uVar13 = 0x17;
    pcVar11 = "recursion limit reached";
  }
  else {
    iVar18 = *param_3;
    FUN_01a9d538(&local_110,iVar18);
    if (local_110 == (undefined4 *******)&DAT_00000001) {
LAB_01a92998:
      pcVar10 = local_10c;
      goto LAB_01a93e90;
    }
    if ((uint)-(int)local_104 < (uint)(local_108 <= *(undefined4 ********)(iVar18 + 4))) {
      uVar12 = (int)*(undefined4 ********)(iVar18 + 4) - (int)local_108;
      iVar17 = param_4 + -1;
      iVar6 = param_4 + -3;
      param_4 = param_4 + -2;
      do {
        if (*(uint *)(iVar18 + 4) <= uVar12) {
          if (*(uint *)(iVar18 + 4) == uVar12) {
            FUN_01bed4e2(&local_110,&local_190,0x7c);
            iVar18 = param_2[2];
            if (iVar18 == *param_2) {
              FUN_01aa1cb0(param_2);
            }
            FUN_01bed4e2(param_2[1] + iVar18 * 0x7c,&local_110,0x7c);
            param_2[2] = iVar18 + 1;
            return (code *)0x0;
          }
          uVar13 = 0x19;
          pcVar11 = "delimited length exceeded";
          goto LAB_01a94068;
        }
        FUN_01a9d538(&local_110,iVar18);
        if (local_110 == (undefined4 *******)&DAT_00000001) goto LAB_01a92998;
        local_2c = local_104;
        local_30 = local_108;
        pppppppuVar4 = local_30;
        if (local_104 != (code *)0x0) {
          local_64 = FUN_012fd074;
          local_68 = &local_30;
          FUN_01a8da38(&local_110,&DAT_00591421,&local_68);
          pcVar10 = (code *)FUN_01aa428c(&local_110);
          goto LAB_01a9406c;
        }
        local_48 = (undefined4 *******)((uint)local_108 & 7);
        bVar14 = false;
        local_44 = (code *)0x0;
        bVar5 = 0;
        switch(local_48) {
        case (undefined4 *******)0x0:
          break;
        case (undefined4 *******)0x1:
          bVar5 = 1;
          break;
        case (undefined4 *******)0x2:
          bVar5 = 2;
          bVar14 = true;
          break;
        case (undefined4 *******)0x3:
          bVar5 = 3;
          break;
        case (undefined4 *******)0x4:
          bVar5 = 4;
          break;
        case (undefined4 *******)0x5:
          bVar5 = 5;
          break;
        default:
          local_64 = FUN_012fd074;
          local_68 = &local_48;
          FUN_01a8da38(&local_110,&DAT_00596158,&local_68);
          pcVar10 = (code *)FUN_01aa428c(&local_110);
          goto LAB_01a9406c;
        }
        uVar19 = (uint)local_108 >> 3;
        if (uVar19 == 0) {
          pcVar10 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
          goto LAB_01a9406c;
        }
        local_30._1_3_ = (undefined3)((uint)local_108 >> 8);
        local_30 = pppppppuVar4;
        switch(uVar19) {
        case 1:
          if (local_130[0] == -0x80000000) {
            local_130[2] = 0;
            local_130[1] = 1;
            local_130[0] = 0;
          }
          pcVar7 = (code *)FUN_01a9e23c(bVar5,local_130,param_3);
          pcVar10 = (code *)0x0;
          if (pcVar7 != (code *)0x0) {
            iVar18 = *(int *)(pcVar7 + 8);
            if (iVar18 == *(int *)pcVar7) {
              FUN_018fa978(pcVar7);
            }
            puVar9 = (undefined4 *)(*(int *)(pcVar7 + 4) + iVar18 * 0x10);
            *puVar9 = "DescriptorProto";
            pcVar11 = &DAT_0056ee18;
            uVar13 = 4;
LAB_01a93cf0:
            puVar9[1] = 0xf;
            puVar9[2] = pcVar11;
            puVar9[3] = uVar13;
            *(int *)(pcVar7 + 8) = iVar18 + 1;
            pcVar10 = pcVar7;
            goto LAB_01a93e90;
          }
          break;
        case 2:
          pcVar7 = (code *)FUN_01a95cfc(bVar5,&local_190,param_3,iVar17);
          pcVar10 = (code *)0x0;
          if (pcVar7 != (code *)0x0) {
            iVar18 = *(int *)(pcVar7 + 8);
            if (iVar18 == *(int *)pcVar7) {
              FUN_018fa978(pcVar7);
            }
            puVar9 = (undefined4 *)(*(int *)(pcVar7 + 4) + iVar18 * 0x10);
            *puVar9 = "DescriptorProto";
            pcVar11 = "fieldencoding error";
            uVar13 = 5;
            goto LAB_01a93cf0;
          }
          break;
        case 3:
          pcVar7 = (code *)FUN_01a928cc(bVar5,&local_178,param_3,iVar17);
          pcVar10 = (code *)0x0;
          if (pcVar7 != (code *)0x0) {
            iVar18 = *(int *)(pcVar7 + 8);
            if (iVar18 == *(int *)pcVar7) {
              FUN_018fa978(pcVar7);
            }
            puVar9 = (undefined4 *)(*(int *)(pcVar7 + 4) + iVar18 * 0x10);
            *puVar9 = "DescriptorProto";
            pcVar11 = "nested_type";
            uVar13 = 0xb;
            goto LAB_01a93cf0;
          }
          break;
        case 4:
          pcVar7 = (code *)FUN_01a96cb8(bVar5,&local_16c,param_3,iVar17);
          pcVar10 = (code *)0x0;
          if (pcVar7 != (code *)0x0) {
            iVar18 = *(int *)(pcVar7 + 8);
            if (iVar18 == *(int *)pcVar7) {
              FUN_018fa978(pcVar7);
            }
            iVar6 = *(int *)(pcVar7 + 4);
            pcVar11 = "enum_type";
LAB_01a93ce8:
            puVar9 = (undefined4 *)(iVar6 + iVar18 * 0x10);
            *puVar9 = "DescriptorProto";
            uVar13 = 9;
            goto LAB_01a93cf0;
          }
          break;
        case 5:
          local_48 = (undefined4 *******)(uint)bVar5;
          local_30 = (undefined4 *******)CONCAT31(local_30._1_3_,2);
          if (bVar14) {
            local_58 = -0x80000000;
            local_60 = (undefined4 *******)0x0;
            local_68 = (undefined4 *******)0x0;
            if (iVar17 == 0) {
              uVar13 = 0x17;
              pcVar11 = "recursion limit reached";
LAB_01a94284:
              pcVar10 = (code *)FUN_01aa0da0(pcVar11,uVar13);
LAB_01a943a4:
            }
            else {
              FUN_01a9d538(&local_110,iVar18);
              if (local_110 != (undefined4 *******)&DAT_00000001) {
                if ((uint)-(int)local_104 < (uint)(local_108 <= *(undefined4 ********)(iVar18 + 4)))
                {
                  uVar19 = (int)*(undefined4 ********)(iVar18 + 4) - (int)local_108;
                  while (iVar3 = local_158, uVar19 < *(uint *)(iVar18 + 4)) {
                    FUN_01a9d538(&local_110,iVar18);
                    if (local_110 == (undefined4 *******)&DAT_00000001) goto LAB_01a93834;
                    local_34 = local_104;
                    local_38 = local_108;
                    if (local_104 != (code *)0x0) {
                      local_44 = FUN_012fd074;
                      local_48 = &local_38;
                      FUN_01a8da38(&local_110,&DAT_00591421,&local_48);
                      pcVar10 = (code *)FUN_01aa428c(&local_110);
                      goto LAB_01a943a4;
                    }
                    local_30 = (undefined4 *******)((uint)local_108 & 7);
                    bVar14 = false;
                    local_2c = (code *)0x0;
                    bVar5 = 0;
                    switch(local_30) {
                    case (undefined4 *******)0x0:
                      break;
                    case (undefined4 *******)0x1:
                      bVar5 = 1;
                      break;
                    case (undefined4 *******)0x2:
                      bVar5 = 2;
                      bVar14 = true;
                      break;
                    case (undefined4 *******)0x3:
                      bVar5 = 3;
                      break;
                    case (undefined4 *******)0x4:
                      bVar5 = 4;
                      break;
                    case (undefined4 *******)0x5:
                      bVar5 = 5;
                      break;
                    default:
                      local_44 = FUN_012fd074;
                      local_48 = &local_30;
                      FUN_01a8da38(&local_110,&DAT_00596158,&local_48);
                      pcVar10 = (code *)FUN_01aa428c(&local_110);
                      goto LAB_01a943a4;
                    }
                    uVar16 = (uint)local_108 >> 3;
                    if (uVar16 == 0) {
                      pcVar10 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                      goto LAB_01a943a4;
                    }
                    if (uVar16 == 1) {
                      if (((uint)local_68 & 1) == 0) {
                        local_64 = (code *)0x0;
                        local_68 = (undefined4 *******)&DAT_00000001;
                      }
                      pcVar7 = (code *)FUN_01a9dd84(bVar5,(uint)&local_68 | 4,iVar18);
                      pcVar10 = (code *)0x0;
                      if (pcVar7 != (code *)0x0) {
                        iVar18 = *(int *)(pcVar7 + 8);
                        if (iVar18 == *(int *)pcVar7) {
                          FUN_018fa978(pcVar7);
                        }
                        puVar9 = (undefined4 *)(*(int *)(pcVar7 + 4) + iVar18 * 0x10);
                        *puVar9 = "ExtensionRange";
                        pcVar11 = "start";
                        uVar13 = 5;
LAB_01a93dd4:
                        puVar9[1] = 0xe;
                        puVar9[2] = pcVar11;
                        puVar9[3] = uVar13;
                        *(int *)(pcVar7 + 8) = iVar18 + 1;
                        pcVar10 = pcVar7;
                        goto LAB_01a939bc;
                      }
                    }
                    else if (uVar16 == 2) {
                      if (((uint)local_60 & 1) == 0) {
                        local_5c = (code *)0x0;
                        local_60 = (undefined4 *******)&DAT_00000001;
                      }
                      pcVar7 = (code *)FUN_01a9dd84(bVar5,&local_5c,iVar18);
                      pcVar10 = (code *)0x0;
                      if (pcVar7 != (code *)0x0) {
                        iVar18 = *(int *)(pcVar7 + 8);
                        if (iVar18 == *(int *)pcVar7) {
                          FUN_018fa978(pcVar7);
                        }
                        puVar9 = (undefined4 *)(*(int *)(pcVar7 + 4) + iVar18 * 0x10);
                        *puVar9 = "ExtensionRange";
                        pcVar11 = "end";
                        uVar13 = 3;
                        goto LAB_01a93dd4;
                      }
                    }
                    else {
                      if (uVar16 == 3) {
                        if (local_58 == -0x80000000) {
                          local_50 = 0;
                          local_54 = 8;
                          local_58 = 0;
                        }
                        local_30 = (undefined4 *******)(uint)bVar5;
                        local_38 = (undefined4 *******)CONCAT31((int3)((uint)local_108 >> 8),2);
                        if (bVar14) {
                          if (param_4 == 0) {
                            uVar13 = 0x17;
                            pcVar11 = "recursion limit reached";
LAB_01a9436c:
                            pcVar10 = (code *)FUN_01aa0da0(pcVar11,uVar13);
                            goto LAB_01a9382c;
                          }
                          FUN_01a9d538(&local_110,iVar18);
                          if (local_110 != (undefined4 *******)&DAT_00000001) {
                            if ((uint)-(int)local_104 <
                                (uint)(local_108 <= *(undefined4 ********)(iVar18 + 4))) {
                              uVar16 = (int)*(undefined4 ********)(iVar18 + 4) - (int)local_108;
                              while (uVar16 < *(uint *)(iVar18 + 4)) {
                                FUN_01a9d538(&local_110,iVar18);
                                if (local_110 == (undefined4 *******)&DAT_00000001)
                                goto LAB_01a93784;
                                local_38 = local_108;
                                local_34 = local_104;
                                if (local_104 != (code *)0x0) {
                                  local_44 = FUN_012fd074;
                                  local_48 = &local_38;
                                  FUN_01a8da38(&local_110,&DAT_00591421,&local_48);
                                  pcVar10 = (code *)FUN_01aa428c(&local_110);
                                  goto LAB_01a9382c;
                                }
                                local_2c = (code *)0x0;
                                local_30 = (undefined4 *******)((uint)local_108 & 7);
                                uVar15 = ((uint)local_108 ^ 4) & 7;
                                if ((0xf3U >> uVar15 & 1) == 0) {
                                  local_44 = FUN_012fd074;
                                  local_48 = &local_30;
                                  FUN_01a8da38(&local_110,&DAT_00596158,&local_48);
                                  pcVar10 = (code *)FUN_01aa428c(&local_110);
                                  goto LAB_01a9382c;
                                }
                                uVar1 = (uint)local_108 >> 3;
                                if (uVar1 == 0) {
                                  pcVar10 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                                  goto LAB_01a9382c;
                                }
                                if (uVar1 == 999) {
                                  pcVar7 = (code *)FUN_01a949ec((&DAT_00571008)[uVar15],&local_58,
                                                                param_3,iVar6);
                                  pcVar10 = (code *)0x0;
                                  if (pcVar7 != (code *)0x0) {
                                    iVar18 = *(int *)(pcVar7 + 8);
                                    if (iVar18 == *(int *)pcVar7) {
                                      FUN_018fa978(pcVar7);
                                    }
                                    puVar9 = (undefined4 *)(*(int *)(pcVar7 + 4) + iVar18 * 0x10);
                                    *puVar9 = "ExtensionRangeOptions";
                                    puVar9[1] = 0x15;
                                    puVar9[2] = "uninterpreted_option";
                                    puVar9[3] = 0x14;
                                    *(int *)(pcVar7 + 8) = iVar18 + 1;
                                    pcVar10 = pcVar7;
                                    goto LAB_01a93970;
                                  }
                                }
                                else {
                                  pcVar10 = (code *)FUN_01a9d744((&DAT_00571008)[uVar15],uVar1,
                                                                 param_3,iVar6);
                                }
                                if (pcVar10 != (code *)0x0) goto LAB_01a93970;
                              }
                              pcVar10 = (code *)0x0;
                              if (*(uint *)(iVar18 + 4) == uVar16) goto LAB_01a92e90;
                              uVar13 = 0x19;
                              pcVar11 = "delimited length exceeded";
                            }
                            else {
                              uVar13 = 0x10;
                              pcVar11 = "buffer underflow";
                            }
                            goto LAB_01a9436c;
                          }
LAB_01a93784:
                          pcVar10 = local_10c;
                        }
                        else {
                          local_108 = &local_38;
                          local_104 = FUN_01a924ac;
                          local_10c = FUN_01a924ac;
                          local_110 = &local_30;
                          FUN_01a924e8(&local_48,&local_110);
                          pcVar10 = (code *)FUN_01aa428c(&local_48);
LAB_01a9382c:
                        }
LAB_01a93970:
                        iVar18 = *(int *)(pcVar10 + 8);
                        if (iVar18 == *(int *)pcVar10) {
                          FUN_018fa978(pcVar10);
                        }
                        puVar9 = (undefined4 *)(*(int *)(pcVar10 + 4) + iVar18 * 0x10);
                        *puVar9 = "ExtensionRange";
                        puVar9[1] = 0xe;
                        puVar9[2] = "options";
                        puVar9[3] = 7;
                        *(int *)(pcVar10 + 8) = iVar18 + 1;
                        goto LAB_01a939bc;
                      }
                      pcVar10 = (code *)FUN_01a9d744(bVar5,uVar16,param_3,param_4);
                    }
LAB_01a92e90:
                    if (pcVar10 != (code *)0x0) goto LAB_01a939bc;
                  }
                  if (*(uint *)(iVar18 + 4) == uVar19) {
                    local_110 = local_68;
                    local_10c = local_64;
                    local_108 = local_60;
                    local_104 = local_5c;
                    iStack_100 = local_58;
                    uStack_fc = local_54;
                    uStack_f8 = local_50;
                    if (local_158 == local_160) {
                      FUN_01aa1c50(&local_160);
                    }
                    pcVar10 = (code *)0x0;
                    puVar9 = (undefined4 *)(local_15c + iVar3 * 0x1c);
                    *puVar9 = local_68;
                    puVar9[1] = local_64;
                    puVar9[2] = local_60;
                    puVar9[3] = local_5c;
                    puVar9[4] = local_58;
                    puVar9[5] = local_54;
                    puVar9[6] = local_50;
                    local_158 = iVar3 + 1;
                    break;
                  }
                  uVar13 = 0x19;
                  pcVar11 = "delimited length exceeded";
                }
                else {
                  uVar13 = 0x10;
                  pcVar11 = "buffer underflow";
                }
                goto LAB_01a94284;
              }
LAB_01a93834:
              pcVar10 = local_10c;
            }
LAB_01a939bc:
            if (local_58 != -0x80000000) {
              FUN_0165cbf8(&local_58);
            }
          }
          else {
            local_108 = &local_30;
            local_104 = FUN_01a924ac;
            local_10c = FUN_01a924ac;
            local_110 = &local_48;
            FUN_01a924e8(&local_68,&local_110);
            pcVar10 = (code *)FUN_01aa428c(&local_68);
          }
          iVar18 = *(int *)(pcVar10 + 8);
          if (iVar18 == *(int *)pcVar10) {
            FUN_018fa978(pcVar10);
          }
          puVar9 = (undefined4 *)(*(int *)(pcVar10 + 4) + iVar18 * 0x10);
          *puVar9 = "DescriptorProto";
          uVar13 = 0xf;
          pcVar11 = "extension_range";
          puVar9[1] = 0xf;
          goto LAB_01a93e80;
        case 6:
          pcVar7 = (code *)FUN_01a95cfc(bVar5,&local_184,param_3,iVar17);
          pcVar10 = (code *)0x0;
          if (pcVar7 != (code *)0x0) {
            iVar18 = *(int *)(pcVar7 + 8);
            if (iVar18 == *(int *)pcVar7) {
              FUN_018fa978(pcVar7);
            }
            iVar6 = *(int *)(pcVar7 + 4);
            pcVar11 = "extension";
            goto LAB_01a93ce8;
          }
          break;
        case 7:
          if (local_130[3] == -0x80000000) {
            local_130[4] = 8;
            local_118 = 0x2020202;
            local_130[5] = 0;
            local_130[3] = 0;
          }
          local_48 = (undefined4 *******)(uint)bVar5;
          local_30 = (undefined4 *******)CONCAT31(local_30._1_3_,2);
          if (bVar14) {
            if (iVar17 == 0) {
              uVar13 = 0x17;
              pcVar11 = "recursion limit reached";
LAB_01a94298:
              pcVar10 = (code *)FUN_01aa0da0(pcVar11,uVar13);
              goto LAB_01a937bc;
            }
            FUN_01a9d538(&local_110,iVar18);
            if (local_110 != (undefined4 *******)&DAT_00000001) {
              if ((uint)-(int)local_104 < (uint)(local_108 <= *(undefined4 ********)(iVar18 + 4))) {
                uVar19 = (int)*(undefined4 ********)(iVar18 + 4) - (int)local_108;
                while (uVar19 < *(uint *)(iVar18 + 4)) {
                  FUN_01a9d538(&local_110,iVar18);
                  if (local_110 == (undefined4 *******)&DAT_00000001) goto LAB_01a9373c;
                  local_30 = local_108;
                  local_2c = local_104;
                  if (local_104 != (code *)0x0) {
                    local_64 = FUN_012fd074;
                    local_68 = &local_30;
                    FUN_01a8da38(&local_110,&DAT_00591421,&local_68);
                    pcVar10 = (code *)FUN_01aa428c(&local_110);
                    goto LAB_01a937bc;
                  }
                  local_44 = (code *)0x0;
                  local_48 = (undefined4 *******)((uint)local_108 & 7);
                  uVar16 = ((uint)local_108 ^ 4) & 7;
                  if ((0xf3U >> uVar16 & 1) == 0) {
                    local_64 = FUN_012fd074;
                    local_68 = &local_48;
                    FUN_01a8da38(&local_110,&DAT_00596158,&local_68);
                    pcVar10 = (code *)FUN_01aa428c(&local_110);
                    goto LAB_01a937bc;
                  }
                  uVar15 = (uint)local_108 >> 3;
                  if (uVar15 == 0) {
                    pcVar10 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                    goto LAB_01a937bc;
                  }
                  uVar2 = (&DAT_00571008)[uVar16];
                  switch(uVar15) {
                  case 1:
                    if ((byte)local_118 == 2) {
                      local_118 = local_118 & 0xffffff00;
                    }
                    pcVar10 = (code *)FUN_01a9cbb8(uVar2,&local_118,iVar18);
                    pcVar7 = (code *)0x0;
                    if (pcVar10 != (code *)0x0) {
                      iVar18 = *(int *)(pcVar10 + 8);
                      if (iVar18 == *(int *)pcVar10) {
                        FUN_018fa978(pcVar10);
                      }
                      puVar9 = (undefined4 *)(*(int *)(pcVar10 + 4) + iVar18 * 0x10);
                      *puVar9 = "MessageOptions";
                      pcVar11 = "message_set_wire_format";
                      uVar13 = 0x17;
LAB_01a93e28:
                      puVar9[1] = 0xe;
                      puVar9[2] = pcVar11;
                      puVar9[3] = uVar13;
                      *(int *)(pcVar10 + 8) = iVar18 + 1;
                      goto LAB_01a93e44;
                    }
                    break;
                  case 2:
                    if (local_118._1_1_ == '\x02') {
                      local_118._0_2_ = (ushort)(byte)local_118;
                    }
                    pcVar10 = (code *)FUN_01a9cbb8(uVar2,(int)&local_118 + 1,iVar18);
                    pcVar7 = (code *)0x0;
                    if (pcVar10 != (code *)0x0) {
                      iVar18 = *(int *)(pcVar10 + 8);
                      if (iVar18 == *(int *)pcVar10) {
                        FUN_018fa978(pcVar10);
                      }
                      puVar9 = (undefined4 *)(*(int *)(pcVar10 + 4) + iVar18 * 0x10);
                      *puVar9 = "MessageOptions";
                      pcVar11 = "no_standard_descriptor_accessor";
                      uVar13 = 0x1f;
                      goto LAB_01a93e28;
                    }
                    break;
                  case 3:
                    if (local_118._2_1_ == '\x02') {
                      local_118._0_3_ = (uint3)(ushort)local_118;
                    }
                    pcVar10 = (code *)FUN_01a9cbb8(uVar2,(int)&local_118 + 2,iVar18);
                    pcVar7 = (code *)0x0;
                    if (pcVar10 != (code *)0x0) {
                      iVar18 = *(int *)(pcVar10 + 8);
                      if (iVar18 == *(int *)pcVar10) {
                        FUN_018fa978(pcVar10);
                      }
                      puVar9 = (undefined4 *)(*(int *)(pcVar10 + 4) + iVar18 * 0x10);
                      *puVar9 = "MessageOptions";
                      pcVar11 = "deprecated";
                      uVar13 = 10;
                      goto LAB_01a93e28;
                    }
                    break;
                  case 4:
                  case 5:
                  case 6:
switchD_01a93314_caseD_4:
                    pcVar7 = (code *)FUN_01a9d744(uVar2,uVar15,param_3,param_4);
                    break;
                  case 7:
                    if (local_118._3_1_ == '\x02') {
                      local_118 = local_118 & 0xffffff;
                    }
                    pcVar10 = (code *)FUN_01a9cbb8(uVar2,(int)&local_118 + 3,iVar18);
                    pcVar7 = (code *)0x0;
                    if (pcVar10 != (code *)0x0) {
                      iVar18 = *(int *)(pcVar10 + 8);
                      if (iVar18 == *(int *)pcVar10) {
                        FUN_018fa978(pcVar10);
                      }
                      puVar9 = (undefined4 *)(*(int *)(pcVar10 + 4) + iVar18 * 0x10);
                      *puVar9 = "MessageOptions";
                      pcVar11 = "map_entry";
                      uVar13 = 9;
                      goto LAB_01a93e28;
                    }
                    break;
                  default:
                    if (uVar15 != 999) goto switchD_01a93314_caseD_4;
                    pcVar10 = (code *)FUN_01a949ec(uVar2,local_130 + 3,param_3,param_4);
                    pcVar7 = (code *)0x0;
                    if (pcVar10 != (code *)0x0) {
                      iVar18 = *(int *)(pcVar10 + 8);
                      if (iVar18 == *(int *)pcVar10) {
                        FUN_018fa978(pcVar10);
                      }
                      puVar9 = (undefined4 *)(*(int *)(pcVar10 + 4) + iVar18 * 0x10);
                      *puVar9 = "MessageOptions";
                      pcVar11 = "uninterpreted_option";
                      uVar13 = 0x14;
                      goto LAB_01a93e28;
                    }
                  }
                  pcVar10 = pcVar7;
                  if (pcVar7 != (code *)0x0) goto LAB_01a93e44;
                }
                pcVar10 = (code *)0x0;
                if (*(uint *)(iVar18 + 4) == uVar19) break;
                uVar13 = 0x19;
                pcVar11 = "delimited length exceeded";
              }
              else {
                uVar13 = 0x10;
                pcVar11 = "buffer underflow";
              }
              goto LAB_01a94298;
            }
LAB_01a9373c:
            pcVar10 = local_10c;
          }
          else {
            local_108 = &local_30;
            local_104 = FUN_01a924ac;
            local_10c = FUN_01a924ac;
            local_110 = &local_48;
            FUN_01a924e8(&local_68,&local_110);
            pcVar10 = (code *)FUN_01aa428c(&local_68);
LAB_01a937bc:
          }
LAB_01a93e44:
          iVar18 = *(int *)(pcVar10 + 8);
          if (iVar18 == *(int *)pcVar10) {
            FUN_018fa978(pcVar10);
          }
          puVar9 = (undefined4 *)(*(int *)(pcVar10 + 4) + iVar18 * 0x10);
          *puVar9 = "DescriptorProto";
          pcVar11 = "options";
          uVar13 = 7;
          goto LAB_01a93e78;
        case 8:
          local_48 = (undefined4 *******)(uint)bVar5;
          local_30 = (undefined4 *******)CONCAT31(local_30._1_3_,2);
          if (bVar14) {
            local_74 = -0x80000000;
            local_80 = -0x80000000;
            if (iVar17 == 0) {
              uVar13 = 0x17;
              pcVar11 = "recursion limit reached";
LAB_01a942ac:
              pcVar10 = (code *)FUN_01aa0da0(pcVar11,uVar13);
LAB_01a942b0:
            }
            else {
              FUN_01a9d538(&local_110,iVar18);
              if (local_110 != (undefined4 *******)&DAT_00000001) {
                if ((uint)-(int)local_104 < (uint)(local_108 <= *(undefined4 ********)(iVar18 + 4)))
                {
                  uVar19 = (int)*(undefined4 ********)(iVar18 + 4) - (int)local_108;
                  while (iVar3 = local_14c, uVar19 < *(uint *)(iVar18 + 4)) {
                    FUN_01a9d538(&local_110,iVar18);
                    if (local_110 == (undefined4 *******)&DAT_00000001) goto LAB_01a9383c;
                    local_2c = local_104;
                    local_30 = local_108;
                    if (local_104 != (code *)0x0) {
                      local_64 = FUN_012fd074;
                      local_68 = &local_30;
                      FUN_01a8da38(&local_110,&DAT_00591421,&local_68);
                      pcVar10 = (code *)FUN_01aa428c(&local_110);
                      goto LAB_01a942b0;
                    }
                    local_48 = (undefined4 *******)((uint)local_108 & 7);
                    bVar14 = false;
                    local_44 = (code *)0x0;
                    bVar5 = 0;
                    switch(local_48) {
                    case (undefined4 *******)0x0:
                      break;
                    case (undefined4 *******)0x1:
                      bVar5 = 1;
                      break;
                    case (undefined4 *******)0x2:
                      bVar5 = 2;
                      bVar14 = true;
                      break;
                    case (undefined4 *******)0x3:
                      bVar5 = 3;
                      break;
                    case (undefined4 *******)0x4:
                      bVar5 = 4;
                      break;
                    case (undefined4 *******)0x5:
                      bVar5 = 5;
                      break;
                    default:
                      local_64 = FUN_012fd074;
                      local_68 = &local_48;
                      FUN_01a8da38(&local_110,&DAT_00596158,&local_68);
                      pcVar10 = (code *)FUN_01aa428c(&local_110);
                      goto LAB_01a942b0;
                    }
                    uVar16 = (uint)local_108 >> 3;
                    if (uVar16 == 0) {
                      pcVar10 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                      goto LAB_01a942b0;
                    }
                    if (uVar16 == 1) {
                      if (local_80 == -0x80000000) {
                        local_78 = 0;
                        local_7c = 1;
                        local_80 = 0;
                      }
                      pcVar7 = (code *)FUN_01a9e23c(bVar5,&local_80,param_3);
                      pcVar10 = (code *)0x0;
                      if (pcVar7 != (code *)0x0) {
                        iVar18 = *(int *)(pcVar7 + 8);
                        if (iVar18 == *(int *)pcVar7) {
                          FUN_018fa978(pcVar7);
                        }
                        puVar9 = (undefined4 *)(*(int *)(pcVar7 + 4) + iVar18 * 0x10);
                        *puVar9 = "OneofDescriptorProto";
                        puVar9[1] = 0x14;
                        puVar9[2] = &DAT_0056ee18;
                        puVar9[3] = 4;
                        *(int *)(pcVar7 + 8) = iVar18 + 1;
                        pcVar10 = pcVar7;
                        goto LAB_01a938e0;
                      }
                    }
                    else {
                      if (uVar16 == 2) {
                        if (local_74 == -0x80000000) {
                          local_6c = 0;
                          local_70 = 8;
                          local_74 = 0;
                        }
                        local_48 = (undefined4 *******)(uint)bVar5;
                        local_30._1_3_ = (undefined3)((uint)local_108 >> 8);
                        local_30 = (undefined4 *******)CONCAT31(local_30._1_3_,2);
                        if (bVar14) {
                          if (param_4 == 0) {
                            uVar13 = 0x17;
                            pcVar11 = "recursion limit reached";
LAB_01a94310:
                            pcVar10 = (code *)FUN_01aa0da0(pcVar11,uVar13);
                            goto LAB_01a937f4;
                          }
                          FUN_01a9d538(&local_110,iVar18);
                          if (local_110 != (undefined4 *******)&DAT_00000001) {
                            if ((uint)-(int)local_104 <
                                (uint)(local_108 <= *(undefined4 ********)(iVar18 + 4))) {
                              uVar16 = (int)*(undefined4 ********)(iVar18 + 4) - (int)local_108;
                              while (uVar16 < *(uint *)(iVar18 + 4)) {
                                FUN_01a9d538(&local_110,iVar18);
                                if (local_110 == (undefined4 *******)&DAT_00000001)
                                goto LAB_01a93744;
                                local_30 = local_108;
                                local_2c = local_104;
                                if (local_104 != (code *)0x0) {
                                  local_64 = FUN_012fd074;
                                  local_68 = &local_30;
                                  FUN_01a8da38(&local_110,&DAT_00591421,&local_68);
                                  pcVar10 = (code *)FUN_01aa428c(&local_110);
                                  goto LAB_01a937f4;
                                }
                                local_44 = (code *)0x0;
                                local_48 = (undefined4 *******)((uint)local_108 & 7);
                                uVar15 = ((uint)local_108 ^ 4) & 7;
                                if ((0xf3U >> uVar15 & 1) == 0) {
                                  local_64 = FUN_012fd074;
                                  local_68 = &local_48;
                                  FUN_01a8da38(&local_110,&DAT_00596158,&local_68);
                                  pcVar10 = (code *)FUN_01aa428c(&local_110);
                                  goto LAB_01a937f4;
                                }
                                uVar1 = (uint)local_108 >> 3;
                                if (uVar1 == 0) {
                                  pcVar10 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                                  goto LAB_01a937f4;
                                }
                                if (uVar1 == 999) {
                                  pcVar7 = (code *)FUN_01a949ec((&DAT_00571008)[uVar15],&local_74,
                                                                param_3,iVar6);
                                  pcVar10 = (code *)0x0;
                                  if (pcVar7 != (code *)0x0) {
                                    iVar18 = *(int *)(pcVar7 + 8);
                                    if (iVar18 == *(int *)pcVar7) {
                                      FUN_018fa978(pcVar7);
                                    }
                                    puVar9 = (undefined4 *)(*(int *)(pcVar7 + 4) + iVar18 * 0x10);
                                    *puVar9 = "OneofOptions";
                                    puVar9[1] = 0xc;
                                    puVar9[2] = "uninterpreted_option";
                                    puVar9[3] = 0x14;
                                    *(int *)(pcVar7 + 8) = iVar18 + 1;
                                    pcVar10 = pcVar7;
                                    goto LAB_01a93894;
                                  }
                                }
                                else {
                                  pcVar10 = (code *)FUN_01a9d744((&DAT_00571008)[uVar15],uVar1,
                                                                 param_3,iVar6);
                                }
                                if (pcVar10 != (code *)0x0) goto LAB_01a93894;
                              }
                              pcVar10 = (code *)0x0;
                              if (*(uint *)(iVar18 + 4) == uVar16) goto LAB_01a931b0;
                              uVar13 = 0x19;
                              pcVar11 = "delimited length exceeded";
                            }
                            else {
                              uVar13 = 0x10;
                              pcVar11 = "buffer underflow";
                            }
                            goto LAB_01a94310;
                          }
LAB_01a93744:
                          pcVar10 = local_10c;
                        }
                        else {
                          local_108 = &local_30;
                          local_104 = FUN_01a924ac;
                          local_10c = FUN_01a924ac;
                          local_110 = &local_48;
                          FUN_01a924e8(&local_68,&local_110);
                          pcVar10 = (code *)FUN_01aa428c(&local_68);
LAB_01a937f4:
                        }
LAB_01a93894:
                        iVar18 = *(int *)(pcVar10 + 8);
                        if (iVar18 == *(int *)pcVar10) {
                          FUN_018fa978(pcVar10);
                        }
                        puVar9 = (undefined4 *)(*(int *)(pcVar10 + 4) + iVar18 * 0x10);
                        *puVar9 = "OneofDescriptorProto";
                        puVar9[1] = 0x14;
                        puVar9[2] = "options";
                        puVar9[3] = 7;
                        *(int *)(pcVar10 + 8) = iVar18 + 1;
                        goto LAB_01a938e0;
                      }
                      pcVar10 = (code *)FUN_01a9d744(bVar5,uVar16,param_3,param_4);
                    }
LAB_01a931b0:
                    if (pcVar10 != (code *)0x0) goto LAB_01a938e0;
                  }
                  if (*(uint *)(iVar18 + 4) == uVar19) {
                    if (local_14c == local_154) {
                      FUN_014f8acc(&local_154);
                    }
                    pcVar10 = (code *)0x0;
                    piVar20 = (int *)(local_150 + iVar3 * 0x18);
                    *piVar20 = local_80;
                    piVar20[1] = local_7c;
                    piVar20[2] = local_78;
                    piVar20[3] = local_74;
                    piVar20[4] = local_70;
                    piVar20[5] = local_6c;
                    local_14c = iVar3 + 1;
                    break;
                  }
                  uVar13 = 0x19;
                  pcVar11 = "delimited length exceeded";
                }
                else {
                  uVar13 = 0x10;
                  pcVar11 = "buffer underflow";
                }
                goto LAB_01a942ac;
              }
LAB_01a9383c:
              pcVar10 = local_10c;
            }
LAB_01a938e0:
            FUN_01a927f0(&local_80);
          }
          else {
            local_108 = &local_30;
            local_104 = FUN_01a924ac;
            local_10c = FUN_01a924ac;
            local_110 = &local_48;
            FUN_01a924e8(&local_68,&local_110);
            pcVar10 = (code *)FUN_01aa428c(&local_68);
          }
          iVar18 = *(int *)(pcVar10 + 8);
          if (iVar18 == *(int *)pcVar10) {
            FUN_018fa978(pcVar10);
          }
          puVar9 = (undefined4 *)(*(int *)(pcVar10 + 4) + iVar18 * 0x10);
          *puVar9 = "DescriptorProto";
          pcVar11 = "oneof_decl";
          uVar13 = 10;
          goto LAB_01a93e78;
        case 9:
          local_48 = (undefined4 *******)(uint)bVar5;
          local_30 = (undefined4 *******)CONCAT31(local_30._1_3_,2);
          if (bVar14) {
            local_88 = 0;
            local_90 = 0;
            if (iVar17 == 0) {
              uVar13 = 0x17;
              pcVar11 = "recursion limit reached";
LAB_01a94270:
              pcVar10 = (code *)FUN_01aa0da0(pcVar11,uVar13);
              goto LAB_01a9377c;
            }
            FUN_01a9d538(&local_110,iVar18);
            if (local_110 != (undefined4 *******)&DAT_00000001) {
              if ((uint)-(int)local_104 < (uint)(local_108 <= *(undefined4 ********)(iVar18 + 4))) {
                uVar19 = (int)*(undefined4 ********)(iVar18 + 4) - (int)local_108;
                while (iVar3 = local_140, uVar19 < *(uint *)(iVar18 + 4)) {
                  FUN_01a9d538(&local_110,iVar18);
                  if (local_110 == (undefined4 *******)&DAT_00000001) goto LAB_01a93734;
                  local_30 = local_108;
                  local_2c = local_104;
                  if (local_104 != (code *)0x0) {
                    local_64 = FUN_012fd074;
                    local_68 = &local_30;
                    FUN_01a8da38(&local_110,&DAT_00591421,&local_68);
                    pcVar10 = (code *)FUN_01aa428c(&local_110);
                    goto LAB_01a9377c;
                  }
                  local_44 = (code *)0x0;
                  local_48 = (undefined4 *******)((uint)local_108 & 7);
                  uVar16 = ((uint)local_108 ^ 4) & 7;
                  if ((0xf3U >> uVar16 & 1) == 0) {
                    local_64 = FUN_012fd074;
                    local_68 = &local_48;
                    FUN_01a8da38(&local_110,&DAT_00596158,&local_68);
                    pcVar10 = (code *)FUN_01aa428c(&local_110);
                    goto LAB_01a9377c;
                  }
                  uVar15 = (uint)local_108 >> 3;
                  if (uVar15 == 0) {
                    pcVar10 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                    goto LAB_01a9377c;
                  }
                  uVar2 = (&DAT_00571008)[uVar16];
                  if (uVar15 == 1) {
                    if ((local_90 & 1) == 0) {
                      local_8c = 0;
                      local_90 = 1;
                    }
                    pcVar10 = (code *)FUN_01a9dd84(uVar2,(uint)&local_90 | 4,iVar18);
                    pcVar7 = (code *)0x0;
                    if (pcVar10 != (code *)0x0) {
                      iVar18 = *(int *)(pcVar10 + 8);
                      if (iVar18 == *(int *)pcVar10) {
                        FUN_018fa978(pcVar10);
                      }
                      puVar9 = (undefined4 *)(*(int *)(pcVar10 + 4) + iVar18 * 0x10);
                      *puVar9 = "ReservedRange";
                      pcVar11 = "start";
                      uVar13 = 5;
LAB_01a93a78:
                      puVar9[1] = 0xd;
                      puVar9[2] = pcVar11;
                      puVar9[3] = uVar13;
                      *(int *)(pcVar10 + 8) = iVar18 + 1;
                      goto LAB_01a93a94;
                    }
                  }
                  else if (uVar15 == 2) {
                    if ((local_88 & 1) == 0) {
                      local_84 = 0;
                      local_88 = 1;
                    }
                    pcVar10 = (code *)FUN_01a9dd84(uVar2,&local_84,iVar18);
                    pcVar7 = (code *)0x0;
                    if (pcVar10 != (code *)0x0) {
                      iVar18 = *(int *)(pcVar10 + 8);
                      if (iVar18 == *(int *)pcVar10) {
                        FUN_018fa978(pcVar10);
                      }
                      puVar9 = (undefined4 *)(*(int *)(pcVar10 + 4) + iVar18 * 0x10);
                      *puVar9 = "ReservedRange";
                      pcVar11 = "end";
                      uVar13 = 3;
                      goto LAB_01a93a78;
                    }
                  }
                  else {
                    pcVar7 = (code *)FUN_01a9d744(uVar2,uVar15,param_3,param_4);
                  }
                  pcVar10 = pcVar7;
                  if (pcVar7 != (code *)0x0) goto LAB_01a93a94;
                }
                if (*(uint *)(iVar18 + 4) == uVar19) {
                  if (local_140 == local_148) {
                    FUN_01aa1b90(&local_148);
                  }
                  pcVar10 = (code *)0x0;
                  puVar8 = (uint *)(local_144 + iVar3 * 0x10);
                  *puVar8 = local_90;
                  puVar8[1] = local_8c;
                  puVar8[2] = local_88;
                  puVar8[3] = local_84;
                  local_140 = iVar3 + 1;
                  break;
                }
                uVar13 = 0x19;
                pcVar11 = "delimited length exceeded";
              }
              else {
                uVar13 = 0x10;
                pcVar11 = "buffer underflow";
              }
              goto LAB_01a94270;
            }
LAB_01a93734:
            pcVar10 = local_10c;
          }
          else {
            local_108 = &local_30;
            local_104 = FUN_01a924ac;
            local_10c = FUN_01a924ac;
            local_110 = &local_48;
            FUN_01a924e8(&local_68,&local_110);
            pcVar10 = (code *)FUN_01aa428c(&local_68);
LAB_01a9377c:
          }
LAB_01a93a94:
          iVar18 = *(int *)(pcVar10 + 8);
          if (iVar18 == *(int *)pcVar10) {
            FUN_018fa978(pcVar10);
          }
          puVar9 = (undefined4 *)(*(int *)(pcVar10 + 4) + iVar18 * 0x10);
          *puVar9 = "DescriptorProto";
          pcVar11 = "reserved_range";
          uVar13 = 0xe;
LAB_01a93e78:
          puVar9[1] = 0xf;
LAB_01a93e80:
          puVar9[2] = pcVar11;
          puVar9[3] = uVar13;
          *(int *)(pcVar10 + 8) = iVar18 + 1;
          goto LAB_01a93e90;
        case 10:
          pcVar7 = (code *)FUN_01a9e124(bVar5,&local_13c,param_3);
          pcVar10 = (code *)0x0;
          if (pcVar7 != (code *)0x0) {
            iVar18 = *(int *)(pcVar7 + 8);
            if (iVar18 == *(int *)pcVar7) {
              FUN_018fa978(pcVar7);
            }
            puVar9 = (undefined4 *)(*(int *)(pcVar7 + 4) + iVar18 * 0x10);
            *puVar9 = "DescriptorProto";
            pcVar11 = "reserved_name";
            uVar13 = 0xd;
            goto LAB_01a93cf0;
          }
          break;
        default:
          pcVar10 = (code *)FUN_01a9d744(bVar5,uVar19,param_3,iVar17);
        }
      } while (pcVar10 == (code *)0x0);
      goto LAB_01a93e90;
    }
    uVar13 = 0x10;
    pcVar11 = "buffer underflow";
  }
LAB_01a94068:
  pcVar10 = (code *)FUN_01aa0da0(pcVar11,uVar13);
LAB_01a9406c:
LAB_01a93e90:
  FUN_01a9476c(&local_190);
  return pcVar10;
}

