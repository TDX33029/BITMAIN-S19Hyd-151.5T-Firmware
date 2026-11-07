// FUN_0120d654 @ 0120d654 size=96 calls_out=1 calls_in=1
// strings: 

void FUN_0120d654(int param_1)

{
  undefined1 auStackY_a0 [128];
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0x70) == 0) {
    return;
  }
  FUN_015eedc4(param_1 + 0x70,1,auStackY_a0 + 0x90,&DAT_0188a560,&DAT_018ac9b8);
  return;
}

