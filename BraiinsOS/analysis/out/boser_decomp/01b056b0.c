// FUN_01b056b0 @ 01b056b0 size=456 calls_out=9 calls_in=1
// strings: /aws-lc/crypto/evp_extra/evp_asn1.c | /aws-lc/crypto/evp_extra/evp_asn1.c | /aws-lc/crypto/evp_extra/evp_asn1.c

int FUN_01b056b0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  char local_45;
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  int local_24;
  
  local_24 = DAT_01d53560;
  iVar1 = FUN_01afddc0(param_1,auStack_44,0x20000010,0);
  if ((((iVar1 == 0) || (iVar1 = FUN_01afddc0(auStack_44,auStack_3c,0x20000010), iVar1 == 0)) ||
      (iVar1 = FUN_01afddc0(auStack_44,auStack_34,3), iVar1 == 0)) ||
     (iVar1 = FUN_01afd684(auStack_44), iVar1 != 0)) {
    uVar5 = 0x49;
LAB_01b05708:
    uVar2 = 0x66;
LAB_01b05780:
    FUN_01b053d4(6,0,uVar2,"/aws-lc/crypto/evp_extra/evp_asn1.c",uVar5);
  }
  else {
    iVar1 = FUN_01b05548(auStack_3c,auStack_2c);
    if (iVar1 == 0) {
      uVar5 = 0x51;
      uVar2 = 0x80;
      goto LAB_01b05780;
    }
    iVar3 = FUN_01afd780(auStack_34,&local_45);
    if ((iVar3 == 0) || (local_45 != '\0')) {
      uVar5 = 0x58;
      goto LAB_01b05708;
    }
    iVar3 = FUN_01b46f98();
    if (iVar3 != 0) {
      FUN_01b4777c(iVar3,iVar1);
      pcVar4 = *(code **)(*(int *)(iVar3 + 0xc) + 0x18);
      if (pcVar4 == (code *)0x0) {
        FUN_01b053d4(6,0,0x80,"/aws-lc/crypto/evp_extra/evp_asn1.c",0x65);
      }
      else {
        iVar1 = (*pcVar4)(iVar3,auStack_2c,auStack_3c,auStack_34);
        if (iVar1 != 0) goto LAB_01b0578c;
      }
    }
    FUN_01b46fd8(iVar3);
  }
  iVar3 = 0;
LAB_01b0578c:
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar3;
}

