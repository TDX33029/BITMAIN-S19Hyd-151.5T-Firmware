// FUN_017235e4 @ 017235e4 size=444 calls_out=2 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/cipher/aead.c | /aws-lc/crypto/fipsmodule/cipher/aead.c

undefined8
FUN_017235e4(int *param_1,uint param_2,uint param_3,undefined4 *param_4,int param_5,
            undefined4 param_6,undefined4 param_7,uint param_8,int param_9,undefined4 param_10,
            int param_11,undefined4 param_12,undefined4 param_13)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 < param_9 + param_8) {
    uVar1 = param_2;
    if (param_8 != param_2) {
      uVar1 = param_2 + param_9;
    }
    if (uVar1 <= param_8) goto LAB_0172362c;
  }
  else {
LAB_0172362c:
    if (((param_2 + param_9 <= param_3) || (param_3 + param_5 <= param_2)) &&
       ((param_9 + param_8 <= param_3 || (param_3 + param_5 <= param_8)))) {
      if (param_11 == 0 || *(int *)(*param_1 + 8) != 0) {
        iVar2 = (**(code **)(*param_1 + 0x1c))
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_10,param_11,param_12,param_13);
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        FUN_016e9cd0(0x1e,0,0x70,"/aws-lc/crypto/fipsmodule/cipher/aead.c",0xa6);
      }
      goto LAB_01723664;
    }
  }
  FUN_016e9cd0(0x1e,0,0x73,"/aws-lc/crypto/fipsmodule/cipher/aead.c",0xa1);
LAB_01723664:
  if (param_9 != 0) {
    FUN_016dd606(param_2,0,param_9);
  }
  if (param_5 != 0) {
    FUN_016dd606(param_3,0,param_5);
  }
  *param_4 = 0;
  return 0;
}

