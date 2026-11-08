// FUN_000978c8 @ 000978c8  size=1020  callers=3
// program: bmminer


undefined4
FUN_000978c8(int *param_1,void *param_2,uint param_3,int param_4,int param_5,uint param_6,
            uint param_7)

{
  int iVar1;
  uint uVar2;
  uint local_14;
  size_t local_10;
  uint local_c;
  
  if (*param_1 == 0) {
    FUN_00095b4c(2,"src/buf.c",0x232,"pre-use of zlog_buf_resize fail, so can\'t convert");
    return 0xffffffff;
  }
  if ((param_7 == 0) || (param_3 < param_7)) {
    local_10 = param_3;
  }
  else {
    local_10 = param_7;
  }
  if ((param_6 == 0) || (param_6 <= local_10)) {
    local_c = local_10;
    local_14 = 0;
  }
  else {
    local_c = param_6;
    local_14 = param_6 - local_10;
  }
  if ((uint)(param_1[2] - param_1[1]) < local_c) {
    iVar1 = FUN_00096854(param_1,local_c - (param_1[2] - param_1[1]));
    if (0 < iVar1) {
      FUN_00095b4c(2,"src/buf.c",0x250,"conf limit to %ld, can\'t extend, so output",param_1[5]);
      uVar2 = param_1[2] - param_1[1];
      if (param_4 == 0) {
        if (local_14 < uVar2) {
          local_10 = uVar2 - local_14;
        }
        else {
          local_10 = 0;
          local_14 = uVar2;
        }
        if (local_14 != 0) {
          if (param_5 == 0) {
            memset((void *)param_1[1],0x20,local_14);
          }
          else {
            memset((void *)param_1[1],0x30,local_14);
          }
        }
        memcpy((void *)(param_1[1] + local_14),param_2,local_10);
      }
      else {
        if (local_10 < uVar2) {
          local_14 = uVar2 - local_10;
        }
        else {
          local_14 = 0;
          local_10 = uVar2;
        }
        if (local_14 != 0) {
          memset((void *)(param_1[1] + local_10),0x20,local_14);
        }
        memcpy((void *)param_1[1],param_2,local_10);
      }
      param_1[1] = param_1[1] + uVar2;
      FUN_000967b4(param_1);
      return 1;
    }
    if (iVar1 < 0) {
      FUN_00095b4c(2,"src/buf.c",0x270,"zlog_buf_resize fail");
      return 0xffffffff;
    }
  }
  if (param_4 == 0) {
    if (local_14 != 0) {
      if (param_5 == 0) {
        memset((void *)param_1[1],0x20,local_14);
      }
      else {
        memset((void *)param_1[1],0x30,local_14);
      }
    }
    memcpy((void *)(param_1[1] + local_14),param_2,local_10);
  }
  else {
    if (local_14 != 0) {
      memset((void *)(param_1[1] + local_10),0x20,local_14);
    }
    memcpy((void *)param_1[1],param_2,local_10);
  }
  param_1[1] = param_1[1] + local_c;
  return 0;
}

