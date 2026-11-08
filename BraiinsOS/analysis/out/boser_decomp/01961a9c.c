// FUN_01961a9c @ 01961a9c size=68 calls_out=2 calls_in=9
// strings: 

void FUN_01961a9c(uint param_1,int param_2)

{
  short *psVar1;
  
  if (param_1 == 0xffffffff) {
    if (param_2 == -1) {
      return;
    }
  }
  else if (param_1 < 0x80000000) {
    return;
  }
  psVar1 = (short *)(param_1 * 2);
  if (*psVar1 < 0) {
    FUN_019618d0(psVar1);
  }
  thunk_FUN_01be4678(psVar1);
  return;
}

