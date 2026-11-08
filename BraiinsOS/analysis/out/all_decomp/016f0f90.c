// FUN_016f0f90 @ 016f0f90 size=396 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_x25519_asn1.c

void FUN_016f0f90(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_7c [24];
  undefined1 auStack_64 [24];
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [24];
  uint local_1c;
  
  uVar3 = *(undefined4 *)(param_2 + 8);
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_016e1884(param_1,auStack_7c,0x20000010,0);
  if (iVar1 != 0) {
    iVar1 = FUN_016e1884(auStack_7c,auStack_64,0x20000010);
    if (iVar1 != 0) {
      iVar1 = FUN_016e1884(auStack_64,auStack_4c,6);
      if ((((iVar1 != 0) && (iVar1 = FUN_016e1700(auStack_4c,&DAT_018b62e0,3), iVar1 != 0)) &&
          (iVar1 = FUN_016e1884(auStack_7c,auStack_34,3), iVar1 != 0)) &&
         (((iVar1 = FUN_016e17e0(auStack_34,0), iVar1 != 0 &&
           (iVar1 = FUN_016e1700(auStack_34,uVar3,0x20), iVar1 != 0)) &&
          (uVar4 = FUN_016e1048(param_1), uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20),
          (int)uVar4 != 0)))) {
        uVar2 = 1;
        goto LAB_016f103c;
      }
    }
  }
  FUN_016e9cd0(6,0,0x69,"/aws-lc/crypto/evp_extra/p_x25519_asn1.c",0x8a);
  uVar2 = 0;
  uVar3 = extraout_r1;
LAB_016f103c:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

