// FUN_01b03738 @ 01b03738 size=304 calls_out=8 calls_in=0
// strings: /aws-lc/crypto/dsa/dsa_asn1.c

int FUN_01b03738(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_24 [8];
  int local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01b01f38();
  if (iVar1 != 0) {
    iVar2 = FUN_01afddc0(param_1,auStack_24,0x20000010);
    if ((((iVar2 == 0) || (iVar2 = FUN_01b031b4(auStack_24,iVar1), iVar2 == 0)) ||
        (iVar2 = FUN_01b031b4(auStack_24,iVar1 + 4), iVar2 == 0)) ||
       ((iVar2 = FUN_01b031b4(auStack_24,iVar1 + 8), iVar2 == 0 ||
        (iVar2 = FUN_01afd684(auStack_24), iVar2 != 0)))) {
      FUN_01b053d4(10,0,0x69,"/aws-lc/crypto/dsa/dsa_asn1.c",0xb3);
    }
    else {
      iVar2 = FUN_01b032a8(iVar1);
      if (iVar2 != 0) goto LAB_01b03820;
    }
    FUN_01b01f88(iVar1);
  }
  iVar1 = 0;
LAB_01b03820:
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar1;
}

