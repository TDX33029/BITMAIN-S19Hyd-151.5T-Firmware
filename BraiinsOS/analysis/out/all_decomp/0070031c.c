// FUN_0070031c @ 0070031c size=96 calls_out=1 calls_in=2
// strings: 

void FUN_0070031c(int param_1)

{
  undefined1 auStackY_a0 [128];
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_015eedc4(param_1 + 0x20,1,auStackY_a0 + 0x90,&DAT_01859900,&DAT_018ac9b8);
  return;
}

