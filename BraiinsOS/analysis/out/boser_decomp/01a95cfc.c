// FUN_01a95cfc @ 01a95cfc size=3420 calls_out=14 calls_in=2
// strings: delimited length exceeded | FieldDescriptorProto | FieldDescriptorProto | FieldDescriptorProto | FieldDescriptorProto | FieldDescriptorProto

code * FUN_01a95cfc(char param_1,int *param_2,int *param_3,int param_4)

{
  uint uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  code *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint local_148 [15];
  undefined4 local_10c;
  int local_108 [15];
  char local_cc [4];
  undefined4 *******local_c8;
  code *local_c4;
  undefined4 *******local_c0;
  code *local_bc;
  undefined4 *******local_44;
  code *local_40;
  undefined4 *******local_38;
  code *local_34;
  undefined4 ******local_30;
  undefined4 local_2c;
  
  local_44 = (undefined4 *******)CONCAT31(local_44._1_3_,param_1);
  local_30 = (undefined4 ******)CONCAT31(local_30._1_3_,2);
  if (param_1 != '\x02') {
    local_c0 = &local_30;
    local_bc = FUN_01a924ac;
    local_c4 = FUN_01a924ac;
    local_c8 = &local_44;
    FUN_01a924e8(local_148,&local_c8);
    pcVar8 = (code *)FUN_01aa428c(local_148);
    return pcVar8;
  }
  local_108[9] = -0x80000000;
  local_108[6] = -0x80000000;
  local_108[3] = -0x80000000;
  local_148[4] = 0;
  local_148[2] = 0;
  local_148[0] = 0;
  local_108[0] = -0x80000000;
  local_108[0xc] = -0x80000000;
  local_148[6] = 0;
  local_cc[0] = '\x02';
  local_148[8] = 2;
  if (param_4 == 0) {
    uVar10 = 0x17;
    pcVar9 = "recursion limit reached";
  }
  else {
    iVar13 = *param_3;
    FUN_01a9d538(&local_c8,iVar13);
    if (local_c8 == (undefined4 *******)&DAT_00000001) {
LAB_01a95d84:
      pcVar8 = local_c4;
      goto LAB_01a96930;
    }
    if ((uint)-(int)local_bc < (uint)(local_c0 <= *(undefined4 ********)(iVar13 + 4))) {
      uVar4 = (int)*(undefined4 ********)(iVar13 + 4) - (int)local_c0;
      do {
        if (*(uint *)(iVar13 + 4) <= uVar4) {
          if (*(uint *)(iVar13 + 4) == uVar4) {
            FUN_01bed4e2(&local_c8,local_148,0x80);
            iVar13 = param_2[2];
            if (iVar13 == *param_2) {
              FUN_01aa1bf0(param_2);
            }
            FUN_01bed4e2(param_2[1] + iVar13 * 0x80,&local_c8,0x80);
            param_2[2] = iVar13 + 1;
            return (code *)0x0;
          }
          uVar10 = 0x19;
          pcVar9 = "delimited length exceeded";
          goto LAB_01a96a30;
        }
        FUN_01a9d538(&local_c8,iVar13);
        if (local_c8 == (undefined4 *******)&DAT_00000001) goto LAB_01a95d84;
        local_34 = local_bc;
        local_38 = local_c0;
        if (local_bc != (code *)0x0) {
          local_40 = FUN_012fd074;
          local_44 = &local_38;
          FUN_01a8da38(&local_c8,&DAT_00591421,&local_44);
          pcVar8 = (code *)FUN_01aa428c(&local_c8);
          goto LAB_01a96a68;
        }
        local_30 = (undefined4 ******)((uint)local_c0 & 7);
        bVar11 = false;
        local_2c = 0;
        bVar3 = 0;
        switch(local_30) {
        case (undefined4 ******)0x0:
          break;
        case (undefined4 ******)0x1:
          bVar3 = 1;
          break;
        case (undefined4 ******)0x2:
          bVar3 = 2;
          bVar11 = true;
          break;
        case (undefined4 ******)0x3:
          bVar3 = 3;
          break;
        case (undefined4 ******)0x4:
          bVar3 = 4;
          break;
        case (undefined4 ******)0x5:
          bVar3 = 5;
          break;
        default:
          local_40 = FUN_012fd074;
          local_44 = &local_30;
          FUN_01a8da38(&local_c8,&DAT_00596158,&local_44);
          pcVar8 = (code *)FUN_01aa428c(&local_c8);
          goto LAB_01a96a68;
        }
        uVar14 = (uint)local_c0 >> 3;
        if (uVar14 == 0) {
          pcVar8 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
          goto LAB_01a96a68;
        }
        switch(uVar14) {
        case 1:
          if (local_108[0] == -0x80000000) {
            local_108[2] = 0;
            local_108[1] = 1;
            local_108[0] = 0;
          }
          pcVar5 = (code *)FUN_01a9e23c(bVar3,local_108,param_3);
          pcVar8 = (code *)0x0;
          if (pcVar5 != (code *)0x0) {
            iVar13 = *(int *)(pcVar5 + 8);
            if (iVar13 == *(int *)pcVar5) {
              FUN_018fa978(pcVar5);
            }
            puVar6 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar13 * 0x10);
            *puVar6 = "FieldDescriptorProto";
            pcVar9 = &DAT_0056ee18;
            uVar10 = 4;
LAB_01a96734:
            puVar6[1] = 0x14;
            puVar6[2] = pcVar9;
            puVar6[3] = uVar10;
            *(int *)(pcVar5 + 8) = iVar13 + 1;
            pcVar8 = pcVar5;
            goto LAB_01a96930;
          }
          break;
        case 2:
          if (local_108[6] == -0x80000000) {
            local_108[8] = 0;
            local_108[7] = 1;
            local_108[6] = 0;
          }
          pcVar5 = (code *)FUN_01a9e23c(bVar3,local_108 + 6,param_3);
          pcVar8 = (code *)0x0;
          if (pcVar5 != (code *)0x0) {
            iVar13 = *(int *)(pcVar5 + 8);
            if (iVar13 == *(int *)pcVar5) {
              FUN_018fa978(pcVar5);
            }
            puVar6 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar13 * 0x10);
            *puVar6 = "FieldDescriptorProto";
            pcVar9 = &DAT_00570e38;
            uVar10 = 8;
            goto LAB_01a96734;
          }
          break;
        case 3:
          if ((local_148[0] & 1) == 0) {
            local_148[1] = 0;
            local_148[0] = 1;
          }
          pcVar5 = (code *)FUN_01a9dd84(bVar3,(uint)local_148 | 4,iVar13);
          pcVar8 = (code *)0x0;
          if (pcVar5 != (code *)0x0) {
            iVar13 = *(int *)(pcVar5 + 8);
            if (iVar13 == *(int *)pcVar5) {
              FUN_018fa978(pcVar5);
            }
            iVar7 = *(int *)(pcVar5 + 4);
            pcVar9 = "number";
LAB_01a965ac:
            puVar6 = (undefined4 *)(iVar7 + iVar13 * 0x10);
            *puVar6 = "FieldDescriptorProto";
            uVar10 = 6;
            goto LAB_01a96734;
          }
          break;
        case 4:
          if ((local_148[2] & 1) == 0) {
            local_148[3] = 0;
            local_148[2] = 1;
          }
          pcVar5 = (code *)FUN_01a9dd84(bVar3,local_148 + 3,iVar13);
          pcVar8 = (code *)0x0;
          if (pcVar5 != (code *)0x0) {
            iVar13 = *(int *)(pcVar5 + 8);
            if (iVar13 == *(int *)pcVar5) {
              FUN_018fa978(pcVar5);
            }
            puVar6 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar13 * 0x10);
            *puVar6 = "FieldDescriptorProto";
            pcVar9 = "label";
            uVar10 = 5;
            goto LAB_01a96734;
          }
          break;
        case 5:
          if ((local_148[4] & 1) == 0) {
            local_148[5] = 0;
            local_148[4] = 1;
          }
          pcVar5 = (code *)FUN_01a9dd84(bVar3,local_148 + 5,iVar13);
          pcVar8 = (code *)0x0;
          if (pcVar5 != (code *)0x0) {
            iVar13 = *(int *)(pcVar5 + 8);
            if (iVar13 == *(int *)pcVar5) {
              FUN_018fa978(pcVar5);
            }
            iVar7 = *(int *)(pcVar5 + 4);
            pcVar9 = "r#type";
            goto LAB_01a965ac;
          }
          break;
        case 6:
          if (local_108[3] == -0x80000000) {
            local_108[5] = 0;
            local_108[4] = 1;
            local_108[3] = 0;
          }
          pcVar5 = (code *)FUN_01a9e23c(bVar3,local_108 + 3,param_3);
          pcVar8 = (code *)0x0;
          if (pcVar5 != (code *)0x0) {
            iVar13 = *(int *)(pcVar5 + 8);
            if (iVar13 == *(int *)pcVar5) {
              FUN_018fa978(pcVar5);
            }
            iVar7 = *(int *)(pcVar5 + 4);
            pcVar9 = "type_name";
LAB_01a9672c:
            puVar6 = (undefined4 *)(iVar7 + iVar13 * 0x10);
            *puVar6 = "FieldDescriptorProto";
            uVar10 = 9;
            goto LAB_01a96734;
          }
          break;
        case 7:
          if (local_108[9] == -0x80000000) {
            local_108[0xb] = 0;
            local_108[10] = 1;
            local_108[9] = 0;
          }
          pcVar5 = (code *)FUN_01a9e23c(bVar3,local_108 + 9,param_3);
          pcVar8 = (code *)0x0;
          if (pcVar5 != (code *)0x0) {
            iVar13 = *(int *)(pcVar5 + 8);
            if (iVar13 == *(int *)pcVar5) {
              FUN_018fa978(pcVar5);
            }
            puVar6 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar13 * 0x10);
            *puVar6 = "FieldDescriptorProto";
            pcVar9 = "default_value";
            uVar10 = 0xd;
            goto LAB_01a96734;
          }
          break;
        case 8:
          if (local_148[8] == 2) {
            local_10c = 0x2020202;
            local_148[0xe] = 0;
            local_148[0xd] = 8;
            local_148[0xc] = 0;
            local_148[10] = 0;
            local_148[8] = 0;
          }
          local_30 = (undefined4 ******)(uint)bVar3;
          local_38 = (undefined4 *******)CONCAT31((int3)((uint)local_c0 >> 8),2);
          if (bVar11) {
            if (param_4 + -1 == 0) {
              uVar10 = 0x17;
              pcVar9 = "recursion limit reached";
LAB_01a96ac4:
              pcVar8 = (code *)FUN_01aa0da0(pcVar9,uVar10);
              goto LAB_01a96510;
            }
            FUN_01a9d538(&local_c8,iVar13);
            if (local_c8 != (undefined4 *******)&DAT_00000001) {
              if ((uint)-(int)local_bc < (uint)(local_c0 <= *(undefined4 ********)(iVar13 + 4))) {
                uVar14 = (int)*(undefined4 ********)(iVar13 + 4) - (int)local_c0;
                while (uVar14 < *(uint *)(iVar13 + 4)) {
                  FUN_01a9d538(&local_c8,iVar13);
                  if (local_c8 == (undefined4 *******)&DAT_00000001) goto LAB_01a964d8;
                  local_38 = local_c0;
                  local_34 = local_bc;
                  if (local_bc != (code *)0x0) {
                    local_40 = FUN_012fd074;
                    local_44 = &local_38;
                    FUN_01a8da38(&local_c8,&DAT_00591421,&local_44);
                    pcVar8 = (code *)FUN_01aa428c(&local_c8);
                    goto LAB_01a96510;
                  }
                  local_30 = (undefined4 ******)((uint)local_c0 & 7);
                  uVar12 = ((uint)local_c0 ^ 4) & 7;
                  local_2c = 0;
                  if ((0xf3U >> uVar12 & 1) == 0) {
                    local_40 = FUN_012fd074;
                    local_44 = &local_30;
                    FUN_01a8da38(&local_c8,&DAT_00596158,&local_44);
                    pcVar8 = (code *)FUN_01aa428c(&local_c8);
                    goto LAB_01a96510;
                  }
                  uVar1 = (uint)local_c0 >> 3;
                  if (uVar1 == 0) {
                    pcVar8 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
                    goto LAB_01a96510;
                  }
                  uVar2 = (&DAT_00571008)[uVar12];
                  switch(uVar1) {
                  case 1:
                    if ((local_148[8] & 1) == 0) {
                      local_148[9] = 0;
                      local_148[8] = 1;
                    }
                    pcVar5 = (code *)FUN_01a9dd84(uVar2,local_148 + 9,iVar13);
                    pcVar8 = (code *)0x0;
                    if (pcVar5 != (code *)0x0) {
                      iVar13 = *(int *)(pcVar5 + 8);
                      if (iVar13 == *(int *)pcVar5) {
                        FUN_018fa978(pcVar5);
                      }
                      puVar6 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar13 * 0x10);
                      *puVar6 = "FieldOptions";
                      pcVar9 = "ctypepacked";
                      uVar10 = 5;
LAB_01a968c8:
                      puVar6[1] = 0xc;
                      puVar6[2] = pcVar9;
                      puVar6[3] = uVar10;
                      *(int *)(pcVar5 + 8) = iVar13 + 1;
                      pcVar8 = pcVar5;
                      goto LAB_01a968e4;
                    }
                    break;
                  case 2:
                    if ((byte)local_10c == 2) {
                      local_10c = local_10c & 0xffffff00;
                    }
                    pcVar5 = (code *)FUN_01a9cbb8(uVar2,&local_10c,iVar13);
                    pcVar8 = (code *)0x0;
                    if (pcVar5 != (code *)0x0) {
                      iVar13 = *(int *)(pcVar5 + 8);
                      if (iVar13 == *(int *)pcVar5) {
                        FUN_018fa978(pcVar5);
                      }
                      iVar7 = *(int *)(pcVar5 + 4);
                      pcVar9 = "packed";
LAB_01a96820:
                      puVar6 = (undefined4 *)(iVar7 + iVar13 * 0x10);
                      *puVar6 = "FieldOptions";
                      uVar10 = 6;
                      goto LAB_01a968c8;
                    }
                    break;
                  case 3:
                    if (local_10c._2_1_ == '\x02') {
                      local_10c._0_3_ = (uint3)(ushort)local_10c;
                    }
                    pcVar5 = (code *)FUN_01a9cbb8(uVar2,(int)&local_10c + 2,iVar13);
                    pcVar8 = (code *)0x0;
                    if (pcVar5 != (code *)0x0) {
                      iVar13 = *(int *)(pcVar5 + 8);
                      if (iVar13 == *(int *)pcVar5) {
                        FUN_018fa978(pcVar5);
                      }
                      puVar6 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar13 * 0x10);
                      *puVar6 = "FieldOptions";
                      pcVar9 = "deprecated";
                      uVar10 = 10;
                      goto LAB_01a968c8;
                    }
                    break;
                  case 4:
                  case 7:
                  case 8:
                  case 9:
switchD_01a96240_caseD_4:
                    pcVar8 = (code *)FUN_01a9d744(uVar2,uVar1,param_3,param_4 + -2);
                    break;
                  case 5:
                    if (local_10c._1_1_ == '\x02') {
                      local_10c._0_2_ = (ushort)(byte)local_10c;
                    }
                    pcVar5 = (code *)FUN_01a9cbb8(uVar2,(int)&local_10c + 1,iVar13);
                    pcVar8 = (code *)0x0;
                    if (pcVar5 != (code *)0x0) {
                      iVar13 = *(int *)(pcVar5 + 8);
                      if (iVar13 == *(int *)pcVar5) {
                        FUN_018fa978(pcVar5);
                      }
                      iVar7 = *(int *)(pcVar5 + 4);
                      pcVar9 = &UNK_0056e2b8;
LAB_01a96888:
                      puVar6 = (undefined4 *)(iVar7 + iVar13 * 0x10);
                      *puVar6 = "FieldOptions";
                      uVar10 = 4;
                      goto LAB_01a968c8;
                    }
                    break;
                  case 6:
                    if ((local_148[10] & 1) == 0) {
                      local_148[0xb] = 0;
                      local_148[10] = 1;
                    }
                    pcVar5 = (code *)FUN_01a9dd84(uVar2,local_148 + 0xb,iVar13);
                    pcVar8 = (code *)0x0;
                    if (pcVar5 != (code *)0x0) {
                      iVar13 = *(int *)(pcVar5 + 8);
                      if (iVar13 == *(int *)pcVar5) {
                        FUN_018fa978(pcVar5);
                      }
                      iVar7 = *(int *)(pcVar5 + 4);
                      pcVar9 = "jstype";
                      goto LAB_01a96820;
                    }
                    break;
                  case 10:
                    if (local_10c._3_1_ == '\x02') {
                      local_10c = local_10c & 0xffffff;
                    }
                    pcVar5 = (code *)FUN_01a9cbb8(uVar2,(int)&local_10c + 3,iVar13);
                    pcVar8 = (code *)0x0;
                    if (pcVar5 != (code *)0x0) {
                      iVar13 = *(int *)(pcVar5 + 8);
                      if (iVar13 == *(int *)pcVar5) {
                        FUN_018fa978(pcVar5);
                      }
                      iVar7 = *(int *)(pcVar5 + 4);
                      pcVar9 = &DAT_0056d038;
                      goto LAB_01a96888;
                    }
                    break;
                  default:
                    if (uVar1 != 999) goto switchD_01a96240_caseD_4;
                    pcVar5 = (code *)FUN_01a949ec(uVar2,local_148 + 0xc,param_3,param_4 + -2);
                    pcVar8 = (code *)0x0;
                    if (pcVar5 != (code *)0x0) {
                      iVar13 = *(int *)(pcVar5 + 8);
                      if (iVar13 == *(int *)pcVar5) {
                        FUN_018fa978(pcVar5);
                      }
                      puVar6 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar13 * 0x10);
                      *puVar6 = "FieldOptions";
                      pcVar9 = "uninterpreted_option";
                      uVar10 = 0x14;
                      goto LAB_01a968c8;
                    }
                  }
                  if (pcVar8 != (code *)0x0) goto LAB_01a968e4;
                }
                pcVar8 = (code *)0x0;
                if (*(uint *)(iVar13 + 4) == uVar14) break;
                uVar10 = 0x19;
                pcVar9 = "delimited length exceeded";
              }
              else {
                uVar10 = 0x10;
                pcVar9 = "buffer underflow";
              }
              goto LAB_01a96ac4;
            }
