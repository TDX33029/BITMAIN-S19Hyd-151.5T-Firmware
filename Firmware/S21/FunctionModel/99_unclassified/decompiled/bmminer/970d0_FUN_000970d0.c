// FUN_000970d0 @ 000970d0  size=912  callers=2
// program: bmminer


undefined4 FUN_000970d0(int *param_1,undefined4 param_2,uint param_3,int param_4,char *param_5)

{
  char extraout_r2;
  longlong lVar1;
  undefined4 local_50;
  undefined4 uStack_4c;
  char local_2d [5];
  uint local_28;
  int local_24;
  uint local_20;
  char *local_1c;
  uint local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  
  lVar1 = CONCAT44(param_4,param_3);
  if (*param_1 == 0) {
    FUN_00095b4c(2,"src/buf.c",0x156,"pre-use of zlog_buf_resize fail, so can\'t convert");
    return 0xffffffff;
  }
  local_c = local_2d + 1;
  if (param_4 == 0) {
    local_20 = param_3;
    do {
      local_c = local_c + -1;
      *local_c = (char)local_20 + (char)(local_20 / 10) * -10 + '0';
      local_20 = local_20 / 10;
    } while (local_20 != 0);
    local_20 = 0;
  }
  else {
    do {
      uStack_4c = (undefined4)((ulonglong)lVar1 >> 0x20);
      local_50 = (undefined4)lVar1;
      FUN_00098f3c(local_50,uStack_4c,10,0);
      local_c = local_c + -1;
      *local_c = extraout_r2 + '0';
      lVar1 = FUN_00098f3c(local_50,uStack_4c,10,0);
    } while (lVar1 != 0);
  }
  local_14 = local_2d + (1 - (int)local_c);
  if (local_14 < param_5) {
    local_18 = (int)param_5 - (int)local_14;
    local_1c = param_5;
  }
  else {
    local_18 = 0;
    local_1c = local_14;
  }
  local_10 = local_1c + param_1[1];
  if ((char *)param_1[2] < local_10) {
    local_24 = FUN_00096854(param_1,(int)local_1c - (param_1[2] - param_1[1]));
    if (0 < local_24) {
      FUN_00095b4c(2,"src/buf.c",0x189,"conf limit to %ld, can\'t extend, so output",param_1[5]);
      local_28 = param_1[2] - param_1[1];
      if (local_18 < local_28) {
        if (local_18 < local_28) {
          local_14 = (char *)(local_28 - local_18);
        }
      }
      else {
        local_14 = (char *)0x0;
        local_18 = local_28;
      }
      if (local_18 != 0) {
        memset((void *)param_1[1],0x30,local_18);
      }
      memcpy((void *)(param_1[1] + local_18),local_c,(size_t)local_14);
      param_1[1] = param_1[1] + local_28;
      FUN_000967b4(param_1);
      return 1;
    }
    if (local_24 < 0) {
      FUN_00095b4c(2,"src/buf.c",0x199,"zlog_buf_resize fail");
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

