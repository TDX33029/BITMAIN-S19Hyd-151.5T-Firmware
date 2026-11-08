// FUN_01b6bc20 @ 01b6bc20 size=84 calls_out=2 calls_in=11
// strings: 

int FUN_01b6bc20(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_01b6ad8c(param_2);
    if (iVar1 != 0) {
      FUN_01b6b06c(iVar1,param_1,param_2);
    }
  }
  return iVar1;
}

