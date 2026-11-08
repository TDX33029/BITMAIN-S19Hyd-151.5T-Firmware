// FUN_01b4efbc @ 01b4efbc size=464 calls_out=10 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/cipher/e_aes.c | /aws-lc/crypto/fipsmodule/cipher/e_aes.c

void FUN_01b4efbc(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,
                 undefined4 param_10,int param_11)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_1b0 [80];
  undefined1 auStack_160 [292];
  undefined1 auStack_3c [16];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  if (param_4 == 0) {
    uVar3 = 0x476;
    uVar1 = 0x6f;
LAB_01b4f020:
    FUN_01b053d4(0x1e,0,uVar1,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",uVar3);
    uVar3 = extraout_r1;
  }
  else {
    if (param_8 != param_11) {
      uVar3 = 0x47b;
LAB_01b4f078:
      uVar1 = 0x65;
      goto LAB_01b4f020;
    }
    FUN_01b257dc(auStack_1b0,0,0x170);
    FUN_01b26974(auStack_160,param_1 + 0xf8,0x110);
    FUN_01b4e0f4(auStack_1b0,param_1,param_3,param_4);
    uVar2 = FUN_01b4e2b0(auStack_1b0,param_9,param_10);
    uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if ((int)uVar2 != 0) {
      if (*(int *)(param_1 + 0x208) == 0) {
        uVar2 = FUN_01b4e6c8(auStack_1b0,param_1,param_5,param_2,param_6);
      }
      else {
        uVar2 = FUN_01b4ebdc(auStack_1b0,param_1,param_5,param_2,param_6,*(int *)(param_1 + 0x208));
      }
      uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
      if ((int)uVar2 != 0) {
        FUN_01b4ef70(auStack_1b0,auStack_3c,param_11);
        uVar2 = FUN_01b6b750(auStack_3c,param_7,param_11);
        uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
        if ((int)uVar2 == 0) {
          uVar1 = 1;
          goto LAB_01b4f030;
        }
        uVar3 = 0x497;
        goto LAB_01b4f078;
      }
    }
  }
  uVar1 = 0;
LAB_01b4f030:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar3,local_2c ^ DAT_01d53560,0);
  }
  return;
}

