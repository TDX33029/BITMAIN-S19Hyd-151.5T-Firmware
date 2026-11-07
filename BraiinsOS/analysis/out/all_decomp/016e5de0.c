// FUN_016e5de0 @ 016e5de0 size=400 calls_out=11 calls_in=1
// strings: /aws-lc/crypto/dh_extra/dh_asn1.c

int * FUN_016e5de0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int local_30;
  int iStack_2c;
  undefined1 auStack_24 [8];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  piVar1 = (int *)FUN_0172a2c0();
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_016e24e4(param_1,auStack_24,0x20000010);
    if (iVar2 != 0) {
      if (*piVar1 != 0) {
LAB_016e5f6c:
                    /* WARNING: Subroutine does not return */
        FUN_016e5da0();
      }
      iVar2 = FUN_017141d0();
      *piVar1 = iVar2;
      if ((iVar2 != 0) && (iVar2 = FUN_016e04b0(auStack_24,iVar2), iVar2 != 0)) {
        if (piVar1[1] != 0) goto LAB_016e5f6c;
        iVar2 = FUN_017141d0();
        piVar1[1] = iVar2;
        if ((iVar2 != 0) && (iVar2 = FUN_016e04b0(auStack_24,iVar2), iVar2 != 0)) {
          iVar2 = FUN_016e1e1c(auStack_24);
          if (iVar2 == 0) {
LAB_016e5ed4:
            iVar2 = FUN_016e1e1c(auStack_24);
            if ((iVar2 == 0) && (iVar2 = FUN_01729e04(piVar1), iVar2 != 0)) goto LAB_016e5ef4;
          }
          else {
            iVar2 = FUN_016e2bf0(auStack_24,&local_30);
            if (iVar2 != 0) {
              if (iStack_2c == 0) {
                piVar1[5] = local_30;
                goto LAB_016e5ed4;
              }
            }
          }
        }
      }
    }
    FUN_016e9cd0(5,0,0x68,"/aws-lc/crypto/dh_extra/dh_asn1.c",0x45);
    FUN_0172a31c(piVar1);
  }
  piVar1 = (int *)0x0;
LAB_016e5ef4:
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return piVar1;
}

