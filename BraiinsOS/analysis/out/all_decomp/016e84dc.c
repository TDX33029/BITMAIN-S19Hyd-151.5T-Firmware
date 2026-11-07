// FUN_016e84dc @ 016e84dc size=252 calls_out=5 calls_in=2
// strings: /aws-lc/crypto/ecdsa_extra/ecdsa_asn1.c

void FUN_016e84dc(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_34 [24];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_016e1884(param_1,auStack_34,0x20000010,0);
  if ((((iVar1 == 0) || (iVar1 = FUN_016e05ec(auStack_34,*param_2), iVar1 == 0)) ||
      (iVar1 = FUN_016e05ec(auStack_34,param_2[1]), iVar1 == 0)) ||
     (uVar4 = FUN_016e1048(param_1), uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20), (int)uVar4 == 0
     )) {
    FUN_016e9cd0(0x1a,0,0x69,"/aws-lc/crypto/ecdsa_extra/ecdsa_asn1.c",0x47);
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

