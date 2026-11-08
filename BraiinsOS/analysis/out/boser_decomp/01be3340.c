// FUN_01be3340 @ 01be3340 size=36 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01be3340(undefined4 param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_01d3b29c;
  while (&DAT_01d3b290 < ppuVar1) {
    ppuVar1 = ppuVar1 + -1;
    param_1 = (*(code *)*ppuVar1)();
  }
  return param_1;
}

