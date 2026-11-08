// FUN_01551720 @ 01551720 size=96 calls_out=1 calls_in=1
// strings: 

void FUN_01551720(int param_1)

{
  undefined1 auStackY_a0 [128];
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0x70) == 0) {
    return;
  }
  FUN_019a768c(param_1 + 0x70,1,auStackY_a0 + 0x90,&DAT_01cfb8ec,&DAT_01d293e0);
  return;
}

