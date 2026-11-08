// FUN_01afbd84 @ 01afbd84 size=284 calls_out=7 calls_in=5
// strings: /aws-lc/crypto/bn_extra/bn_asn1.c | /aws-lc/crypto/bn_extra/bn_asn1.c

void FUN_01afbd84(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int local_28;
  undefined1 auStack_24 [8];
  uint local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01afddc0(param_1,auStack_24,2,0);
  if ((iVar1 == 0) || (iVar1 = FUN_01afe0dc(auStack_24,&local_28), iVar1 == 0)) {
    uVar5 = 0xf;
    uVar2 = 0x75;
  }
  else {
    if (local_28 == 0) {
      uVar2 = FUN_01afd674(auStack_24);
      uVar5 = FUN_01afd684(auStack_24);
      uVar4 = FUN_01b2ba40(uVar2,uVar5,param_2);
      uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
      bVar3 = (int)uVar4 != 0;
      goto LAB_01afbdf4;
    }
    uVar5 = 0x14;
    uVar2 = 0x6d;
  }
  FUN_01b053d4(3,0,uVar2,"/aws-lc/crypto/bn_extra/bn_asn1.c",uVar5);
  bVar3 = false;
  uVar2 = extraout_r1;
LAB_01afbdf4:
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(bVar3,uVar2,local_1c ^ DAT_01d53560,0);
  }
  return;
}

