// FUN_01afbeb4 @ 01afbeb4 size=320 calls_out=9 calls_in=3
// strings: /aws-lc/crypto/bn_extra/bn_asn1.c | /aws-lc/crypto/bn_extra/bn_asn1.c

void FUN_01afbeb4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_34 [24];
  uint local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01b2b230(param_2,param_2,&PTR_01d3b2b0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01afd27c(param_1,auStack_34,2);
    if ((iVar1 != 0) &&
       ((uVar2 = FUN_01b2b8d0(param_2), (uVar2 & 7) != 0 ||
        (iVar1 = FUN_01afd168(auStack_34), iVar1 != 0)))) {
      uVar3 = FUN_01b2b938(param_2);
      iVar1 = FUN_01afc3d0(auStack_34,uVar3,param_2);
      if (iVar1 != 0) {
        uVar4 = FUN_01afca7c(param_1);
        uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
        if ((int)uVar4 != 0) {
          uVar5 = 1;
          goto LAB_01afbf24;
        }
      }
    }
    uVar5 = 0x29;
    uVar3 = 0x76;
  }
  else {
    uVar5 = 0x1e;
    uVar3 = 0x6d;
  }
  FUN_01b053d4(3,0,uVar3,"/aws-lc/crypto/bn_extra/bn_asn1.c",uVar5);
  uVar5 = 0;
  uVar3 = extraout_r1;
LAB_01afbf24:
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar5,uVar3,local_1c ^ DAT_01d53560,0);
  }
  return;
}

