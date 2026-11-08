// FUN_016f02c4 @ 016f02c4 size=400 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_rsa_asn1.c

void FUN_016f02c4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_9c [24];
  undefined1 auStack_84 [24];
  undefined1 auStack_6c [24];
  undefined1 auStack_54 [24];
  undefined1 auStack_3c [24];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  iVar1 = FUN_016e1884(param_1,auStack_9c,0x20000010,0);
  if ((iVar1 != 0) && (iVar1 = FUN_016e1884(auStack_9c,auStack_84,0x20000010), iVar1 != 0)) {
    iVar1 = FUN_016e1884(auStack_84,auStack_6c,6);
    if (((iVar1 != 0) &&
        (((iVar1 = FUN_016e1700(auStack_6c,&DAT_018b622c,9), iVar1 != 0 &&
          (iVar1 = FUN_016e1884(auStack_84,auStack_54,5), iVar1 != 0)) &&
         (iVar1 = FUN_016e1884(auStack_9c,auStack_3c,3), iVar1 != 0)))) &&
       (((iVar1 = FUN_016e17e0(auStack_3c,0), iVar1 != 0 &&
         (iVar1 = FUN_0177fba8(auStack_3c,*(undefined4 *)(param_2 + 8)), iVar1 != 0)) &&
        (uVar4 = FUN_016e1048(param_1), uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20),
        (int)uVar4 != 0)))) {
      uVar2 = 1;
      goto LAB_016f0364;
    }
  }
  FUN_016e9cd0(6,0,0x69,"/aws-lc/crypto/evp_extra/p_rsa_asn1.c",0x1e);
  uVar2 = 0;
  uVar3 = extraout_r1;
LAB_016f0364:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

