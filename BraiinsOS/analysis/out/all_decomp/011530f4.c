// FUN_011530f4 @ 011530f4 size=112 calls_out=0 calls_in=3
// strings: 

uint FUN_011530f4(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (0x1f < (param_1 & 0xff) - 0xc0) {
    uVar1 = param_1 & 0xff;
    if (0x8f < uVar1) {
      if (uVar1 == 0x90) {
        return param_2 & 0xf | 0xffffff90;
      }
      if (uVar1 == 0xa0) {
        return param_2 & 0x1f | 0xffffffa0;
      }
      return param_2;
    }
    param_1 = param_2;
    if (uVar1 != 0) {
      return param_2 & 0xf | 0xffffff80;
    }
  }
  return param_1;
}

