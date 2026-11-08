// FUN_00e7b2b4 @ 00e7b2b4 size=96 calls_out=1 calls_in=1
// strings: 

void FUN_00e7b2b4(int param_1)

{
  undefined1 auStackY_a0 [128];
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_015eedc4(param_1 + 0x20,1,auStackY_a0 + 0x90,&DAT_0187aa74,&DAT_018ac9b8);
  return;
}

