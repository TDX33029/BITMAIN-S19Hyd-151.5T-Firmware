// FUN_0175009c @ 0175009c size=152 calls_out=2 calls_in=13
// strings: aws_lc_0_39_0_RSA_size | /aws-lc/crypto/fipsmodule/rsa/rsa.c | ret < UINT_MAX

void FUN_0175009c(int *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if ((*param_1 == 0) || (pcVar2 = *(code **)(*param_1 + 0xc), pcVar2 == (code *)0x0)) {
    iVar1 = FUN_01750084(param_1);
    if (iVar1 != -1) {
      return;
    }
  }
  else {
    iVar1 = (*pcVar2)();
    if (iVar1 != -1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_016d2c94("ret < UINT_MAX","/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x249,"aws_lc_0_39_0_RSA_size"
              );
}

