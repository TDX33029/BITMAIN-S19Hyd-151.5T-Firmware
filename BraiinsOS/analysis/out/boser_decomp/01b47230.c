// FUN_01b47230 @ 01b47230 size=252 calls_out=4 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

int * FUN_01b47230(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((*param_1 != 0) && (*(int *)(*param_1 + 8) != 0)) &&
     (piVar1 = (int *)FUN_01b6b0a8(0x28), piVar1 != (int *)0x0)) {
    iVar2 = param_1[2];
    *piVar1 = *param_1;
    piVar1[1] = param_1[1];
    piVar1[4] = param_1[4];
    if (iVar2 != 0) {
      FUN_01b47088();
      piVar1[2] = param_1[2];
    }
    if (param_1[3] != 0) {
      FUN_01b47088();
      piVar1[3] = param_1[3];
    }
    iVar2 = (**(code **)(*param_1 + 8))(piVar1,param_1);
    if (0 < iVar2) {
      return piVar1;
    }
    *piVar1 = 0;
    FUN_01b47028(piVar1);
    FUN_01b053d4(6,0,6,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x91);
  }
  return (int *)0x0;
}

