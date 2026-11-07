// FUN_0008a2ec @ 0008a2ec  size=3540  callers=1
// program: bmminer


undefined4 FUN_0008a2ec(char *param_1,char *param_2,int *param_3)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char acStack_5038 [4100];
  char acStack_4034 [4100];
  char acStack_3030 [4100];
  char acStack_202c [4100];
  char acStack_1028 [4100];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = 0;
  sVar1 = strlen(param_2);
  if (0x1000 < sVar1) {
    sVar1 = strlen(param_2);
    FUN_00095b4c(2,"src/conf.c",0x15a,"line_len[%ld] > MAXLEN_CFG_LINE[%ld], may cause overflow",
                 sVar1,0x1000);
    return 0xffffffff;
  }
  if (*param_2 == '[') {
    local_20 = *param_3;
    local_1c = __isoc99_sscanf(param_2,"[ %[^] \t]",acStack_1028);
    iVar2 = strcmp(acStack_1028,"global");
    if (iVar2 == 0) {
      *param_3 = 1;
    }
    else {
      iVar2 = strcmp(acStack_1028,"levels");
      if (iVar2 == 0) {
        *param_3 = 2;
      }
      else {
        iVar2 = strcmp(acStack_1028,"formats");
        if (iVar2 == 0) {
          *param_3 = 3;
        }
        else {
          iVar2 = strcmp(acStack_1028,"rules");
          if (iVar2 != 0) {
            FUN_00095b4c(2,"src/conf.c",0x16b,"wrong section name[%s]",acStack_1028);
            return 0xffffffff;
          }
          *param_3 = 4;
        }
      }
    }
    if (*param_3 <= local_20) {
      FUN_00095b4c(2,"src/conf.c",0x170,
                   "wrong sequence of section, must follow global->levels->formats->rules");
      return 0xffffffff;
    }
    if (*param_3 == 4) {
      if ((*(int *)(param_1 + 0x243c) != 0) &&
         (*(uint *)(param_1 + 0x243c) <= *(uint *)(param_1 + 0x2438))) {
        FUN_00095b4c(1,"src/conf.c",0x17e,
                     "fsync_period[%ld] >= reload_conf_period[%ld],set fsync_period to zero");
        param_1[0x2438] = '\0';
        param_1[0x2439] = '\0';
        param_1[0x243a] = '\0';
        param_1[0x243b] = '\0';
      }
      uVar3 = FUN_0008ce74(param_1 + 0x424);
      *(undefined4 *)(param_1 + 0x1428) = uVar3;
      if (*(int *)(param_1 + 0x1428) == 0) {
        FUN_00095b4c(2,"src/conf.c",0x187,"zlog_rotater_new fail");
        return 0xffffffff;
      }
      uVar3 = FUN_0008b77c(param_1 + 0x142c,param_1 + 0x244c);
      *(undefined4 *)(param_1 + 0x2430) = uVar3;
      if (*(int *)(param_1 + 0x2430) == 0) {
        FUN_00095b4c(2,"src/conf.c",0x18e,"zlog_format_new fail");
        return 0xffffffff;
      }
    }
  }
  else {
    switch(*param_3) {
    case 1:
      memset(acStack_1028,0,0x1001);
      memset(acStack_5038,0,0x1001);
      local_1c = __isoc99_sscanf(param_2," %[^=]= %s ",acStack_1028,acStack_5038);
      if (local_1c != 2) {
        FUN_00095b4c(2,"src/conf.c",0x19c,"sscanf [%s] fail, name or value is null",param_2);
        return 0xffffffff;
      }
      memset(acStack_202c,0,0x1001);
      memset(acStack_3030,0,0x1001);
      memset(acStack_4034,0,0x1001);
      local_24 = 0;
      local_1c = __isoc99_sscanf(acStack_1028,"%s%n%s%s",acStack_202c,&local_24,acStack_3030,
                                 acStack_4034);
      iVar2 = strcmp(acStack_202c,"strict");
      if ((iVar2 == 0) && (iVar2 = strcmp(acStack_3030,"init"), iVar2 == 0)) {
        iVar2 = strcasecmp(acStack_5038,"false");
        if ((iVar2 == 0) && (pcVar4 = getenv("ZLOG_STRICT_INIT"), pcVar4 == (char *)0x0)) {
          param_1[0x418] = '\0';
          param_1[0x419] = '\0';
          param_1[0x41a] = '\0';
          param_1[0x41b] = '\0';
        }
        else {
          param_1[0x418] = '\x01';
          param_1[0x419] = '\0';
          param_1[0x41a] = '\0';
          param_1[0x41b] = '\0';
        }
      }
      else {
        iVar2 = strcmp(acStack_202c,"buffer");
        if ((iVar2 == 0) && (iVar2 = strcmp(acStack_3030,"min"), iVar2 == 0)) {
          uVar3 = FUN_00095de8(acStack_5038);
          *(undefined4 *)(param_1 + 0x41c) = uVar3;
        }
        else {
          iVar2 = strcmp(acStack_202c,"buffer");
          if ((iVar2 == 0) && (iVar2 = strcmp(acStack_3030,"max"), iVar2 == 0)) {
            uVar3 = FUN_00095de8(acStack_5038);
            *(undefined4 *)(param_1 + 0x420) = uVar3;
          }
          else {
            iVar2 = strcmp(acStack_202c,"file");
            if ((iVar2 == 0) && (iVar2 = strcmp(acStack_3030,"perms"), iVar2 == 0)) {
              __isoc99_sscanf(acStack_5038,&DAT_000aaf54,param_1 + 0x2434);
            }
            else {
              iVar2 = strcmp(acStack_202c,"rotate");
              if (((iVar2 == 0) && (iVar2 = strcmp(acStack_3030,"lock"), iVar2 == 0)) &&
                 (iVar2 = strcmp(acStack_4034,"file"), iVar2 == 0)) {
                iVar2 = strcmp(acStack_5038,"self");
                if (iVar2 == 0) {
                  strcpy(param_1 + 0x424,param_1);
                }
                else {
                  strcpy(param_1 + 0x424,acStack_5038);
                }
              }
              else {
                iVar2 = strcmp(acStack_202c,"default");
                if ((iVar2 == 0) && (iVar2 = strcmp(acStack_3030,"format"), iVar2 == 0)) {
                  strcpy(param_1 + 0x142c,param_2 + local_24);
                }
                else {
                  iVar2 = strcmp(acStack_202c,"reload");
                  if ((iVar2 == 0) &&
                     ((iVar2 = strcmp(acStack_3030,"conf"), iVar2 == 0 &&
                      (iVar2 = strcmp(acStack_4034,"period"), iVar2 == 0)))) {
                    uVar3 = FUN_00095de8(acStack_5038);
                    *(undefined4 *)(param_1 + 0x243c) = uVar3;
                  }
                  else {
                    iVar2 = strcmp(acStack_202c,"fsync");
                    if ((iVar2 == 0) && (iVar2 = strcmp(acStack_3030,"period"), iVar2 == 0)) {
                      uVar3 = FUN_00095de8(acStack_5038);
                      *(undefined4 *)(param_1 + 0x2438) = uVar3;
                    }
                    else {
                      FUN_00095b4c(2,"src/conf.c",0x1c6,"name[%s] is not any one of global options",
                                   acStack_1028);
                      if (*(int *)(param_1 + 0x418) != 0) {
                        return 0xffffffff;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      break;
    case 2:
      iVar2 = FUN_0008bfb8(*(undefined4 *)(param_1 + 0x2440),param_2);
      if ((iVar2 != 0) &&
         (FUN_00095b4c(2,"src/conf.c",0x1cc,"zlog_level_list_set fail"),
         *(int *)(param_1 + 0x418) != 0)) {
        return 0xffffffff;
      }
      break;
    case 3:
      local_14 = FUN_0008b77c(param_2,param_1 + 0x244c);
      if (local_14 == 0) {
        FUN_00095b4c(2,"src/conf.c",0x1d3,"zlog_format_new fail [%s]",param_2);
        if (*(int *)(param_1 + 0x418) != 0) {
          return 0xffffffff;
        }
      }
      else {
        iVar2 = FUN_00094aa4(*(undefined4 *)(param_1 + 0x2444),local_14);
        if (iVar2 != 0) {
          FUN_0008b6e0(local_14);
          FUN_00095b4c(2,"src/conf.c",0x1d9,"zc_arraylist_add fail");
          return 0xffffffff;
        }
      }
      break;
    case 4:
      local_18 = FUN_0009052c(param_2,*(undefined4 *)(param_1 + 0x2440),
                              *(undefined4 *)(param_1 + 0x2430),*(undefined4 *)(param_1 + 0x2444),
                              *(undefined4 *)(param_1 + 0x2434),*(undefined4 *)(param_1 + 0x2438),
                              param_1 + 0x244c);
      if (local_18 == 0) {
        FUN_00095b4c(2,"src/conf.c",0x1e7,"zlog_rule_new fail [%s]",param_2);
        if (*(int *)(param_1 + 0x418) != 0) {
          return 0xffffffff;
        }
      }
      else {
        iVar2 = FUN_00094aa4(*(undefined4 *)(param_1 + 0x2448),local_18);
        if (iVar2 != 0) {
          FUN_00091a74(local_18);
          FUN_00095b4c(2,"src/conf.c",0x1ed,"zc_arraylist_add fail");
          return 0xffffffff;
        }
      }
      break;
    default:
      FUN_00095b4c(2,"src/conf.c",0x1f2,"not in any section");
      return 0xffffffff;
    }
  }
  return 0;
}

