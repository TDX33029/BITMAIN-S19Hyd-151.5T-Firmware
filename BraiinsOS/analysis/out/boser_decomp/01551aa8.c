// FUN_01551aa8 @ 01551aa8 size=100 calls_out=1 calls_in=1
// strings: 

void FUN_01551aa8(int param_1)

{
  undefined1 auStackY_a8 [128];
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  FUN_019a768c(param_1 + 8,1,auStackY_a8 + 0x98,&DAT_01cfb964,&DAT_01d293e0);
  return;
}

