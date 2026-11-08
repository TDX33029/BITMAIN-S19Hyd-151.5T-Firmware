// FUN_017237a8 @ 017237a8 size=268 calls_out=2 calls_in=4
// strings: /aws-lc/crypto/fipsmodule/cipher/aead.c | /aws-lc/crypto/fipsmodule/cipher/aead.c

undefined4
FUN_017237a8(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10
            )

{
  int iVar1;
  uint uVar2;
  
  if (param_2 < param_6 + param_5) {
    uVar2 = param_2;
    if (param_5 != param_2) {
      uVar2 = param_2 + param_6;
    }
    if (param_5 < uVar2) {
      FUN_016e9cd0(0x1e,0,0x73,"/aws-lc/crypto/fipsmodule/cipher/aead.c",0xef);
      goto LAB_01723834;
    }
  }
  if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    FUN_016e9cd0(0x1e,0,0x68,"/aws-lc/crypto/fipsmodule/cipher/aead.c",0xf4);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x20))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10);
    if (iVar1 != 0) {
      return 1;
    }
  }
LAB_01723834:
  if (param_6 != 0) {
    FUN_016dd606(param_2,0,param_6);
  }
  return 0;
}

