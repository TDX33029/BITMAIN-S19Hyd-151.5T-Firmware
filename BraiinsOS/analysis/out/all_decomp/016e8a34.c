// FUN_016e8a34 @ 016e8a34 size=248 calls_out=5 calls_in=2
// strings: /aws-lc/crypto/ec_extra/ec_asn1.c

void FUN_016e8a34(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 auStack_2c [24];
  uint local_14;
  
  local_14 = DAT_018ddaf8;
  if (*(char *)(param_2 + 0x1cd) == '\0') {
    FUN_016e9cd0(0xf,0,0x7b,"/aws-lc/crypto/ec_extra/ec_asn1.c",0x13d);
    uVar1 = extraout_r1;
  }
  else {
    uVar3 = FUN_016e1884(param_1,auStack_2c,6);
    uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      uVar3 = FUN_016e1700(auStack_2c,param_2 + 0x1c4,*(undefined1 *)(param_2 + 0x1cd));
      uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 != 0) {
        uVar3 = FUN_016e1048(param_1);
        uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
        bVar2 = (int)uVar3 != 0;
        goto LAB_016e8a9c;
      }
    }
  }
  bVar2 = false;
LAB_016e8a9c:
  if ((local_14 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(bVar2,uVar1,local_14 ^ DAT_018ddaf8,0);
  }
  return;
}

