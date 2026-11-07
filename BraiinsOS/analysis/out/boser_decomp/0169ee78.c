// FUN_0169ee78 @ 0169ee78 size=424 calls_out=5 calls_in=3
// strings: 

void FUN_0169ee78(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  int local_30;
  int local_2c;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (((*(char *)(iVar1 + 0x15a) == '\x01') && (*(char *)(iVar1 + 0x15b) != '\0')) &&
     (iVar2 = *(int *)(*(int *)(iVar1 + 0x13c) + 0x10), param_6 < (uint)(iVar2 << 1))) {
    if (*(int *)(iVar1 + 0x154) == 1) {
      local_3c = 0;
      local_40 = 0;
      FUN_016b9924(&local_30,param_2,param_3,param_4,&local_40,2);
      if (local_30 == 2) {
        *param_1 = 2;
      }
      else {
        if (2 < param_6) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,param_6,2,&DAT_01d07d3c);
        }
        FUN_01bed4e2(param_5,&local_40,param_6 << 2);
        *param_1 = local_30;
      }
      param_1[1] = local_2c;
    }
    else {
      FUN_016c1488(&local_40,iVar2 << 1);
      FUN_016b9924(&local_30,param_2,param_3,param_4,local_3c,local_38);
      if (local_30 == 2) {
        *param_1 = 2;
        param_1[1] = local_2c;
      }
      else {
        if (local_38 < param_6) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,param_6,local_38,&DAT_01d07d4c);
        }
        FUN_01bed4e2(param_5,local_3c,param_6 << 2);
        *param_1 = local_30;
        param_1[1] = local_2c;
      }
      FUN_0134aee0(local_40,local_3c,4,4);
    }
  }
  else {
    FUN_016b9924(&local_30,param_2,param_3,param_4,param_5,param_6);
    if (local_30 == 2) {
      local_30 = 2;
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
  }
  return;
}

