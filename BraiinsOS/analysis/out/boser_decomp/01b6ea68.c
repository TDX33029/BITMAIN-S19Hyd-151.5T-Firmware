// FUN_01b6ea68 @ 01b6ea68 size=124 calls_out=3 calls_in=2
// strings: parse_integer | /aws-lc/crypto/rsa_extra/rsa_asn1.c | *out == NULL

void FUN_01b6ea68(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("*out == NULL","/aws-lc/crypto/rsa_extra/rsa_asn1.c",0x16,"parse_integer");
  }
  iVar1 = FUN_01b2adb8();
  *param_2 = iVar1;
  if (iVar1 == 0) {
    return;
  }
  FUN_01afbd84(param_1,iVar1,0,0);
  return;
}

