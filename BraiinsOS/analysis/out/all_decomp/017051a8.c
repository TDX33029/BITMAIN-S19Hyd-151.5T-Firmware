// FUN_017051a8 @ 017051a8 size=400 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c

void FUN_017051a8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_34 [24];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  uVar3 = FUN_016e1884(param_2,auStack_34,0x20000010,0);
  if ((int)uVar3 == 0) {
LAB_01705218:
    FUN_016e9cd0(0x1e,0,0x41,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x613);
    uVar2 = extraout_r1;
  }
  else {
    uVar3 = FUN_016e1c54(auStack_34,(int)((ulonglong)uVar3 >> 0x20),1,0);
    if ((int)uVar3 == 0) goto LAB_01705218;
    iVar1 = FUN_016e1c54(auStack_34,(int)((ulonglong)uVar3 >> 0x20),*(undefined4 *)(param_1 + 0x218)
                         ,*(undefined4 *)(param_1 + 0x21c));
    if (iVar1 == 0) {
      FUN_016e9cd0(0x1e,0,0x41,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x618);
      uVar2 = extraout_r1_01;
    }
    else {
      iVar1 = FUN_016e1c54(auStack_34,iVar1,*(undefined4 *)(param_1 + 0x220),
                           *(undefined4 *)(param_1 + 0x224));
      if (iVar1 == 0) {
        FUN_016e9cd0(0x1e,0,0x41,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x61d);
        uVar2 = extraout_r1_00;
      }
      else {
        iVar1 = FUN_016e1c94(auStack_34,*(char *)(param_1 + 0x228) != '\0');
        if (iVar1 != 0) {
          lVar4 = FUN_016e1048(param_2);
          goto LAB_0170523c;
        }
        FUN_016e9cd0(0x1e,0,0x41,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x622);
        uVar2 = extraout_r1_02;
      }
    }
  }
  lVar4 = (ulonglong)uVar2 << 0x20;
LAB_0170523c:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)lVar4,(int)((ulonglong)lVar4 >> 0x20),local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

