// FUN_01b040e8 @ 01b040e8 size=236 calls_out=5 calls_in=2
// strings: /aws-lc/crypto/ec_extra/ec_asn1.c

void FUN_01b040e8(undefined4 param_1,int param_2)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 auStack_34 [24];
  uint local_1c;
  
  local_1c = DAT_01d53560;
  if (*(char *)(param_2 + 0x1cd) == '\0') {
    FUN_01b053d4(0xf,0,0x7b,"/aws-lc/crypto/ec_extra/ec_asn1.c",0x13d);
    uVar1 = extraout_r1;
  }
  else {
    uVar3 = FUN_01afd27c(param_1,auStack_34,6,0);
    uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      uVar3 = FUN_01afcfcc(auStack_34,param_2 + 0x1c4,*(undefined1 *)(param_2 + 0x1cd));
      uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 != 0) {
        uVar3 = FUN_01afca7c(param_1);
        uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
        bVar2 = (int)uVar3 != 0;
        goto LAB_01b0414c;
      }
    }
  }
  bVar2 = false;
LAB_01b0414c:
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(bVar2,uVar1,local_1c ^ DAT_01d53560,0);
  }
  return;
}

