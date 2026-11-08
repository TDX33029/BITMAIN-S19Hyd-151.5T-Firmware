// FUN_01b87828 @ 01b87828 size=68 calls_out=0 calls_in=2
// strings: 

int FUN_01b87828(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (0xff00feff < param_1) {
    return -0x48;
  }
  if (param_1 < 0x20000) {
    uVar1 = 0x20000 - param_1 >> 0xb;
  }
  else {
    uVar1 = 0;
  }
  iVar2 = param_1 + (param_1 >> 8) + uVar1;
  if (iVar2 == 0) {
    iVar2 = -0x48;
  }
  return iVar2;
}

