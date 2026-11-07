// FUN_017484a0 @ 017484a0 size=428 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c | /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c | /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c | /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c | /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c

undefined8 FUN_017484a0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    FUN_016e9cd0(6,0,0x76,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",0x94);
  }
  else {
    iVar1 = **(int **)(param_1 + 0x14);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        FUN_016e9cd0(6,0,0x7c,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",0x9a);
        return 0;
      }
      iVar1 = FUN_01747f5c(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
    }
    iVar2 = *(int *)(param_1 + 8);
    if (((iVar2 == 0) || (*(int *)(iVar2 + 8) == 0)) || (*(int *)(iVar2 + 4) != 0x3e1)) {
      FUN_016e9cd0(6,0,0x7e,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",0xa4);
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 8) + 4);
      if (iVar2 == 0) {
        FUN_016e9cd0(6,0,0x78,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",0xaa);
      }
      else {
        if ((param_3 == *(int *)(iVar1 + 0x18)) &&
           (iVar1 = (**(code **)(*(int *)(iVar1 + 0x24) + 0x14))
                              (iVar2,param_2,param_3,param_4,param_5), iVar1 != 0)) {
          return 1;
        }
        FUN_016e9cd0(6,0,0x83,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",0xc3);
      }
    }
  }
  return 0;
}

