// FUN_01b064e8 @ 01b064e8 size=320 calls_out=9 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_dh_asn1.c

undefined4 FUN_01b064e8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_01b063e4(param_2);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = FUN_01b3b160();
      *(int *)(param_1 + 8) = iVar1;
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar5 = *(undefined4 *)(param_2 + 8);
    iVar1 = FUN_01b3b268(uVar5);
    FUN_01b3b258(uVar5);
    iVar2 = FUN_01b2b3b0();
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_01b2b3b0(iVar1);
    }
    FUN_01b3b278(uVar5);
    iVar4 = FUN_01b2b3b0();
    if (((iVar2 != 0) && (iVar4 != 0 && (iVar3 != 0 || iVar1 == 0))) &&
       (iVar1 = FUN_01b3b288(*(undefined4 *)(param_1 + 8),iVar2,iVar3,iVar4), iVar1 != 0)) {
      return 1;
    }
    FUN_01b1f904(iVar2);
    FUN_01b1f904(iVar3);
    FUN_01b1f904(iVar4);
  }
  else {
    FUN_01b053d4(6,0,0x76,"/aws-lc/crypto/evp_extra/p_dh_asn1.c",99);
  }
  return 0;
}

