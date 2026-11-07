// FUN_01b2b248 @ 01b2b248 size=236 calls_out=4 calls_in=31
// strings: /aws-lc/crypto/fipsmodule/bn/bn.c | /aws-lc/crypto/fipsmodule/bn/bn.c

undefined4 FUN_01b2b248(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 <= (uint)param_1[2]) {
    return 1;
  }
  if (param_2 < 0x1000000) {
    if ((param_1[4] & 2U) == 0) {
      iVar1 = FUN_01b6b0fc(param_2,4);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_01b26974(iVar1,*param_1,param_1[1] << 2);
      FUN_01b6b1c4(*param_1);
      *param_1 = iVar1;
      param_1[2] = param_2;
      return 1;
    }
    uVar3 = 0x13c;
    uVar2 = 0x6a;
  }
  else {
    uVar3 = 0x137;
    uVar2 = 0x66;
  }
  FUN_01b053d4(3,0,uVar2,"/aws-lc/crypto/fipsmodule/bn/bn.c",uVar3);
  return 0;
}

