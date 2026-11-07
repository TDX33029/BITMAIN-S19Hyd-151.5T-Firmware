// FUN_017238bc @ 017238bc size=480 calls_out=4 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/cipher/aead.c | /aws-lc/crypto/fipsmodule/cipher/aead.c | /aws-lc/crypto/fipsmodule/cipher/aead.c | aws_lc_0_39_0_EVP_AEAD_CTX_open | /aws-lc/crypto/fipsmodule/cipher/aead.c | ctx->tag_len

undefined8
FUN_017238bc(int *param_1,uint param_2,uint *param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,uint param_8,undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 < param_8 + param_7) {
    uVar2 = param_2;
    if (param_7 != param_2) {
      uVar2 = param_2 + param_4;
    }
    if (param_7 < uVar2) {
      FUN_016e9cd0(0x1e,0,0x73,"/aws-lc/crypto/fipsmodule/cipher/aead.c",0xbf);
      goto LAB_01723954;
    }
  }
  if (*(code **)(*param_1 + 0x18) == (code *)0x0) {
    uVar2 = (uint)*(byte *)((int)param_1 + 0x241);
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("ctx->tag_len","/aws-lc/crypto/fipsmodule/cipher/aead.c",0xcd,
                   "aws_lc_0_39_0_EVP_AEAD_CTX_open");
    }
    if (param_8 < uVar2) {
      FUN_016e9cd0(0x1e,0,0x65,"/aws-lc/crypto/fipsmodule/cipher/aead.c",0xd0);
    }
    else {
      param_8 = param_8 - uVar2;
      if (param_4 < param_8) {
        FUN_016e9cd0(0x1e,0,0x67,"/aws-lc/crypto/fipsmodule/cipher/aead.c",0xd6);
      }
      else {
        iVar1 = FUN_017237a8(param_1,param_2,param_5,param_6,param_7,param_8,param_7 + param_8,uVar2
                             ,param_9,param_10);
        if (iVar1 != 0) {
          *param_3 = param_8;
          return 1;
        }
      }
    }
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x18))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10);
    if (iVar1 != 0) {
      return 1;
    }
  }
LAB_01723954:
  if (param_4 != 0) {
    FUN_016dd606(param_2,0,param_4);
  }
  *param_3 = 0;
  return 0;
}

