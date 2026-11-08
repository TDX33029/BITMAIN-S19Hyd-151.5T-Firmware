// FUN_01b3acd4 @ 01b3acd4 size=288 calls_out=6 calls_in=4
// strings: /aws-lc/crypto/fipsmodule/dh/check.c | /aws-lc/crypto/fipsmodule/dh/check.c | /aws-lc/crypto/fipsmodule/dh/check.c

undefined4 FUN_01b3acd4(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_01b2b230(*param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_01b2e5fc(*param_1), iVar1 != 0)) &&
     (uVar2 = FUN_01b2b8d0(*param_1), uVar2 < 0x2711)) {
    if ((param_1[2] == 0) ||
       ((iVar1 = FUN_01b2b230(), iVar1 == 0 &&
        (iVar1 = FUN_01b2be1c(param_1[2],*param_1), iVar1 < 1)))) {
      iVar1 = FUN_01b2b230(param_1[1]);
      if ((iVar1 == 0) &&
         ((iVar1 = FUN_01b2e300(param_1[1]), iVar1 == 0 &&
          (iVar1 = FUN_01b2be1c(param_1[1],*param_1), iVar1 < 0)))) {
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
  FUN_01b053d4(5,0,0x6b,"/aws-lc/crypto/fipsmodule/dh/check.c",uVar3);
  return 0;
}

