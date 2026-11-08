// FUN_017400fc @ 017400fc size=224 calls_out=2 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c

undefined4 FUN_017400fc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x14) == 0)) {
    FUN_016e9cd0(6,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x151);
  }
  else if (*(int *)(param_1 + 8) == 0) {
    iVar1 = FUN_01740000(param_2);
    if (iVar1 != 0) {
      **(int **)(param_1 + 0x14) = iVar1;
      return 1;
    }
    FUN_016e9cd0(6,0,0x80,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x15e);
  }
  else {
    FUN_016e9cd0(6,0,0x72,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x158);
  }
  return 0;
}

