// FUN_0172afb8 @ 0172afb8 size=276 calls_out=4 calls_in=6
// strings: /aws-lc/crypto/fipsmodule/digest/digest.c | aws_lc_0_39_0_EVP_DigestFinal_ex | /aws-lc/crypto/fipsmodule/digest/digest.c | ctx->digest->md_size <= EVP_MAX_MD_SIZE

undefined8 FUN_0172afb8(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_0172a880(*param_1);
  if ((uVar1 & 4) != 0) {
    FUN_016e9cd0(0x1d,0,0x42,"/aws-lc/crypto/fipsmodule/digest/digest.c",0xfb);
    return 0;
  }
  if (0x40 < *(uint *)(*param_1 + 4)) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("ctx->digest->md_size <= EVP_MAX_MD_SIZE",
                 "/aws-lc/crypto/fipsmodule/digest/digest.c",0xff,"aws_lc_0_39_0_EVP_DigestFinal_ex"
                );
  }
  (**(code **)(*param_1 + 0x14))(param_1,param_2);
  iVar3 = *param_1;
  iVar2 = param_1[1];
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(iVar3 + 4);
  }
  FUN_0177aaa0(iVar2,*(undefined4 *)(iVar3 + 0x1c));
  return 1;
}

