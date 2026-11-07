// FUN_01b0a768 @ 01b0a768 size=388 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c | /aws-lc/crypto/evp_extra/p_pqdsa_asn1.c

void FUN_01b0a768(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auStack_84 [24];
  undefined1 auStack_6c [24];
  undefined1 auStack_54 [24];
  undefined1 auStack_3c [24];
  uint local_24;
  
  piVar3 = *(int **)(param_2 + 8);
  local_24 = DAT_01d53560;
  if (piVar3[1] == 0) {
    uVar6 = 0x71;
    uVar2 = 0x7d;
  }
  else {
    iVar4 = *piVar3;
    iVar1 = FUN_01afd27c(param_1,auStack_84,0x20000010,0);
    if (((((iVar1 != 0) && (iVar1 = FUN_01afd27c(auStack_84,auStack_6c,0x20000010), iVar1 != 0)) &&
         (iVar1 = FUN_01afd27c(auStack_6c,auStack_54,6), iVar1 != 0)) &&
        ((iVar1 = FUN_01afcfcc(auStack_54,*(undefined4 *)(iVar4 + 4),*(undefined1 *)(iVar4 + 8)),
         iVar1 != 0 && (iVar1 = FUN_01afd27c(auStack_84,auStack_3c,3), iVar1 != 0)))) &&
       ((iVar1 = FUN_01afd168(auStack_3c,0), iVar1 != 0 &&
        ((iVar1 = FUN_01afcfcc(auStack_3c,piVar3[1],*(undefined4 *)(iVar4 + 0x10)), iVar1 != 0 &&
         (uVar5 = FUN_01afca7c(param_1), uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20),
         (int)uVar5 != 0)))))) {
      uVar6 = 1;
      goto LAB_01b0a7cc;
    }
    uVar6 = 0x7f;
    uVar2 = 0x69;
  }
  FUN_01b053d4(6,0,uVar2,"/aws-lc/crypto/evp_extra/p_pqdsa_asn1.c",uVar6);
  uVar6 = 0;
  uVar2 = extraout_r1;
LAB_01b0a7cc:
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar6,uVar2,local_24 ^ DAT_01d53560,0);
  }
  return;
}

