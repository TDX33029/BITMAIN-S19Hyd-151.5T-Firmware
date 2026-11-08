// FUN_0171dce4 @ 0171dce4 size=460 calls_out=10 calls_in=11
// strings: /aws-lc/crypto/fipsmodule/bn/montgomery.c | aws_lc_0_39_0_BN_mod_mul_montgomery | /aws-lc/crypto/fipsmodule/bn/montgomery.c | aws_lc_0_39_0_BN_mod_mul_montgomery | /aws-lc/crypto/fipsmodule/bn/montgomery.c | (size_t)num <= BN_MONTGOMERY_MAX_WORDS

undefined4
FUN_0171dce4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((param_2[3] != 0) || (param_3[3] != 0)) {
    FUN_016e9cd0(3,0,0x6d,"/aws-lc/crypto/fipsmodule/bn/montgomery.c",0x1ad);
    return 0;
  }
  if (((int)*(uint *)(param_4 + 0x18) < 4) ||
     ((param_2[1] != *(uint *)(param_4 + 0x18) || (uVar4 = param_3[1], uVar4 != param_2[1])))) {
    FUN_017185b4(param_5);
    iVar1 = FUN_017186b0(param_5);
    uVar3 = 0;
    if (iVar1 != 0) {
      if (param_2 == param_3) {
        iVar2 = FUN_0171dae0(iVar1,param_2,param_5);
      }
      else {
        iVar2 = FUN_0171d5cc();
      }
      if (iVar2 != 0) {
        uVar3 = FUN_0171ad5c(param_1,iVar1,param_4);
      }
    }
    FUN_01718904(param_5);
  }
  else {
    iVar1 = FUN_0171464c(param_1,uVar4);
    if (iVar1 == 0) {
      return 0;
    }
    if (0x800 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("(size_t)num <= BN_MONTGOMERY_MAX_WORDS",
                   "/aws-lc/crypto/fipsmodule/bn/montgomery.c",0x1bc,
                   "aws_lc_0_39_0_BN_mod_mul_montgomery");
    }
    iVar1 = FUN_0171cdb8(*param_1,*param_2,*param_3,*(undefined4 *)(param_4 + 0x14),param_4 + 0x28,
                         uVar4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94(&DAT_0059aac0,"/aws-lc/crypto/fipsmodule/bn/montgomery.c",0x1c5,
                   "aws_lc_0_39_0_BN_mod_mul_montgomery");
    }
    param_1[3] = 0;
    uVar3 = 1;
    param_1[1] = uVar4;
  }
  return uVar3;
}

