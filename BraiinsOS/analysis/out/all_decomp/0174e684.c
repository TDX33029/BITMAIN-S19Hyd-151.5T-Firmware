// FUN_0174e684 @ 0174e684 size=316 calls_out=3 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c

undefined8 FUN_0174e684(undefined2 *param_1,uint param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  uint uVar2;
  
  if (param_2 < 0xb) {
    FUN_016e9cd0(4,0,0x7e,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0x1a);
    return 0;
  }
  if (param_2 - 0xb < param_4) {
    FUN_016e9cd0(4,0,0x76,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0x1f);
    return 0;
  }
  *param_1 = 0x100;
  if (param_2 - param_4 == 3) {
    uVar2 = (int)param_1 + 3;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    FUN_016dd606(param_1 + 1,0xff);
    uVar2 = (int)param_1 + (param_2 - param_4);
    *(undefined1 *)(uVar2 - 1) = 0;
    if (param_4 == 0) {
      return 1;
    }
  }
  if (uVar2 < param_3) {
    if (param_3 < (int)param_1 + param_2) {
LAB_0174e758:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x174e758);
      (*pcVar1)();
    }
  }
  else if ((param_3 < uVar2) && (uVar2 < param_3 + param_4)) goto LAB_0174e758;
  FUN_016dd1aa(uVar2,param_3,param_4);
  return 1;
}

