// FUN_01b0c1d8 @ 01b0c1d8 size=276 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/evp_extra/p_x25519_asn1.c | /aws-lc/crypto/evp_extra/p_x25519_asn1.c | /aws-lc/crypto/evp_extra/p_x25519_asn1.c

undefined4 FUN_01b0c1d8(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 0x20) {
    if (param_4 == 0 || param_5 == 0x20) {
      iVar1 = FUN_01b6ad8c(0x41);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_01b0bed4(iVar1 + 0x20,param_2);
      FUN_01b3ac20(iVar1,iVar1 + 0x20);
      *(undefined1 *)(iVar1 + 0x40) = 1;
      if ((param_4 == 0 || param_5 == 0) ||
         (iVar2 = FUN_01bed842(iVar1,param_4,param_5), iVar2 == 0)) {
        FUN_01b0b8f4(param_1);
        *(int *)(param_1 + 8) = iVar1;
        return 1;
      }
      FUN_01b6b1c4(iVar1);
      uVar3 = 0x2c;
    }
    else {
      uVar3 = 0x1c;
    }
  }
  else {
    uVar3 = 0x17;
  }
  FUN_01b053d4(6,0,0x66,"/aws-lc/crypto/evp_extra/p_x25519_asn1.c",uVar3);
  return 0;
}

