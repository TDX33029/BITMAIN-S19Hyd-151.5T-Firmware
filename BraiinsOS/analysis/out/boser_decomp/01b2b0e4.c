// FUN_01b2b0e4 @ 01b2b0e4 size=208 calls_out=4 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/bn/bn.c | /aws-lc/crypto/fipsmodule/bn/bn.c

undefined4 FUN_01b2b0e4(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_3[3] == 0) {
    uVar3 = param_3[1];
    if (((uint)param_3[1] <= param_2) ||
       (iVar1 = FUN_01b2b09c(param_3), uVar3 = param_2, iVar1 != 0)) {
      FUN_01b257dc(param_1,0,param_2 << 2);
      FUN_01b26974(param_1,*param_3,uVar3 << 2);
      return 1;
    }
    uVar4 = 0x118;
    uVar2 = 0x66;
  }
  else {
    uVar4 = 0x111;
    uVar2 = 0x6d;
  }
  FUN_01b053d4(3,0,uVar2,"/aws-lc/crypto/fipsmodule/bn/bn.c",uVar4);
  return 0;
}

