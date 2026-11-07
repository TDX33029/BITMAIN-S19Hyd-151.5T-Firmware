// FUN_000247d0 @ 000247d0  size=696  callers=1
// program: cgminer


undefined4 FUN_000247d0(int param_1,int param_2,int param_3)

{
  long lVar1;
  in_addr_t iVar2;
  ssize_t sVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  char *__s;
  addrinfo *local_a48;
  addrinfo aStack_a44;
  undefined2 local_a24;
  undefined1 local_a22;
  undefined1 local_a21;
  undefined4 local_a20;
  char acStack_a1c [508];
  addrinfo local_820 [64];
  
  local_a24 = 0x104;
  lVar1 = strtol(*(char **)(param_1 + 0x248),(char **)0x0,10);
  local_a21 = (undefined1)lVar1;
  local_a22 = (undefined1)((uint)lVar1 >> 8);
  builtin_strncpy(acStack_a1c,"CGMINER",8);
  iVar2 = inet_addr(*(char **)(param_1 + 0x268));
  uVar6 = iVar2 << 0x18 | (iVar2 >> 8 & 0xff) << 0x10 | (iVar2 >> 0x10 & 0xff) << 8 | iVar2 >> 0x18;
  if (uVar6 == 0xffffffff) {
    local_a48 = &aStack_a44;
    memset(local_820,0,0x20);
    local_820[0].ai_family = 2;
    iVar5 = getaddrinfo(*(char **)(param_1 + 0x268),(char *)0x0,local_820,&local_a48);
    if (iVar5 == 0) {
      uVar6 = *(uint *)(local_a48->ai_addr->sa_data + 2);
      freeaddrinfo(local_a48);
      uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
              uVar6 >> 0x18;
      if (uVar6 == 0xffffffff) goto LAB_00024a24;
      goto LAB_00024834;
    }
    if (param_3 == 0) {
LAB_00024a24:
      if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 4)) {
        return 0;
      }
      snprintf((char *)local_820,0x800,"Invalid IP address specified for socks4 proxy: %s",
               *(char **)(param_1 + 0x268));
      goto LAB_000248e8;
    }
    __s = *(char **)(param_1 + 0x268);
    local_a20 = 0x1000000;
    sVar4 = strlen(__s);
    if (0xfe < sVar4) {
      sVar4 = 0xff;
    }
    FUN_00023324(acStack_a1c + 8,__s,sVar4,"util.c","socks4_negotiate",0xba5);
    acStack_a1c[sVar4 + 8] = '\0';
    send(param_2,&local_a24,sVar4 + 0x11,0);
  }
  else {
LAB_00024834:
    local_a20._3_1_ = (undefined1)uVar6;
    local_a20._0_3_ =
         CONCAT12((char)(uVar6 >> 8),CONCAT11((char)(uVar6 >> 0x10),(char)(uVar6 >> 0x18)));
    send(param_2,&local_a24,0x10,0);
  }
  sVar3 = recv(param_2,local_820,1,0);
  if (((sVar3 != -1) && ((char)local_820[0].ai_flags == '\0')) &&
     ((sVar3 = recv(param_2,local_820,1,0), sVar3 != -1 && ((char)local_820[0].ai_flags == 'Z')))) {
    iVar5 = 6;
    do {
      recv(param_2,local_820,1,0);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return 1;
  }
  if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 4)) {
    return 0;
  }
  snprintf((char *)local_820,0x800,"Bad response from %s:%s SOCKS4 server",
           *(char **)(param_1 + 0x26c),*(char **)(param_1 + 0x270));
LAB_000248e8:
  FUN_0001dd98(4,local_820,0);
  return 0;
}

