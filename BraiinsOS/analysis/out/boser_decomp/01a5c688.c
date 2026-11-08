// FUN_01a5c688 @ 01a5c688 size=84 calls_out=2 calls_in=1
// strings: $__toml_private_Datetime

void FUN_01a5c688(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_3 == 0x18) &&
     (iVar1 = thunk_FUN_01bed842(param_2,"$__toml_private_Datetime",0x18), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 0x80000000;
    *(undefined4 *)(param_1 + 0x14) = 2;
    return;
  }
  FUN_01a4c5c8(param_1,param_4);
  return;
}

