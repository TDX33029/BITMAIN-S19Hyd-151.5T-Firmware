// FUN_01748660 @ 01748660 size=480 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c | /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c | /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c | /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c | /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c | /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c

undefined8 FUN_01748660(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == (int *)0x0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",0x3f);
  }
  else {
    iVar2 = **(int **)(param_1 + 0x14);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        FUN_016e9cd0(6,0,0x7c,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",0x45);
        return 0;
      }
      iVar2 = FUN_01747f5c(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
    }
    if (param_2 == 0) {
      *param_3 = *(int *)(iVar2 + 0x18);
      return 1;
    }
    if (*(int *)(iVar2 + 0x18) == *param_3) {
      iVar1 = *(int *)(param_1 + 8);
      if (((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0)) || (*(int *)(iVar1 + 4) != 0x3e1)) {
        FUN_016e9cd0(6,0,0x7e,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",0x5a);
      }
      else {
        iVar1 = *(int *)(*(int *)(iVar1 + 8) + 8);
        if (iVar1 == 0) {
          FUN_016e9cd0(6,0,0x78,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",0x60);
        }
        else {
          iVar2 = (**(code **)(*(int *)(iVar2 + 0x24) + 0xc))(iVar1,param_2,param_3,param_4,param_5)
          ;
          if (iVar2 != 0) {
            return 1;
          }
          FUN_016e9cd0(6,0,0x44,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",0x77);
        }
      }
    }
    else {
      FUN_016e9cd0(6,0,100,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",0x52);
    }
  }
  return 0;
}

