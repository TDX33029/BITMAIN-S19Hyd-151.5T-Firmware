// FUN_012c5464 @ 012c5464 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_012c5464(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_012c4d2c(param_2);
  if (iVar1 == 0) {
    FUN_012c658c(param_1,param_2);
    return;
  }
  *param_1 = 0x80000000;
  param_1[1] = iVar1;
  return;
}

