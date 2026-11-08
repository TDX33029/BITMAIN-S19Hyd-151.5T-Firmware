// FUN_0173bd84 @ 0173bd84 size=328 calls_out=3 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

undefined8 FUN_0173bd84(int *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) ||
     (pcVar2 = *(code **)(*param_1 + 0x10), pcVar2 == (code *)0x0)) {
    FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x1cc);
  }
  else if (param_1[4] == 4) {
    if (param_2 != (int *)0x0) {
      if (*param_2 == 0) {
        iVar1 = FUN_01739ea4();
        *param_2 = iVar1;
        if (iVar1 == 0) {
          FUN_016e9cd0(6,0,6,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x1db);
          return 0;
        }
        pcVar2 = *(code **)(*param_1 + 0x10);
      }
      iVar1 = (*pcVar2)(param_1);
      if (iVar1 != 0) {
        return 1;
      }
      FUN_01739ee4(*param_2);
      *param_2 = 0;
    }
  }
  else {
    FUN_016e9cd0(6,0,0x7e,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x1d0);
  }
  return 0;
}

