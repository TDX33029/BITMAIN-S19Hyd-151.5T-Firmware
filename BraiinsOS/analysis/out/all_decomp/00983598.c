// FUN_00983598 @ 00983598 size=160 calls_out=3 calls_in=0
// strings: 

void FUN_00983598(undefined4 param_1)

{
  undefined4 **ppuVar1;
  undefined4 *local_2c;
  undefined4 **local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_015f3b0c(&local_28,1);
  ppuVar1 = local_28;
  DataMemoryBarrier(0xb);
  if (DAT_018daad0 != 0) {
    local_28 = &local_2c;
    local_2c = &DAT_018daad0;
    FUN_015eedc4(&DAT_018daad0,1,&local_28,&DAT_018590cc,&DAT_018ac9b8);
  }
  FUN_006f8940(param_1,DAT_018daadc,ppuVar1,uStack_24,uStack_20,DAT_018daad8,DAT_018daadc);
  return;
}

