// FUN_01741078 @ 01741078 size=96 calls_out=2 calls_in=1
// strings: 

bool FUN_01741078(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0177aafc(param_1[2]);
  iVar1 = FUN_0177b624(param_2,*(undefined4 *)(*param_1 + 0x14));
  param_1[2] = iVar1;
  return iVar1 != 0;
}

