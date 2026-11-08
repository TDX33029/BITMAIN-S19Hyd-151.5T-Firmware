// FUN_0172ad04 @ 0172ad04 size=540 calls_out=5 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/digest/digest.c | aws_lc_0_39_0_EVP_MD_CTX_copy_ex | /aws-lc/crypto/fipsmodule/digest/digest.c | in->pctx == NULL || in->pctx_ops != NULL | aws_lc_0_39_0_EVP_MD_CTX_copy_ex | /aws-lc/crypto/fipsmodule/digest/digest.c

int FUN_0172ad04(int *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == (int *)0x0) {
LAB_0172ae44:
    FUN_016e9cd0(0x1d,0,100,"/aws-lc/crypto/fipsmodule/digest/digest.c",0x7e);
    return 0;
  }
  if (param_2[3] == 0) {
    iVar6 = *param_2;
    iVar2 = 0;
    if (iVar6 == 0) goto LAB_0172ae44;
LAB_0172ad60:
    if (*param_1 == iVar6) {
      uVar3 = param_1[1];
      param_1[1] = 0;
    }
    else {
      if (*(int *)(iVar6 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c94("in->digest->ctx_size != 0","/aws-lc/crypto/fipsmodule/digest/digest.c",0x8e,
                     "aws_lc_0_39_0_EVP_MD_CTX_copy_ex");
      }
      uVar3 = FUN_0177a6c0();
      if (uVar3 == 0) {
        if (iVar2 == 0) {
          return 0;
        }
        (**(code **)param_2[4])(iVar2);
        return 0;
      }
    }
  }
  else {
    if (param_2[4] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("in->pctx == NULL || in->pctx_ops != NULL",
                   "/aws-lc/crypto/fipsmodule/digest/digest.c",0x83,
                   "aws_lc_0_39_0_EVP_MD_CTX_copy_ex");
    }
    iVar2 = (**(code **)(param_2[4] + 4))(param_2[3]);
    if (iVar2 == 0) {
      return 0;
    }
    iVar6 = *param_2;
    uVar3 = 0;
    if (iVar6 != 0) goto LAB_0172ad60;
  }
  FUN_0172aae8(param_1);
  iVar6 = *param_2;
  *param_1 = iVar6;
  param_1[1] = uVar3;
  if (((iVar6 != 0) && (uVar4 = param_2[1], uVar4 != 0)) &&
     (iVar6 = *(int *)(iVar6 + 0x1c), iVar6 != 0)) {
    if (uVar3 < uVar4) {
      if (uVar4 < uVar3 + iVar6) goto LAB_0172aea0;
    }
    else if ((uVar4 < uVar3) && (uVar3 < uVar4 + iVar6)) {
LAB_0172aea0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x172aea0);
      (*pcVar1)();
    }
    FUN_016dd1aa(uVar3);
  }
  iVar5 = param_2[4];
  uVar3 = param_2[5];
  iVar6 = param_2[2];
  param_1[2] = iVar6;
  param_1[3] = iVar2;
  if (iVar2 == 0 || iVar5 != 0) {
    iVar6 = 1;
  }
  param_1[5] = uVar3 & 0xfffffbff;
  param_1[4] = iVar5;
  if (iVar2 != 0 && iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("out->pctx == NULL || out->pctx_ops != NULL",
                 "/aws-lc/crypto/fipsmodule/digest/digest.c",0xad,"aws_lc_0_39_0_EVP_MD_CTX_copy_ex"
                );
  }
  return iVar6;
}

