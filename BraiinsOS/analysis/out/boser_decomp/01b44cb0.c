// FUN_01b44cb0 @ 01b44cb0 size=148 calls_out=3 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c

undefined4 FUN_01b44cb0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_01b44b4c(*param_1,*param_2,0);
  if (iVar1 == 0) {
    if (param_1 != param_2) {
      FUN_01b424bc(param_1 + 1,param_2 + 1);
    }
    uVar2 = 1;
  }
  else {
    FUN_01b053d4(0xf,0,0x6a,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x22b);
    uVar2 = 0;
  }
  return uVar2;
}

