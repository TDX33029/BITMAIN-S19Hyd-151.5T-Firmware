// FUN_01740f18 @ 01740f18 size=96 calls_out=2 calls_in=2
// strings: 

bool FUN_01740f18(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0177aafc(param_1[1]);
  iVar1 = FUN_0177b624(param_2,*(undefined4 *)(*param_1 + 0x10));
  param_1[1] = iVar1;
  return iVar1 != 0;
}

