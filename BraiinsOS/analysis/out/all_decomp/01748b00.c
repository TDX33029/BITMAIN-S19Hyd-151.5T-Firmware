// FUN_01748b00 @ 01748b00 size=356 calls_out=6 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c | /aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c

undefined4 FUN_01748b00(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_016e1e1c(param_2);
  if (iVar1 != *(int *)(*param_1 + 0x14)) {
    FUN_016e9cd0(6,0,0x89,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0x8c);
    return 0;
  }
  uVar2 = FUN_016e1e04(param_2);
  iVar1 = FUN_0177b624(uVar2,*(undefined4 *)(*param_1 + 0x14));
  iVar3 = FUN_0177a6c0(*(undefined4 *)(*param_1 + 0x10));
  if (iVar3 != 0 && iVar1 != 0) {
    iVar4 = (**(code **)(*(int *)(*param_1 + 0x24) + 0x18))(iVar3,iVar1);
    if (iVar4 != 0) {
      FUN_0177aafc(param_1[1]);
      FUN_0177aafc(param_1[2]);
      FUN_0177aafc(param_1[3]);
      param_1[1] = iVar3;
      param_1[2] = iVar1;
      uVar2 = 1;
      param_1[3] = 0;
      iVar1 = 0;
      iVar3 = 0;
      goto LAB_01748c08;
    }
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/fipsmodule/pqdsa/pqdsa.c",0x98);
  }
  uVar2 = 0;
LAB_01748c08:
  FUN_0177aafc(iVar3);
  FUN_0177aafc(iVar1);
  return uVar2;
}

