// FUN_0140344c @ 0140344c size=76 calls_out=2 calls_in=1
// strings: 

void FUN_0140344c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 3) + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_014034d8(iVar1);
    iVar1 = iVar1 + 8;
  }
  FUN_01af7af8(param_1[2],*param_1,4,8);
  return;
}

