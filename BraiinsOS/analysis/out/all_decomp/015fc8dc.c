// FUN_015fc8dc @ 015fc8dc size=24 calls_out=2 calls_in=2
// strings: 

void FUN_015fc8dc(undefined4 param_1)

{
  undefined1 uStack_1d;
  undefined1 *puStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  FUN_015fc8f4();
  FUN_015fc96c(param_1);
  DataMemoryBarrier(0xb);
  if (DAT_018d9088 == 0) {
    return;
  }
  uStack_14 = FUN_015fc8f4;
  uStack_1d = 1;
  puStack_1c = &uStack_1d;
  iStack_18 = (int)register0x00000054 + -8;
  FUN_015eedc4(&DAT_018d9088,0,&puStack_1c,&DAT_018ab088,&DAT_018aabfc);
  return;
}

