// FUN_01b0399c @ 01b0399c size=268 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/ecdsa_extra/ecdsa_asn1.c

undefined4 * FUN_01b0399c(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_24 [8];
  int local_1c;
  
  local_1c = DAT_01d53560;
  puVar1 = (undefined4 *)FUN_01b3cb78();
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_01afddc0(param_1,auStack_24,0x20000010);
    if ((((iVar2 != 0) && (iVar2 = FUN_01afbd84(auStack_24,*puVar1), iVar2 != 0)) &&
        (iVar2 = FUN_01afbd84(auStack_24,puVar1[1]), iVar2 != 0)) &&
       (iVar2 = FUN_01afd684(auStack_24), iVar2 == 0)) goto LAB_01b03a24;
    FUN_01b053d4(0x1a,0,100,"/aws-lc/crypto/ecdsa_extra/ecdsa_asn1.c",0x2e);
    FUN_01b3cb34(puVar1);
  }
  puVar1 = (undefined4 *)0x0;
LAB_01b03a24:
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return puVar1;
}

