// FUN_0139e1b0 @ 0139e1b0 size=420 calls_out=5 calls_in=3
// strings: 

void FUN_0139e1b0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  int local_30;
  int local_2c;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (((*(char *)(iVar1 + 0x15a) != '\x01') || (*(char *)(iVar1 + 0x15b) == '\0')) ||
     (iVar2 = *(int *)(*(int *)(iVar1 + 0x13c) + 0x10), (uint)(iVar2 << 1) <= param_6)) {
    FUN_01388ab8(&local_30);
    if (local_30 == 2) {
      local_30 = 2;
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
    return;
  }
  if (*(int *)(iVar1 + 0x154) != 1) {
    FUN_005ff9d4(&local_40,iVar2 << 1);
    FUN_01388ab8(&local_30,param_2,param_3,param_4,local_3c,local_38);
    if (local_30 == 2) {
      *param_1 = 2;
      param_1[1] = local_2c;
    }
    else {
      if (local_38 < param_6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,param_6,local_38,&DAT_018931c0);
      }
      FUN_016dd1aa(param_5,local_3c,param_6 << 2);
      *param_1 = local_30;
      param_1[1] = local_2c;
    }
    if (local_40 != 0) {
      thunk_FUN_016d3fb4(local_3c);
    }
    return;
  }
  local_3c = 0;
  local_40 = 0;
  piVar3 = &local_40;
  uVar4 = 2;
  FUN_01388ab8(&local_30);
  if (local_30 == 2) {
    *param_1 = 2;
    param_1[1] = local_2c;
    return;
  }
  if (2 < param_6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,param_6,2,&DAT_018931b0,piVar3,uVar4);
  }
  FUN_016dd1aa(param_5,&local_40,param_6 << 2);
  *param_1 = local_30;
  param_1[1] = local_2c;
  return;
}

