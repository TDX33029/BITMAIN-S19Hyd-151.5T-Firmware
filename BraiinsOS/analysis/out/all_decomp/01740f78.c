// FUN_01740f78 @ 01740f78 size=248 calls_out=6 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c

int FUN_01740f78(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    FUN_016e9cd0(6,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x18d);
  }
  else {
    iVar1 = FUN_01739ea4();
    if ((iVar1 == 0) || (iVar2 = FUN_01740200(iVar1,param_1), iVar2 == 0)) {
      iVar2 = 0;
      FUN_01739ee4(iVar1);
    }
    else {
      iVar2 = iVar1;
      if (*(int *)(iVar1 + 8) != 0) {
        iVar3 = FUN_01740434();
        if (*(int *)(iVar3 + 0x10) == param_3) {
          iVar3 = FUN_01740f18(*(undefined4 *)(iVar1 + 8),param_2);
          if (iVar3 != 0) {
            return iVar1;
          }
        }
        else {
          FUN_016e9cd0(6,0,0x89,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x199);
        }
      }
    }
    FUN_01739ee4(iVar2);
  }
  return 0;
}

