// FUN_01278d88 @ 01278d88 size=44 calls_out=1 calls_in=2
// strings: 

void FUN_01278d88(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = param_2 * 0x11 + 0x14U & 0xfffffffc;
  if (param_2 + uVar1 == -5) {
    return;
  }
  thunk_FUN_01be4678(param_1 - uVar1);
  return;
}

