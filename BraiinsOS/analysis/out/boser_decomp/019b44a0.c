// FUN_019b44a0 @ 019b44a0 size=24 calls_out=2 calls_in=2
// strings: 

void FUN_019b44a0(undefined4 param_1)

{
  undefined1 uStack_1d;
  undefined1 *puStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  FUN_019b44b8();
  FUN_019b4530(param_1);
  DataMemoryBarrier(0xb);
  if (DAT_01d50338 == 0) {
    return;
  }
  uStack_14 = FUN_019b44b8;
  uStack_1d = 1;
  puStack_1c = &uStack_1d;
  iStack_18 = (int)register0x00000054 + -8;
  FUN_019a768c(&DAT_01d50338,0,&puStack_1c,&DAT_01d27cac,&DAT_01d277fc);
  return;
}

