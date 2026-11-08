// FUN_0070044c @ 0070044c size=96 calls_out=1 calls_in=1
// strings: 

void FUN_0070044c(int param_1)

{
  undefined1 auStackY_a0 [128];
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_015eedc4(param_1 + 0x10,1,auStackY_a0 + 0x90,&DAT_018598d8,&DAT_018ac9b8);
  return;
}

