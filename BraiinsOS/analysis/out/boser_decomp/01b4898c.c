// FUN_01b4898c @ 01b4898c size=264 calls_out=3 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

undefined4 FUN_01b4898c(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || (*(int *)(*param_1 + 0x10) == 0)) {
    uVar3 = 0x1cc;
    uVar2 = 0x7d;
  }
  else {
    if (param_1[4] == 4) {
      if (param_2 == (int *)0x0) {
        return 0;
      }
      iVar1 = *param_2;
      if (iVar1 == 0) {
        iVar1 = FUN_01b46f98();
        *param_2 = iVar1;
        if (iVar1 == 0) {
          uVar3 = 0x1db;
          uVar2 = 6;
          goto LAB_01b489dc;
        }
      }
      iVar1 = (**(code **)(*param_1 + 0x10))(param_1,iVar1);
      if (iVar1 == 0) {
        FUN_01b46fd8(*param_2);
        *param_2 = 0;
        return 0;
      }
      return 1;
    }
    uVar3 = 0x1d0;
    uVar2 = 0x7e;
  }
LAB_01b489dc:
  FUN_01b053d4(6,0,uVar2,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",uVar3);
  return 0;
}

