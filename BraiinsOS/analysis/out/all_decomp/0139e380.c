// FUN_0139e380 @ 0139e380 size=404 calls_out=5 calls_in=3
// strings: 

longlong FUN_0139e380(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     uint param_5)

{
  int iVar1;
  int iVar2;
  uint extraout_r1;
  longlong local_44;
  int local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = *param_1;
  if (((*(char *)(iVar1 + 0x15a) != '\x01') || (*(char *)(iVar1 + 0x15b) == '\0')) ||
     (iVar2 = *(int *)(*(int *)(iVar1 + 0x13c) + 0x10), (uint)(iVar2 << 1) <= param_5)) {
    FUN_013854ec(&local_38,param_1,param_2,param_3,param_4,param_5);
    if (local_38 == 0) {
      return (ulonglong)extraout_r1 << 0x20;
    }
    return CONCAT44(local_34,1);
  }
  if (*(int *)(iVar1 + 0x154) != 1) {
    FUN_005ff9d4(&local_38,iVar2 << 1);
    FUN_013854ec(&local_2c,param_1,param_2,param_3,local_34,local_30);
    if (local_30 < param_5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,param_5,local_30,&DAT_01893190);
    }
    FUN_016dd1aa(param_4,local_34,param_5 << 2);
    if (local_38 != 0) {
      thunk_FUN_016d3fb4(local_34,local_28);
    }
    return CONCAT44(local_28,local_2c);
  }
  local_34 = 0;
  local_38 = 0;
  FUN_013854ec(&local_44,param_1,param_2,param_3,&local_38,2);
  if (2 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,param_5,2,&DAT_01893180);
  }
  FUN_016dd1aa(param_4,&local_38,param_5 << 2);
  return local_44;
}

