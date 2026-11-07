// FUN_016eaf14 @ 016eaf14 size=68 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_016eaf14(uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  if ((0x1c < param_1 - 0x23) || ((1 << (param_1 - 0x23 & 0xff) & 0x10000debU) == 0)) {
    uVar1 = param_1 - 0x7b;
    bVar2 = uVar1 == 4;
    if (3 < uVar1) {
      param_1 = param_1 - 0x5b;
      bVar2 = param_1 == 3;
    }
    if ((3 < uVar1 && 2 < param_1) && !bVar2) {
      return 0;
    }
  }
  return 1;
}

