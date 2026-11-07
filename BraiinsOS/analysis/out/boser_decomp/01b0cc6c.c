// FUN_01b0cc6c @ 01b0cc6c size=40 calls_out=0 calls_in=2
// strings: 

uint FUN_01b0cc6c(uint param_1)

{
  return param_1 >> 4 & 0xf0f0f0f | (param_1 & 0xf0f0f0f) << 4;
}

