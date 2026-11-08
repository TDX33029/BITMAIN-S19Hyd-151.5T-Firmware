// FUN_01b5538c @ 01b5538c size=336 calls_out=2 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c

undefined4 FUN_01b5538c(undefined4 param_1,uint *param_2,uint param_3,char *param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_5 < 2) {
    uVar3 = 0x31;
    uVar1 = 0x74;
  }
  else if ((*param_4 == '\0') && (param_4[1] == '\x01')) {
    for (uVar2 = 2; uVar2 != param_5; uVar2 = uVar2 + 1) {
      if (param_4[uVar2] == '\0') {
        if (uVar2 < 10) {
          uVar3 = 0x4e;
          uVar1 = 0x67;
        }
        else {
          param_5 = param_5 - (uVar2 + 1);
          if (param_5 <= param_3) {
            FUN_01b26974(param_1,param_4 + uVar2 + 1,param_5);
            *param_2 = param_5;
            return 1;
          }
          uVar3 = 0x56;
          uVar1 = 0x71;
        }
        goto LAB_01b553c8;
      }
      if (param_4[uVar2] != -1) {
        uVar3 = 0x43;
        uVar1 = 0x66;
        goto LAB_01b553c8;
      }
    }
    uVar3 = 0x49;
    uVar1 = 0x83;
  }
  else {
    uVar3 = 0x37;
    uVar1 = 0x6b;
  }
LAB_01b553c8:
  FUN_01b053d4(4,0,uVar1,"/aws-lc/crypto/fipsmodule/rsa/padding.c",uVar3);
  return 0;
}

