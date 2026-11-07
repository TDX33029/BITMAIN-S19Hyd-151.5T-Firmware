// FUN_01b82770 @ 01b82770 size=132 calls_out=0 calls_in=3
// strings: 

uint FUN_01b82770(uint param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x20U - LZCOUNT(param_2);
  if (0x21U - LZCOUNT(param_3) <= 0x20U - LZCOUNT(param_2)) {
    uVar1 = 0x21U - LZCOUNT(param_3);
  }
  if (param_1 == 0) {
    param_1 = 0xb;
  }
  uVar2 = 0x1d - LZCOUNT(param_2 + -1);
  if (uVar2 <= param_1) {
    param_1 = uVar2;
  }
  if (param_1 < uVar1) {
    param_1 = uVar1;
  }
  if (0xb < param_1) {
    param_1 = 0xc;
  }
  if (param_1 < 5) {
    param_1 = 5;
  }
  return param_1;
}

