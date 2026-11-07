// FUN_011f6248 @ 011f6248 size=96 calls_out=1 calls_in=146
// strings: 

void FUN_011f6248(int param_1)

{
  undefined1 auStackY_a0 [128];
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  FUN_015eedc4(param_1 + 8,1,auStackY_a0 + 0x90,&DAT_0188a54c,&DAT_018ac9b8);
  return;
}

