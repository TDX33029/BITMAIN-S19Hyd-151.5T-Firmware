// FUN_0177762c @ 0177762c size=216 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c | /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c

undefined4 FUN_0177762c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c",0x5c);
  }
  else {
    if ((param_3 == 0x40 && 0x3f < param_5) &&
       (iVar1 = FUN_01777618(param_4,param_2,*(int *)(*(int *)(param_1 + 8) + 8) + 0x20,iVar1,
                             *(undefined4 *)(iVar1 + 0x100)), iVar1 != 0)) {
      return 1;
    }
    FUN_016e9cd0(6,0,0x83,"/aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c",0x61);
  }
  return 0;
}

