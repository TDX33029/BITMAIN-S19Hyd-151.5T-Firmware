// FUN_016eccb8 @ 016eccb8 size=228 calls_out=4 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_ec_asn1.c | /aws-lc/crypto/evp_extra/p_ec_asn1.c

undefined4 FUN_016eccb8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 8) == 0) {
    FUN_016e9cd0(6,0,0x78,"/aws-lc/crypto/evp_extra/p_ec_asn1.c",0xb4);
    return 0;
  }
  iVar1 = FUN_0172ca8c();
  if (iVar1 == 0) {
    FUN_016e9cd0(6,0,0x76,"/aws-lc/crypto/evp_extra/p_ec_asn1.c",0xb9);
    return 0;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    iVar2 = FUN_0172cc2c();
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar3 = FUN_01737020(iVar2,iVar1);
  return uVar3;
}

