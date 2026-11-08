// FUN_0157487c @ 0157487c size=76 calls_out=2 calls_in=1
// strings: 

void FUN_0157487c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 4) + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_014feec4(iVar1);
    iVar1 = iVar1 + 0x10;
  }
  FUN_01af7af8(param_1[2],*param_1,4,0x10);
  return;
}

