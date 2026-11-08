// FUN_0174044c @ 0174044c size=428 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c

undefined8 FUN_0174044c(int param_1,int param_2,uint *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x14);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      FUN_016e9cd0(6,0,0x7c,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x108);
      return 0;
    }
    iVar2 = FUN_01740434(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
  }
  if (param_2 == 0) {
LAB_017404fc:
    *param_3 = *(uint *)(iVar2 + 0x1c);
    return 1;
  }
  if ((*(int *)(iVar2 + 0x18) == param_5) && (*(uint *)(iVar2 + 0x1c) <= *param_3)) {
    iVar1 = *(int *)(param_1 + 8);
    if (((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0)) || (*(int *)(iVar1 + 4) != 0x3ca)) {
      FUN_016e9cd0(6,0,0x7e,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x11f);
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar1 + 8) + 8);
      if (iVar1 == 0) {
        FUN_016e9cd0(6,0,0x78,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x126);
      }
      else {
        iVar1 = (**(code **)(*(int *)(iVar2 + 0x28) + 0x10))(param_2,param_3,param_4,iVar1);
        if (iVar1 != 0) goto LAB_017404fc;
      }
    }
  }
  else {
    FUN_016e9cd0(6,0,0x89,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x117);
  }
  return 0;
}

