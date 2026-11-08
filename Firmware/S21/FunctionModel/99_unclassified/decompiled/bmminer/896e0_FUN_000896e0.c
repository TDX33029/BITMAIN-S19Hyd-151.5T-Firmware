// FUN_000896e0 @ 000896e0  size=1064  callers=2
// program: bmminer


char * FUN_000896e0(char *param_1)

{
  bool bVar1;
  char *__s;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint local_1c;
  
  local_1c = 0;
  __s = calloc(1,0x2450);
  if (__s == (char *)0x0) {
    piVar2 = __errno_location();
    FUN_00095b4c(2,"src/conf.c",0x69,"calloc fail, errno[%d]",*piVar2);
    return (char *)0x0;
  }
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    pcVar6 = getenv("ZLOG_CONF_PATH");
    if (pcVar6 == (char *)0x0) {
      memset(__s,0,0x401);
      bVar1 = false;
    }
    else {
      pcVar6 = getenv("ZLOG_CONF_PATH");
      local_1c = snprintf(__s,0x401,"%s",pcVar6);
      bVar1 = true;
    }
  }
  else {
    local_1c = snprintf(__s,0x401,"%s",param_1);
    bVar1 = true;
  }
  if (((int)local_1c < 0) || (0x400 < local_1c)) {
    piVar2 = __errno_location();
    FUN_00095b4c(2,"src/conf.c",0x78,"not enough space for path name, nwrite=[%d], errno[%d]",
                 local_1c,*piVar2);
  }
  else {
    __s[0x418] = '\x01';
    __s[0x419] = '\0';
    __s[0x41a] = '\0';
    __s[0x41b] = '\0';
    __s[0x41c] = '\0';
    __s[0x41d] = '\x04';
    __s[0x41e] = '\0';
    __s[0x41f] = '\0';
    __s[0x420] = '\0';
    __s[0x421] = '\0';
    __s[0x422] = ' ';
    __s[0x423] = '\0';
    if (bVar1) {
      strcpy(__s + 0x424,__s);
    }
    else {
      builtin_strncpy(__s + 0x424,"/tmp/zlog.lock",0xf);
    }
    pcVar6 = __s + 0x142c;
    pcVar8 = "default = \"%D %V [%p:%F:%L] %m%n\"";
    do {
      uVar4 = *(undefined4 *)(pcVar8 + 4);
      uVar5 = *(undefined4 *)(pcVar8 + 8);
      uVar7 = *(undefined4 *)(pcVar8 + 0xc);
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar8;
      *(undefined4 *)(pcVar6 + 4) = uVar4;
      *(undefined4 *)(pcVar6 + 8) = uVar5;
      *(undefined4 *)(pcVar6 + 0xc) = uVar7;
      pcVar8 = pcVar8 + 0x10;
      pcVar6 = pcVar6 + 0x10;
    } while (pcVar8 != "\"");
    pcVar6[0] = '\"';
    pcVar6[1] = '\0';
    __s[0x2434] = -0x80;
    __s[0x2435] = '\x01';
    __s[0x2436] = '\0';
    __s[0x2437] = '\0';
    __s[0x243c] = '\0';
    __s[0x243d] = '\0';
    __s[0x243e] = '\0';
    __s[0x243f] = '\0';
    __s[0x2438] = '\0';
    __s[0x2439] = '\0';
    __s[0x243a] = '\0';
    __s[0x243b] = '\0';
    uVar4 = FUN_0008bf18();
    *(undefined4 *)(__s + 0x2440) = uVar4;
    if (*(int *)(__s + 0x2440) == 0) {
      FUN_00095b4c(2,"src/conf.c",0x8e,"zlog_level_list_new fail");
    }
    else {
      uVar4 = FUN_000946a4(FUN_0008b6e0);
      *(undefined4 *)(__s + 0x2444) = uVar4;
      if (*(int *)(__s + 0x2444) == 0) {
        FUN_00095b4c(2,"src/conf.c",0x94,"zc_arraylist_new fail");
      }
      else {
        uVar4 = FUN_000946a4(FUN_00091a74);
        *(undefined4 *)(__s + 0x2448) = uVar4;
        if (*(int *)(__s + 0x2448) == 0) {
          FUN_00095b4c(2,"src/conf.c",0x9a,"init rule_list fail");
        }
        else if (bVar1) {
          iVar3 = FUN_00089ce0(__s);
          if (iVar3 == 0) {
LAB_00089adc:
            FUN_000891a4(__s,0);
            return __s;
          }
          FUN_00095b4c(2,"src/conf.c",0xa0,"zlog_conf_build_with_file fail");
        }
        else {
          iVar3 = FUN_00089b08(__s);
          if (iVar3 == 0) goto LAB_00089adc;
          FUN_00095b4c(2,"src/conf.c",0xa5,"zlog_conf_build_without_file fail");
        }
      }
    }
  }
  FUN_000895ac(__s);
  return (char *)0x0;
}

