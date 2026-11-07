// FUN_013f4f10 @ 013f4f10 size=128 calls_out=4 calls_in=3
// strings: asse

void FUN_013f4f10(int param_1,uint param_2)

{
  code *pcStack_18;
  uint uStack_14;
  
  if (param_2 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("asse",0x20,&DAT_01cf3520);
  }
  if (param_1 != 0) {
    pcStack_18 = FUN_01406da8;
    uStack_14 = param_2;
    FUN_01319ffc(param_1,&pcStack_18);
    return;
  }
  DataMemoryBarrier(0xb);
  if ((param_2 & 2) == 0) {
    FUN_01406bcc(*(undefined4 *)(param_2 & 0xfffffff8 | 4));
  }
  FUN_01403c00(param_2);
  return;
}

