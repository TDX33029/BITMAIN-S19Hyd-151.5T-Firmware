// FUN_01b08130 @ 01b08130 size=188 calls_out=4 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_ec_asn1.c | /aws-lc/crypto/evp_extra/p_ec_asn1.c

undefined8 FUN_01b08130(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_2 + 8) == 0) {
    uVar5 = 0xb4;
    uVar3 = 0x78;
  }
  else {
    iVar1 = FUN_01b3d638(*(int *)(param_2 + 8));
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        iVar2 = FUN_01b3d7ac();
        *(int *)(param_1 + 8) = iVar2;
        if (iVar2 == 0) {
          return 0;
        }
      }
      uVar4 = FUN_01b451a8(iVar2,iVar1);
      return uVar4;
    }
    uVar5 = 0xb9;
    uVar3 = 0x76;
  }
  FUN_01b053d4(6,0,uVar3,"/aws-lc/crypto/evp_extra/p_ec_asn1.c",uVar5);
  return 0;
}

