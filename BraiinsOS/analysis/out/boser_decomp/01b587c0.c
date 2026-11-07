// FUN_01b587c0 @ 01b587c0 size=252 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa.c

undefined4
FUN_01b587c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_01b3b6b4(param_7);
  if (iVar1 == param_6) {
    uVar2 = FUN_01b565f4(param_1);
    iVar1 = FUN_01b6ad8c();
    if (iVar1 != 0) {
      iVar3 = FUN_01b56b8c(param_1,iVar1,param_5,param_7,param_8,param_9);
      uVar4 = 0;
      if (iVar3 != 0) {
        iVar3 = FUN_01b587ac(param_1,param_2,param_3,param_4,iVar1,uVar2,3);
        uVar4 = 0;
        if (iVar3 != 0) {
          uVar4 = 1;
        }
      }
      FUN_01b6b1c4(iVar1);
      return uVar4;
    }
  }
  else {
    FUN_01b053d4(4,0,0x7d,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x35a);
  }
  return 0;
}

