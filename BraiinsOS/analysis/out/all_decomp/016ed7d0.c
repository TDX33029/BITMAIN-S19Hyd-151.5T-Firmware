// FUN_016ed7d0 @ 016ed7d0 size=540 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_ed25519_asn1.c | /aws-lc/crypto/evp_extra/p_ed25519_asn1.c

void FUN_016ed7d0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 extraout_r1_00;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_ac [24];
  undefined1 auStack_94 [24];
  undefined1 auStack_7c [24];
  undefined1 auStack_64 [24];
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [24];
  uint local_1c;
  
  iVar4 = *(int *)(param_2 + 8);
  local_1c = DAT_018ddaf8;
  if (*(char *)(iVar4 + 0x40) == '\0') {
    FUN_016e9cd0(6,0,0x82,"/aws-lc/crypto/evp_extra/p_ed25519_asn1.c",0xda);
    uVar3 = extraout_r1_00;
  }
  else {
    uVar5 = FUN_016e1884(param_1,auStack_ac,0x20000010,0);
    if (((int)uVar5 != 0) &&
       (iVar1 = FUN_016e1c54(auStack_ac,(int)((ulonglong)uVar5 >> 0x20),1,0), iVar1 != 0)) {
      iVar1 = FUN_016e1884(auStack_ac,auStack_94,0x20000010);
      if (iVar1 != 0) {
        iVar1 = FUN_016e1884(auStack_94,auStack_7c,6);
        if ((iVar1 != 0) && (iVar1 = FUN_016e1700(auStack_7c,&DAT_018b6028,3), iVar1 != 0)) {
          iVar1 = FUN_016e1884(auStack_ac,auStack_64,4);
          if (iVar1 != 0) {
            iVar1 = FUN_016e1884(auStack_64,auStack_4c,4);
            if ((((iVar1 != 0) && (iVar1 = FUN_016e1700(auStack_4c,iVar4,0x20), iVar1 != 0)) &&
                (iVar1 = FUN_016e1884(auStack_ac,auStack_34,0x80000001), iVar1 != 0)) &&
               (((iVar1 = FUN_016e17e0(auStack_34,0), iVar1 != 0 &&
                 (iVar4 = FUN_016e1700(auStack_34,iVar4 + 0x20), iVar4 != 0)) &&
                (uVar5 = FUN_016e1048(param_1), uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20),
                (int)uVar5 != 0)))) {
              uVar2 = 1;
              goto LAB_016ed898;
            }
          }
        }
      }
    }
    FUN_016e9cd0(6,0,0x69,"/aws-lc/crypto/evp_extra/p_ed25519_asn1.c",0xee);
    uVar3 = extraout_r1;
  }
  uVar2 = 0;
LAB_016ed898:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

