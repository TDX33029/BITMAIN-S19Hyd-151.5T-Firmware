// FUN_00f5eb14 @ 00f5eb14 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_00f5eb14(int *param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  
  DataMemoryBarrier(0xb);
  if ((*param_2 & 1) == 0) {
    FUN_00f5e6a4();
    return;
  }
  uVar1 = *param_2 & 0xfffffffe;
  FUN_016dd52c(uVar1,param_3,param_4);
  *param_1 = (param_3 - uVar1) + param_4;
  param_1[1] = uVar1;
  param_1[2] = param_4;
  return;
}

