// FUN_01729e04 @ 01729e04 size=280 calls_out=6 calls_in=4
// strings: /aws-lc/crypto/fipsmodule/dh/check.c | /aws-lc/crypto/fipsmodule/dh/check.c | /aws-lc/crypto/fipsmodule/dh/check.c

undefined4 FUN_01729e04(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0171462c(*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_017181d4(*param_1), iVar1 != 0)) &&
     (uVar2 = FUN_01714eb4(*param_1), uVar2 < 0x2711)) {
    if ((param_1[2] == 0) ||
       ((iVar1 = FUN_0171462c(), iVar1 == 0 &&
        (iVar1 = FUN_01715744(param_1[2],*param_1), iVar1 < 1)))) {
      iVar1 = FUN_0171462c(param_1[1]);
      if ((iVar1 == 0) &&
         ((iVar1 = FUN_01717e5c(param_1[1]), iVar1 == 0 &&
          (iVar1 = FUN_01715744(param_1[1],*param_1), iVar1 < 0)))) {
        return 1;
      }
      uVar3 = 0x1c;
    }
    else {
      uVar3 = 0x15;
    }
  }
  else {
    uVar3 = 0xf;
  }
  FUN_016e9cd0(5,0,0x6b,"/aws-lc/crypto/fipsmodule/dh/check.c",uVar3);
  return 0;
}

