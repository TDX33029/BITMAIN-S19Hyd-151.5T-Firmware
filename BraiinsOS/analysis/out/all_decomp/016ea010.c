// FUN_016ea010 @ 016ea010 size=476 calls_out=9 calls_in=4
// strings: /aws-lc/crypto/evp_extra/evp_asn1.c | /aws-lc/crypto/evp_extra/evp_asn1.c | /aws-lc/crypto/evp_extra/evp_asn1.c | /aws-lc/crypto/evp_extra/evp_asn1.c

int FUN_016ea010(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  char local_45;
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  iVar1 = FUN_016e24e4(param_1,auStack_44,0x20000010,0);
  if ((((iVar1 == 0) || (iVar1 = FUN_016e24e4(auStack_44,auStack_3c,0x20000010), iVar1 == 0)) ||
      (iVar1 = FUN_016e24e4(auStack_44,auStack_34,3), iVar1 == 0)) ||
     (iVar1 = FUN_016e1e1c(auStack_44), iVar1 != 0)) {
    uVar4 = 0x49;
LAB_016ea134:
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/evp_asn1.c",uVar4);
  }
  else {
    iVar1 = FUN_016e9ea4(auStack_3c,auStack_2c);
    if (iVar1 == 0) {
      FUN_016e9cd0(6,0,0x80,"/aws-lc/crypto/evp_extra/evp_asn1.c",0x51);
    }
    else {
      iVar2 = FUN_016e1f3c(auStack_34,&local_45);
      if ((iVar2 == 0) || (local_45 != '\0')) {
        uVar4 = 0x58;
        goto LAB_016ea134;
      }
      iVar2 = FUN_01739ea4();
      if (iVar2 != 0) {
        FUN_0173a734(iVar2,iVar1);
        pcVar3 = *(code **)(*(int *)(iVar2 + 0xc) + 0x18);
        if (pcVar3 == (code *)0x0) {
          FUN_016e9cd0(6,0,0x80,"/aws-lc/crypto/evp_extra/evp_asn1.c",0x65);
        }
        else {
          iVar1 = (*pcVar3)(iVar2,auStack_2c,auStack_3c,auStack_34);
          if (iVar1 != 0) goto LAB_016ea14c;
        }
      }
      FUN_01739ee4(iVar2);
    }
  }
  iVar2 = 0;
LAB_016ea14c:
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar2;
}

