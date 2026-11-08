// FUN_016edd9c @ 016edd9c size=360 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_ed25519_asn1.c | /aws-lc/crypto/evp_extra/p_ed25519_asn1.c

void FUN_016edd9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint extraout_r1;
  undefined4 uVar5;
  longlong lVar6;
  char local_2d;
  undefined1 auStack_2c [8];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  iVar1 = FUN_016e1e1c(param_3,param_2,&PTR_018bc3f4,0);
  if (((iVar1 == 0) && (iVar1 = FUN_016e24e4(param_4,auStack_2c,4), iVar1 != 0)) &&
     (iVar1 = FUN_016e1e1c(param_4), iVar1 == 0)) {
    uVar5 = 0;
    uVar2 = 0;
    if (param_5 != 0) {
      iVar1 = FUN_016e1f3c(param_5,&local_2d);
      if ((iVar1 == 0) || (local_2d != '\0')) {
        uVar5 = 0xb2;
        goto LAB_016ede10;
      }
      uVar2 = FUN_016e1e04(param_5);
      uVar5 = FUN_016e1e1c(param_5);
    }
    uVar3 = FUN_016e1e04(auStack_2c);
    uVar4 = FUN_016e1e1c(auStack_2c);
    lVar6 = FUN_016ed618(param_1,uVar3,uVar4,uVar2,uVar5);
  }
  else {
    uVar5 = 0xa7;
LAB_016ede10:
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_ed25519_asn1.c",uVar5);
    lVar6 = (ulonglong)extraout_r1 << 0x20;
  }
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

