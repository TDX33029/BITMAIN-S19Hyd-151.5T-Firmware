// FUN_0177fabc @ 0177fabc size=220 calls_out=6 calls_in=1
// strings: /aws-lc/crypto/rsa_extra/rsa_asn1.c

int FUN_0177fabc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1c [8];
  int local_14;
  
  local_14 = DAT_018ddaf8;
  FUN_016e1d94(auStack_1c,param_1,param_2,0);
  iVar1 = FUN_0177f938(auStack_1c);
  if ((iVar1 == 0) || (iVar2 = FUN_016e1e1c(auStack_1c), iVar2 != 0)) {
    FUN_016e9cd0(4,0,100,"/aws-lc/crypto/rsa_extra/rsa_asn1.c",0x44);
    FUN_0174ff8c(iVar1);
    iVar1 = 0;
  }
  if (local_14 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar1;
}

