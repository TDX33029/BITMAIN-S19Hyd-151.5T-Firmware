// FUN_015dfee0 @ 015dfee0 size=80 calls_out=0 calls_in=2
// strings: 

uint FUN_015dfee0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0xffff;
  if (uVar2 < 0x21) {
    uVar1 = 0;
    if ((uVar2 < 0x1d) && ((1 << (param_1 & 0xff) & 0x10013022U) != 0)) {
      uVar1 = param_1;
    }
    return uVar1;
  }
  if ((uVar2 == 0x21 || uVar2 == 0xff) || (uVar2 == 0x2f)) {
    return param_1;
  }
  return 0;
}

