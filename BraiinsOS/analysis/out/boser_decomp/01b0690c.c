// FUN_01b0690c @ 01b0690c size=484 calls_out=10 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_dh_asn1.c | /aws-lc/crypto/evp_extra/p_dh_asn1.c | /aws-lc/crypto/evp_extra/p_dh_asn1.c | /aws-lc/crypto/evp_extra/p_dh_asn1.c | /aws-lc/crypto/evp_extra/p_dh_asn1.c

void FUN_01b0690c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int local_20;
  uint local_1c;
  
  local_1c = DAT_01d53560;
  if (((param_3 == 0 || param_1 == 0) ||
      (iVar3 = FUN_01afd684(param_3,param_2,&PTR_01d3b2b0,0), param_4 == 0 || iVar3 == 0)) ||
     (iVar3 = FUN_01afd684(param_4), iVar3 == 0)) {
    iVar3 = 0;
    FUN_01b053d4(6,0,0x66,"/aws-lc/crypto/evp_extra/p_dh_asn1.c",0x2e);
LAB_01b06978:
    iVar4 = 0;
  }
  else {
    iVar3 = FUN_01b0181c(param_3);
    if (iVar3 == 0) {
      uVar6 = 0x34;
LAB_01b069c8:
      FUN_01b053d4(6,0,0x66,"/aws-lc/crypto/evp_extra/p_dh_asn1.c",uVar6);
      goto LAB_01b06978;
    }
    iVar4 = FUN_01b2adb8();
    if (((iVar4 == 0) || (iVar2 = FUN_01afbd84(param_4,iVar4), iVar2 == 0)) ||
       (iVar2 = FUN_01afd684(param_4), iVar2 != 0)) {
      uVar6 = 0x3a;
    }
    else {
      local_20 = iVar2;
      iVar2 = FUN_01b3ae00(iVar3,iVar4,&local_20);
      if ((iVar2 != 0) && (local_20 == 0)) {
        *(int *)(iVar3 + 0xc) = iVar4;
        uVar5 = FUN_01b068a0(param_1,iVar3);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if ((int)uVar5 != 0) {
          uVar1 = 1;
          goto LAB_01b06a1c;
        }
        uVar6 = 0x47;
        goto LAB_01b069c8;
      }
      uVar6 = 0x40;
    }
    FUN_01b053d4(6,0,0x66,"/aws-lc/crypto/evp_extra/p_dh_asn1.c",uVar6);
  }
  FUN_01b3b1a8(iVar3);
  FUN_01b1f904(iVar4);
  uVar1 = 0;
  uVar6 = extraout_r1;
LAB_01b06a1c:
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar6,local_1c ^ DAT_01d53560,0);
  }
  return;
}

