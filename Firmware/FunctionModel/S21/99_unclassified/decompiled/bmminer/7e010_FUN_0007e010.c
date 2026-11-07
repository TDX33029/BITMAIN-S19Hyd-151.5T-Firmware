// FUN_0007e010 @ 0007e010  size=512  callers=1
// program: bmminer


uint FUN_0007e010(char *param_1,size_t param_2,int param_3)

{
  char *pcVar1;
  int local_2c;
  uint local_14;
  char *local_10;
  char *local_c;
  
  local_2c = param_3;
  if (param_3 == 0) {
    local_2c = 0x11;
  }
  local_14 = snprintf(param_1,param_2,"%.*g",local_2c);
  if ((int)local_14 < 0) {
    local_14 = 0xffffffff;
  }
  else if (local_14 < param_2) {
    FUN_0007dea4(param_1);
    pcVar1 = strchr(param_1,0x2e);
    if ((pcVar1 == (char *)0x0) && (pcVar1 = strchr(param_1,0x65), pcVar1 == (char *)0x0)) {
      if (param_2 <= local_14 + 3) {
        return 0xffffffff;
      }
      param_1[local_14] = '.';
      param_1[local_14 + 1] = '0';
      param_1[local_14 + 2] = '\0';
      local_14 = local_14 + 2;
    }
    pcVar1 = strchr(param_1,0x65);
    if (pcVar1 != (char *)0x0) {
      local_c = pcVar1 + 1;
      local_10 = pcVar1 + 2;
      if (*local_c == '-') {
        local_c = pcVar1 + 2;
      }
      for (; *local_10 == '0'; local_10 = local_10 + 1) {
      }
      if (local_10 != local_c) {
        memmove(local_c,local_10,local_14 - ((int)local_10 - (int)param_1));
        local_14 = local_14 - ((int)local_10 - (int)local_c);
      }
    }
  }
  else {
    local_14 = 0xffffffff;
  }
  return local_14;
}

