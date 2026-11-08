// FUN_016d78c6 @ 016d78c6 size=6 calls_out=0 calls_in=2
// strings: 

uint FUN_016d78c6(uint param_1)

{
  return (param_1 & 0xff) << 8 | param_1 >> 8 & 0xff;
}

