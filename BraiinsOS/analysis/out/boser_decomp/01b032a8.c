// FUN_01b032a8 @ 01b032a8 size=588 calls_out=6 calls_in=4
// strings: /aws-lc/crypto/dsa/dsa_asn1.c | /aws-lc/crypto/dsa/dsa_asn1.c | /aws-lc/crypto/dsa/dsa_asn1.c | /aws-lc/crypto/dsa/dsa_asn1.c

undefined4 FUN_01b032a8(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((*param_1 == 0) || (param_1[1] == 0)) || (param_1[2] == 0)) {
    uVar4 = 0x18;
    uVar3 = 0x65;
    goto LAB_01b032fc;
  }
  iVar1 = FUN_01b2b230();
  if (((((iVar1 == 0) && (iVar1 = FUN_01b2b230(param_1[1]), iVar1 == 0)) &&
       ((iVar1 = FUN_01b2e300(*param_1), iVar1 == 0 &&
        ((iVar1 = FUN_01b2e300(param_1[1]), iVar1 == 0 &&
         (iVar1 = FUN_01b2e5fc(*param_1), iVar1 != 0)))))) &&
      (iVar1 = FUN_01b2e5fc(param_1[1]), iVar1 != 0)) &&
     ((((iVar1 = FUN_01b2be38(param_1[1],*param_1), iVar1 < 0 &&
        (iVar1 = FUN_01b2b230(param_1[2]), iVar1 == 0)) &&
       (iVar1 = FUN_01b2e300(param_1[2]), iVar1 == 0)) &&
      (iVar1 = FUN_01b2be38(param_1[2],*param_1), iVar1 < 0)))) {
    uVar2 = FUN_01b2b8d0(param_1[1]);
    if ((uVar2 & 0xffffffbf) != 0xa0 && uVar2 != 0x100) {
      uVar4 = 0x30;
      uVar3 = 100;
      goto LAB_01b032fc;
    }
    uVar2 = FUN_01b2b8d0(*param_1);
    if (10000 < uVar2) {
      uVar4 = 0x37;
      uVar3 = 0x66;
      goto LAB_01b032fc;
    }
    if ((param_1[3] == 0) ||
       (((iVar1 = FUN_01b2b230(), iVar1 == 0 && (iVar1 = FUN_01b2e300(param_1[3]), iVar1 == 0)) &&
        (iVar1 = FUN_01b2be38(param_1[3],*param_1), iVar1 < 0)))) {
      if ((param_1[4] == 0) ||
         (((iVar1 = FUN_01b2b230(), iVar1 == 0 && (iVar1 = FUN_01b2e300(param_1[4]), iVar1 == 0)) &&
          (iVar1 = FUN_01b2be38(param_1[4],param_1[1]), iVar1 < 0)))) {
        return 1;
      }
      uVar4 = 0x4a;
    }
    else {
      uVar4 = 0x3f;
    }
  }
  else {
    uVar4 = 0x29;
  }
  uVar3 = 0x6b;
LAB_01b032fc:
  FUN_01b053d4(10,0,uVar3,"/aws-lc/crypto/dsa/dsa_asn1.c",uVar4);
  return 0;
}

