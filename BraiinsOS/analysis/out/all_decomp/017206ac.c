// FUN_017206ac @ 017206ac size=552 calls_out=11 calls_in=1
// strings: aws_lc_0_39_0_bn_mont_ctx_set_RR_consttime | /aws-lc/crypto/fipsmodule/bn/montgomery_inv.c | !BN_is_zero(&mont->N) | aws_lc_0_39_0_bn_mont_ctx_set_RR_consttime | /aws-lc/crypto/fipsmodule/bn/montgomery_inv.c | lgBigR >= n_bits

undefined8 FUN_017206ac(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_01717e5c(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("!BN_is_zero(&mont->N)","/aws-lc/crypto/fipsmodule/bn/montgomery_inv.c",0x99,
                 "aws_lc_0_39_0_bn_mont_ctx_set_RR_consttime");
  }
  iVar1 = FUN_0171462c(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("!BN_is_negative(&mont->N)","/aws-lc/crypto/fipsmodule/bn/montgomery_inv.c",0x9a,
                 "aws_lc_0_39_0_bn_mont_ctx_set_RR_consttime");
  }
  iVar1 = FUN_017181d4(param_1 + 0x14);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("BN_is_odd(&mont->N)","/aws-lc/crypto/fipsmodule/bn/montgomery_inv.c",0x9b,
                 "aws_lc_0_39_0_bn_mont_ctx_set_RR_consttime");
  }
  iVar1 = FUN_01714e64(param_1 + 0x14);
  if (iVar1 != *(int *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("bn_minimal_width(&mont->N) == mont->N.width",
                 "/aws-lc/crypto/fipsmodule/bn/montgomery_inv.c",0x9c,
                 "aws_lc_0_39_0_bn_mont_ctx_set_RR_consttime");
  }
  uVar2 = FUN_01714eb4(param_1 + 0x14);
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("n_bits != 0","/aws-lc/crypto/fipsmodule/bn/montgomery_inv.c",0x9f,
                 "aws_lc_0_39_0_bn_mont_ctx_set_RR_consttime");
  }
  if (uVar2 == 1) {
    FUN_01714350(param_1);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18);
    if ((uint)(iVar1 * 0x20) < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("lgBigR >= n_bits","/aws-lc/crypto/fipsmodule/bn/montgomery_inv.c",0xa6,
                   "aws_lc_0_39_0_bn_mont_ctx_set_RR_consttime");
    }
    iVar3 = FUN_0172038c(param_1,uVar2 - 1);
    if ((iVar3 == 0) ||
       (iVar3 = FUN_0171b0b0(param_1,param_1,(iVar1 * 0x21 + 1) - uVar2,param_1 + 0x14,param_2),
       iVar3 == 0)) {
      return 0;
    }
    if (iVar1 != *(int *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("threshold == mont->N.width","/aws-lc/crypto/fipsmodule/bn/montgomery_inv.c",0xcc
                   ,"aws_lc_0_39_0_bn_mont_ctx_set_RR_consttime");
    }
    iVar1 = 5;
    do {
      iVar3 = FUN_0171dce4(param_1,param_1,param_1,param_1,param_2);
      if (iVar3 == 0) {
        return 0;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  uVar4 = FUN_01714d30(param_1,*(undefined4 *)(param_1 + 0x18));
  return uVar4;
}

