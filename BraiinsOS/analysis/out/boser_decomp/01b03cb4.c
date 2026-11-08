// FUN_01b03cb4 @ 01b03cb4 size=256 calls_out=7 calls_in=2
// strings: /aws-lc/crypto/ecdsa_extra/ecdsa_asn1.c

void FUN_01b03cb4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_34 [24];
  uint local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01afc77c(auStack_34,param_2,&PTR_01d3b2b0,0);
  iVar1 = FUN_01afc914(auStack_34,0);
  if (((iVar1 == 0) || (iVar1 = FUN_01b03ba8(auStack_34,param_3), iVar1 == 0)) ||
     (uVar4 = FUN_01afcd14(auStack_34,param_1,param_2),
     uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20), (int)uVar4 == 0)) {
    FUN_01b053d4(0x1a,0,0x69,"/aws-lc/crypto/ecdsa_extra/ecdsa_asn1.c",0x54);
    FUN_01afca0c(auStack_34);
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

