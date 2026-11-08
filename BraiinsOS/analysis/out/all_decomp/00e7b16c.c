// FUN_00e7b16c @ 00e7b16c size=96 calls_out=1 calls_in=1
// strings: 

void FUN_00e7b16c(int param_1)

{
  undefined1 auStackY_a0 [128];
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_015eedc4(param_1 + 0x20,1,auStackY_a0 + 0x90,&DAT_0187aa60,&DAT_018ac9b8);
  return;
}

