// FUN_016d2ab4 @ 016d2ab4 size=32 calls_out=2 calls_in=1
// strings: 

void FUN_016d2ab4(void)

{
  undefined **ppuVar1;
  
  thunk_FUN_005b5090();
  for (ppuVar1 = (undefined **)&DAT_018bc3ec; ppuVar1 < &PTR_018bc3f4; ppuVar1 = ppuVar1 + 1) {
    (*(code *)*ppuVar1)();
  }
  return;
}

