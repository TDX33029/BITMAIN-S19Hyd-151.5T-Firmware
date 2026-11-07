// FUN_016ed3e0 @ 016ed3e0 size=444 calls_out=13 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_ec_asn1.c

void FUN_016ed3e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int local_28;
  uint local_24;
  
  local_28 = 0;
  local_24 = DAT_018ddaf8;
  iVar1 = FUN_016e8b3c(param_3,&local_28,&PTR_018bc3f4,0);
  if (((iVar1 == 0) || (iVar2 = FUN_016e1e1c(param_3), iVar2 != 0)) || (local_28 == 0)) {
    iVar2 = 0;
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_ec_asn1.c",0x37);
    iVar5 = 0;
  }
  else {
    iVar2 = FUN_0172cc2c();
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_01737020(iVar2,iVar1);
      if ((iVar5 == 0) || (iVar5 = FUN_01733c9c(iVar1), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        uVar4 = FUN_016e1e04(param_4);
        uVar3 = FUN_016e1e1c(param_4);
        iVar1 = FUN_0174d02c(iVar1,iVar5,uVar4,uVar3,0);
        if (iVar1 != 0) {
          iVar1 = FUN_01737170(iVar2);
          if (iVar1 != 0) {
            *(uint *)(iVar2 + 0x1c) = (uint)(local_28 == 2);
            FUN_0172c788(iVar5);
            FUN_0173aa7c(param_1,iVar2);
            uVar3 = 1;
            uVar4 = extraout_r1_00;
            goto LAB_016ed498;
          }
        }
      }
    }
  }
  FUN_0172c788(iVar5);
  FUN_0172c984(iVar2);
  uVar3 = 0;
  uVar4 = extraout_r1;
LAB_016ed498:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,uVar4,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

