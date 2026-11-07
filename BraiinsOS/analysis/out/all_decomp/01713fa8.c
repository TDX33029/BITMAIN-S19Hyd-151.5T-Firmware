// FUN_01713fa8 @ 01713fa8 size=128 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_01713fa8(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 & 0xffffffbf) != 0x80 && param_2 != 0x100) {
    return 0xfffffffe;
  }
  if ((DAT_018dfe48 & 4) != 0) {
    uVar1 = FUN_01783f80();
    return uVar1;
  }
  if ((DAT_018dfe48 & 1) == 0) {
    uVar1 = FUN_01711bf8();
    return uVar1;
  }
  uVar1 = FUN_0178c460();
  return uVar1;
}

