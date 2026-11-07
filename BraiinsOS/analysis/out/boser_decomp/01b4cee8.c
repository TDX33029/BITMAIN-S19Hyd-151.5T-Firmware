// FUN_01b4cee8 @ 01b4cee8 size=84 calls_out=2 calls_in=1
// strings: 

bool FUN_01b4cee8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_01b6b1c4(param_1[1]);
  iVar1 = FUN_01b6bc20(param_2,*(undefined4 *)(*param_1 + 0x10));
  param_1[1] = iVar1;
  return iVar1 != 0;
}

