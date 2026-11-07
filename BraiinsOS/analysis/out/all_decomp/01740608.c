// FUN_01740608 @ 01740608 size=496 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c

undefined8 FUN_01740608(int param_1,int param_2,uint *param_3,int param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x14);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      FUN_016e9cd0(6,0,0x7c,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0xc9);
      return 0;
    }
    iVar2 = FUN_01740434(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
  }
  if (param_4 == 0 && param_2 == 0) {
LAB_017406cc:
    *param_3 = *(uint *)(iVar2 + 0x18);
    *param_5 = *(uint *)(iVar2 + 0x1c);
    return 1;
  }
  if (param_4 == 0 || param_2 == 0) {
    FUN_016e9cd0(6,0,0x76,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0xd9);
  }
  else if ((*param_3 < *(uint *)(iVar2 + 0x18)) || (*param_5 < *(uint *)(iVar2 + 0x1c))) {
    FUN_016e9cd0(6,0,100,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0xe0);
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    if (((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0)) || (*(int *)(iVar1 + 4) != 0x3ca)) {
      FUN_016e9cd0(6,0,0x7e,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0xe8);
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar1 + 8) + 4);
      if (iVar1 == 0) {
        FUN_016e9cd0(6,0,0x78,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0xef);
      }
      else {
        iVar1 = (**(code **)(*(int *)(iVar2 + 0x28) + 0xc))(param_2,param_3,param_4,param_5,iVar1);
        if (iVar1 != 0) goto LAB_017406cc;
      }
    }
  }
  return 0;
}

