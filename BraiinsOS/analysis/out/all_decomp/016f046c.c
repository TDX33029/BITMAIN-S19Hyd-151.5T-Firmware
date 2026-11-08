// FUN_016f046c @ 016f046c size=184 calls_out=5 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_rsa_asn1.c

undefined8 FUN_016f046c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0177f938(param_4);
  if ((iVar1 == 0) || (iVar2 = FUN_016e1e1c(param_4), iVar2 != 0)) {
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_rsa_asn1.c",0x30);
    FUN_0174ff8c(iVar1);
    return 0;
  }
  FUN_0173a7a8(param_1,iVar1);
  return 1;
}

