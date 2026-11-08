// FUN_01753f4c @ 01753f4c size=180 calls_out=3 calls_in=5
// strings: aws_lc_0_39_0_Keccak1600_Absorb | /aws-lc/crypto/fipsmodule/sha/keccak1600.c | r < (25 * sizeof(A[0][0])) && (r % 8) == 0

uint FUN_01753f4c(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  if ((199 < param_4) || ((param_4 & 7) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("r < (25 * sizeof(A[0][0])) && (r % 8) == 0",
                 "/aws-lc/crypto/fipsmodule/sha/keccak1600.c",0xfc,"aws_lc_0_39_0_Keccak1600_Absorb"
                );
  }
  if (param_3 < param_4) {
    return param_3;
  }
  iVar2 = param_2;
  do {
    FUN_01703d30(param_1,iVar2,param_4);
    FUN_01753e90(param_1);
    uVar1 = (param_2 + param_3) - (iVar2 + param_4);
    iVar2 = iVar2 + param_4;
  } while (param_4 <= uVar1);
  return uVar1;
}

