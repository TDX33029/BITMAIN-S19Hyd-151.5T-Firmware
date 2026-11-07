// FUN_01bc5734 @ 01bc5734 size=52 calls_out=0 calls_in=3
// strings: 

uint FUN_01bc5734(uint param_1)

{
  if (param_1 < 0x80) {
    return (uint)(byte)(&DAT_005637bc)[param_1];
  }
  return 0x43 - LZCOUNT(param_1);
}

