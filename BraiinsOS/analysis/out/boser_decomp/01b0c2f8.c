// FUN_01b0c2f8 @ 01b0c2f8 size=360 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_x25519_asn1.c | /aws-lc/crypto/evp_extra/p_x25519_asn1.c

void FUN_01b0c2f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint extraout_r1;
  longlong lVar5;
  undefined4 uVar6;
  char local_2d;
  undefined1 auStack_2c [8];
  uint local_24;
  
  local_24 = DAT_01d53560;
  iVar1 = FUN_01afd684(param_3,&PTR_01d3b2b0,param_3,0);
  if (((iVar1 == 0) && (iVar1 = FUN_01afddc0(param_4,auStack_2c,4), iVar1 != 0)) &&
     (iVar1 = FUN_01afd684(param_4), iVar1 == 0)) {
    uVar6 = 0;
    uVar2 = 0;
    if (param_5 != 0) {
      iVar1 = FUN_01afd780(param_5,&local_2d);
      if ((iVar1 == 0) || (local_2d != '\0')) {
        uVar6 = 0xa9;
        goto LAB_01b0c358;
      }
      uVar2 = FUN_01afd674(param_5);
      uVar6 = FUN_01afd684(param_5);
    }
    uVar3 = FUN_01afd674(auStack_2c);
    uVar4 = FUN_01afd684(auStack_2c);
    lVar5 = FUN_01b0c1d8(param_1,uVar3,uVar4,uVar2,uVar6);
  }
  else {
    uVar6 = 0xa0;
LAB_01b0c358:
    FUN_01b053d4(6,0,0x66,"/aws-lc/crypto/evp_extra/p_x25519_asn1.c",uVar6);
    lVar5 = (ulonglong)extraout_r1 << 0x20;
  }
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),local_24 ^ DAT_01d53560,0);
  }
  return;
}

