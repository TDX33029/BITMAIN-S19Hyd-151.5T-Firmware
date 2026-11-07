// FUN_01b0a904 @ 01b0a904 size=188 calls_out=5 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c | /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c

undefined8 FUN_01b0a904(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_01afd684(param_3);
  if (iVar1 == 0) {
    uVar3 = FUN_01b6befc(param_2);
    iVar1 = FUN_01b511a0(param_1,uVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_01b50a80(*(undefined4 *)(param_1 + 8),param_4);
      return uVar2;
    }
    uVar3 = 0x67;
  }
  else {
    uVar3 = 0x62;
  }
  FUN_01b053d4(6,0,0x66,"/aws-lc/crypto/evp_extra/p_pqdsa_asn1.c",uVar3);
  return 0;
}

