// FUN_01406d34 @ 01406d34 size=48 calls_out=3 calls_in=0
// strings: 

void FUN_01406d34(uint *param_1)

{
  uint uVar1;
  
  DataMemoryBarrier(0xb);
  uVar1 = *param_1 & 0xfffffff8;
  if ((*param_1 & 2) == 0) {
    FUN_01406d64(uVar1);
  }
  FUN_019bb7e0(*(undefined4 *)(uVar1 + 0x20),*(undefined4 *)(uVar1 + 0x24));
  thunk_FUN_01be4678(uVar1);
  return;
}

