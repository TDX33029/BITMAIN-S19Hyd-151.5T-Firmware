// FUN_0005e7cc @ 0005e7cc  size=996  callers=2
// program: bmminer


char * FUN_0005e7cc(char *param_1)

{
  bool bVar1;
  char *param0;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  param0 = calloc(1,0x2450);
  if (param0 == (char *)0x0) {
    piVar6 = __errno_location();
    FUN_000658a8(2,"src/conf.c",0x69,"calloc fail, errno[%d]",*piVar6);
    return (char *)0x0;
  }
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    pcVar2 = getenv("ZLOG_CONF_PATH");
    if (pcVar2 != (char *)0x0) {
      pcVar2 = getenv("ZLOG_CONF_PATH");
      uVar3 = snprintf(param0,0x401,"%s",pcVar2);
      goto joined_r0x0005ea5c;
    }
    memset(param0,0,0x401);
    param0[0x418] = '\x01';
    param0[0x419] = '\0';
    param0[0x41a] = '\0';
    param0[0x41b] = '\0';
    param0[0x420] = '\0';
    param0[0x421] = '\0';
    param0[0x422] = ' ';
    param0[0x423] = '\0';
    param0[0x41c] = '\0';
    param0[0x41d] = '\x04';
    param0[0x41e] = '\0';
    param0[0x41f] = '\0';
    param0[0x424] = '/';
    param0[0x425] = 't';
    param0[0x426] = 'm';
    param0[0x427] = 'p';
    param0[0x428] = '/';
    param0[0x429] = 'z';
    param0[0x42a] = 'l';
    param0[0x42b] = 'o';
    param0[0x42c] = 'g';
    param0[0x42d] = '.';
    param0[0x42e] = 'l';
    param0[0x42f] = 'o';
    param0[0x430] = 'c';
    param0[0x431] = 'k';
    param0[0x432] = '\0';
    bVar1 = false;
  }
  else {
    uVar3 = snprintf(param0,0x401,"%s",param_1);
joined_r0x0005ea5c:
    if (0x400 < uVar3) {
      piVar6 = __errno_location();
      FUN_000658a8(2,"src/conf.c",0x78,"not enough space for path name, nwrite=[%d], errno[%d]",
                   uVar3,*piVar6);
      goto LAB_0005ea8c;
    }
    param0[0x418] = '\x01';
    param0[0x419] = '\0';
    param0[0x41a] = '\0';
    param0[0x41b] = '\0';
    param0[0x41c] = '\0';
    param0[0x41d] = '\x04';
    param0[0x41e] = '\0';
    param0[0x41f] = '\0';
    param0[0x420] = '\0';
    param0[0x421] = '\0';
    param0[0x422] = ' ';
    param0[0x423] = '\0';
    bVar1 = true;
    strcpy(param0 + 0x424,param0);
  }
  pcVar2 = param0 + 0x142c;
  pcVar2[0] = 'd';
  pcVar2[1] = 'e';
  pcVar2[2] = 'f';
  pcVar2[3] = 'a';
  param0[0x1430] = 'u';
  param0[0x1431] = 'l';
  param0[0x1432] = 't';
  param0[0x1433] = ' ';
  param0[0x1434] = '=';
  param0[0x1435] = ' ';
  param0[0x1436] = '\"';
  param0[0x1437] = '%';
  param0[0x1438] = 'D';
  param0[0x1439] = ' ';
  param0[0x143a] = '%';
  param0[0x143b] = 'V';
  param0[0x143c] = ' ';
  param0[0x143d] = '[';
  param0[0x143e] = '%';
  param0[0x143f] = 'p';
  param0[0x1440] = ':';
  param0[0x1441] = '%';
  param0[0x1442] = 'F';
  param0[0x1443] = ':';
  param0[0x1444] = '%';
  param0[0x1445] = 'L';
  param0[0x1446] = ']';
  param0[0x1447] = ' ';
  param0[0x1448] = '%';
  param0[0x1449] = 'm';
  param0[0x144a] = '%';
  param0[0x144b] = 'n';
  param0[0x144c] = '\"';
  param0[0x144d] = '\0';
  param0[0x2434] = -0x80;
  param0[0x2435] = '\x01';
  param0[0x2436] = '\0';
  param0[0x2437] = '\0';
  param0[0x243c] = '\0';
  param0[0x243d] = '\0';
  param0[0x243e] = '\0';
  param0[0x243f] = '\0';
  param0[0x2438] = '\0';
  param0[0x2439] = '\0';
  param0[0x243a] = '\0';
  param0[0x243b] = '\0';
  iVar4 = FUN_0005f544();
  *(int *)(param0 + 0x2440) = iVar4;
  if (iVar4 == 0) {
    FUN_000658a8(2,"src/conf.c",0x8e,"zlog_level_list_new fail");
  }
  else {
    iVar4 = FUN_00064dd4(FUN_0005ef80);
    *(int *)(param0 + 0x2444) = iVar4;
    if (iVar4 == 0) {
      FUN_000658a8(2,"src/conf.c",0x94,"zc_arraylist_new fail");
    }
    else {
      iVar4 = FUN_00064dd4(FUN_00062290);
      *(int *)(param0 + 0x2448) = iVar4;
      if (iVar4 == 0) {
        FUN_000658a8(2,"src/conf.c",0x9a,"init rule_list fail");
      }
      else if (bVar1) {
        iVar4 = FUN_0005d944(param0);
        if (iVar4 == 0) {
LAB_0005e910:
          FUN_0005e44c(param0,0);
          return param0;
        }
        FUN_000658a8(2,"src/conf.c",0xa0,"zlog_conf_build_with_file fail");
      }
      else {
        iVar4 = FUN_0005eff8(pcVar2,param0 + 0x244c);
        *(int *)(param0 + 0x2430) = iVar4;
        if (iVar4 == 0) {
          FUN_000658a8(2,"src/conf.c",0xb7,"zlog_format_new fail");
        }
        else {
          iVar4 = FUN_00060148(param0 + 0x424);
          *(int *)(param0 + 0x1428) = iVar4;
          if (iVar4 == 0) {
            FUN_000658a8(2,"src/conf.c",0xbd,"zlog_rotater_new fail");
          }
          else {
            iVar4 = FUN_000623b0("*.*        >stdout",*(undefined4 *)(param0 + 0x2440),
                                 *(undefined4 *)(param0 + 0x2430),*(undefined4 *)(param0 + 0x2444),
                                 *(undefined4 *)(param0 + 0x2434),*(undefined4 *)(param0 + 0x2438),
                                 param0 + 0x244c);
            if (iVar4 == 0) {
              FUN_000658a8(2,"src/conf.c",0xca,"zlog_rule_new fail");
            }
            else {
              iVar5 = FUN_00064fa8(*(undefined4 *)(param0 + 0x2448),iVar4);
              if (iVar5 == 0) goto LAB_0005e910;
              FUN_00062290(iVar4);
              FUN_000658a8(2,"src/conf.c",0xd1,"zc_arraylist_add fail");
            }
          }
        }
        FUN_000658a8(2,"src/conf.c",0xa5,"zlog_conf_build_without_file fail");
      }
    }
  }
LAB_0005ea8c:
  FUN_0005e720(param0);
  return (char *)0x0;
}

