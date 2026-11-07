// FUN_0175400c @ 0175400c size=240 calls_out=3 calls_in=3
// strings: aws_lc_0_39_0_Keccak1600_Squeeze | /aws-lc/crypto/fipsmodule/sha/keccak1600.c | r < (25 * sizeof(A[0][0])) && (r % 8) == 0

undefined8 FUN_0175400c(undefined4 param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  int extraout_r1;
  uint uVar2;
  
  if ((199 < param_4) || ((param_4 & 7) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("r < (25 * sizeof(A[0][0])) && (r % 8) == 0",
                 "/aws-lc/crypto/fipsmodule/sha/keccak1600.c",0x12a,
                 "aws_lc_0_39_0_Keccak1600_Squeeze");
  }
  if (param_3 == 0) {
    return CONCAT44(param_2,param_1);
  }
  iVar1 = param_2;
  if (param_5 != 0) goto LAB_01754094;
  if (param_4 < param_3) {
    uVar2 = param_4;
  }
  else {
    uVar2 = param_3;
  }
  FUN_017077dc(param_1,param_2,uVar2);
  param_3 = param_3 - uVar2;
  iVar1 = 0;
  if (param_3 == 0) {
    return 0;
  }
  do {
    param_2 = param_2 + uVar2;
LAB_01754094:
    FUN_01753e90(param_1,iVar1);
    if (param_4 < param_3) {
      uVar2 = param_4;
    }
    else {
      uVar2 = param_3;
    }
    FUN_017077dc(param_1,param_2,uVar2);
    param_3 = param_3 - uVar2;
    iVar1 = extraout_r1;
  } while (param_3 != 0);
  return 0;
}

