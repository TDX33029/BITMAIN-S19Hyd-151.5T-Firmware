// FUN_016e04b0 @ 016e04b0 size=296 calls_out=7 calls_in=6
// strings: /aws-lc/crypto/bn_extra/bn_asn1.c | /aws-lc/crypto/bn_extra/bn_asn1.c

void FUN_016e04b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  bool bVar4;
  undefined8 uVar5;
  int local_28;
  undefined1 auStack_24 [8];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_016e24e4(param_1,auStack_24,2,0);
  if ((iVar1 == 0) || (iVar1 = FUN_016e2894(auStack_24,&local_28), iVar1 == 0)) {
    FUN_016e9cd0(3,0,0x75,"/aws-lc/crypto/bn_extra/bn_asn1.c",0xf);
    uVar2 = extraout_r1;
  }
  else {
    if (local_28 == 0) {
      uVar2 = FUN_016e1e04(auStack_24);
      uVar3 = FUN_016e1e1c(auStack_24);
      uVar5 = FUN_017150f4(uVar2,uVar3,param_2);
      uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
      bVar4 = (int)uVar5 != 0;
      goto LAB_016e0570;
    }
    FUN_016e9cd0(3,0,0x6d,"/aws-lc/crypto/bn_extra/bn_asn1.c",0x14);
    uVar2 = extraout_r1_00;
  }
  bVar4 = false;
LAB_016e0570:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(bVar4,uVar2,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

