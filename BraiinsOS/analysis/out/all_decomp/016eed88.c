// FUN_016eed88 @ 016eed88 size=332 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_kem_asn1.c | /aws-lc/crypto/evp_extra/p_kem_asn1.c | /aws-lc/crypto/evp_extra/p_kem_asn1.c

undefined8 FUN_016eed88(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_016e1e1c(param_3);
  if (iVar1 != 0) {
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_kem_asn1.c",0x6e);
    return 0;
  }
  uVar2 = FUN_0177b9fc(param_2);
  iVar1 = FUN_01740200(param_1,uVar2);
  if (iVar1 == 0) {
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_kem_asn1.c",0x73);
    return 0;
  }
  iVar1 = FUN_016e1e1c(param_4);
  piVar3 = *(int **)(param_1 + 8);
  if (iVar1 == *(int *)(*piVar3 + 0x10)) {
    uVar2 = FUN_016e1e04(param_4);
    uVar4 = FUN_01740f18(piVar3,uVar2);
    return uVar4;
  }
  FUN_016e9cd0(6,0,0x89,"/aws-lc/crypto/evp_extra/p_kem_asn1.c",0x78);
  return 0;
}

