// FUN_01b452b8 @ 01b452b8 size=196 calls_out=4 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c

bool FUN_01b452b8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*param_1 == 0) {
    uVar3 = 0xcd;
    uVar2 = 0x72;
  }
  else {
    if ((param_2 == (undefined4 *)0x0) || (iVar1 = FUN_01b44b4c(*param_1,*param_2,0), iVar1 == 0)) {
      FUN_01b3d37c(param_1[1]);
      iVar1 = FUN_01b44d48(param_2,*param_1);
      param_1[1] = iVar1;
      return iVar1 != 0;
    }
    uVar3 = 0xd2;
    uVar2 = 0x82;
  }
  FUN_01b053d4(0xf,0,uVar2,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",uVar3);
  return false;
}

