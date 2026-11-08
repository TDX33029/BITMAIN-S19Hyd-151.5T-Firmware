// FUN_016e83f0 @ 016e83f0 size=220 calls_out=6 calls_in=2
// strings: /aws-lc/crypto/ecdsa_extra/ecdsa_asn1.c

int FUN_016e83f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1c [8];
  int local_14;
  
  local_14 = DAT_018ddaf8;
  FUN_016e1d94(auStack_1c,param_1,param_2,0);
  iVar1 = FUN_016e82d0(auStack_1c);
  if ((iVar1 == 0) || (iVar2 = FUN_016e1e1c(auStack_1c), iVar2 != 0)) {
    FUN_016e9cd0(0x1a,0,100,"/aws-lc/crypto/ecdsa_extra/ecdsa_asn1.c",0x3a);
    FUN_0172bf9c(iVar1);
    iVar1 = 0;
  }
  if (local_14 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar1;
}

