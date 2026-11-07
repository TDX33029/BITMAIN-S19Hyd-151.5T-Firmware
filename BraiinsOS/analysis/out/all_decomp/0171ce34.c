// FUN_0171ce34 @ 0171ce34 size=332 calls_out=4 calls_in=1
// strings: aws_lc_0_39_0_bn_mont_n0 | /aws-lc/crypto/fipsmodule/bn/montgomery_inv.c | !BN_is_zero(n) | bn_neg_inv_mod_r_u64 | /aws-lc/crypto/fipsmodule/bn/montgomery_inv.c | n % 2 == 1

uint FUN_0171ce34(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar1 = FUN_01717e5c();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("!BN_is_zero(n)","/aws-lc/crypto/fipsmodule/bn/montgomery_inv.c",0x1a,
                 "aws_lc_0_39_0_bn_mont_n0",param_4);
  }
  iVar1 = FUN_0171462c(param_1);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("!BN_is_negative(n)","/aws-lc/crypto/fipsmodule/bn/montgomery_inv.c",0x1b,
                 "aws_lc_0_39_0_bn_mont_n0",param_4);
  }
  iVar1 = FUN_017181d4(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("BN_is_odd(n)","/aws-lc/crypto/fipsmodule/bn/montgomery_inv.c",0x1c,
                 "aws_lc_0_39_0_bn_mont_n0",param_4);
  }
  uVar11 = 0;
  uVar9 = *(uint *)*param_1;
  uVar8 = 0;
  if (1 < param_1[1]) {
    uVar8 = ((uint *)*param_1)[1];
  }
  uVar10 = uVar9 & 1;
  if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("n % 2 == 1","/aws-lc/crypto/fipsmodule/bn/montgomery_inv.c",0x5f,
                 "bn_neg_inv_mod_r_u64",param_4);
  }
  iVar1 = 0x40;
  uVar2 = 0;
  uVar3 = 0;
  do {
    uVar4 = (int)(uVar10 << 0x1f) >> 0x1f;
    uVar5 = uVar4 & uVar9;
    uVar7 = uVar8 & uVar4 ^ uVar11;
    uVar6 = uVar5 & uVar10;
    uVar2 = uVar2 >> 1 | uVar3 << 0x1f;
    uVar3 = (uVar4 & 0x80000000) + (uVar3 >> 1);
    uVar5 = (uVar5 ^ uVar10) >> 1 | uVar7 << 0x1f;
    uVar10 = uVar5 + uVar6;
    uVar11 = (uVar11 & uVar8 & uVar4) + (uVar7 >> 1) + (uint)CARRY4(uVar5,uVar6);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return uVar2;
}

