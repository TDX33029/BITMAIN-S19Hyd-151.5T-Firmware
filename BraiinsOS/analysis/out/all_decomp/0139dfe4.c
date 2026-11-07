// FUN_0139dfe4 @ 0139dfe4 size=416 calls_out=5 calls_in=3
// strings: 

void FUN_0139dfe4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  
  iVar2 = *(int *)(param_2 + 0x24);
  if (((*(char *)(iVar2 + 0x15a) != '\x01') || (*(char *)(iVar2 + 0x15b) == '\0')) ||
     (iVar1 = *(int *)(*(int *)(iVar2 + 0x13c) + 0x10), (uint)(iVar1 << 1) <= param_6)) {
    FUN_013b8ef4();
    return;
  }
  if (*(int *)(iVar2 + 0x154) != 1) {
    FUN_005ff9d4(&local_3c,iVar1 << 1);
    FUN_013b8ef4(&local_30,param_2,param_3,param_4,local_38,local_34);
    if (local_30 == 2) {
      *param_1 = 2;
      param_1[1] = local_2c;
    }
    else {
      if (local_34 < param_6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,param_6,local_34,&DAT_01893170);
      }
      FUN_016dd1aa(param_5,local_38,param_6 << 2);
      *param_1 = local_30;
      param_1[1] = local_2c;
    }
    if (local_3c != 0) {
      thunk_FUN_016d3fb4(local_38);
    }
    return;
  }
  local_2c = 0;
  local_30 = 0;
  piVar3 = &local_30;
  uVar4 = 2;
  FUN_013b8ef4(&local_3c);
  if (local_3c == 2) {
    *param_1 = 2;
    param_1[1] = local_38;
    return;
  }
  if (2 < param_6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,param_6,2,&DAT_01893160,piVar3,uVar4);
  }
  FUN_016dd1aa(param_5,&local_30,param_6 << 2);
  *param_1 = local_3c;
  param_1[1] = local_38;
  return;
}

