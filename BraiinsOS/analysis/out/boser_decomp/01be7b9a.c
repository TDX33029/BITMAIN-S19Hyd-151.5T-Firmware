// FUN_01be7b9a @ 01be7b9a size=6 calls_out=0 calls_in=2
// strings: 

uint FUN_01be7b9a(uint param_1)

{
  return (param_1 & 0xff) << 8 | param_1 >> 8 & 0xff;
}

