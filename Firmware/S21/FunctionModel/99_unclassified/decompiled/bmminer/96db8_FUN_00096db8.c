// FUN_00096db8 @ 00096db8  size=792  callers=2
// program: bmminer


undefined4 FUN_00096db8(int *param_1,uint param_2,char *param_3)

{
  uint local_38;
  char local_26 [2];
  uint local_24;
  int local_20;
  char *local_1c;
  uint local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  
  if (*param_1 == 0) {
    FUN_00095b4c(2,"src/buf.c",0x114,"pre-use of zlog_buf_resize fail, so can\'t convert");
    return 0xffffffff;
  }
  local_c = local_26 + 1;
  local_38 = param_2;
  do {
    local_c = local_c + -1;
    *local_c = (char)local_38 + (char)(local_38 / 10) * -10 + '0';
    local_38 = local_38 / 10;
  } while (local_38 != 0);
  local_14 = local_26 + (1 - (int)local_c);
  if (local_14 < param_3) {
    local_18 = (int)param_3 - (int)local_14;
    local_1c = param_3;
  }
  else {
    local_18 = 0;
    local_1c = local_14;
  }
  local_10 = local_1c + param_1[1];
  if ((char *)param_1[2] < local_10) {
    local_20 = FUN_00096854(param_1,(int)local_1c - (param_1[2] - param_1[1]));
    if (0 < local_20) {
      FUN_00095b4c(2,"src/buf.c",0x12e,"conf limit to %ld, can\'t extend, so output",param_1[5]);
      local_24 = param_1[2] - param_1[1];
      if (local_18 < local_24) {
        if (local_18 < local_24) {
          local_14 = (char *)(local_24 - local_18);
        }
      }
      else {
        local_14 = (char *)0x0;
        local_18 = local_24;
      }
      if (local_18 != 0) {
        memset((void *)param_1[1],0x30,local_18);
      }
      memcpy((void *)(param_1[1] + local_18),local_c,(size_t)local_14);
      param_1[1] = param_1[1] + local_24;
      FUN_000967b4(param_1);
      return 1;
    }
    if (local_20 < 0) {
      FUN_00095b4c(2,"src/buf.c",0x13e,"zlog_buf_resize fail");
      return 0xffffffff;
    }
    local_10 = local_1c + param_1[1];
  }
  if (local_18 != 0) {
    memset((void *)param_1[1],0x30,local_18);
  }
  memcpy((void *)(param_1[1] + local_18),local_c,(size_t)local_14);
  param_1[1] = (int)local_10;
  return 0;
}

