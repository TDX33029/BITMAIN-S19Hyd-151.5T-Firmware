// FUN_016efa90 @ 016efa90 size=224 calls_out=5 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c | /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c

undefined4 FUN_016efa90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_016e1e1c(param_3);
  if (iVar1 != 0) {
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_pqdsa_asn1.c",0x62);
    return 0;
  }
  uVar2 = FUN_0177b9fc(param_2);
  iVar1 = FUN_01749028(param_1,uVar2);
  if (iVar1 == 0) {
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_pqdsa_asn1.c",0x67);
    return 0;
  }
  uVar2 = FUN_01748858(*(undefined4 *)(param_1 + 8),param_4);
  return uVar2;
}

