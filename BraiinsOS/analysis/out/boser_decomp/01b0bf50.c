// FUN_01b0bf50 @ 01b0bf50 size=132 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_x25519_asn1.c

bool FUN_01b0bf50(int param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = *param_3;
  if (0x1f < uVar1) {
    FUN_01b0bed4(param_4,*(undefined4 *)(param_1 + 8));
    *param_3 = 0x20;
  }
  else {
    FUN_01b053d4(6,0,100,"/aws-lc/crypto/evp_extra/p_x25519_asn1.c",0x68);
  }
  return 0x1f < uVar1;
}

