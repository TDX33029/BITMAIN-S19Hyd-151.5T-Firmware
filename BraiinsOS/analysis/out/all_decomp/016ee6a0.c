// FUN_016ee6a0 @ 016ee6a0 size=452 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_kem_asn1.c | /aws-lc/crypto/evp_extra/p_kem_asn1.c

void FUN_016ee6a0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 extraout_r1_00;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 auStack_94 [24];
  undefined1 auStack_7c [24];
  undefined1 auStack_64 [24];
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [24];
  uint local_1c;
  
  piVar5 = *(int **)(param_2 + 8);
  local_1c = DAT_018ddaf8;
  if (piVar5[2] == 0) {
    FUN_016e9cd0(6,0,0x82,"/aws-lc/crypto/evp_extra/p_kem_asn1.c",0xe2);
    uVar3 = extraout_r1_00;
  }
  else {
    iVar4 = *piVar5;
    uVar6 = FUN_016e1884(param_1,auStack_94,0x20000010);
    if (((int)uVar6 != 0) &&
       (iVar1 = FUN_016e1c54(auStack_94,(int)((ulonglong)uVar6 >> 0x20),0,0), iVar1 != 0)) {
      iVar1 = FUN_016e1884(auStack_94,auStack_7c,0x20000010);
      if (iVar1 != 0) {
        iVar1 = FUN_016e1884(auStack_7c,auStack_64,6);
        if ((iVar1 != 0) &&
           (iVar1 = FUN_016e1700(auStack_64,*(undefined4 *)(iVar4 + 4),*(undefined1 *)(iVar4 + 8)),
           iVar1 != 0)) {
          iVar1 = FUN_016e1884(auStack_94,auStack_4c,4);
          if ((iVar1 != 0) &&
             (((iVar1 = FUN_016e1884(auStack_4c,auStack_34,4), iVar1 != 0 &&
               (iVar4 = FUN_016e1700(auStack_34,piVar5[2],*(undefined4 *)(iVar4 + 0x14)), iVar4 != 0
               )) && (uVar6 = FUN_016e1048(param_1), uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20),
                     (int)uVar6 != 0)))) {
            uVar2 = 1;
            goto LAB_016ee744;
          }
        }
      }
    }
    FUN_016e9cd0(6,0,0x69,"/aws-lc/crypto/evp_extra/p_kem_asn1.c",0xf1);
    uVar3 = extraout_r1;
  }
  uVar2 = 0;
LAB_016ee744:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

