// FUN_01b44610 @ 01b44610 size=168 calls_out=2 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c | /aws-lc/crypto/fipsmodule/ec/ec.c

undefined4 FUN_01b44610(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 == 0 || param_3 == 0) {
    uVar3 = 0x37d;
    uVar2 = 0x43;
  }
  else {
    (**(code **)(*param_1 + 0x10))();
    iVar1 = FUN_01b44430(param_1,param_2);
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = 0x386;
    uVar2 = 0x44;
  }
  FUN_01b053d4(0xf,0,uVar2,"/aws-lc/crypto/fipsmodule/ec/ec.c",uVar3);
  return 0;
}

