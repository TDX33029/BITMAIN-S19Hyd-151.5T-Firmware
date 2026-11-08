// FUN_01b59b24 @ 01b59b24 size=176 calls_out=3 calls_in=3
// strings: aws_lc_0_39_0_Keccak1600_Squeeze | /aws-lc/crypto/fipsmodule/sha/keccak1600.c | r < (25 * sizeof(A[0][0])) && (r % 8) == 0

undefined8 FUN_01b59b24(undefined4 param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  
  if ((199 < param_4) || ((param_4 & 7) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("r < (25 * sizeof(A[0][0])) && (r % 8) == 0",
                 "/aws-lc/crypto/fipsmodule/sha/keccak1600.c",0x12a,
                 "aws_lc_0_39_0_Keccak1600_Squeeze");
  }
  for (; param_3 != 0; param_3 = param_3 - uVar1) {
    if (param_5 != 0) {
      FUN_01b598f0(param_1);
    }
    if (param_3 < param_4) {
      uVar1 = param_3;
    }
    else {
      uVar1 = param_4;
    }
    FUN_01b2283c(param_1,param_2,uVar1);
    param_2 = param_2 + uVar1;
    param_5 = 1;
  }
  return 0;
}

