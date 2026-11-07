// FUN_01650d2c @ 01650d2c size=80 calls_out=1 calls_in=1
// strings: 

void FUN_01650d2c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    FUN_01be6c3c(0xf0,param_1,0x80,1,0);
    iVar1 = *param_1;
    DataMemoryBarrier(0xb);
  }
  return;
}

