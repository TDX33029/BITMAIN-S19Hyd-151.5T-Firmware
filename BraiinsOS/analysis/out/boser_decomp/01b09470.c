// FUN_01b09470 @ 01b09470 size=160 calls_out=4 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_ed25519_asn1.c

undefined4 FUN_01b09470(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0x20) {
    iVar1 = FUN_01b6ad8c(0x41);
    if (iVar1 != 0) {
      FUN_01b092a8(iVar1 + 0x20,param_2);
      *(undefined1 *)(iVar1 + 0x40) = 0;
      FUN_01b089dc(param_1);
      *(int *)(param_1 + 8) = iVar1;
      return 1;
    }
  }
  else {
    FUN_01b053d4(6,0,0x66,"/aws-lc/crypto/evp_extra/p_ed25519_asn1.c",0x3b);
  }
  return 0;
}

