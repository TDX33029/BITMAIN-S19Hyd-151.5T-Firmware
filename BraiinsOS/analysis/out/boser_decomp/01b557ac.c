// FUN_01b557ac @ 01b557ac size=372 calls_out=5 calls_in=3
// strings: aws_lc_0_39_0_RSA_add_pkcs1_prefix | /aws-lc/crypto/fipsmodule/rsa/rsa.c | digest_len == SSL_SIG_LENGTH | /aws-lc/crypto/fipsmodule/rsa/rsa.c | aws_lc_0_39_0_RSA_add_pkcs1_prefix | /aws-lc/crypto/fipsmodule/rsa/rsa.c

int FUN_01b557ac(int *param_1,int *param_2,int *param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = FUN_01b1fbec(param_4,param_6);
  if (iVar1 != 0) {
    if (param_4 == 0x72) {
      if (param_6 != 0x24) {
        uVar5 = 0x2f7;
        pcVar2 = "digest_len == SSL_SIG_LENGTH";
LAB_01b5581c:
                    /* WARNING: Subroutine does not return */
        FUN_01be3310(pcVar2,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",uVar5,
                     "aws_lc_0_39_0_RSA_add_pkcs1_prefix");
      }
      iVar4 = 0x24;
      iVar7 = 0;
LAB_01b558d0:
      *param_1 = param_5;
      *param_2 = iVar4;
      *param_3 = iVar7;
      return iVar1;
    }
    iVar4 = 0;
    while( true ) {
      iVar7 = iVar4 * 0x1c;
      if ((&DAT_0053a9d4)[iVar4 * 7] == 0) break;
      if ((&DAT_0053a9d4)[iVar4 * 7] == param_4) {
        if ((byte)(&DAT_0053a9d8)[iVar7] != param_6) {
          uVar5 = 0x305;
          pcVar2 = "digest_len == sig_prefix->hash_len";
          goto LAB_01b5581c;
        }
        uVar6 = (uint)(byte)(&DAT_0053a9d9)[iVar7];
        iVar3 = FUN_01b6ad8c(param_6 + uVar6);
        if (iVar3 == 0) {
          return 0;
        }
        FUN_01b26974(iVar3,&DAT_0053a9da + iVar7,uVar6);
        FUN_01b26974(iVar3 + uVar6,param_5,param_6);
        iVar4 = param_6 + uVar6;
        iVar7 = iVar1;
        param_5 = iVar3;
        goto LAB_01b558d0;
      }
      iVar4 = iVar4 + 1;
    }
    FUN_01b053d4(4,0,0x8e,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x31d);
  }
  return 0;
}

