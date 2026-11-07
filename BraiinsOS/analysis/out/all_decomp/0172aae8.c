// FUN_0172aae8 @ 0172aae8 size=208 calls_out=3 calls_in=17
// strings: aws_lc_0_39_0_EVP_MD_CTX_cleanup | /aws-lc/crypto/fipsmodule/digest/digest.c | ctx->pctx == NULL || ctx->pctx_ops != NULL

undefined8 FUN_0172aae8(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  FUN_0177aafc(*(undefined4 *)(param_1 + 4));
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xc) == 0) {
    if (puVar1 == (undefined4 *)0x0) goto LAB_0172ab4c;
  }
  else if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("ctx->pctx == NULL || ctx->pctx_ops != NULL",
                 "/aws-lc/crypto/fipsmodule/digest/digest.c",0x36,"aws_lc_0_39_0_EVP_MD_CTX_cleanup"
                );
  }
  if ((*(uint *)(param_1 + 0x14) & 0x400) == 0) {
    (*(code *)*puVar1)();
  }
LAB_0172ab4c:
  FUN_0172aab0(param_1);
  return 1;
}

