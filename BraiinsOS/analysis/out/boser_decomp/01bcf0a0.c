// FUN_01bcf0a0 @ 01bcf0a0 size=72 calls_out=0 calls_in=1
// strings: 

uint FUN_01bcf0a0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_1 ^ param_1 >> 6) & 0xcc00cc;
  uVar2 = param_1 ^ uVar1 ^ uVar1 << 6;
  uVar1 = (uVar2 ^ uVar2 >> 0xc) & 0xf0f0;
  return uVar2 ^ uVar1 ^ uVar1 << 0xc;
}

