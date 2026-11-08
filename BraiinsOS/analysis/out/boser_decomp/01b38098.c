// FUN_01b38098 @ 01b38098 size=388 calls_out=4 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/cipher/aead.c | aws_lc_0_39_0_EVP_AEAD_CTX_open | /aws-lc/crypto/fipsmodule/cipher/aead.c | ctx->tag_len | /aws-lc/crypto/fipsmodule/cipher/aead.c | /aws-lc/crypto/fipsmodule/cipher/aead.c

undefined4
FUN_01b38098(int *param_1,uint param_2,uint *param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,uint param_8,undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_2 < param_8 + param_7) {
    uVar3 = param_2;
    if (param_7 != param_2) {
      uVar3 = param_2 + param_4;
    }
    if (uVar3 <= param_7) goto LAB_01b38124;
    uVar4 = 0xbf;
    uVar2 = 0x73;
  }
  else {
LAB_01b38124:
    if (*(code **)(*param_1 + 0x18) != (code *)0x0) {
      iVar1 = (**(code **)(*param_1 + 0x18))
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10);
      if (iVar1 != 0) {
        return 1;
      }
      goto LAB_01b38108;
    }
    uVar3 = (uint)*(byte *)((int)param_1 + 0x241);
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01be3310("ctx->tag_len","/aws-lc/crypto/fipsmodule/cipher/aead.c",0xcd,
                   "aws_lc_0_39_0_EVP_AEAD_CTX_open");
    }
    if (param_8 < uVar3) {
      uVar4 = 0xd0;
      uVar2 = 0x65;
    }
    else {
      param_8 = param_8 - uVar3;
      if (param_8 <= param_4) {
        iVar1 = FUN_01b37fa4(param_1,param_2,param_5,param_6,param_7,param_8,param_7 + param_8,uVar3
                             ,param_9,param_10);
        if (iVar1 != 0) {
          *param_3 = param_8;
          return 1;
        }
        goto LAB_01b38108;
      }
      uVar4 = 0xd6;
      uVar2 = 0x67;
    }
  }
  FUN_01b053d4(0x1e,0,uVar2,"/aws-lc/crypto/fipsmodule/cipher/aead.c",uVar4);
LAB_01b38108:
  FUN_01b257dc(param_2,0,param_4);
  *param_3 = 0;
  return 0;
}

