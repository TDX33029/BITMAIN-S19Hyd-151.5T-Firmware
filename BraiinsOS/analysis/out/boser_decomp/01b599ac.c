// FUN_01b599ac @ 01b599ac size=144 calls_out=3 calls_in=2
// strings: aws_lc_0_39_0_Keccak1600_Absorb | /aws-lc/crypto/fipsmodule/sha/keccak1600.c | r < (25 * sizeof(A[0][0])) && (r % 8) == 0

void FUN_01b599ac(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  if ((199 < param_4) || ((param_4 & 7) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("r < (25 * sizeof(A[0][0])) && (r % 8) == 0",
                 "/aws-lc/crypto/fipsmodule/sha/keccak1600.c",0xfc,"aws_lc_0_39_0_Keccak1600_Absorb"
                );
  }
  param_3 = param_2 + param_3;
  for (; param_4 <= (uint)(param_3 - param_2); param_2 = param_2 + param_4) {
    FUN_01b1eeb4(param_1,param_2,param_4);
    FUN_01b598f0(param_1);
  }
  return;
}

