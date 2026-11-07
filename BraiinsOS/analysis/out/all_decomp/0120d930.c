// FUN_0120d930 @ 0120d930 size=100 calls_out=1 calls_in=1
// strings: 

void FUN_0120d930(int param_1)

{
  undefined1 auStackY_a8 [128];
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  FUN_015eedc4(param_1 + 8,1,auStackY_a8 + 0x98,&DAT_0188a5b0,&DAT_018ac9b8);
  return;
}

