// FUN_00698138 @ 00698138 size=936 calls_out=7 calls_in=1
// strings: last_config_from_telemetry | window_duration_min | max_user_agents | max_endpoints | api_types | cgminer

int FUN_00698138(char *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_30;
  undefined4 *local_2c;
  uint local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  puVar6 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    FUN_01ac6cbc(*puVar6,",",1);
  }
  uVar3 = *puVar6;
  param_1[1] = '\x02';
  FUN_006bc51c(&local_20,uVar3,"last_config_from_telemetry",0x1a);
  if ((char)local_20 != '\x04') {
    iVar2 = FUN_01966f50(local_20,local_1c);
    return iVar2;
  }
  FUN_01ac6cbc(*puVar6,":",1);
  cVar1 = *(char *)(param_2 + 3);
  if (cVar1 == '\x02') {
    uVar5 = 4;
    uVar3 = *puVar6;
    pcVar4 = &DAT_0056d030;
LAB_006981d4:
    FUN_01ac6cbc(uVar3,pcVar4,uVar5);
LAB_006981d8:
    iVar2 = 0;
  }
  else {
    FUN_01ac6cbc(*puVar6,"{",1);
    local_30 = 0x100;
    local_2c = puVar6;
    iVar2 = FUN_00697d48(&local_30,"window_duration_min",0x13,*param_2);
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((char)local_30 == '\0') {
      iVar2 = FUN_00697d48(&local_30,"max_user_agents",0xf,param_2[1]);
      if (iVar2 != 0) {
        return iVar2;
      }
      if ((char)local_30 == '\0') {
        iVar2 = FUN_00697d48(&local_30,"max_endpoints",0xd,param_2[2]);
        puVar6 = local_2c;
        if (iVar2 != 0) {
          return iVar2;
        }
        if ((char)local_30 == '\0') {
          if (local_30._1_1_ != '\x01') {
            FUN_01ac6cbc(*local_2c,",",1);
          }
          local_30._0_2_ = CONCAT11(2,(char)local_30);
          FUN_006bc51c(&local_20,*puVar6,"api_types",9);
          if ((char)local_20 != '\x04') {
            iVar2 = FUN_01966f50(local_20,local_1c);
            return iVar2;
          }
          FUN_01ac6cbc(*puVar6,":",1);
          FUN_01ac6cbc(*puVar6,"{",1);
          local_28 = 0x100;
          local_24 = puVar6;
          iVar2 = FUN_00697e34(&local_28,"cgminer",7,cVar1);
          if (iVar2 != 0) {
            return iVar2;
          }
          if ((char)local_28 == '\0') {
            iVar2 = FUN_00697e34(&local_28,"general_http",0xc,*(undefined1 *)((int)param_2 + 0xd));
            if (iVar2 != 0) {
              return iVar2;
            }
            if ((char)local_28 == '\0') {
              iVar2 = FUN_00697e34(&local_28,"graphqlstruct RawPoolReconnectBackoffConfig",7,
                                   *(undefined1 *)((int)param_2 + 0xe));
              if (iVar2 != 0) {
                return iVar2;
              }
              if ((char)local_28 == '\0') {
                iVar2 = FUN_00697e34(&local_28,"grpch!",4,*(undefined1 *)((int)param_2 + 0xf));
                if (iVar2 != 0) {
                  return iVar2;
                }
                if ((char)local_28 == '\0') {
                  iVar2 = FUN_00697e34(&local_28,&DAT_0056fc48,8,*(undefined1 *)(param_2 + 4));
                  if (iVar2 != 0) {
                    return iVar2;
                  }
                  if ((char)local_28 == '\0') {
                    iVar2 = FUN_00697e34(&local_28,&DAT_0056ded8,4,
                                         *(undefined1 *)((int)param_2 + 0x11));
                    if (iVar2 != 0) {
                      return iVar2;
                    }
                    if ((char)local_28 == '\0') {
                      iVar2 = FUN_00697e34(&local_28,&DAT_0056efa0,4,
                                           *(undefined1 *)((int)param_2 + 0x12));
                      if (iVar2 != 0) {
                        return iVar2;
                      }
                      if (((local_28 & 0xff00) != 0) && ((local_28 & 1) == 0)) {
                        FUN_01ac6cbc(*local_24,"}",1);
                      }
                      if (((local_30 & 0xff00) != 0) && ((local_30 & 1) == 0)) {
                        uVar5 = 1;
                        uVar3 = *puVar6;
                        pcVar4 = "}";
                        goto LAB_006981d4;
                      }
                      goto LAB_006981d8;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_20 = 10;
    iVar2 = FUN_01966fbc(&local_20,0,0);
  }
  return iVar2;
}

