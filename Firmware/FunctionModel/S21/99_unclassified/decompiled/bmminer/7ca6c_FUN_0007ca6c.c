// FUN_0007ca6c @ 0007ca6c  size=612  callers=1
// program: bmminer


int FUN_0007ca6c(int param_1,uint param_2,undefined4 param_3)

{
  void *pvVar1;
  int iVar2;
  size_t local_18;
  int local_14;
  void *local_10;
  int local_c;
  
  local_c = FUN_0007ea04();
  if (local_c == 0) {
    local_c = 0;
  }
  else {
    FUN_0007c678(param_1,param_3);
    if (*(int *)(param_1 + 0x3c) != 0x7d) {
      while (*(int *)(param_1 + 0x3c) == 0x100) {
        local_10 = (void *)FUN_0007c938(param_1,&local_18);
        if (local_10 == (void *)0x0) {
          return 0;
        }
        pvVar1 = memchr(local_10,0,local_18);
        if (pvVar1 != (void *)0x0) {
          FUN_0007d8e8(local_10);
          FUN_0007b2bc(param_3,param_1,0xd,"NUL byte in object key not supported");
          goto LAB_0007ccb8;
        }
        if (((param_2 & 1) != 0) && (iVar2 = FUN_0007eb20(local_c,local_10), iVar2 != 0)) {
          FUN_0007d8e8(local_10);
          FUN_0007b2bc(param_3,param_1,0xe,"duplicate object key");
          goto LAB_0007ccb8;
        }
        FUN_0007c678(param_1,param_3);
        if (*(int *)(param_1 + 0x3c) != 0x3a) {
          FUN_0007d8e8(local_10);
          FUN_0007b2bc(param_3,param_1,8,"\':\' expected");
          goto LAB_0007ccb8;
        }
        FUN_0007c678(param_1,param_3);
        local_14 = FUN_0007cdf8(param_1,param_2,param_3);
        if (local_14 == 0) {
          FUN_0007d8e8(local_10);
          goto LAB_0007ccb8;
        }
        iVar2 = FUN_0007eb90(local_c,local_10,local_14);
        if (iVar2 != 0) {
          FUN_0007d8e8(local_10);
          goto LAB_0007ccb8;
        }
        FUN_0007d8e8(local_10);
        FUN_0007c678(param_1,param_3);
        if (*(int *)(param_1 + 0x3c) != 0x2c) {
          if (*(int *)(param_1 + 0x3c) == 0x7d) {
            return local_c;
          }
          FUN_0007b2bc(param_3,param_1,8,"\'}\' expected");
          goto LAB_0007ccb8;
        }
        FUN_0007c678(param_1,param_3);
      }
      FUN_0007b2bc(param_3,param_1,8,"string or \'}\' expected");
LAB_0007ccb8:
      FUN_0007b254(local_c);
      local_c = 0;
    }
  }
  return local_c;
}

