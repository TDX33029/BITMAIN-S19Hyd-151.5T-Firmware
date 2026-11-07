// FUN_01b4d014 @ 01b4d014 size=84 calls_out=2 calls_in=1
// strings: 

bool FUN_01b4d014(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_01b6b1c4(param_1[2]);
  iVar1 = FUN_01b6bc20(param_2,*(undefined4 *)(*param_1 + 0x14));
  param_1[2] = iVar1;
  return iVar1 != 0;
}

