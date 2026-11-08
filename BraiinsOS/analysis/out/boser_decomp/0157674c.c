// FUN_0157674c @ 0157674c size=56 calls_out=1 calls_in=3
// strings: 

void FUN_0157674c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  iVar1 = param_1[3];
  *param_1 = 4;
  param_1[1] = 4;
  param_1[2] = 0;
  param_1[3] = 4;
  FUN_01574908(iVar2,((uint)(iVar1 - iVar2) >> 2) * -0x55555555);
  return;
}

