// FUN_0171cfb0 @ 0171cfb0 size=376 calls_out=8 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/bn/montgomery.c | /aws-lc/crypto/fipsmodule/bn/montgomery.c | /aws-lc/crypto/fipsmodule/bn/montgomery.c | /aws-lc/crypto/fipsmodule/bn/montgomery.c | /aws-lc/crypto/fipsmodule/bn/montgomery.c

undefined8 FUN_0171cfb0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_01717e5c(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_017181d4(param_2);
    if (iVar1 == 0) {
      FUN_016e9cd0(3,0,0x68,"/aws-lc/crypto/fipsmodule/bn/montgomery.c",0x69);
    }
    else {
      iVar1 = FUN_0171462c(param_2);
      if (iVar1 == 0) {
        iVar1 = FUN_01714430(param_2,0x800);
        if (iVar1 == 0) {
          FUN_016e9cd0(3,0,0x66,"/aws-lc/crypto/fipsmodule/bn/montgomery.c",0x71);
        }
        else {
          iVar1 = FUN_017147ac(param_1 + 0x14,param_2);
          if (iVar1 != 0) {
            FUN_01714f48(param_1 + 0x14);
            uVar2 = FUN_0171ce34(param_1 + 0x14);
            *(undefined8 *)(param_1 + 0x28) = uVar2;
            return 1;
          }
          FUN_016e9cd0(3,0,0x44,"/aws-lc/crypto/fipsmodule/bn/montgomery.c",0x77);
        }
      }
      else {
        FUN_016e9cd0(3,0,0x6d,"/aws-lc/crypto/fipsmodule/bn/montgomery.c",0x6d);
      }
    }
  }
  else {
    FUN_016e9cd0(3,0,0x69,"/aws-lc/crypto/fipsmodule/bn/montgomery.c",0x65);
  }
  return 0;
}

