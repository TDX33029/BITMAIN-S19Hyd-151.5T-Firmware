// FUN_0164322c @ 0164322c size=60 calls_out=2 calls_in=6
// strings: 

void FUN_0164322c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01965c98(param_2);
  if (iVar1 == 0) {
    FUN_016434e4(param_1,param_2);
    return;
  }
  *param_1 = 0x80000000;
  param_1[1] = iVar1;
  return;
}

