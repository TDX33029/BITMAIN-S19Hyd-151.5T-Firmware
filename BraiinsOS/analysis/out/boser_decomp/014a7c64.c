// FUN_014a7c64 @ 014a7c64 size=136 calls_out=4 calls_in=8
// strings: $serde_json::private::RawValue

void FUN_014a7c64(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_1c [3];
  
  if (*param_1 == 1) {
    if (param_3 == 0x1e) {
      thunk_FUN_01bed842(param_2,"$serde_json::private::RawValue",0x1e);
    }
    local_1c[0] = 10;
    FUN_01966fbc(local_1c,0,0);
  }
  else {
    iVar1 = FUN_007025b0(param_1);
    if (iVar1 == 0) {
      FUN_014a752c(param_1,param_4);
      return;
    }
  }
  return;
}

