// FUN_01704fb4 @ 01704fb4 size=468 calls_out=5 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c

void FUN_01704fb4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 auStack_1c [8];
  uint local_14;
  
  local_14 = DAT_018ddaf8;
  iVar1 = FUN_016e24e4(param_2,auStack_1c,0x20000010,0);
  if (iVar1 == 0) {
    FUN_016e9cd0(0x1e,0,0x8d,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x633);
    iVar1 = extraout_r1_00;
  }
  else {
    iVar1 = FUN_016e2bf0(auStack_1c,&local_38);
    if ((iVar1 == 0) || (local_38 != 1 || local_34 != 0)) {
      FUN_016e9cd0(0x1e,0,0x8d,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x63a);
      iVar1 = extraout_r1;
    }
    else {
      iVar1 = FUN_016e2bf0(auStack_1c,&uStack_30);
      if (iVar1 == 0) {
        FUN_016e9cd0(0x1e,0,0x8d,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x640);
        iVar1 = extraout_r1_01;
      }
      else {
        *(undefined8 *)(param_1 + 0x218) = uStack_30;
        iVar1 = FUN_016e2bf0(auStack_1c,&uStack_28);
        if (iVar1 == 0) {
          FUN_016e9cd0(0x1e,0,0x8d,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x647);
          iVar1 = extraout_r1_02;
        }
        else {
          *(undefined8 *)(param_1 + 0x220) = uStack_28;
          iVar1 = FUN_016e2730(auStack_1c,&local_3c);
          if (iVar1 != 0) {
            uVar2 = 1;
            *(bool *)(param_1 + 0x228) = local_3c != 0;
            goto LAB_01705054;
          }
          FUN_016e9cd0(0x1e,0,0x8d,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x64e);
          iVar1 = extraout_r1_03;
        }
      }
    }
  }
  uVar2 = 0;
LAB_01705054:
  if ((local_14 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,iVar1,local_14 ^ DAT_018ddaf8,0);
  }
  return;
}

