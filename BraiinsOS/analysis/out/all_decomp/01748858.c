// FUN_01748858 @ 01748858 size=192 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c

bool FUN_01748858(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_016e1e1c(param_2);
  if (iVar1 == *(int *)(*param_1 + 0x10)) {
    FUN_0177aafc(param_1[1]);
    uVar2 = FUN_016e1e04(param_2);
    iVar1 = FUN_0177b624(uVar2,*(undefined4 *)(*param_1 + 0x10));
    param_1[1] = iVar1;
    return iVar1 != 0;
  }
  FUN_016e9cd0(6,0,0x89,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0x4f);
  return false;
}

