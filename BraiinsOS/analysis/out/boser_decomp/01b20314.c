// FUN_01b20314 @ 01b20314 size=360 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c

void FUN_01b20314(int param_1,undefined4 param_2)

{
  int iVar1;
  uint extraout_r1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_34 [24];
  uint local_1c;
  
  local_1c = DAT_01d53560;
  uVar2 = FUN_01afd27c(param_2,auStack_34,0x20000010,0);
  if ((int)uVar2 == 0) {
LAB_01b20368:
    uVar4 = 0x613;
  }
  else {
    uVar2 = FUN_01afd478(auStack_34,(int)((ulonglong)uVar2 >> 0x20),1,0);
    if ((int)uVar2 == 0) goto LAB_01b20368;
    iVar1 = FUN_01afd478(auStack_34,(int)((ulonglong)uVar2 >> 0x20),*(undefined4 *)(param_1 + 0x218)
                         ,*(undefined4 *)(param_1 + 0x21c));
    if (iVar1 == 0) {
      uVar4 = 0x618;
    }
    else {
      iVar1 = FUN_01afd478(auStack_34,iVar1,*(undefined4 *)(param_1 + 0x220),
                           *(undefined4 *)(param_1 + 0x224));
      if (iVar1 == 0) {
        uVar4 = 0x61d;
      }
      else {
        iVar1 = FUN_01afd4b8(auStack_34,*(char *)(param_1 + 0x228) != '\0');
        if (iVar1 != 0) {
          lVar3 = FUN_01afca7c(param_2);
          goto LAB_01b2038c;
        }
        uVar4 = 0x622;
      }
    }
  }
  FUN_01b053d4(0x1e,0,0x41,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",uVar4);
  lVar3 = (ulonglong)extraout_r1 << 0x20;
LAB_01b2038c:
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),local_1c ^ DAT_01d53560,0);
  }
  return;
}

