// FUN_017943f4 @ 017943f4 size=108 calls_out=0 calls_in=3
// strings: 

uint FUN_017943f4(uint param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0x20U - LZCOUNT(param_2);
  if (0x21U - LZCOUNT(param_3) <= 0x20U - LZCOUNT(param_2)) {
    uVar2 = 0x21U - LZCOUNT(param_3);
  }
  uVar1 = 0x1d - LZCOUNT(param_2 + -1);
  if (param_1 == 0) {
    param_1 = 0xb;
  }
  if (param_1 <= uVar1) {
    uVar1 = param_1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar2;
  }
  if (0xb < uVar1) {
    uVar1 = 0xc;
  }
  if (uVar1 < 5) {
    uVar1 = 5;
  }
  return uVar1;
}

