// FUN_00068360 @ 00068360  size=108  callers=5
// program: bmminer


undefined4 FUN_00068360(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  if (param_1 == (undefined4 *)0x0) {
    local_c = 0;
  }
  else {
    iVar1 = FUN_00068cd4(*param_1,param_2);
    if (iVar1 != 0) {
      local_c = 1;
    }
  }
  return local_c;
}

