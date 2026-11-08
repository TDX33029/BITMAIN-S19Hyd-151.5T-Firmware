// FUN_01b2adf0 @ 01b2adf0 size=88 calls_out=1 calls_in=1
// strings: 

bool FUN_01b2adf0(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = FUN_01b2adb8();
    *param_1 = iVar1;
    return iVar1 != 0;
  }
  return *param_1 != 0;
}

