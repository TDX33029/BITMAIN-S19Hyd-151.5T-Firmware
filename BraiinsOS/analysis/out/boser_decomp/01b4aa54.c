// FUN_01b4aa54 @ 01b4aa54 size=344 calls_out=5 calls_in=6
// strings: aws_lc_0_39_0_EVP_DigestInit_ex | /aws-lc/crypto/fipsmodule/digest/digest.c | type->ctx_size != 0 | aws_lc_0_39_0_EVP_DigestInit_ex | /aws-lc/crypto/fipsmodule/digest/digest.c | ctx->pctx == NULL || ctx->pctx_ops != NULL

bool FUN_01b4aa54(int *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if (*param_1 != param_2) {
    *param_1 = param_2;
    iVar1 = FUN_01b49618();
    if (iVar1 == 0) {
      if (*(int *)(param_2 + 0x1c) == 0) {
        uVar5 = 200;
        pcVar2 = "type->ctx_size != 0";
        goto LAB_01b4aab8;
      }
      param_1[2] = *(int *)(param_2 + 0x10);
      iVar1 = FUN_01b6ad8c();
      if (iVar1 == 0) {
        return false;
      }
      FUN_01b6b1c4(param_1[1]);
      param_1[1] = iVar1;
    }
  }
  if ((param_1[3] == 0) || (param_1[4] != 0)) {
    iVar1 = FUN_01b49618(param_1);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0xc))(param_1);
      return true;
    }
    iVar1 = param_1[3];
    if ((((iVar1 == 0) || (puVar3 = *(undefined4 **)(iVar1 + 0x14), puVar3 == (undefined4 *)0x0)) ||
        (*(int *)(iVar1 + 8) == 0)) ||
       (puVar4 = *(undefined4 **)(*(int *)(iVar1 + 8) + 8), puVar4 == (undefined4 *)0x0)) {
      return false;
    }
    iVar1 = FUN_01b4a64c(puVar3 + 2,*puVar4,puVar4[1],*puVar3,*(undefined4 *)(iVar1 + 4));
    return iVar1 != 0;
  }
  uVar5 = 0xd3;
  pcVar2 = "ctx->pctx == NULL || ctx->pctx_ops != NULL";
LAB_01b4aab8:
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar2,"/aws-lc/crypto/fipsmodule/digest/digest.c",uVar5,
               "aws_lc_0_39_0_EVP_DigestInit_ex");
}

