// FUN_00f54894 @ 00f54894 size=2216 calls_out=16 calls_in=1
// strings: cgminer | graphqlstruct RawPoolReconnectBackoffConfig | general_http | grpch! | general_http | cgminer

void FUN_00f54894(undefined1 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  char *local_40;
  undefined1 local_3c;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  
  uVar9 = *(uint *)(param_2 + 0x14);
  if (uVar9 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar11 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar9);
      if ((0x17 < uVar11 - 9) || ((1 << (uVar11 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar11 == 0x5b) {
          cVar1 = param_2[0x1c];
          param_2[0x1c] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar9 + 1;
            uVar9 = 0;
            bVar2 = true;
            local_28 = CONCAT31(local_28._1_3_,1);
            local_2c = param_2;
            FUN_00f4df24(&local_38,&local_2c);
            if ((char)local_38 == '\x01') {
              piVar5 = local_34;
            }
            else {
              uVar9 = 2;
              if (local_38._1_1_ == '\x01') {
                FUN_00f58704(&local_38,local_2c);
                if ((char)local_38 != '\x01') {
                  uVar9 = (uint)local_38 >> 8 & 0xff;
                  goto LAB_00f54d00;
                }
              }
              else {
LAB_00f54d00:
                FUN_00f4df24(&local_38,&local_2c);
                if ((char)local_38 != '\x01') {
                  uVar11 = 2;
                  if (local_38._1_1_ == '\x01') {
                    FUN_00f58704(&local_38,local_2c);
                    if ((char)local_38 == '\x01') goto LAB_00f54e6c;
                    uVar11 = (uint)local_38 >> 8 & 0xff;
                  }
                  FUN_00f4df24(&local_38,&local_2c);
                  if ((char)local_38 != '\x01') {
                    bVar12 = 2;
                    if (local_38._1_1_ == '\x01') {
                      FUN_00f58704(&local_38,local_2c);
                      if ((char)local_38 == '\x01') goto LAB_00f54e6c;
                      bVar12 = local_38._1_1_;
                    }
                    FUN_00f4df24(&local_38,&local_2c);
                    if ((char)local_38 != '\x01') {
                      uVar7 = 2;
                      if (local_38._1_1_ == '\x01') {
                        FUN_00f58704(&local_38,local_2c);
                        if ((char)local_38 == '\x01') goto LAB_00f54e6c;
                        uVar7 = (uint)local_38 >> 8 & 0xff;
                      }
                      FUN_00f4df24(&local_38,&local_2c);
                      if ((char)local_38 != '\x01') {
                        uVar10 = 2;
                        if (local_38._1_1_ == '\x01') {
                          FUN_00f58704(&local_38,local_2c);
                          if ((char)local_38 == '\x01') goto LAB_00f54e6c;
                          uVar10 = (uint)local_38 >> 8 & 0xff;
                        }
                        FUN_00f4df24(&local_38,&local_2c);
                        if ((char)local_38 != '\x01') {
                          uVar13 = 2;
                          if (local_38._1_1_ == '\x01') {
                            FUN_00f58704(&local_38,local_2c);
                            if ((char)local_38 == '\x01') goto LAB_00f54e6c;
                            uVar13 = (uint)local_38 >> 8 & 0xff;
                          }
                          FUN_00f4efb0(&local_38,&local_2c);
                          if ((char)local_38 != '\x01') {
                            if (uVar11 == 2) {
                              uVar11 = 1;
                            }
                            if (uVar9 == 2) {
                              uVar9 = 1;
                            }
                            if (bVar12 == 2) {
                              bVar12 = 1;
                            }
                            if (uVar10 == 2) {
                              uVar10 = 1;
                            }
                            if (uVar7 == 2) {
                              uVar7 = 1;
                            }
                            bVar2 = false;
                            uVar9 = uVar11 << 0x10 | uVar9 << 8 | (uint)bVar12 << 0x18;
                            if (uVar13 == 2) {
                              uVar13 = 1;
                            }
                            bVar12 = local_38._1_1_;
                            if (local_38._1_1_ == 2) {
                              bVar12 = 1;
                            }
                            piVar5 = (int *)(uVar7 | uVar10 << 8 | uVar13 << 0x10 |
                                            (uint)bVar12 << 0x18);
                            goto LAB_00f54e74;
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_00f54e6c:
              uVar9 = 0;
              bVar2 = true;
              piVar5 = local_34;
            }
LAB_00f54e74:
            param_2[0x1c] = param_2[0x1c] + '\x01';
            piVar8 = (int *)FUN_00f4cc54(param_2);
            if (!bVar2) goto LAB_00f550f8;
            if (piVar8 == (int *)0x0) goto LAB_00f5513c;
            FUN_005c3974();
            goto LAB_00f55134;
          }
        }
        else {
          if (uVar11 != 0x7b) {
            piVar8 = (int *)FUN_00f4db6c(param_2,&local_38,&DAT_0187f2c8);
            goto LAB_00f55140;
          }
          cVar1 = param_2[0x1c];
          param_2[0x1c] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar9 + 1;
            local_3c = 1;
            uVar11 = 2;
            uVar9 = 2;
            local_4c = 2;
            local_54 = 2;
            local_50 = 2;
            local_58 = 2;
            local_48 = 2;
            local_40 = param_2;
            goto LAB_00f54994;
          }
        }
        local_38 = (char **)0x18;
        goto LAB_00f548ec;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar9;
    } while (*(uint *)(param_2 + 0x10) != uVar9);
  }
  local_38 = (char **)0x5;
LAB_00f548ec:
  uVar4 = FUN_01143ab8(param_2,&local_38);
  goto LAB_00f55148;
LAB_00f54994:
  FUN_00f4d74c(&local_38,&local_40);
  pcVar3 = local_40;
  if ((char)local_38 == '\x01') goto LAB_00f54ea4;
  if (local_38._1_1_ != '\x01') {
    uVar7 = (uint)(local_4c == 2) | local_4c & 1;
    uVar10 = uVar7 | (uVar9 & 1) << 8;
    if (uVar9 == 2) {
      uVar10 = uVar7 | 0x100;
    }
    piVar8 = (int *)(uVar10 | (local_54 & 1) << 0x10);
    if (local_54 == 2) {
      piVar8 = (int *)(uVar10 | 0x10000);
    }
    piVar5 = piVar8;
    if ((local_58 & 1) != 0) {
      piVar5 = (int *)((uint)piVar8 | 0x1000000);
    }
    if (local_58 == 2) {
      piVar5 = (int *)((uint)piVar8 | 0x1000000);
    }
    uVar9 = 0;
    if ((local_50 & 1) != 0) {
      uVar9 = 0x1000000;
    }
    if (local_50 == 2) {
      uVar9 = 0x1000000;
    }
    uVar7 = uVar9 | (local_48 & 1) << 0x10;
    if (local_48 == 2) {
      uVar7 = uVar9 | 0x10000;
    }
    uVar9 = uVar7 | (uVar11 & 1) << 8;
    if (uVar11 == 2) {
      uVar9 = uVar7 | 0x100;
    }
    bVar2 = false;
    goto LAB_00f550dc;
  }
  iVar6 = *(int *)(local_40 + 0x14);
  local_40[8] = '\0';
  local_40[9] = '\0';
  local_40[10] = '\0';
  local_40[0xb] = '\0';
  *(int *)(local_40 + 0x14) = iVar6 + 1;
  FUN_0157e5fc(&local_38,local_40 + 0xc,local_40);
  piVar5 = local_34;
  if (local_38 == (char **)&SUB_00000002) goto LAB_00f550d8;
  switch(local_30) {
  case 4:
    if (*local_34 == 0x63707267) {
      if (local_4c == 2) {
        piVar5 = (int *)FUN_00f4d8b4(pcVar3);
        if (piVar5 != (int *)0x0) goto LAB_00f550d4;
        FUN_00f58704(&local_38,pcVar3);
        if ((char)local_38 == '\x01') {
LAB_00f54ea4:
          piVar5 = local_34;
          goto LAB_00f550d8;
        }
        local_4c = (uint)local_38 >> 8 & 0xff;
        goto LAB_00f54994;
      }
      local_2c = "grpch!";
    }
    else if (*local_34 == 0x6963756c) {
      if (local_54 == 2) {
        piVar5 = (int *)FUN_00f4d8b4(pcVar3);
        if (piVar5 != (int *)0x0) goto LAB_00f550d4;
        FUN_00f58704(&local_38,pcVar3);
        if ((char)local_38 == '\x01') goto LAB_00f54ea4;
        local_54 = (uint)local_38 >> 8 & 0xff;
        goto LAB_00f54994;
      }
      local_2c = "luci\x15\x04";
    }
    else {
      if (*local_34 != 0x74736572) goto switchD_00f54a04_caseD_5;
      if (local_58 == 2) {
        piVar5 = (int *)FUN_00f4d8b4(pcVar3);
        if (piVar5 != (int *)0x0) goto LAB_00f550d4;
        FUN_00f58704(&local_38,pcVar3);
        if ((char)local_38 == '\x01') goto LAB_00f54ea4;
        local_58 = (uint)local_38 >> 8 & 0xff;
        goto LAB_00f54994;
      }
      local_2c = &DAT_00568ecc;
    }
    local_28 = 4;
    break;
  default:
    goto switchD_00f54a04_caseD_5;
  case 7:
    iVar6 = thunk_FUN_016dd50a(local_34,"cgminer",7);
    if (iVar6 == 0) {
      if (uVar11 == 2) {
        piVar5 = (int *)FUN_00f4d8b4(pcVar3);
        if (piVar5 != (int *)0x0) goto LAB_00f550d4;
        FUN_00f58704(&local_38,pcVar3);
        if ((char)local_38 == '\x01') goto LAB_00f54ea4;
        uVar11 = (uint)local_38 >> 8 & 0xff;
        goto LAB_00f54994;
      }
      local_28 = 7;
      local_2c = "cgminer";
    }
    else {
      iVar6 = thunk_FUN_016dd50a(piVar5,"graphqlstruct RawPoolReconnectBackoffConfig",7);
      if (iVar6 != 0) goto switchD_00f54a04_caseD_5;
      if (local_50 == 2) {
        piVar5 = (int *)FUN_00f4d8b4(pcVar3);
        if (piVar5 != (int *)0x0) goto LAB_00f550d4;
        FUN_00f58704(&local_38,pcVar3);
        if ((char)local_38 == '\x01') goto LAB_00f54ea4;
        local_50 = (uint)local_38 >> 8 & 0xff;
        goto LAB_00f54994;
      }
      local_28 = 7;
      local_2c = "graphqlstruct RawPoolReconnectBackoffConfig";
    }
    break;
  case 8:
    iVar6 = thunk_FUN_016dd50a(local_34,&DAT_005699d8,8);
    if (iVar6 != 0) goto switchD_00f54a04_caseD_5;
    if (uVar9 == 2) {
      piVar5 = (int *)FUN_00f4d8b4(pcVar3);
      if (piVar5 != (int *)0x0) goto LAB_00f550d4;
      FUN_00f58704(&local_38,pcVar3);
      if ((char)local_38 == '\x01') goto LAB_00f54ea4;
      uVar9 = (uint)local_38 >> 8 & 0xff;
      goto LAB_00f54994;
    }
    local_28 = 8;
    local_2c = "grpc_weba\x1e";
    break;
  case 0xc:
    iVar6 = thunk_FUN_016dd50a(local_34,"general_http",0xc);
    if (iVar6 != 0) goto switchD_00f54a04_caseD_5;
    if (local_48 == 2) {
      piVar5 = (int *)FUN_00f4d8b4(pcVar3);
      if (piVar5 != (int *)0x0) goto LAB_00f550d4;
      FUN_00f58704(&local_38,pcVar3);
      if ((char)local_38 == '\x01') goto LAB_00f54ea4;
      local_48 = (uint)local_38 >> 8 & 0xff;
      goto LAB_00f54994;
    }
    local_28 = 0xc;
    local_2c = "general_http";
  }
  local_34 = &DAT_0157d360;
  local_38 = &local_2c;
  piVar5 = (int *)FUN_00f56780(&DAT_00582dbd,&local_38);
  goto LAB_00f550d4;
switchD_00f54a04_caseD_5:
  piVar5 = (int *)FUN_00f4e360(pcVar3);
  if (piVar5 != (int *)0x0) goto LAB_00f550d4;
  goto LAB_00f54994;
LAB_00f550d4:
LAB_00f550d8:
  uVar9 = 0;
  bVar2 = true;
LAB_00f550dc:
  param_2[0x1c] = param_2[0x1c] + '\x01';
  piVar8 = (int *)FUN_00f4cfec(param_2);
  if (bVar2) {
    if (piVar8 != (int *)0x0) {
      FUN_005c3974();
LAB_00f55134:
      thunk_FUN_016d3fb4(piVar8);
    }
LAB_00f5513c:
    piVar8 = piVar5;
  }
  else {
LAB_00f550f8:
    if (piVar8 == (int *)0x0) {
      param_1[3] = (char)(uVar9 >> 0x18);
      *(short *)(param_1 + 1) = (short)(uVar9 >> 8);
      *param_1 = 0;
      *(int **)(param_1 + 4) = piVar5;
      return;
    }
  }
LAB_00f55140:
  uVar4 = FUN_011257e4(piVar8,param_2);
LAB_00f55148:
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = uVar4;
  return;
}

