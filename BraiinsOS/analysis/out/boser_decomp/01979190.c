// FUN_01979190 @ 01979190 size=32 calls_out=2 calls_in=1
// strings: 

void FUN_01979190(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  FUN_01978fc4(uVar1);
  thunk_FUN_01be4678(uVar1);
  return;
}

