// FUN_01b6eb5c @ 01b6eb5c size=304 calls_out=8 calls_in=2
// strings: /aws-lc/crypto/rsa_extra/rsa_asn1.c | /aws-lc/crypto/rsa_extra/rsa_asn1.c

int FUN_01b6eb5c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_24 [8];
  int local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01b58d74();
  if (iVar1 != 0) {
    iVar2 = FUN_01afddc0(param_1,auStack_24,0x20000010);
    if ((((iVar2 == 0) || (iVar2 = FUN_01b6ea68(auStack_24,iVar1 + 4), iVar2 == 0)) ||
        (iVar2 = FUN_01b6ea68(auStack_24,iVar1 + 8), iVar2 == 0)) ||
       (iVar2 = FUN_01afd684(auStack_24), iVar2 != 0)) {
      uVar4 = 0x31;
      uVar3 = 100;
    }
    else {
      iVar2 = FUN_01b55afc(iVar1);
      if (iVar2 != 0) goto LAB_01b6ebe4;
      uVar4 = 0x37;
      uVar3 = 0x68;
    }
    FUN_01b053d4(4,0,uVar3,"/aws-lc/crypto/rsa_extra/rsa_asn1.c",uVar4);
    FUN_01b564e4(iVar1);
  }
  iVar1 = 0;
LAB_01b6ebe4:
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar1;
}

