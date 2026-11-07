// FUN_016ea208 @ 016ea208 size=632 calls_out=9 calls_in=1
// strings: /aws-lc/crypto/evp_extra/evp_asn1.c | /aws-lc/crypto/evp_extra/evp_asn1.c | /aws-lc/crypto/evp_extra/evp_asn1.c | /aws-lc/crypto/evp_extra/evp_asn1.c | /aws-lc/crypto/evp_extra/evp_asn1.c

int FUN_016ea208(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint local_58;
  uint local_54;
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  iVar2 = FUN_016e24e4(param_1,auStack_4c,0x20000010,0);
  if ((((iVar2 == 0) || (iVar2 = FUN_016e2bf0(auStack_4c,&local_58), iVar2 == 0)) ||
      (local_54 != 0 || local_54 < (1 < local_58))) ||
     ((iVar2 = FUN_016e24e4(auStack_4c,auStack_44,0x20000010,local_54 - (1 >= local_58)), iVar2 == 0
      || (iVar2 = FUN_016e24e4(auStack_4c,auStack_3c,4), iVar2 == 0)))) {
    uVar6 = 0x8d;
LAB_016ea3a8:
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/evp_asn1.c",uVar6);
  }
  else {
    iVar2 = FUN_016e9ea4(auStack_44,auStack_2c);
    if (iVar2 == 0) {
      FUN_016e9cd0(6,0,0x80,"/aws-lc/crypto/evp_extra/evp_asn1.c",0x95);
    }
    else {
      iVar3 = FUN_016e25e0(auStack_4c,0x80000000);
      if ((iVar3 == 0) || (iVar3 = FUN_016e24e4(param_1,0,0x80000000), iVar3 != 0)) {
        iVar3 = FUN_016e25e0(auStack_4c,0x80000001);
        bVar1 = false;
        if (iVar3 != 0) {
          if ((local_58 != 1 || local_54 != 0) ||
             (iVar3 = FUN_016e24e4(auStack_4c,auStack_34,0x80000001), iVar3 == 0)) {
            uVar6 = 0xa9;
            goto LAB_016ea3a8;
          }
          bVar1 = true;
        }
        iVar3 = FUN_01739ea4();
        if (iVar3 != 0) {
          FUN_0173a734(iVar3,iVar2);
          pcVar5 = *(code **)(*(int *)(iVar3 + 0xc) + 0x24);
          if (pcVar5 == (code *)0x0) {
            FUN_016e9cd0(6,0,0x80,"/aws-lc/crypto/evp_extra/evp_asn1.c",0xb8);
          }
          else {
            if (bVar1) {
              puVar4 = auStack_34;
            }
            else {
              puVar4 = (undefined1 *)0x0;
            }
            iVar2 = (*pcVar5)(iVar3,auStack_2c,auStack_44,auStack_3c,puVar4);
            if (iVar2 != 0) goto LAB_016ea3c0;
          }
        }
        FUN_01739ee4(iVar3);
      }
      else {
        FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/evp_asn1.c",0x9d);
      }
    }
  }
  iVar3 = 0;
LAB_016ea3c0:
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar3;
}

