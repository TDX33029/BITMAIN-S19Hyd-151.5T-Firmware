// FUN_007178bc @ 007178bc size=140 calls_out=0 calls_in=1
// strings: 

bool FUN_007178bc(uint param_1,uint param_2)

{
  uint uVar1;
  
  param_1 = param_1 & 0xffff;
  if (param_1 < 0x38) {
    if (((param_1 - 0x10 < 0x1d) && ((1 << (param_1 - 0x10 & 0xff) & 0x14000201U) != 0)) ||
       (param_1 == 2)) {
      return true;
    }
    return false;
  }
  uVar1 = param_1 - 0x38;
  if (uVar1 < 0x1e) {
    if ((1 << (uVar1 & 0xff) & 0x20254900U) != 0) {
      return true;
    }
    if (uVar1 == 0) {
      return (param_2 & 0xfffe) == 2;
    }
  }
  return param_1 == 0x79;
}

