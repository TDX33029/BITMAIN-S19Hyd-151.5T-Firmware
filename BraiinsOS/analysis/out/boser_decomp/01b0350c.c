// FUN_01b0350c @ 01b0350c size=268 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/dsa/dsa_asn1.c

int FUN_01b0350c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_24 [8];
  int local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01b028bc();
  if (iVar1 != 0) {
    iVar2 = FUN_01afddc0(param_1,auStack_24,0x20000010);
    if ((((iVar2 != 0) && (iVar2 = FUN_01b031b4(auStack_24,iVar1), iVar2 != 0)) &&
        (iVar2 = FUN_01b031b4(auStack_24,iVar1 + 4), iVar2 != 0)) &&
       (iVar2 = FUN_01afd684(auStack_24), iVar2 == 0)) goto LAB_01b03594;
    FUN_01b053d4(10,0,0x69,"/aws-lc/crypto/dsa/dsa_asn1.c",0x6e);
    FUN_01b028d4(iVar1);
  }
  iVar1 = 0;
LAB_01b03594:
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar1;
}

