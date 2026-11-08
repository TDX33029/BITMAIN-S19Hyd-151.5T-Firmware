// FUN_01b0181c @ 01b0181c size=340 calls_out=9 calls_in=1
// strings: /aws-lc/crypto/dh_extra/dh_asn1.c

int FUN_01b0181c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  int local_2c;
  undefined1 auStack_24 [8];
  int local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01b3b160();
  if (iVar1 != 0) {
    iVar2 = FUN_01afddc0(param_1,auStack_24,0x20000010);
    if (((iVar2 != 0) && (iVar2 = FUN_01b01728(auStack_24,iVar1), iVar2 != 0)) &&
       (iVar2 = FUN_01b01728(auStack_24,iVar1 + 4), iVar2 != 0)) {
      iVar2 = FUN_01afd684(auStack_24);
      if (iVar2 != 0) {
        iVar2 = FUN_01afe3d0(auStack_24,&local_30);
        if ((iVar2 == 0) || (local_2c != 0)) goto LAB_01b01878;
        *(undefined4 *)(iVar1 + 0x14) = local_30;
      }
      iVar2 = FUN_01afd684(auStack_24);
      if ((iVar2 == 0) && (iVar2 = FUN_01b3acd4(iVar1), iVar2 != 0)) goto LAB_01b018a4;
    }
LAB_01b01878:
    FUN_01b053d4(5,0,0x68,"/aws-lc/crypto/dh_extra/dh_asn1.c",0x45);
    FUN_01b3b1a8(iVar1);
  }
  iVar1 = 0;
LAB_01b018a4:
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar1;
}

