// FUN_016e8910 @ 016e8910 size=268 calls_out=6 calls_in=1
// strings: /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c

int FUN_016e8910(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_24 [8];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_016e24e4(param_1,auStack_24,6,0);
  if (iVar1 == 0) {
    FUN_016e9cd0(0xf,0,0x80,"/aws-lc/crypto/ec_extra/ec_asn1.c",299);
  }
  else {
    puVar3 = &DAT_018b5df0;
    do {
      iVar1 = (*(code *)*puVar3)();
      iVar2 = FUN_016e1edc(auStack_24,iVar1 + 0x1c4,*(undefined1 *)(iVar1 + 0x1cd));
      if (iVar2 != 0) goto LAB_016e89b4;
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined4 *)&UNK_018b5e04);
    FUN_016e9cd0(0xf,0,0x7b,"/aws-lc/crypto/ec_extra/ec_asn1.c",0x137);
  }
  iVar1 = 0;
LAB_016e89b4:
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar1;
}

