// FUN_01b03abc @ 01b03abc size=220 calls_out=6 calls_in=2
// strings: /aws-lc/crypto/ecdsa_extra/ecdsa_asn1.c

int FUN_01b03abc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1c [8];
  int local_14;
  
  local_14 = DAT_01d53560;
  FUN_01afd61c(auStack_1c,param_1,param_2,0);
  iVar1 = FUN_01b0399c(auStack_1c);
  if ((iVar1 == 0) || (iVar2 = FUN_01afd684(auStack_1c), iVar2 != 0)) {
    FUN_01b053d4(0x1a,0,100,"/aws-lc/crypto/ecdsa_extra/ecdsa_asn1.c",0x3a);
    FUN_01b3cb34(iVar1);
    iVar1 = 0;
  }
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar1;
}

