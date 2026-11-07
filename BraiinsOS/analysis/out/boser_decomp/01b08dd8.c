// FUN_01b08dd8 @ 01b08dd8 size=428 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_ed25519_asn1.c | /aws-lc/crypto/evp_extra/p_ed25519_asn1.c

void FUN_01b08dd8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_9c [24];
  undefined1 auStack_84 [24];
  undefined1 auStack_6c [24];
  undefined1 auStack_54 [24];
  undefined1 auStack_3c [24];
  uint local_24;
  
  iVar3 = *(int *)(param_2 + 8);
  local_24 = DAT_01d53560;
  if (*(char *)(iVar3 + 0x40) == '\0') {
    uVar5 = 0xbf;
    uVar2 = 0x82;
  }
  else {
    uVar4 = FUN_01afd27c(param_1,auStack_9c,0x20000010,0);
    if (((((((int)uVar4 != 0) &&
           (iVar1 = FUN_01afd478(auStack_9c,(int)((ulonglong)uVar4 >> 0x20),0,0), iVar1 != 0)) &&
          (iVar1 = FUN_01afd27c(auStack_9c,auStack_84,0x20000010), iVar1 != 0)) &&
         ((iVar1 = FUN_01afd27c(auStack_84,auStack_6c,6), iVar1 != 0 &&
          (iVar1 = FUN_01afcfcc(auStack_6c,&DAT_01d35040,3), iVar1 != 0)))) &&
        ((iVar1 = FUN_01afd27c(auStack_9c,auStack_54,4), iVar1 != 0 &&
         ((iVar1 = FUN_01afd27c(auStack_54,auStack_3c,4), iVar1 != 0 &&
          (iVar3 = FUN_01afcfcc(auStack_3c,iVar3,0x20), iVar3 != 0)))))) &&
       (uVar4 = FUN_01afca7c(param_1), uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20),
       (int)uVar4 != 0)) {
      uVar5 = 1;
      goto LAB_01b08e44;
    }
    uVar5 = 0xd0;
    uVar2 = 0x69;
  }
  FUN_01b053d4(6,0,uVar2,"/aws-lc/crypto/evp_extra/p_ed25519_asn1.c",uVar5);
  uVar5 = 0;
  uVar2 = extraout_r1;
LAB_01b08e44:
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar5,uVar2,local_24 ^ DAT_01d53560,0);
  }
  return;
}

