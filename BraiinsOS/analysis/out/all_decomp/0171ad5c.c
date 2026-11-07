// FUN_0171ad5c @ 0171ad5c size=248 calls_out=4 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/bn/montgomery.c

undefined4 FUN_0171ad5c(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2[3] != 0) {
    FUN_016e9cd0(3,0,0x6d,"/aws-lc/crypto/fipsmodule/bn/montgomery.c",0xff);
    return 0;
  }
  if (*(int *)(param_3 + 0x18) == 0) {
    param_1[1] = 0;
    uVar1 = 1;
  }
  else {
    iVar2 = FUN_01714d30(param_2,*(int *)(param_3 + 0x18) << 1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_0171464c(param_1,*(undefined4 *)(param_3 + 0x18));
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *param_2;
    param_1[1] = uVar1;
    param_1[3] = 0;
    uVar1 = FUN_0171ac28(*param_1,uVar1,uVar3,param_2[1],param_3);
  }
  return uVar1;
}

