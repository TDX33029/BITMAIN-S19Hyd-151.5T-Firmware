// FUN_01b3ba10 @ 01b3ba10 size=448 calls_out=5 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/digest/digest.c | aws_lc_0_39_0_EVP_MD_CTX_copy_ex | /aws-lc/crypto/fipsmodule/digest/digest.c | in->pctx == NULL || in->pctx_ops != NULL | aws_lc_0_39_0_EVP_MD_CTX_copy_ex | /aws-lc/crypto/fipsmodule/digest/digest.c

undefined4 FUN_01b3ba10(int *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 == (int *)0x0) {
LAB_01b3ba4c:
    FUN_01b053d4(0x1d,0,100,"/aws-lc/crypto/fipsmodule/digest/digest.c",0x7e);
    return 0;
  }
  if (param_2[3] == 0) {
    iVar1 = 0;
    if (*param_2 == 0) goto LAB_01b3ba4c;
  }
  else {
    if (param_2[4] == 0) {
      uVar4 = 0x83;
      pcVar2 = "in->pctx == NULL || in->pctx_ops != NULL";
      goto LAB_01b3bab4;
    }
    iVar1 = (**(code **)(param_2[4] + 4))(param_2[3]);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar6 = *param_2;
  iVar3 = 0;
  if (iVar6 != 0) {
    if (iVar6 == *param_1) {
      iVar3 = param_1[1];
      param_1[1] = 0;
    }
    else {
      if (*(int *)(iVar6 + 0x1c) == 0) {
        uVar4 = 0x8e;
        pcVar2 = "in->digest->ctx_size != 0";
        goto LAB_01b3bab4;
      }
      iVar3 = FUN_01b6ad8c();
      if (iVar3 == 0) {
        if (iVar1 == 0) {
          return 0;
        }
        (**(code **)param_2[4])(iVar1);
        return 0;
      }
    }
  }
  FUN_01b3b854(param_1);
  iVar6 = *param_2;
  *param_1 = iVar6;
  param_1[1] = iVar3;
  if ((iVar6 != 0) && (param_2[1] != 0)) {
    FUN_01b26974(iVar3,param_2[1],*(undefined4 *)(iVar6 + 0x1c));
  }
  param_1[2] = param_2[2];
  uVar5 = param_2[5];
  param_1[3] = iVar1;
  param_1[5] = uVar5 & 0xfffffbff;
  iVar3 = param_2[4];
  param_1[4] = iVar3;
  if (iVar3 != 0 || iVar1 == 0) {
    return 1;
  }
  uVar4 = 0xad;
  pcVar2 = "out->pctx == NULL || out->pctx_ops != NULL";
LAB_01b3bab4:
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar2,"/aws-lc/crypto/fipsmodule/digest/digest.c",uVar4,
               "aws_lc_0_39_0_EVP_MD_CTX_copy_ex");
}

