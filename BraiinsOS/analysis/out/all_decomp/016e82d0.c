// FUN_016e82d0 @ 016e82d0 size=272 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/ecdsa_extra/ecdsa_asn1.c

undefined4 * FUN_016e82d0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_24 [8];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  puVar1 = (undefined4 *)FUN_0172bfe0();
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_016e24e4(param_1,auStack_24,0x20000010);
    if ((((iVar2 != 0) && (iVar2 = FUN_016e04b0(auStack_24,*puVar1), iVar2 != 0)) &&
        (iVar2 = FUN_016e04b0(auStack_24,puVar1[1]), iVar2 != 0)) &&
       (iVar2 = FUN_016e1e1c(auStack_24), iVar2 == 0)) goto LAB_016e8368;
    FUN_016e9cd0(0x1a,0,100,"/aws-lc/crypto/ecdsa_extra/ecdsa_asn1.c",0x2e);
    FUN_0172bf9c(puVar1);
  }
  puVar1 = (undefined4 *)0x0;
LAB_016e8368:
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return puVar1;
}

