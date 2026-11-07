// FUN_01b3b854 @ 01b3b854 size=152 calls_out=3 calls_in=16
// strings: aws_lc_0_39_0_EVP_MD_CTX_cleanup | /aws-lc/crypto/fipsmodule/digest/digest.c | ctx->pctx == NULL || ctx->pctx_ops != NULL

undefined8 FUN_01b3b854(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  FUN_01b6b1c4(*(undefined4 *)(param_1 + 4));
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xc) == 0) {
    if (puVar1 == (undefined4 *)0x0) goto LAB_01b3b8cc;
  }
  else if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("ctx->pctx == NULL || ctx->pctx_ops != NULL",
                 "/aws-lc/crypto/fipsmodule/digest/digest.c",0x36,"aws_lc_0_39_0_EVP_MD_CTX_cleanup"
                );
  }
  if ((*(uint *)(param_1 + 0x14) & 0x400) == 0) {
    (*(code *)*puVar1)();
  }
LAB_01b3b8cc:
  FUN_01b3b838(param_1);
  return 1;
}

