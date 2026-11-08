// FUN_01752cf8 @ 01752cf8 size=296 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa.c

bool FUN_01752cf8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = FUN_0172a898(param_7);
  if (iVar1 == param_6) {
    uVar2 = FUN_0175009c(param_1);
    iVar1 = FUN_0177a6c0();
    if (iVar1 != 0) {
      iVar3 = FUN_01750764(param_1,iVar1,param_5,param_7,param_8,param_9);
      bVar4 = false;
      if (iVar3 != 0) {
        iVar3 = FUN_01752c0c(param_1,param_2,param_3,param_4,iVar1,uVar2,3);
        bVar4 = iVar3 != 0;
      }
      FUN_0177aafc(iVar1);
      return bVar4;
    }
  }
  else {
    FUN_016e9cd0(4,0,0x7d,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x35a);
  }
  return false;
}

