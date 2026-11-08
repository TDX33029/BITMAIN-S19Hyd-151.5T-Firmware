// FUN_0001ed70 @ 0001ed70  size=1204  callers=1
// program: cgminer


char FUN_0001ed70(int param_1,int param_2,int param_3)

{
  char cVar1;
  char *param3;
  size_t __n;
  ssize_t sVar2;
  int iVar3;
  char *param4;
  char local_c20 [1024];
  char local_820 [2048];
  
  param3 = *(char **)(param_1 + 0x268);
  param4 = *(char **)(param_1 + 0x248);
  if (param_3 == 0) {
    snprintf(local_c20,0x400,"CONNECT %s:%s HTTP/1.1\r\nHost: %s:%s\r\n\r\n",param3,param4,param3,
             param4);
  }
  else {
    snprintf(local_c20,0x400,"CONNECT %s:%s HTTP/1.0\r\n\r\n",param3,param4);
  }
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    snprintf(local_820,0x800,"Sending proxy %s:%s - %s",*(char **)(param_1 + 0x26c),
             *(char **)(param_1 + 0x270),local_c20);
    FUN_0001dd98(7,local_820,0);
  }
  __n = strlen(local_c20);
  send(param_2,local_c20,__n,0);
  sVar2 = recv(param_2,local_c20,0xc,0);
  if (sVar2 < 1) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
      snprintf(local_820,0x800,"Couldn\'t read from proxy %s:%s after sending CONNECT",
               *(char **)(param_1 + 0x26c),*(char **)(param_1 + 0x270));
      FUN_0001dd98(4,local_820,0);
      return '\0';
    }
  }
  else {
    local_c20[sVar2] = '\0';
    if ((DAT_000686f1 != '\0') &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      snprintf(local_820,0x800,"Received from proxy %s:%s - %s",*(char **)(param_1 + 0x26c),
               *(char **)(param_1 + 0x270),local_c20);
      FUN_0001dd98(7,local_820,0);
    }
    iVar3 = strcmp(local_c20,"HTTP/1.1 200");
    if ((iVar3 == 0) || (iVar3 = strcmp(local_c20,"HTTP/1.0 200"), iVar3 == 0)) {
      iVar3 = 0;
      do {
        sVar2 = recv(param_2,local_820,1,0);
        if (sVar2 == -1) {
          local_c20[iVar3] = -1;
          goto LAB_0001f058;
        }
        local_c20[iVar3] = local_820[0];
        iVar3 = iVar3 + 1;
        if (local_820[0] == -1) goto LAB_0001f058;
      } while (iVar3 != 4);
      do {
        iVar3 = strncmp(local_c20,"\r\n\r\n",4);
        cVar1 = DAT_000686f1;
        if (iVar3 == 0) {
          if (DAT_000686f1 == '\0') {
            return '\x01';
          }
          if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7)) {
            return DAT_000686f1;
          }
          snprintf(local_820,0x800,"Success negotiating with %s:%s HTTP proxy",
                   *(char **)(param_1 + 0x26c),*(char **)(param_1 + 0x270));
          FUN_0001dd98(7,local_820,0);
          return cVar1;
        }
        local_c20[0] = local_c20[1];
        local_c20[1] = local_c20[2];
        local_c20[2] = local_c20[3];
        sVar2 = recv(param_2,local_820,1,0);
        if (sVar2 == -1) {
          local_c20[3] = -1;
          break;
        }
        local_c20[3] = local_820[0];
      } while (local_820[0] != -1);
LAB_0001f058:
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
        snprintf(local_820,0x800,"Couldn\'t read HTTP byte from proxy %s:%s",
                 *(char **)(param_1 + 0x26c),*(char **)(param_1 + 0x270));
        FUN_0001dd98(4,local_820,0);
        return '\0';
      }
    }
    else if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
      snprintf(local_820,0x800,"HTTP Error from proxy %s:%s - %s",*(char **)(param_1 + 0x26c),
               *(char **)(param_1 + 0x270),local_c20);
      FUN_0001dd98(4,local_820);
      return '\0';
    }
  }
  return '\0';
}

