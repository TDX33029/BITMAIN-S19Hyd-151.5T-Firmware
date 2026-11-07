// FUN_00b96490 @ 00b96490 size=64 calls_out=4 calls_in=4
// strings: 

void FUN_00b96490(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  FUN_006f6468(uVar1,*(undefined4 *)(param_1 + 0x10));
  FUN_0134aee0(*(undefined4 *)(param_1 + 8),uVar1,8,0x70);
  FUN_00b96a8c(param_1 + 0x14);
  FUN_006b39d0(param_1 + 0x20);
  return;
}

