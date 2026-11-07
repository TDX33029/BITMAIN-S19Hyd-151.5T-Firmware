// FUN_016e7aac @ 016e7aac size=632 calls_out=6 calls_in=3
// strings: /aws-lc/crypto/dsa/dsa_asn1.c | /aws-lc/crypto/dsa/dsa_asn1.c | /aws-lc/crypto/dsa/dsa_asn1.c | /aws-lc/crypto/dsa/dsa_asn1.c | /aws-lc/crypto/dsa/dsa_asn1.c | /aws-lc/crypto/dsa/dsa_asn1.c

undefined4 FUN_016e7aac(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (((*param_1 == 0) || (param_1[1] == 0)) || (param_1[2] == 0)) {
    FUN_016e9cd0(10,0,0x65,"/aws-lc/crypto/dsa/dsa_asn1.c",0x18);
    return 0;
  }
  iVar1 = FUN_0171462c();
  if (((((iVar1 == 0) && (iVar1 = FUN_0171462c(param_1[1]), iVar1 == 0)) &&
       ((iVar1 = FUN_01717e5c(*param_1), iVar1 == 0 &&
        ((iVar1 = FUN_01717e5c(param_1[1]), iVar1 == 0 &&
         (iVar1 = FUN_017181d4(*param_1), iVar1 != 0)))))) &&
      (iVar1 = FUN_017181d4(param_1[1]), iVar1 != 0)) &&
     ((((iVar1 = FUN_01715760(param_1[1],*param_1), iVar1 < 0 &&
        (iVar1 = FUN_0171462c(param_1[2]), iVar1 == 0)) &&
       (iVar1 = FUN_01717e5c(param_1[2]), iVar1 == 0)) &&
      (iVar1 = FUN_01715760(param_1[2],*param_1), iVar1 < 0)))) {
    uVar2 = FUN_01714eb4(param_1[1]);
    if ((uVar2 & 0xffffffbf) != 0xa0 && uVar2 != 0x100) {
      FUN_016e9cd0(10,0,100,"/aws-lc/crypto/dsa/dsa_asn1.c",0x30);
      return 0;
    }
    uVar2 = FUN_01714eb4(*param_1);
    if (10000 < uVar2) {
      FUN_016e9cd0(10,0,0x66,"/aws-lc/crypto/dsa/dsa_asn1.c",0x37);
      return 0;
    }
    if ((param_1[3] == 0) ||
       (((iVar1 = FUN_0171462c(), iVar1 == 0 && (iVar1 = FUN_01717e5c(param_1[3]), iVar1 == 0)) &&
        (iVar1 = FUN_01715760(param_1[3],*param_1), iVar1 < 0)))) {
      if ((param_1[4] == 0) ||
         (((iVar1 = FUN_0171462c(), iVar1 == 0 && (iVar1 = FUN_01717e5c(param_1[4]), iVar1 == 0)) &&
          (iVar1 = FUN_01715760(param_1[4],param_1[1]), iVar1 < 0)))) {
        return 1;
      }
      uVar3 = 0x4a;
    }
    else {
      uVar3 = 0x3f;
    }
  }
  else {
    uVar3 = 0x29;
  }
  FUN_016e9cd0(10,0,0x6b,"/aws-lc/crypto/dsa/dsa_asn1.c",uVar3);
  return 0;
}

