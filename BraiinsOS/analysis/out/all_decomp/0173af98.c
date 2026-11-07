// FUN_0173af98 @ 0173af98 size=240 calls_out=4 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/evp.c

int FUN_0173af98(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1 == 0x3b5) {
    puVar3 = &DAT_018b6024;
  }
  else if (param_1 == 0x3e5) {
    puVar3 = &DAT_018b5fc8;
  }
  else {
    if (param_1 != 0x3b4) {
      FUN_016e9cd0(6,0,0x80,"/aws-lc/crypto/fipsmodule/evp/evp.c",0x242);
      return 0;
    }
    puVar3 = &DAT_018b62dc;
  }
  iVar1 = FUN_01739ea4();
  if (iVar1 != 0) {
    FUN_0173a734(iVar1,puVar3);
    iVar2 = (**(code **)(*(int *)(iVar1 + 0xc) + 0x34))(iVar1,param_3,param_4);
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  FUN_01739ee4(iVar1);
  return 0;
}

