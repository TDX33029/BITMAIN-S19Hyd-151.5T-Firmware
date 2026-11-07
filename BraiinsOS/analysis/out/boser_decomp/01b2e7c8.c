// FUN_01b2e7c8 @ 01b2e7c8 size=180 calls_out=3 calls_in=19
// strings: aws_lc_0_39_0_BN_CTX_free | /aws-lc/crypto/fipsmodule/bn/ctx.c | ctx->used == 0 || ctx->error

undefined4 FUN_01b2e7c8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if ((param_1[4] != 0) && (*(char *)(param_1 + 5) == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("ctx->used == 0 || ctx->error","/aws-lc/crypto/fipsmodule/bn/ctx.c",0x4f,
                 "aws_lc_0_39_0_BN_CTX_free");
  }
  FUN_01b70278(*param_1,&LAB_01b0cf14,FUN_01b1f904);
  FUN_01b6b1c4(param_1[1]);
  uVar1 = FUN_01b6b1c4(param_1);
  return uVar1;
}

