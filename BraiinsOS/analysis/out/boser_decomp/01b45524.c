// FUN_01b45524 @ 01b45524 size=168 calls_out=3 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c

uint FUN_01b45524(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_01b44b4c(param_1,*param_2,0);
  if ((iVar1 == 0) && (iVar1 = FUN_01b44b4c(param_1,*param_3), iVar1 == 0)) {
    iVar1 = FUN_01b44980(param_1,param_2 + 1,param_3 + 1);
    uVar2 = (uint)(iVar1 == 0);
  }
  else {
    FUN_01b053d4(0xf,0,0x6a,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x261);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

