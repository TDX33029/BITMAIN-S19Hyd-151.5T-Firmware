// FUN_000960c8 @ 000960c8  size=928  callers=3
// program: bmminer


undefined4 FUN_000960c8(char *param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  size_t sVar3;
  int local_3034;
  char acStack_3030 [4100];
  char acStack_202c [4100];
  char local_1028 [4100];
  uint local_24;
  int local_20;
  char *local_1c;
  size_t local_18;
  char *local_14;
  
  local_18 = strlen(param_1);
  local_14 = param_1;
  while( true ) {
    do {
      local_1c = strchr(local_14,0x25);
      if (local_1c == (char *)0x0) {
        return 0;
      }
      memset(local_1028,0,0x1001);
      memset(acStack_202c,0,0x1001);
      memset(acStack_3030,0,0x1001);
      local_3034 = 0;
      local_20 = __isoc99_sscanf(local_1c + 1,"%[.0-9-]%n",local_1028 + 1,&local_3034);
      if (local_20 == 1) {
        local_1028[0] = 0x25;
        local_1028[local_3034 + 1] = 's';
      }
      else {
        local_3034 = 0;
        local_1028[0] = '%';
        local_1028[1] = 's';
        local_1028[2] = 0;
      }
      local_14 = local_1c + local_3034 + 1;
      local_20 = __isoc99_sscanf(local_14,"E(%[^)])%n",acStack_202c,&local_3034);
    } while (local_20 == 0);
    local_14 = local_14 + local_3034;
    if (local_14[-1] != ')') break;
    pcVar1 = getenv(acStack_202c);
    local_24 = snprintf(acStack_3030,0x1001,local_1028,pcVar1);
    if (((int)local_24 < 0) || (0x1000 < local_24)) {
      piVar2 = __errno_location();
      FUN_00095b4c(2,"src/zc_util.c",0x83,"snprintf fail, errno[%d], evn_value_len[%d]",*piVar2,
                   local_24);
      return 0xffffffff;
    }
    local_18 = local_24 + (local_18 - ((int)local_14 - (int)local_1c));
    if (param_2 - 1U < local_18) {
      FUN_00095b4c(2,"src/zc_util.c",0x89,"repalce env_value[%s] cause overlap",acStack_3030);
      return 0xffffffff;
    }
    pcVar1 = local_1c + local_24;
    sVar3 = strlen(local_14);
    memmove(pcVar1,local_14,sVar3 + 1);
    memcpy(local_1c,acStack_3030,local_24);
  }
  FUN_00095b4c(2,"src/zc_util.c",0x7c,"in string[%s] can\'t find match )",local_1c);
  return 0xffffffff;
}

