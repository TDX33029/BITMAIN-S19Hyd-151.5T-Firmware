// FUN_01b0362c @ 01b0362c size=248 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/dsa/dsa_asn1.c

void FUN_01b0362c(undefined4 param_1,undefined4 *param_2)

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
  if ((((iVar1 == 0) || (iVar1 = FUN_01b0323c(auStack_34,*param_2), iVar1 == 0)) ||
      (iVar1 = FUN_01b0323c(auStack_34,param_2[1]), iVar1 == 0)) ||
     (uVar4 = FUN_01afca7c(param_1), uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20), (int)uVar4 == 0
     )) {
    FUN_01b053d4(10,0,0x6a,"/aws-lc/crypto/dsa/dsa_asn1.c",0x7b);
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

