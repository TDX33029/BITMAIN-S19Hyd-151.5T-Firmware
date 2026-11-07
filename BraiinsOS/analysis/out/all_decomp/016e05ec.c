// FUN_016e05ec @ 016e05ec size=328 calls_out=9 calls_in=3
// strings: /aws-lc/crypto/bn_extra/bn_asn1.c | /aws-lc/crypto/bn_extra/bn_asn1.c

void FUN_016e05ec(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined8 uVar5;
  undefined1 auStack_34 [24];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_0171462c(param_2,param_2,&PTR_018bc3f4,0);
  if (iVar1 == 0) {
    iVar1 = FUN_016e1884(param_1,auStack_34,2);
    if (iVar1 != 0) {
      uVar2 = FUN_01714eb4(param_2);
      if (((uVar2 & 7) != 0) || (iVar1 = FUN_016e17e0(auStack_34), iVar1 != 0)) {
        uVar3 = FUN_01714f1c(param_2);
        iVar1 = FUN_016e0748(auStack_34,uVar3,param_2);
        if ((iVar1 != 0) &&
           (uVar5 = FUN_016e1048(param_1), uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20),
           (int)uVar5 != 0)) {
          uVar4 = 1;
          goto LAB_016e06b4;
        }
      }
    }
    FUN_016e9cd0(3,0,0x76,"/aws-lc/crypto/bn_extra/bn_asn1.c",0x29);
    uVar3 = extraout_r1;
  }
  else {
    FUN_016e9cd0(3,0,0x6d,"/aws-lc/crypto/bn_extra/bn_asn1.c",0x1e);
    uVar3 = extraout_r1_00;
  }
  uVar4 = 0;
LAB_016e06b4:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar4,uVar3,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

