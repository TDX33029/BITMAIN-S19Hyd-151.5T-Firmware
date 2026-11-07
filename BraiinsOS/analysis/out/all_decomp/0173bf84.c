// FUN_0173bf84 @ 0173bf84 size=168 calls_out=1 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

bool FUN_0173bf84(int *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) ||
     (pcVar2 = *(code **)(*param_1 + 0x54), pcVar2 == (code *)0x0)) {
    FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x24e);
    return false;
  }
  iVar1 = (*pcVar2)();
  return iVar1 != 0;
}

