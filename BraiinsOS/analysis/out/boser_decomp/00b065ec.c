// FUN_00b065ec @ 00b065ec size=96 calls_out=1 calls_in=65
// strings: 

void FUN_00b065ec(int param_1)

{
  undefined1 auStackY_a0 [128];
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_019a768c(param_1 + 0x10,1,auStackY_a0 + 0x90,&DAT_01c10b74,&DAT_01d293e0);
  return;
}

