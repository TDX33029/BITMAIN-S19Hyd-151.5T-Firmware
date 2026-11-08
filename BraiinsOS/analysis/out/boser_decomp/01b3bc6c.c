// FUN_01b3bc6c @ 01b3bc6c size=252 calls_out=4 calls_in=6
// strings: /aws-lc/crypto/fipsmodule/digest/digest.c | aws_lc_0_39_0_EVP_DigestFinal_ex | /aws-lc/crypto/fipsmodule/digest/digest.c | ctx->digest->md_size <= EVP_MAX_MD_SIZE

undefined4 FUN_01b3bc6c(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_01b3b6a4(*param_1);
  if ((uVar1 & 4) == 0) {
    if (0x40 < *(uint *)(*param_1 + 4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01be3310("ctx->digest->md_size <= EVP_MAX_MD_SIZE",
                   "/aws-lc/crypto/fipsmodule/digest/digest.c",0xff,
                   "aws_lc_0_39_0_EVP_DigestFinal_ex");
    }
    (**(code **)(*param_1 + 0x14))(param_1,param_2);
    iVar4 = *param_1;
    iVar3 = param_1[1];
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(iVar4 + 4);
    }
    FUN_01b6b174(iVar3,*(undefined4 *)(iVar4 + 0x1c));
    uVar2 = 1;
  }
  else {
    FUN_01b053d4(0x1d,0,0x42,"/aws-lc/crypto/fipsmodule/digest/digest.c",0xfb);
    uVar2 = 0;
  }
  return uVar2;
}

