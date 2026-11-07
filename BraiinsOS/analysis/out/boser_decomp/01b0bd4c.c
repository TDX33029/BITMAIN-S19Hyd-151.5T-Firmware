// FUN_01b0bd4c @ 01b0bd4c size=364 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_x25519_asn1.c

void FUN_01b0bd4c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_84 [24];
  undefined1 auStack_6c [24];
  undefined1 auStack_54 [24];
  undefined1 auStack_3c [24];
  uint local_24;
  
  uVar3 = *(undefined4 *)(param_2 + 8);
  local_24 = DAT_01d53560;
  iVar1 = FUN_01afd27c(param_1,auStack_84,0x20000010,0);
  if (((((iVar1 == 0) || (iVar1 = FUN_01afd27c(auStack_84,auStack_6c,0x20000010), iVar1 == 0)) ||
       (iVar1 = FUN_01afd27c(auStack_6c,auStack_54,6), iVar1 == 0)) ||
      ((iVar1 = FUN_01afcfcc(auStack_54,&DAT_01d352f8,3), iVar1 == 0 ||
       (iVar1 = FUN_01afd27c(auStack_84,auStack_3c,3), iVar1 == 0)))) ||
     ((iVar1 = FUN_01afd168(auStack_3c,0), iVar1 == 0 ||
      ((iVar1 = FUN_01afcfcc(auStack_3c,uVar3,0x20), iVar1 == 0 ||
       (uVar4 = FUN_01afca7c(param_1), uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20),
       (int)uVar4 == 0)))))) {
    FUN_01b053d4(6,0,0x69,"/aws-lc/crypto/evp_extra/p_x25519_asn1.c",0x8a);
    uVar2 = 0;
    uVar3 = extraout_r1;
  }
  else {
    uVar2 = 1;
  }
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,uVar3,local_24 ^ DAT_01d53560,0);
  }
  return;
}

