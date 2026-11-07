// FUN_016e334c @ 016e334c size=380 calls_out=5 calls_in=0
// strings: /aws-lc/crypto/cipher_extra/e_chacha20poly1305.c | /aws-lc/crypto/cipher_extra/e_chacha20poly1305.c | /aws-lc/crypto/cipher_extra/e_chacha20poly1305.c

void FUN_016e334c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,uint param_8,undefined4 param_9,
                 undefined4 param_10)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [60];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  if (param_4 == 0xc) {
    bVar1 = *(byte *)(param_1 + 0x241);
    if (bVar1 == param_8) {
      FUN_016e3194(auStack_60,param_1 + 8,param_3,param_9,param_10,param_5,param_6,0,0);
      FUN_016e2d10(param_2,param_5,param_6,param_1 + 8,param_3,1);
      uVar4 = FUN_0177b0d8(auStack_60,param_7,(uint)bVar1);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 == 0) {
        uVar2 = 1;
        goto LAB_016e3450;
      }
      uVar3 = 0x11e;
    }
    else {
      uVar3 = 0x102;
    }
    FUN_016e9cd0(0x1e,0,0x65,"/aws-lc/crypto/cipher_extra/e_chacha20poly1305.c",uVar3);
    uVar3 = extraout_r1;
  }
  else {
    FUN_016e9cd0(0x1e,0,0x79,"/aws-lc/crypto/cipher_extra/e_chacha20poly1305.c",0xfd);
    uVar3 = extraout_r1_00;
  }
  uVar2 = 0;
LAB_016e3450:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

