// FUN_01406da8 @ 01406da8 size=52 calls_out=2 calls_in=0
// strings: 

void FUN_01406da8(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  DataMemoryBarrier(0xb);
  if ((uVar1 & 2) == 0) {
    FUN_01406bcc(*(undefined4 *)(uVar1 & 0xfffffff8 | 4));
  }
  FUN_01403c00(uVar1);
  return;
}

