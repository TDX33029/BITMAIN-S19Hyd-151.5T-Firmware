// FUN_0169ecb8 @ 0169ecb8 size=404 calls_out=5 calls_in=3
// strings: 

void FUN_0169ecb8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6)

{
  int iVar1;
  int iVar2;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  
  iVar1 = *(int *)(param_2 + 0x24);
  if (((*(char *)(iVar1 + 0x15a) != '\x01') || (*(char *)(iVar1 + 0x15b) == '\0')) ||
     (iVar2 = *(int *)(*(int *)(iVar1 + 0x13c) + 0x10), (uint)(iVar2 << 1) <= param_6)) {
    FUN_016b551c(param_1,param_2,param_3,param_4);
    return;
  }
  if (*(int *)(iVar1 + 0x154) == 1) {
    local_2c = 0;
    local_30 = 0;
    FUN_016b551c(&local_3c,param_2,param_3,param_4,&local_30,2);
    if (local_3c == 2) {
      *param_1 = 2;
      param_1[1] = local_38;
    }
    else {
      if (2 < param_6) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,param_6,2,&DAT_01d07cec);
      }
      FUN_01bed4e2(param_5,&local_30,param_6 << 2);
      *param_1 = local_3c;
      param_1[1] = local_38;
    }
  }
  else {
    FUN_016c1488(&local_3c,iVar2 << 1);
    FUN_016b551c(&local_30,param_2,param_3,param_4,local_38,local_34);
    if (local_30 == 2) {
      local_30 = 2;
    }
    else {
      if (local_34 < param_6) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,param_6,local_34,&DAT_01d07cfc);
      }
      FUN_01bed4e2(param_5,local_38,param_6 << 2);
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
    FUN_0134aee0(local_3c,local_38,4,4);
  }
  return;
}

