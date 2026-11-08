// FUN_0173b9f0 @ 0173b9f0 size=520 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

undefined4 FUN_0173b9f0(int *param_1,int param_2)

{
  int iVar1;
  
  if ((((param_1 == (int *)0x0) || (iVar1 = *param_1, iVar1 == 0)) ||
      ((*(int *)(iVar1 + 0x38) == 0 &&
       ((*(int *)(iVar1 + 0x30) == 0 && (*(int *)(iVar1 + 0x34) == 0)))))) ||
     (*(code **)(iVar1 + 0x40) == (code *)0x0)) {
    FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x148);
  }
  else if (param_1[4] == 0x100 || (param_1[4] - 0x40U & 0xffffffbf) == 0) {
    iVar1 = (**(code **)(iVar1 + 0x40))(param_1,3);
    if (0 < iVar1) {
      if (iVar1 == 2) {
        return 1;
      }
      if (param_1[2] == 0) {
        FUN_016e9cd0(6,0,0x78,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x15d);
      }
      else if (*(int *)(param_1[2] + 4) == *(int *)(param_2 + 4)) {
        iVar1 = FUN_0173a2f4(param_2);
        if ((iVar1 == 0) && (iVar1 = FUN_0173b11c(param_1[2],param_2), iVar1 == 0)) {
          FUN_016e9cd0(6,0,0x68,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x16d);
        }
        else {
          FUN_01739ee4(param_1[3]);
          param_1[3] = param_2;
          iVar1 = (**(code **)(*param_1 + 0x40))(param_1,3,1);
          if (0 < iVar1) {
            FUN_01739fe0(param_2);
            return 1;
          }
          param_1[3] = 0;
        }
      }
      else {
        FUN_016e9cd0(6,0,0x67,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x162);
      }
    }
  }
  else {
    FUN_016e9cd0(6,0,0x7e,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x14e);
  }
  return 0;
}

