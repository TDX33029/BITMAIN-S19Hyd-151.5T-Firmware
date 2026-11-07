// FUN_016f0da0 @ 016f0da0 size=468 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_x25519_asn1.c | /aws-lc/crypto/evp_extra/p_x25519_asn1.c

void FUN_016f0da0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 extraout_r1_00;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_94 [24];
  undefined1 auStack_7c [24];
  undefined1 auStack_64 [24];
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [24];
  uint local_1c;
  
  iVar4 = *(int *)(param_2 + 8);
  local_1c = DAT_018ddaf8;
  if (*(char *)(iVar4 + 0x40) == '\0') {
    FUN_016e9cd0(6,0,0x82,"/aws-lc/crypto/evp_extra/p_x25519_asn1.c",0xb6);
    uVar3 = extraout_r1_00;
  }
  else {
    uVar5 = FUN_016e1884(param_1,auStack_94,0x20000010,0);
    if (((int)uVar5 != 0) &&
       (iVar1 = FUN_016e1c54(auStack_94,(int)((ulonglong)uVar5 >> 0x20),0,0), iVar1 != 0)) {
      iVar1 = FUN_016e1884(auStack_94,auStack_7c,0x20000010);
      if (iVar1 != 0) {
        iVar1 = FUN_016e1884(auStack_7c,auStack_64,6);
        if ((iVar1 != 0) && (iVar1 = FUN_016e1700(auStack_64,&DAT_018b62e0,3), iVar1 != 0)) {
          iVar1 = FUN_016e1884(auStack_94,auStack_4c,4);
          if ((iVar1 != 0) &&
             (((iVar1 = FUN_016e1884(auStack_4c,auStack_34,4), iVar1 != 0 &&
               (iVar4 = FUN_016e1700(auStack_34,iVar4 + 0x20), iVar4 != 0)) &&
              (uVar5 = FUN_016e1048(param_1), uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20),
              (int)uVar5 != 0)))) {
            uVar2 = 1;
            goto LAB_016f0e68;
          }
        }
      }
    }
    FUN_016e9cd0(6,0,0x69,"/aws-lc/crypto/evp_extra/p_x25519_asn1.c",199);
    uVar3 = extraout_r1;
  }
  uVar2 = 0;
LAB_016f0e68:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

