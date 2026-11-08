// FUN_01832864 @ 01832864 size=120 calls_out=1 calls_in=2
// strings: Invalid flags | Declassify flag requires running with memory checking

undefined8 FUN_01832864(uint param_1)

{
  if ((param_1 & 0xff) == 1) {
    if ((param_1 & 0x400) == 0) {
      return 0xb4;
    }
    FUN_015786e4("Declassify flag requires running with memory checking",0);
  }
  else {
    FUN_015786e4("Invalid flags",0);
  }
  return 0;
}

