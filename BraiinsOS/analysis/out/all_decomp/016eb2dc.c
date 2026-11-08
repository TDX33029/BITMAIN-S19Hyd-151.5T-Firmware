// FUN_016eb2dc @ 016eb2dc size=508 calls_out=10 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_dh_asn1.c | /aws-lc/crypto/evp_extra/p_dh_asn1.c | /aws-lc/crypto/evp_extra/p_dh_asn1.c | /aws-lc/crypto/evp_extra/p_dh_asn1.c | /aws-lc/crypto/evp_extra/p_dh_asn1.c

void FUN_016eb2dc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  int iVar5;
  undefined8 uVar6;
  int local_20;
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  if (((param_3 == 0 || param_1 == 0) ||
      (iVar1 = FUN_016e1e1c(param_3,param_2,&PTR_018bc3f4,0), param_4 == 0 || iVar1 == 0)) ||
     (iVar1 = FUN_016e1e1c(param_4), iVar1 == 0)) {
    iVar5 = 0;
    iVar1 = 0;
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_dh_asn1.c",0x2e);
  }
  else {
    iVar5 = FUN_016e5de0(param_3);
    if (iVar5 == 0) {
      FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_dh_asn1.c",0x34);
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_017141d0();
      if (((iVar1 == 0) || (iVar3 = FUN_016e04b0(param_4,iVar1), iVar3 == 0)) ||
         (iVar3 = FUN_016e1e1c(param_4), iVar3 != 0)) {
        uVar4 = 0x3a;
      }
      else {
        local_20 = iVar3;
        iVar3 = FUN_01729f28(iVar5,iVar1,&local_20);
        if ((iVar3 != 0) && (local_20 == 0)) {
          *(int *)(iVar5 + 0xc) = iVar1;
          uVar6 = FUN_016eb26c(param_1,iVar5);
          uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if ((int)uVar6 != 0) {
            uVar2 = 1;
            goto LAB_016eb378;
          }
          iVar1 = 0;
          FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_dh_asn1.c",0x47);
          goto LAB_016eb364;
        }
        uVar4 = 0x40;
      }
      FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_dh_asn1.c",uVar4);
    }
  }
LAB_016eb364:
  FUN_0172a31c(iVar5);
  FUN_017046e0(iVar1);
  uVar2 = 0;
  uVar4 = extraout_r1;
LAB_016eb378:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar4,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

