// FUN_01b565f4 @ 01b565f4 size=124 calls_out=2 calls_in=11
// strings: aws_lc_0_39_0_RSA_size | /aws-lc/crypto/fipsmodule/rsa/rsa.c | ret < UINT_MAX

void FUN_01b565f4(int *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if ((*param_1 == 0) || (pcVar2 = *(code **)(*param_1 + 0xc), pcVar2 == (code *)0x0)) {
    iVar1 = FUN_01b565dc(param_1);
  }
  else {
    iVar1 = (*pcVar2)();
  }
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("ret < UINT_MAX","/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x249,
                 "aws_lc_0_39_0_RSA_size");
  }
  return;
}

