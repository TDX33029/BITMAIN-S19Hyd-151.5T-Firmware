// FUN_01550b0c @ 01550b0c size=96 calls_out=1 calls_in=2
// strings: 

void FUN_01550b0c(int param_1)

{
  undefined1 auStackY_a0 [128];
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0xa8) == 0) {
    return;
  }
  FUN_019a768c(param_1 + 0xa8,1,auStackY_a0 + 0x90,&DAT_01cfb978,&DAT_01d293e0);
  return;
}

