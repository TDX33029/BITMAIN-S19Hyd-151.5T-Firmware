// FUN_01b2089c @ 01b2089c size=72 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_01b2089c(uint param_1)

{
  undefined4 uVar1;
  
  if (0x29f < param_1) {
    return 6;
  }
  if (0xef < param_1) {
    return 5;
  }
  if (0x4f < param_1) {
    return 4;
  }
  if (param_1 < 0x18) {
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

