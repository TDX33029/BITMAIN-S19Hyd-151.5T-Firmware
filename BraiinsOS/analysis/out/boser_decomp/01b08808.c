// FUN_01b08808 @ 01b08808 size=420 calls_out=13 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_ec_asn1.c

void FUN_01b08808(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar5;
  int local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  local_30 = 0;
  iVar1 = FUN_01b041e4(param_3,&local_30);
  if (((iVar1 == 0) || (iVar5 = FUN_01afd684(param_3), iVar5 != 0)) || (local_30 == 0)) {
    iVar5 = 0;
    FUN_01b053d4(6,0,0x66,"/aws-lc/crypto/evp_extra/p_ec_asn1.c",0x37);
LAB_01b08888:
    iVar2 = iVar5;
  }
  else {
    iVar5 = FUN_01b3d7ac();
    if (iVar5 == 0) goto LAB_01b08888;
    iVar2 = FUN_01b451a8(iVar5,iVar1);
    if ((iVar2 == 0) || (iVar2 = FUN_01b42428(iVar1), iVar2 == 0)) {
      iVar2 = 0;
    }
    else {
      uVar3 = FUN_01afd674(param_4);
      uVar4 = FUN_01afd684(param_4);
      iVar1 = FUN_01b53fb8(iVar1,iVar2,uVar3,uVar4,0);
      if ((iVar1 != 0) && (iVar1 = FUN_01b452b8(iVar5,iVar2), iVar1 != 0)) {
        *(uint *)(iVar5 + 0x1c) = (uint)(local_30 == 2);
        FUN_01b3d37c(iVar2);
        FUN_01b47a30(param_1,iVar5);
        uVar4 = 1;
        uVar3 = extraout_r1;
        goto LAB_01b0894c;
      }
    }
  }
  FUN_01b3d37c(iVar2);
  FUN_01b3d538(iVar5);
  uVar4 = 0;
  uVar3 = extraout_r1_00;
LAB_01b0894c:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar4,uVar3,local_2c ^ DAT_01d53560,0);
  }
  return;
}

