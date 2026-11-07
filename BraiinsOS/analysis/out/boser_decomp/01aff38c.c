// FUN_01aff38c @ 01aff38c size=360 calls_out=5 calls_in=0
// strings: /aws-lc/crypto/cipher_extra/e_chacha20poly1305.c | /aws-lc/crypto/cipher_extra/e_chacha20poly1305.c

void FUN_01aff38c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,
                 undefined4 param_9,undefined4 param_10,int param_11)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [52];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  if (param_4 == 0xc) {
    if (param_8 == param_11) {
      FUN_01aff200(auStack_60,param_1,param_3,param_9,param_10,param_5,param_6,0,0);
      FUN_01afe5b4(param_2,param_5,param_6,param_1,param_3,1);
      uVar2 = FUN_01b6b750(auStack_60,param_7,param_8);
      uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
      if ((int)uVar2 == 0) {
        uVar1 = 1;
        goto LAB_01aff400;
      }
      uVar3 = 0x11e;
    }
    else {
      uVar3 = 0x102;
    }
    uVar1 = 0x65;
  }
  else {
    uVar3 = 0xfd;
    uVar1 = 0x79;
  }
  FUN_01b053d4(0x1e,0,uVar1,"/aws-lc/crypto/cipher_extra/e_chacha20poly1305.c",uVar3);
  uVar1 = 0;
  uVar3 = extraout_r1;
LAB_01aff400:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar3,local_2c ^ DAT_01d53560,0);
  }
  return;
}

