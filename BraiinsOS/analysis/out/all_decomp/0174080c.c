// FUN_0174080c @ 0174080c size=764 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c

undefined4
FUN_0174080c(int param_1,int param_2,uint *param_3,int param_4,uint *param_5,int param_6,
            int *param_7)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_kem.c");
  }
  else if (*(int **)(param_1 + 0x14) == (int *)0x0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_kem.c");
  }
  else {
    iVar2 = **(int **)(param_1 + 0x14);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        FUN_016e9cd0(6,0,0x7c,"/aws-lc/crypto/fipsmodule/evp/p_kem.c");
        return 0;
      }
      iVar2 = FUN_01740434(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
    }
    if (param_3 == (uint *)0x0 || (param_5 == (uint *)0x0 || param_7 == (int *)0x0)) {
      FUN_016e9cd0(6,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_kem.c");
    }
    else {
      if (param_4 == 0 && param_2 == 0) {
        if (param_6 == 0) {
          *param_3 = *(uint *)(iVar2 + 0x18);
          *param_5 = *(uint *)(iVar2 + 0x1c);
          *param_7 = *(int *)(iVar2 + 0x24);
          return 1;
        }
      }
      else if (param_2 != 0 && (param_6 != 0 && param_4 != 0)) {
        if ((*param_3 < *(uint *)(iVar2 + 0x18)) || (*param_5 < *(uint *)(iVar2 + 0x1c))) {
          FUN_016e9cd0(6,0,100,"/aws-lc/crypto/fipsmodule/evp/p_kem.c");
          return 0;
        }
        if (*param_7 != *(int *)(iVar2 + 0x24)) {
          FUN_016e9cd0(6,0,0x85,"/aws-lc/crypto/fipsmodule/evp/p_kem.c");
          return 0;
        }
        iVar1 = *(int *)(param_1 + 8);
        if (((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0)) || (*(int *)(iVar1 + 4) != 0x3ca)) {
          FUN_016e9cd0(6,0,0x7e,"/aws-lc/crypto/fipsmodule/evp/p_kem.c");
          return 0;
        }
        if (*(int *)(*(int *)(iVar1 + 8) + 4) == 0) {
          FUN_016e9cd0(6,0,0x78,"/aws-lc/crypto/fipsmodule/evp/p_kem.c");
          return 0;
        }
        iVar1 = (**(code **)(*(int *)(iVar2 + 0x28) + 8))(param_2,param_3,param_4,param_5);
        if (iVar1 == 0) {
          return 0;
        }
        *param_3 = *(uint *)(iVar2 + 0x18);
        *param_5 = *(uint *)(iVar2 + 0x1c);
        return 1;
      }
      FUN_016e9cd0(6,0,0x76,"/aws-lc/crypto/fipsmodule/evp/p_kem.c");
    }
  }
  return 0;
}

