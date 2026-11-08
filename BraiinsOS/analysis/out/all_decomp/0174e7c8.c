// FUN_0174e7c8 @ 0174e7c8 size=480 calls_out=2 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c

undefined8 FUN_0174e7c8(char *param_1,uint *param_2,uint param_3,char *param_4,uint param_5)

{
  code *pcVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  
  if (param_5 < 2) {
    FUN_016e9cd0(4,0,0x74,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0x31);
  }
  else if ((*param_4 == '\0') && (param_4[1] == '\x01')) {
    if (param_5 != 2) {
      pcVar3 = param_4 + 1;
      uVar2 = 2;
      do {
        pcVar3 = pcVar3 + 1;
        if (*pcVar3 == '\0') {
          if (param_5 != uVar2) {
            if (uVar2 < 10) {
              FUN_016e9cd0(4,0,0x67,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0x4e);
              return 0;
            }
            uVar4 = param_5 - (uVar2 + 1);
            if (param_3 < uVar4) {
              FUN_016e9cd0(4,0,0x71,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0x56);
              return 0;
            }
            if (uVar4 != 0) {
              pcVar3 = param_4 + uVar2 + 1;
              if (param_1 < pcVar3) {
                if (pcVar3 < param_1 + uVar4) goto LAB_0174e940;
              }
              else if ((pcVar3 < param_1) && (param_1 < param_4 + param_5)) {
LAB_0174e940:
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0,0x174e940);
                (*pcVar1)();
              }
              FUN_016dd1aa(param_1,pcVar3,uVar4);
            }
            *param_2 = uVar4;
            return 1;
          }
          break;
        }
        if (*pcVar3 != -1) {
          FUN_016e9cd0(4,0,0x66,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0x43);
          return 0;
        }
        uVar2 = uVar2 + 1;
      } while (param_5 != uVar2);
    }
    FUN_016e9cd0(4,0,0x83,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0x49);
  }
  else {
    FUN_016e9cd0(4,0,0x6b,"/aws-lc/crypto/fipsmodule/rsa/padding.c",0x37);
  }
  return 0;
}

