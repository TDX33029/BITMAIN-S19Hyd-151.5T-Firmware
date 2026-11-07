// FUN_01b4fa58 @ 01b4fa58 size=476 calls_out=6 calls_in=4
// strings: aws_lc_0_39_0_aes_ctr_set_key | /aws-lc/crypto/fipsmodule/cipher/e_aes.c | key_bytes == 128 / 8 || key_bytes == 192 / 8 || key_bytes == 256 / 8 | aws_lc_0_39_0_aes_ctr_set_key | /aws-lc/crypto/fipsmodule/cipher/e_aes.c | bsaes_capable()

undefined8
FUN_01b4fa58(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if ((param_5 - 0x10U < 0x11) && ((0x10101U >> (param_5 - 0x10U & 0xff) & 1) != 0)) {
    uVar4 = FUN_01b0c6d4(param_1,(int)(short)param_5);
    iVar1 = (int)((ulonglong)uVar4 >> 0x20) << 3;
    if ((int)uVar4 != 0) {
      FUN_01b72600(param_4,iVar1,param_1);
      if (param_2 != 0) {
        FUN_01b4f954(param_2,param_1,&DAT_01b1ed3c,1);
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = &DAT_01b1ed3c;
      }
      return 0x1b1fb1c;
    }
    if ((DAT_01d532f0 & 1) == 0) {
      FUN_01b2a350(param_4,iVar1,param_1);
      if (param_2 != 0) {
        FUN_01b4f954(param_2,param_1,&DAT_01b29ed4,0);
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = &DAT_01b29ed4;
      }
      return 0x1b2acf0;
    }
    FUN_01b7aae0();
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = &DAT_01b1ed50;
    }
    if (param_2 != 0) {
      FUN_01b4f954(param_2,param_1,&DAT_01b1ed50,0);
    }
    if ((DAT_01d532f0 & 1) != 0) {
      return 0x1b27628;
    }
    uVar3 = 0x10b;
    pcVar2 = "bsaes_capable()";
  }
  else {
    uVar3 = 0xf6;
    pcVar2 = "key_bytes == 128 / 8 || key_bytes == 192 / 8 || key_bytes == 256 / 8";
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar2,"/aws-lc/crypto/fipsmodule/cipher/e_aes.c",uVar3,
               "aws_lc_0_39_0_aes_ctr_set_key");
}

