// FUN_01b4865c @ 01b4865c size=460 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

undefined4 FUN_01b4865c(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((((param_1 == (int *)0x0) || (iVar2 = *param_1, iVar2 == 0)) ||
      ((*(int *)(iVar2 + 0x38) == 0 &&
       ((*(int *)(iVar2 + 0x30) == 0 && (*(int *)(iVar2 + 0x34) == 0)))))) ||
     (*(code **)(iVar2 + 0x40) == (code *)0x0)) {
    uVar3 = 0x148;
    uVar1 = 0x7d;
  }
  else if (param_1[4] == 0x100 || (param_1[4] - 0x40U & 0xffffffbf) == 0) {
    iVar2 = (**(code **)(iVar2 + 0x40))(param_1,3,0,param_2);
    if (iVar2 < 1) {
      return 0;
    }
    if (iVar2 == 2) {
      return 1;
    }
    if (param_1[2] == 0) {
      uVar3 = 0x15d;
      uVar1 = 0x78;
    }
    else if (*(int *)(param_1[2] + 4) == *(int *)(param_2 + 4)) {
      iVar2 = FUN_01b47330(param_2);
      if ((iVar2 != 0) || (iVar2 = FUN_01b47e7c(param_1[2],param_2), iVar2 != 0)) {
        FUN_01b46fd8(param_1[3]);
        param_1[3] = param_2;
        iVar2 = (**(code **)(*param_1 + 0x40))(param_1,3,1,param_2);
        if (iVar2 < 1) {
          param_1[3] = 0;
          return 0;
        }
        FUN_01b47088(param_2);
        return 1;
      }
      uVar3 = 0x16d;
      uVar1 = 0x68;
    }
    else {
      uVar3 = 0x162;
      uVar1 = 0x67;
    }
  }
  else {
    uVar3 = 0x14e;
    uVar1 = 0x7e;
  }
  FUN_01b053d4(6,0,uVar1,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",uVar3);
  return 0;
}

