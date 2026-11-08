// FUN_01b0cc3c @ 01b0cc3c size=40 calls_out=0 calls_in=2
// strings: 

uint FUN_01b0cc3c(uint param_1)

{
  return param_1 >> 2 & 0x3f3f3f3f | (param_1 & 0x3030303) << 6;
}

