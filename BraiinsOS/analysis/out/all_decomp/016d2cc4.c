// FUN_016d2cc4 @ 016d2cc4 size=36 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_016d2cc4(undefined4 param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_018bc3e0;
  while (&DAT_018bc3d4 < ppuVar1) {
    ppuVar1 = ppuVar1 + -1;
    param_1 = (*(code *)*ppuVar1)();
  }
  return param_1;
}

