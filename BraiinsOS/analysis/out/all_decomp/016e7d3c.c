// FUN_016e7d3c @ 016e7d3c size=332 calls_out=9 calls_in=1
// strings: /aws-lc/crypto/dsa/dsa_asn1.c

int * FUN_016e7d3c(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_24 [8];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  piVar1 = (int *)FUN_016e70ac();
  if (piVar1 == (int *)0x0) {
LAB_016e7e78:
    piVar1 = (int *)0x0;
  }
  else {
    iVar2 = FUN_016e24e4(param_1,auStack_24,0x20000010);
    if (iVar2 == 0) {
LAB_016e7e50:
      FUN_016e9cd0(10,0,0x69,"/aws-lc/crypto/dsa/dsa_asn1.c",0x6e);
      FUN_016e70c4(piVar1);
      goto LAB_016e7e78;
    }
    if (*piVar1 != 0) {
LAB_016e7e80:
      FUN_016e7a6c();
      goto LAB_016e7e84;
    }
    iVar2 = FUN_017141d0();
    *piVar1 = iVar2;
    if ((iVar2 == 0) || (iVar2 = FUN_016e04b0(auStack_24,iVar2), iVar2 == 0)) goto LAB_016e7e50;
    if (piVar1[1] != 0) goto LAB_016e7e80;
    iVar2 = FUN_017141d0();
    piVar1[1] = iVar2;
    if (((iVar2 == 0) || (iVar2 = FUN_016e04b0(auStack_24,iVar2), iVar2 == 0)) ||
       (iVar2 = FUN_016e1e1c(auStack_24), iVar2 != 0)) goto LAB_016e7e50;
  }
  if (local_1c == DAT_018ddaf8) {
    return piVar1;
  }
LAB_016e7e84:
                    /* WARNING: Subroutine does not return */
  FUN_016d2b78();
}

