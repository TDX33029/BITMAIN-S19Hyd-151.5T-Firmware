// FUN_01b093b0 @ 01b093b0 size=184 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_ed25519_asn1.c | /aws-lc/crypto/evp_extra/p_ed25519_asn1.c

undefined4 FUN_01b093b0(int param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(*(int *)(param_1 + 8) + 0x40) == '\0') {
    uVar2 = 0x50;
    uVar1 = 0x82;
LAB_01b093f4:
    FUN_01b053d4(6,0,uVar1,"/aws-lc/crypto/evp_extra/p_ed25519_asn1.c",uVar2);
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      if (*param_3 < 0x20) {
        uVar2 = 0x5a;
        uVar1 = 100;
        goto LAB_01b093f4;
      }
      FUN_01b092a8(param_2,*(int *)(param_1 + 8));
    }
    uVar1 = 1;
    *param_3 = 0x20;
  }
  return uVar1;
}

