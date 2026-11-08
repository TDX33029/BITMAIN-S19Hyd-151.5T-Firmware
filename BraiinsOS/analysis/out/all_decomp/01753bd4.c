// FUN_01753bd4 @ 01753bd4 size=276 calls_out=9 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ec.c

undefined8 FUN_01753bd4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      FUN_016e9cd0(6,0,0x7c,"/aws-lc/crypto/fipsmodule/evp/p_ec.c",0xd8);
      return 0;
    }
    iVar2 = FUN_0172ca8c(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
  }
  iVar1 = FUN_0172cc2c();
  if ((((iVar1 == 0) || (iVar2 = FUN_01737020(iVar1,iVar2), iVar2 == 0)) ||
      ((iVar2 = FUN_01753bbc(), iVar2 == 0 && (iVar2 = FUN_0174baf0(iVar1), iVar2 == 0)))) ||
     ((iVar2 = FUN_01753bbc(), iVar2 != 0 && (iVar2 = FUN_0174bc54(iVar1), iVar2 == 0)))) {
    FUN_0172c984(iVar1);
    return 0;
  }
  FUN_0173aa7c(param_2,iVar1);
  return 1;
}

