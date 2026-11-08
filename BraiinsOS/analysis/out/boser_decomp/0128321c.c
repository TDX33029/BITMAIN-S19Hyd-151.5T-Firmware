// FUN_0128321c @ 0128321c size=92 calls_out=2 calls_in=0
// strings: 

void FUN_0128321c(int *param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = *param_2;
  DataMemoryBarrier(0xb);
  if ((uVar1 & 1) == 0) {
    FUN_01282f28(param_1,uVar1,param_3,param_4);
    return;
  }
  uVar1 = uVar1 & 0xfffffffe;
  FUN_01bed864(uVar1,param_3,param_4);
  param_1[2] = param_4;
  *param_1 = (param_4 + param_3) - uVar1;
  param_1[1] = uVar1;
  return;
}

