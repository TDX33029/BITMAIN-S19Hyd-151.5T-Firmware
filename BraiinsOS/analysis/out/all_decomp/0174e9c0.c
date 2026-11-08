// FUN_0174e9c0 @ 0174e9c0 size=228 calls_out=2 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c

undefined8 FUN_0174e9c0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  
  if (param_2 < param_4) {
    FUN_016e9cd0(4,0,0x72,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0x62);
  }
  else {
    if (param_2 <= param_4) {
      if (param_4 != 0) {
        if (param_1 < param_3) {
          if (param_3 < param_1 + param_4) {
LAB_0174ea3c:
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0,0x174ea3c);
            (*pcVar1)();
          }
        }
        else if ((param_1 != param_3) && (param_1 < param_3 + param_4)) goto LAB_0174ea3c;
        FUN_016dd1aa(param_1,param_3,param_4);
      }
      return 1;
    }
    FUN_016e9cd0(4,0,0x74,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0x67);
  }
  return 0;
}

