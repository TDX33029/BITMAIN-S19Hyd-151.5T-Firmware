// FUN_012055d0 @ 012055d0 size=96 calls_out=1 calls_in=2
// strings: 

void FUN_012055d0(int param_1)

{
  undefined1 auStackY_a0 [128];
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0xa8) == 0) {
    return;
  }
  FUN_015eedc4(param_1 + 0xa8,1,auStackY_a0 + 0x90,&DAT_0188a5c4,&DAT_018ac9b8);
  return;
}

