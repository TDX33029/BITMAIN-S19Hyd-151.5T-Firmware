// FUN_0070357c @ 0070357c size=56 calls_out=1 calls_in=2
// strings: 

void FUN_0070357c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  iVar1 = param_1[3];
  *param_1 = 8;
  param_1[1] = 8;
  param_1[2] = 0;
  param_1[3] = 8;
  FUN_007034a4(iVar2,((uint)(iVar1 - iVar2) >> 4) * -0x55555555);
  return;
}

