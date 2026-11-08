// FUN_01b30bf8 @ 01b30bf8 size=200 calls_out=4 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/bn/montgomery.c

undefined4 FUN_01b30bf8(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2[3] == 0) {
    if (*(int *)(param_3 + 0x18) == 0) {
      param_1[1] = 0;
      return 1;
    }
    iVar1 = FUN_01b2b700(param_2,*(int *)(param_3 + 0x18) << 1);
    if ((iVar1 != 0) && (iVar1 = FUN_01b2b248(param_1,*(undefined4 *)(param_3 + 0x18)), iVar1 != 0))
    {
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      param_1[1] = uVar2;
      param_1[3] = 0;
      uVar2 = FUN_01b30ae8(*param_1,uVar2,*param_2,param_2[1],param_3);
      return uVar2;
    }
  }
  else {
    FUN_01b053d4(3,0,0x6d,"/aws-lc/crypto/fipsmodule/bn/montgomery.c",0xff);
  }
  return 0;
}

