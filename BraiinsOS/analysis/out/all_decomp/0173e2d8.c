// FUN_0173e2d8 @ 0173e2d8 size=408 calls_out=5 calls_in=8
// strings: aws_lc_0_39_0_EVP_DigestInit_ex | /aws-lc/crypto/fipsmodule/digest/digest.c | ctx->pctx == NULL || ctx->pctx_ops != NULL | aws_lc_0_39_0_EVP_DigestInit_ex | /aws-lc/crypto/fipsmodule/digest/digest.c | type->ctx_size != 0

bool FUN_0173e2d8(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*param_1 != param_2) {
    *param_1 = param_2;
    iVar1 = FUN_0173cab0();
    if (iVar1 == 0) {
      if (*(int *)(param_2 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c94("type->ctx_size != 0","/aws-lc/crypto/fipsmodule/digest/digest.c",200,
                     "aws_lc_0_39_0_EVP_DigestInit_ex");
      }
      param_1[2] = *(int *)(param_2 + 0x10);
      iVar1 = FUN_0177a6c0();
      if (iVar1 == 0) {
        return false;
      }
      FUN_0177aafc(param_1[1]);
      param_1[1] = iVar1;
    }
  }
  if ((param_1[3] != 0) && (param_1[4] == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("ctx->pctx == NULL || ctx->pctx_ops != NULL",
                 "/aws-lc/crypto/fipsmodule/digest/digest.c",0xd3,"aws_lc_0_39_0_EVP_DigestInit_ex")
    ;
  }
  iVar1 = FUN_0173cab0(param_1);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0xc))(param_1);
    return true;
  }
  iVar1 = param_1[3];
  if ((((iVar1 == 0) || (puVar2 = *(undefined4 **)(iVar1 + 0x14), puVar2 == (undefined4 *)0x0)) ||
      (*(int *)(iVar1 + 8) == 0)) ||
     (puVar3 = *(undefined4 **)(*(int *)(iVar1 + 8) + 8), puVar3 == (undefined4 *)0x0)) {
    return false;
  }
  iVar1 = FUN_0173dcc4(puVar2 + 2,*puVar3,puVar3[1],*puVar2,*(undefined4 *)(iVar1 + 4));
  return iVar1 != 0;
}

