// FUN_016e046a @ 016e046a size=32 calls_out=1 calls_in=1
// strings: 

void FUN_016e046a(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  
  piVar1 = (int *)(undefined1 *)0x0;
  if (param_3 != (int *)0x0) {
    local_c = 0;
    local_18 = *param_3;
    local_10 = param_3[1];
    local_14 = local_18 >> 0x1f;
    piVar1 = &local_18;
  }
  FUN_016da3d8(param_1,param_2,piVar1);
  return;
}

