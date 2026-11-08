// FUN_00fe5ad0 @ 00fe5ad0 size=836 calls_out=10 calls_in=1
// strings: 

void FUN_00fe5ad0(undefined1 *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  char local_40;
  char local_3f;
  char local_3e;
  int local_3c;
  char local_38;
  char local_37;
  char local_36;
  int local_34;
  char local_30;
  char local_2f;
  char local_2e;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined1 uStack_19;
  
  FUN_012c3960(&local_40);
  if (local_40 == '\x01') {
LAB_00fe5b58:
    *(int *)(param_1 + 4) = local_3c;
  }
  else {
    bVar6 = local_3f == '\x01';
    if (bVar6) {
      local_3f = local_3e;
    }
    if (bVar6 && local_3f == 'n') {
      FUN_012c6160(param_2 + 0xc);
      local_3c = FUN_012c3a60(param_2,"ull",3);
      if (local_3c == 0) {
        param_1[1] = 3;
LAB_00fe5bc4:
        uVar2 = 0;
        goto LAB_00fe5cf8;
      }
      goto LAB_00fe5b58;
    }
    FUN_012c3960(&local_38,param_2);
    if (local_38 != '\x01') {
      if (local_37 == '\x01') {
        if (local_36 == '\"') {
          FUN_012c3960(&local_30,param_2);
          if (local_30 == '\x01') {
LAB_00fe5be4:
            local_34 = local_2c;
          }
          else {
            if (local_2f != '\x01') goto LAB_00fe5d4c;
            if (local_2e == '\"') {
              FUN_012c6160(param_2 + 0xc);
              *(undefined4 *)(param_2 + 8) = 0;
              FUN_012c6380(&local_28,param_2 + 0xc,param_2);
              local_34 = local_24;
              if (local_28 == 2) goto LAB_00fe5cf0;
              FUN_00ea78f0(&local_30,local_24,local_20);
              if (local_30 != '\x01') {
LAB_00fe5c54:
                param_1[1] = local_2f;
                goto LAB_00fe5bc4;
              }
            }
            else {
              local_2c = FUN_012c4a28(param_2,&uStack_19,&DAT_01c1cbc8);
            }
            local_34 = FUN_012c6694(local_2c,*(undefined4 *)(param_2 + 0x30),
                                    *(undefined4 *)(param_2 + 0x34));
          }
          goto LAB_00fe5cf0;
        }
        if (local_36 == '{') {
          cVar1 = *(char *)(param_2 + 0x40) + -1;
          *(char *)(param_2 + 0x40) = cVar1;
          if (cVar1 != '\0') {
            iVar5 = param_2 + 0xc;
            FUN_012c6160(iVar5);
            FUN_012c3960(&local_30,param_2);
            if (local_30 == '\x01') {
              local_34 = local_2c;
            }
            else {
              if (local_2f == '\x01') {
                if (local_2e == '\"') {
                  FUN_012c6160(iVar5);
                  *(undefined4 *)(param_2 + 8) = 0;
                  FUN_012c6380(&local_28,iVar5,param_2);
                  if (local_28 != 2) {
                    FUN_00ea78f0(&local_30,local_24,local_20);
                    cVar1 = local_2f;
                    if (local_30 != '\x01') {
                      local_34 = FUN_012c4d2c(param_2);
                      if ((local_34 == 0) && (local_34 = FUN_00fd88c4(param_2), local_34 == 0)) {
                        *(char *)(param_2 + 0x40) = *(char *)(param_2 + 0x40) + '\x01';
                        FUN_012c3960(&local_30,param_2);
                        if (local_30 == '\x01') goto LAB_00fe5be4;
                        if (local_2f == '\x01') {
                          if (local_2e == '}') {
                            FUN_012c6160(iVar5);
                            local_2f = cVar1;
                            goto LAB_00fe5c54;
                          }
                          goto LAB_00fe5d58;
                        }
                        uVar3 = *(undefined4 *)(param_2 + 0x30);
                        uVar4 = *(undefined4 *)(param_2 + 0x34);
                        local_28 = 3;
                        goto LAB_00fe5d6c;
                      }
                      goto LAB_00fe5ce4;
                    }
                    local_24 = local_2c;
                  }
                  local_34 = FUN_012c6694(local_24,*(undefined4 *)(param_2 + 0x30),
                                          *(undefined4 *)(param_2 + 0x34));
                  goto LAB_00fe5ce4;
                }
                uVar3 = *(undefined4 *)(param_2 + 0x30);
                uVar4 = *(undefined4 *)(param_2 + 0x34);
                if (local_2e == '}') {
                  local_28 = 10;
                }
                else {
                  local_28 = 0x11;
                }
              }
              else {
                uVar3 = *(undefined4 *)(param_2 + 0x30);
                uVar4 = *(undefined4 *)(param_2 + 0x34);
                local_28 = 3;
              }
              local_34 = FUN_01966fbc(&local_28,uVar3,uVar4);
            }
LAB_00fe5ce4:
            *(char *)(param_2 + 0x40) = *(char *)(param_2 + 0x40) + '\x01';
            goto LAB_00fe5cf0;
          }
          uVar3 = *(undefined4 *)(param_2 + 0x30);
          uVar4 = *(undefined4 *)(param_2 + 0x34);
          local_28 = 0x18;
        }
        else {
LAB_00fe5d58:
          uVar3 = *(undefined4 *)(param_2 + 0x30);
          uVar4 = *(undefined4 *)(param_2 + 0x34);
          local_28 = 10;
        }
      }
      else {
LAB_00fe5d4c:
        uVar3 = *(undefined4 *)(param_2 + 0x30);
        uVar4 = *(undefined4 *)(param_2 + 0x34);
        local_28 = 5;
      }
LAB_00fe5d6c:
      local_34 = FUN_01966fbc(&local_28,uVar3,uVar4);
    }
LAB_00fe5cf0:
    *(int *)(param_1 + 4) = local_34;
  }
  uVar2 = 1;
LAB_00fe5cf8:
  *param_1 = uVar2;
  return;
}

