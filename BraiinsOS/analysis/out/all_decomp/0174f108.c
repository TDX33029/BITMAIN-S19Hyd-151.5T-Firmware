// FUN_0174f108 @ 0174f108 size=508 calls_out=5 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c

undefined8 FUN_0174f108(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_016e9cd0(4,0,0x90,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x43d);
  }
  else {
    uVar1 = FUN_01714eb4();
    if (uVar1 < 0x4001) {
      iVar2 = FUN_017181d4(*(undefined4 *)(param_1 + 4));
      if ((iVar2 == 0) || (iVar2 = FUN_0171462c(*(undefined4 *)(param_1 + 4)), iVar2 != 0)) {
        FUN_016e9cd0(4,0,0x68,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x44a);
      }
      else if (*(int *)(param_1 + 8) == 0) {
        if ((*(uint *)(param_1 + 0x30) & 0x40) != 0) {
          return 1;
        }
        FUN_016e9cd0(4,0,0x90,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x453);
      }
      else {
        uVar1 = FUN_01714eb4();
        iVar2 = FUN_017181d4(*(undefined4 *)(param_1 + 8));
        if ((iVar2 == 0) ||
           (iVar2 = FUN_0171462c(*(undefined4 *)(param_1 + 8)), iVar2 != 0 || uVar1 < 2)) {
          FUN_016e9cd0(4,0,0x65,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x462);
        }
        else if ((*(uint *)(param_1 + 0x30) & 0x80) == 0) {
          if (uVar1 < 0x22) {
            return 1;
          }
          FUN_016e9cd0(4,0,0x65,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x474);
        }
        else {
          iVar2 = FUN_01715744(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
          if (0 < iVar2) {
            return 1;
          }
          FUN_016e9cd0(4,0,0x65,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x46a);
        }
      }
    }
    else {
      FUN_016e9cd0(4,0,0x80,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x443);
    }
  }
  return 0;
}

