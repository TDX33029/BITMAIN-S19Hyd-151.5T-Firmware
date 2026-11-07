// FUN_01b0b2f4 @ 01b0b2f4 size=156 calls_out=5 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_rsa_asn1.c

undefined4 FUN_01b0b2f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_01b6eb5c(param_4);
  if ((iVar1 == 0) || (iVar3 = FUN_01afd684(param_4), iVar3 != 0)) {
    FUN_01b053d4(6,0,0x66,"/aws-lc/crypto/evp_extra/p_rsa_asn1.c",0x30);
    FUN_01b564e4(iVar1);
    uVar2 = 0;
  }
  else {
    FUN_01b478a4(param_1,iVar1);
    uVar2 = 1;
  }
  return uVar2;
}

