// FUN_0127c78c @ 0127c78c size=2224 calls_out=19 calls_in=1
// strings: api_usage | devfee_diagnostics | tuner | devfee_health | tuner | devfee_health

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0127c78c(undefined4 *param_1,char *param_2)

{
  char **ppcVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char **ppcVar5;
  char **ppcVar6;
  uint uVar7;
  char **ppcVar8;
  char cVar9;
  char **unaff_r9;
  char **local_a4;
  char **local_a0;
  uint local_94;
  char **local_90;
  char **local_8c;
  uint local_88;
  char **local_80;
  char **local_7c;
  int local_74;
  uint local_70;
  undefined1 local_69;
  undefined3 uStack_68;
  char *local_64;
  undefined3 uStack_60;
  char *local_5c;
  undefined1 local_58;
  undefined2 uStack_57;
  char *local_54;
  undefined3 uStack_50;
  char *local_4c [2];
  undefined4 local_44;
  char **local_40;
  int local_3c;
  char local_38;
  char *local_37;
  undefined3 uStack_33;
  char *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  ppcVar5 = *(char ***)(param_2 + 0x10);
  ppcVar6 = *(char ***)(param_2 + 0x14);
  if (ppcVar6 < ppcVar5) {
    do {
      uVar7 = *(byte *)(*(int *)(param_2 + 0xc) + (int)ppcVar6) - 9;
      if ((0x17 < uVar7) || ((1 << (uVar7 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)(*(int *)(param_2 + 0xc) + (int)ppcVar6) == 0x6e) {
          *(undefined1 **)(param_2 + 0x14) = (undefined1 *)((int)ppcVar6 + 1);
          iVar3 = FUN_012c6b8c(param_2,"ull",3);
          if (iVar3 == 0) {
            *param_1 = 2;
            return;
          }
          *param_1 = 3;
          param_1[1] = iVar3;
          return;
        }
        goto LAB_0127c7f4;
      }
      ppcVar6 = (char **)((int)ppcVar6 + 1);
      *(char ***)(param_2 + 0x14) = ppcVar6;
    } while (ppcVar5 != ppcVar6);
  }
  else {
LAB_0127c7f4:
    if (ppcVar6 < ppcVar5) {
      ppcVar8 = (char **)&DAT_00000001;
      do {
        uVar7 = (uint)*(byte *)(*(uint *)(param_2 + 0xc) + (int)ppcVar6);
        if ((0x17 < uVar7 - 9) || ((1 << (uVar7 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar7 == 0x5b) {
            cVar9 = param_2[0x1c];
            param_2[0x1c] = cVar9 + -1;
            if ((char)(cVar9 + -1) != '\0') {
              *(undefined1 **)(param_2 + 0x14) = (undefined1 *)((int)ppcVar6 + 1);
              local_2c = CONCAT31(local_2c._1_3_,1);
              local_30 = param_2;
              FUN_014db6fc(&local_44,&local_30);
              if ((char)local_44 == '\x01') {
LAB_0127cbb0:
                ppcVar5 = (char **)0x2;
                local_88._0_1_ = 0;
                cVar9 = '\0';
                local_a4 = local_40;
              }
              else if (local_44._1_1_ == '\x01') {
                FUN_0127c278(&local_44,local_30);
                if ((char)local_44 == '\x01') goto LAB_0127cbb0;
                local_70._0_1_ = (undefined1)((uint)local_44 >> 0x10);
                local_88._0_1_ = local_44._1_1_;
                FUN_014db6fc(&local_44,&local_30);
                ppcVar6 = unaff_r9;
                if ((char)local_44 == '\x01') goto LAB_0127cc28;
                if (local_44._1_1_ == '\x01') {
                  FUN_0127b6d8(&local_44,local_30);
                  ppcVar6 = local_40;
                  ppcVar1 = local_44;
                  local_a4 = local_44;
                  if (local_38 != '\x03') {
                    local_74 = local_3c;
                    local_54 = local_37;
                    local_5c = local_37;
                    local_58 = (undefined1)uStack_33;
                    uStack_57 = (undefined2)((uint3)uStack_33 >> 8);
                    FUN_014db6fc(&local_44,&local_30);
                    if ((char)local_44 == '\x01') {
LAB_0127cc28:
                      local_a4 = local_40;
                      unaff_r9 = ppcVar6;
                    }
                    else {
                      unaff_r9 = ppcVar6;
                      if (local_44._1_1_ == '\x01') {
                        FUN_0127bdc0(&local_44,local_30);
                        local_a4 = local_40;
                        ppcVar5 = local_44;
                        if (local_44 == (char **)0x2) goto LAB_0127cc28;
                        FUN_014db6fc(&local_44,&local_30);
                        if ((char)local_44 == '\x01') {
LAB_0127cda4:
                          local_a4 = local_40;
LAB_0127cda8:
                          ppcVar5 = (char **)0x2;
                          cVar9 = '\0';
                        }
                        else {
                          if (local_44._1_1_ != '\x01') {
                            local_a4 = (char **)FUN_014dee0c(3,&DAT_01c257d0,&DAT_01d064b8);
                            goto LAB_0127cda8;
                          }
                          FUN_0127d9f8(&local_44,local_30);
                          if (local_44 == (char **)0x2) goto LAB_0127cda4;
                          local_7c = local_44;
                          uStack_60 = CONCAT21(uStack_57,local_58);
                          local_80 = local_40;
                          cVar9 = local_38;
                        }
                        ppcVar8 = ppcVar1;
                        goto LAB_0127cc90;
                      }
                      local_a4 = (char **)FUN_014dee0c(2,&DAT_01c257d0,&DAT_01d064b8);
                    }
                  }
                }
                else {
                  local_58 = (undefined1)uStack_50;
                  uStack_57 = (undefined2)((uint3)uStack_50 >> 8);
                  local_5c = local_54;
                  local_a4 = (char **)FUN_014dee0c(1,&DAT_01c257d0,&DAT_01d064b8);
                }
                ppcVar5 = (char **)0x2;
                cVar9 = '\0';
              }
              else {
                cVar9 = '\0';
                local_a4 = (char **)FUN_014dee0c(0,&DAT_01c257d0,&DAT_01d064b8);
                ppcVar5 = (char **)0x2;
                local_88._0_1_ = 3;
              }
LAB_0127cc90:
              param_2[0x1c] = param_2[0x1c] + '\x01';
              ppcVar6 = (char **)FUN_014d9568(param_2);
              if (ppcVar5 == (char **)0x2) goto LAB_0127cf18;
              if (ppcVar6 != (char **)0x0) goto LAB_0127cf24;
              ppcVar6 = &local_64;
              goto LAB_0127cec0;
            }
          }
          else {
            if (uVar7 != 0x7b) {
              ppcVar6 = (char **)FUN_012c7788(param_2,&uStack_25,&DAT_01c25890);
              goto LAB_0127cf24;
            }
            cVar9 = param_2[0x1c];
            param_2[0x1c] = cVar9 + -1;
            if ((char)(cVar9 + -1) != '\0') {
              *(undefined1 **)(param_2 + 0x14) = (undefined1 *)((int)ppcVar6 + 1);
              local_58 = 1;
              local_7c = (char **)0x2;
              local_90 = (char **)0x2;
              local_94 = 3;
              local_8c = (char **)0x2;
              local_88 = 3;
              local_70 = *(uint *)(param_2 + 0xc);
              unaff_r9 = ppcVar5;
              local_5c = param_2;
              cVar9 = '\x03';
              goto LAB_0127c8e4;
            }
          }
          local_44 = (char **)0x18;
          goto LAB_0127c830;
        }
        ppcVar6 = (char **)((int)ppcVar6 + 1);
        *(char ***)(param_2 + 0x14) = ppcVar6;
      } while (ppcVar5 != ppcVar6);
    }
  }
  local_44 = (char **)0x5;
LAB_0127c830:
  uVar2 = FUN_012c6b30(param_2,&local_44);
  goto LAB_0127c840;
LAB_0127c8e4:
  FUN_01278730(&local_44,&local_5c);
  if ((char)local_44 == '\x01') {
LAB_0127ce7c:
    ppcVar5 = local_40;
    goto LAB_0127ce88;
  }
  if (local_44._1_1_ != '\x01') {
    if (local_88 == 3) {
      local_88._0_1_ = 2;
    }
    if (cVar9 == '\x03') {
      cVar9 = '\x02';
    }
    else {
      local_4c[0] = local_54;
    }
    ppcVar6 = (char **)0x0;
    if (local_7c != (char **)0x2) {
      ppcVar6 = local_7c;
    }
    ppcVar5 = (char **)0x0;
    local_7c = ppcVar6;
    if (local_8c != (char **)0x2) {
      ppcVar5 = local_8c;
    }
    goto LAB_0127ce8c;
  }
  iVar3 = *(int *)(local_5c + 0x14);
  local_5c[8] = '\0';
  local_5c[9] = '\0';
  local_5c[10] = '\0';
  local_5c[0xb] = '\0';
  *(int *)(local_5c + 0x14) = iVar3 + 1;
  FUN_01968828(&local_44,local_5c + 0xc);
  ppcVar5 = local_40;
  if (local_44 == (char **)0x2) goto LAB_0127cc58;
  if (local_3c < 0xd) {
    if (local_3c == 5) {
      iVar3 = thunk_FUN_01bed842(local_40,"tuner",5);
      pcVar4 = local_5c;
      if (iVar3 == 0) {
        if (local_94 != 3) {
          local_2c = 5;
          local_30 = "tuner";
          goto LAB_0127d020;
        }
        ppcVar5 = (char **)FUN_0167459c(local_5c);
        if (ppcVar5 != (char **)0x0) {
          local_40 = ppcVar5;
          goto LAB_0127ce7c;
        }
        FUN_0127c278(&local_44,pcVar4);
        if ((char)local_44 == '\0') {
          local_94 = (uint)local_44 >> 8 & 0xff;
          local_70 = (uint)local_44 >> 0x10 & 0xff;
          local_88 = local_94;
          goto LAB_0127c8e4;
        }
        goto LAB_0127ce7c;
      }
    }
    else if (local_3c == 9) {
      iVar3 = thunk_FUN_01bed842(local_40,"api_usage",9);
      pcVar4 = local_5c;
      if (iVar3 == 0) {
        if (cVar9 != '\x03') {
          local_2c = 9;
          local_30 = "api_usage";
          goto LAB_0127d020;
        }
        ppcVar5 = (char **)FUN_0167459c(local_5c);
        if (ppcVar5 == (char **)0x0) {
          FUN_0127b6d8(&local_44,pcVar4);
          ppcVar5 = local_44;
          if (local_38 == '\x03') goto LAB_0127ce5c;
          local_74 = local_3c;
          local_a0 = local_44;
          local_54 = local_37;
          unaff_r9 = local_40;
          cVar9 = local_38;
          goto LAB_0127c8e4;
        }
        local_44 = ppcVar5;
        goto LAB_0127ce5c;
      }
    }
  }
  else if (local_3c == 0xd) {
    iVar3 = thunk_FUN_01bed842(local_40,"devfee_health",0xd);
    pcVar4 = local_5c;
    if (iVar3 == 0) {
      if (local_90 == (char **)0x2) {
        local_a4 = (char **)FUN_0167459c(local_5c);
        if (local_a4 != (char **)0x0) {
          cVar9 = '\0';
          local_88._0_1_ = 0;
          ppcVar5 = (char **)0x2;
          goto LAB_0127ce8c;
        }
        FUN_0127bdc0(&local_44,pcVar4);
        local_a4 = local_40;
        if (local_44 == (char **)0x2) {
          cVar9 = '\0';
          local_88._0_1_ = 0;
          ppcVar5 = (char **)0x2;
          goto LAB_0127ce8c;
        }
        local_90 = local_44;
        local_8c = local_44;
        goto LAB_0127c8e4;
      }
      local_2c = 0xd;
      local_30 = "devfee_health";
LAB_0127d020:
      local_40 = (char **)&LAB_018a13b8;
      local_44 = &local_30;
      ppcVar5 = (char **)FUN_019676ac(&DAT_005ab34f,&local_44);
LAB_0127ce5c:
      goto LAB_0127ce88;
    }
  }
  else if (local_3c == 0x12) {
    iVar3 = thunk_FUN_01bed842(local_40,"devfee_diagnostics",0x12);
    pcVar4 = local_5c;
    if (iVar3 == 0) {
      if (local_7c != (char **)0x2) {
        local_2c = 0x12;
        local_30 = "devfee_diagnostics";
        goto LAB_0127d020;
      }
      ppcVar5 = (char **)FUN_0167459c(local_5c);
      if (ppcVar5 != (char **)0x0) goto LAB_0127cc58;
      FUN_0127d9f8(&local_44,pcVar4);
      local_80 = local_40;
      if (local_44 == (char **)0x2) {
        ppcVar5 = local_40;
        goto LAB_0127ce88;
      }
      local_7c = local_44;
      goto LAB_0127c8e4;
    }
  }
  pcVar4 = local_5c;
  ppcVar5 = (char **)FUN_0167459c(local_5c);
  if ((ppcVar5 != (char **)0x0) ||
     (ppcVar5 = (char **)FUN_012c6c4c(pcVar4), ppcVar5 != (char **)0x0)) goto LAB_0127cc58;
  goto LAB_0127c8e4;
LAB_0127cc58:
LAB_0127ce88:
  cVar9 = '\0';
  local_88._0_1_ = 0;
  local_a4 = ppcVar5;
  ppcVar5 = (char **)0x2;
LAB_0127ce8c:
  param_2[0x1c] = param_2[0x1c] + '\x01';
  ppcVar6 = (char **)FUN_012c7b64(param_2);
  if (ppcVar5 == (char **)0x2) {
LAB_0127cf18:
    if (ppcVar6 != (char **)0x0) {
      FUN_01278260();
    }
    ppcVar6 = local_a4;
  }
  else if (ppcVar6 == (char **)0x0) {
    ppcVar6 = local_4c;
    ppcVar8 = local_a0;
LAB_0127cec0:
    pcVar4 = *ppcVar6;
    uStack_68 = (undefined3)((uint)*(undefined4 *)((int)ppcVar6 + 3) >> 8);
    *(char **)((int)param_1 + 0x1d) = pcVar4;
    *(undefined1 *)((int)param_1 + 0x25) = (undefined1)local_70;
    local_69 = (undefined1)((uint)pcVar4 >> 0x18);
    param_1[2] = local_7c;
    param_1[8] = CONCAT31(uStack_68,local_69);
    *(undefined1 *)(param_1 + 9) = (undefined1)local_88;
    *(char *)(param_1 + 7) = cVar9;
    *param_1 = ppcVar5;
    param_1[1] = local_a4;
    param_1[3] = local_80;
    param_1[4] = ppcVar8;
    param_1[5] = unaff_r9;
    param_1[6] = local_74;
    return;
  }
LAB_0127cf24:
  uVar2 = FUN_0127dee8(ppcVar6,param_2);
LAB_0127c840:
  *param_1 = 3;
  param_1[1] = uVar2;
  return;
}

