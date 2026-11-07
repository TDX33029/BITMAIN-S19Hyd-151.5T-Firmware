// FUN_01777514 @ 01777514 size=164 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ed25519.c

undefined8
FUN_01777514(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if ((param_3 == 0x40) &&
     (iVar1 = FUN_01777500(param_4,param_5,param_2,*(int *)(*(int *)(param_1 + 8) + 8) + 0x20),
     iVar1 != 0)) {
    return 1;
  }
  FUN_016e9cd0(6,0,0x83,"/aws-lc/crypto/fipsmodule/evp/p_ed25519.c",0x45);
  return 0;
}

