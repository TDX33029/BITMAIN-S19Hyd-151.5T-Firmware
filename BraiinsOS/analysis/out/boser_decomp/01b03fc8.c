// FUN_01b03fc8 @ 01b03fc8 size=264 calls_out=6 calls_in=1
// strings: /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c

int FUN_01b03fc8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_24 [8];
  int local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01afddc0(param_1,auStack_24,6,0);
  if (iVar1 == 0) {
    uVar6 = 299;
    uVar3 = 0x80;
  }
  else {
    iVar1 = 0;
    puVar5 = &DAT_01d34e08;
    do {
      iVar4 = (*(code *)*puVar5)();
      iVar2 = FUN_01afd720(auStack_24,iVar4 + 0x1c4,*(undefined1 *)(iVar4 + 0x1cd));
      if (iVar2 != 0) goto LAB_01b04030;
      iVar1 = iVar1 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar1 != 5);
    uVar6 = 0x137;
    uVar3 = 0x7b;
  }
  iVar4 = 0;
  FUN_01b053d4(0xf,0,uVar3,"/aws-lc/crypto/ec_extra/ec_asn1.c",uVar6);
LAB_01b04030:
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar4;
}

