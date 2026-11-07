// FUN_01b6ed90 @ 01b6ed90 size=248 calls_out=5 calls_in=2
// strings: /aws-lc/crypto/rsa_extra/rsa_asn1.c

void FUN_01b6ed90(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_34 [24];
  uint local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01afd27c(param_1,auStack_34,0x20000010,0);
  if ((((iVar1 == 0) || (iVar1 = FUN_01b6eaf0(auStack_34,*(undefined4 *)(param_2 + 4)), iVar1 == 0))
      || (iVar1 = FUN_01b6eaf0(auStack_34,*(undefined4 *)(param_2 + 8)), iVar1 == 0)) ||
     (uVar4 = FUN_01afca7c(param_1), uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20), (int)uVar4 == 0
     )) {
    FUN_01b053d4(4,0,0x79,"/aws-lc/crypto/rsa_extra/rsa_asn1.c",0x51);
    uVar2 = 0;
    uVar3 = extraout_r1;
  }
  else {
    uVar2 = 1;
  }
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,uVar3,local_1c ^ DAT_01d53560,0);
  }
  return;
}