LAB_01a964d8:
            pcVar8 = local_c4;
          }
          else {
            local_c0 = &local_38;
            local_bc = FUN_01a924ac;
            local_c4 = FUN_01a924ac;
            local_c8 = &local_30;
            FUN_01a924e8(&local_44,&local_c8);
            pcVar8 = (code *)FUN_01aa428c(&local_44);
LAB_01a96510:
          }
LAB_01a968e4:
          iVar13 = *(int *)(pcVar8 + 8);
          if (iVar13 == *(int *)pcVar8) {
            FUN_018fa978(pcVar8);
          }
          puVar6 = (undefined4 *)(*(int *)(pcVar8 + 4) + iVar13 * 0x10);
          *puVar6 = "FieldDescriptorProto";
          puVar6[1] = 0x14;
          puVar6[2] = "options";
          puVar6[3] = 7;
          *(int *)(pcVar8 + 8) = iVar13 + 1;
          goto LAB_01a96930;
        case 9:
          if ((local_148[6] & 1) == 0) {
            local_148[7] = 0;
            local_148[6] = 1;
          }
          pcVar5 = (code *)FUN_01a9dd84(bVar3,local_148 + 7,iVar13);
          pcVar8 = (code *)0x0;
          if (pcVar5 != (code *)0x0) {
            iVar13 = *(int *)(pcVar5 + 8);
            if (iVar13 == *(int *)pcVar5) {
              FUN_018fa978(pcVar5);
            }
            puVar6 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar13 * 0x10);
            *puVar6 = "FieldDescriptorProto";
            pcVar9 = "oneof_index";
            uVar10 = 0xb;
            goto LAB_01a96734;
          }
          break;
        case 10:
          if (local_108[0xc] == -0x80000000) {
            local_108[0xe] = 0;
            local_108[0xd] = 1;
            local_108[0xc] = 0;
          }
          pcVar5 = (code *)FUN_01a9e23c(bVar3,local_108 + 0xc,param_3);
          pcVar8 = (code *)0x0;
          if (pcVar5 != (code *)0x0) {
            iVar13 = *(int *)(pcVar5 + 8);
            if (iVar13 == *(int *)pcVar5) {
              FUN_018fa978(pcVar5);
            }
            iVar7 = *(int *)(pcVar5 + 4);
            pcVar9 = "json_name";
            goto LAB_01a9672c;
          }
          break;
        default:
          pcVar8 = (code *)FUN_01a9d744(bVar3,uVar14,param_3,param_4 + -1);
          break;
        case 0x11:
          if (local_cc[0] == '\x02') {
            local_cc[0] = '\0';
          }
          pcVar5 = (code *)FUN_01a9cbb8(bVar3,local_cc,iVar13);
          pcVar8 = (code *)0x0;
          if (pcVar5 != (code *)0x0) {
            iVar13 = *(int *)(pcVar5 + 8);
            if (iVar13 == *(int *)pcVar5) {
              FUN_018fa978(pcVar5);
            }
            puVar6 = (undefined4 *)(*(int *)(pcVar5 + 4) + iVar13 * 0x10);
            *puVar6 = "FieldDescriptorProto";
            pcVar9 = "proto3_optional";
            uVar10 = 0xf;
            goto LAB_01a96734;
          }
        }
      } while (pcVar8 == (code *)0x0);
      goto LAB_01a96930;
    }
    uVar10 = 0x10;
    pcVar9 = "buffer underflow";
  }
LAB_01a96a30:
  pcVar8 = (code *)FUN_01aa0da0(pcVar9,uVar10);
LAB_01a96a68:
LAB_01a96930:
  FUN_01a96c48(local_148);
  return pcVar8;
}

