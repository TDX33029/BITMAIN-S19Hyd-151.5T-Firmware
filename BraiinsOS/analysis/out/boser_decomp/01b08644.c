// FUN_01b08644 @ 01b08644 size=424 calls_out=10 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_ec_asn1.c

void FUN_01b08644(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_8c [24];
  undefined1 auStack_74 [24];
  undefined1 auStack_5c [24];
  undefined1 auStack_44 [24];
  uint local_2c;
  
  uVar3 = *(undefined4 *)(param_2 + 8);
  local_2c = DAT_01d53560;
  uVar1 = FUN_01b3d638(uVar3,param_2,&PTR_01d3b2b0,0);
  uVar3 = FUN_01b3d658(uVar3);
  iVar2 = FUN_01afd27c(param_1,auStack_8c,0x20000010);
  if (((((iVar2 != 0) && (iVar2 = FUN_01afd27c(auStack_8c,auStack_74,0x20000010), iVar2 != 0)) &&
       (iVar2 = FUN_01afd27c(auStack_74,auStack_5c,6), iVar2 != 0)) &&
      ((iVar2 = FUN_01afcfcc(auStack_5c,&DAT_01d34f88,7), iVar2 != 0 &&
       (iVar2 = FUN_01b040e8(auStack_74,uVar1), iVar2 != 0)))) &&
     ((iVar2 = FUN_01afd27c(auStack_8c,auStack_44,3), iVar2 != 0 &&
      (iVar2 = FUN_01afd168(auStack_44,0), iVar2 != 0)))) {
    iVar2 = FUN_01b04ba0(auStack_44,uVar1,uVar3,4,0);
    if ((iVar2 != 0) &&
       (uVar4 = FUN_01afca7c(param_1), uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20),
       (int)uVar4 != 0)) {
      uVar3 = 1;
      goto LAB_01b086dc;
    }
  }
  FUN_01b053d4(6,0,0x69,"/aws-lc/crypto/evp_extra/p_ec_asn1.c",0x24);
  uVar3 = 0;
  uVar1 = extraout_r1;
LAB_01b086dc:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar3,uVar1,local_2c ^ DAT_01d53560,0);
  }
  return;
}

