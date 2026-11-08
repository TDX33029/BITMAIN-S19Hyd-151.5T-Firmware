// FUN_01b29930 @ 01b29930 size=72 calls_out=0 calls_in=1
// strings: 

uint FUN_01b29930(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_1 ^ param_1 >> 0xc) & 0xf0f0;
  uVar2 = param_1 ^ uVar1 ^ uVar1 << 0xc;
  uVar1 = (uVar2 ^ uVar2 >> 6) & 0xcc00cc;
  return uVar2 ^ uVar1 ^ uVar1 << 6;
}

