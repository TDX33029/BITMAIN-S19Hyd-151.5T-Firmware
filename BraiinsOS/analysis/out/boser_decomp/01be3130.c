// FUN_01be3130 @ 01be3130 size=32 calls_out=2 calls_in=1
// strings: 

void FUN_01be3130(void)

{
  undefined **ppuVar1;
  
  thunk_FUN_005cfecc();
  for (ppuVar1 = (undefined **)&DAT_01d3b2a8; ppuVar1 < &PTR_01d3b2b0; ppuVar1 = ppuVar1 + 1) {
    (*(code *)*ppuVar1)();
  }
  return;
}

