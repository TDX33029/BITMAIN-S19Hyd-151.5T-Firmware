// FUN_01b05898 @ 01b05898 size=600 calls_out=9 calls_in=1
// strings: /aws-lc/crypto/evp_extra/evp_asn1.c | /aws-lc/crypto/evp_extra/evp_asn1.c | /aws-lc/crypto/evp_extra/evp_asn1.c | /aws-lc/crypto/evp_extra/evp_asn1.c

int FUN_01b05898(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint local_58;
  uint local_54;
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  int local_24;
  
  local_24 = DAT_01d53560;
  iVar2 = FUN_01afddc0(param_1,auStack_4c,0x20000010,0);
  if ((((iVar2 == 0) || (iVar2 = FUN_01afe3d0(auStack_4c,&local_58), iVar2 == 0)) ||
      (local_54 != 0 || local_54 < (1 < local_58))) ||
     ((iVar2 = FUN_01afddc0(auStack_4c,auStack_44,0x20000010,local_54 - (1 >= local_58)), iVar2 == 0
      || (iVar2 = FUN_01afddc0(auStack_4c,auStack_3c,4), iVar2 == 0)))) {
    uVar7 = 0x8d;
LAB_01b058f4:
    uVar3 = 0x66;
LAB_01b05984:
    FUN_01b053d4(6,0,uVar3,"/aws-lc/crypto/evp_extra/evp_asn1.c",uVar7);
  }
  else {
    iVar2 = FUN_01b05548(auStack_44,auStack_2c);
    if (iVar2 == 0) {
      uVar7 = 0x95;
      uVar3 = 0x80;
      goto LAB_01b05984;
    }
    iVar5 = FUN_01afdebc(auStack_4c,0x80000000);
    if ((iVar5 != 0) && (iVar5 = FUN_01afddc0(param_1,0,0x80000000), iVar5 == 0)) {
      uVar7 = 0x9d;
      uVar3 = 0x66;
      goto LAB_01b05984;
    }
    iVar5 = FUN_01afdebc(auStack_4c,0x80000001);
    bVar1 = false;
    if (iVar5 != 0) {
      if ((local_58 != 1 || local_54 != 0) ||
         (iVar5 = FUN_01afddc0(auStack_4c,auStack_34,0x80000001), iVar5 == 0)) {
        uVar7 = 0xa9;
        goto LAB_01b058f4;
      }
      bVar1 = true;
    }
    iVar5 = FUN_01b46f98();
    if (iVar5 != 0) {
      FUN_01b4777c(iVar5,iVar2);
      pcVar6 = *(code **)(*(int *)(iVar5 + 0xc) + 0x24);
      if (pcVar6 == (code *)0x0) {
        FUN_01b053d4(6,0,0x80,"/aws-lc/crypto/evp_extra/evp_asn1.c",0xb8);
      }
      else {
        puVar4 = (undefined1 *)0x0;
        if (bVar1) {
          puVar4 = auStack_34;
        }
        iVar2 = (*pcVar6)(iVar5,auStack_2c,auStack_44,auStack_3c,puVar4);
        if (iVar2 != 0) goto LAB_01b05990;
      }
    }
    FUN_01b46fd8(iVar5);
  }
  iVar5 = 0;
LAB_01b05990:
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar5;
}

