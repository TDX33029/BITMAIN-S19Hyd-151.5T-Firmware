// FUN_0177fce8 @ 0177fce8 size=256 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/rsa_extra/rsa_asn1.c

void FUN_0177fce8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_34 [24];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  FUN_016e0e8c(auStack_34,param_2,&PTR_018bc3f4,0);
  iVar1 = FUN_016e0ec4(auStack_34,0);
  if (((iVar1 == 0) || (iVar1 = FUN_0177fba8(auStack_34,param_3), iVar1 == 0)) ||
     (uVar4 = FUN_016e1360(auStack_34,param_1,param_2),
     uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20), (int)uVar4 == 0)) {
    FUN_016e9cd0(4,0,0x79,"/aws-lc/crypto/rsa_extra/rsa_asn1.c",0x5e);
    FUN_016e0fd8(auStack_34);
    uVar2 = 0;
    uVar3 = extraout_r1;
  }
  else {
    uVar2 = 1;
  }
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

