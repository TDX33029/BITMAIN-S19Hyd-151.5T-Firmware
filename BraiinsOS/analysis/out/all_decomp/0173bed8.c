// FUN_0173bed8 @ 0173bed8 size=168 calls_out=1 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

bool FUN_0173bed8(int *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) ||
     (pcVar2 = *(code **)(*param_1 + 0x50), pcVar2 == (code *)0x0)) {
    FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x233);
    return false;
  }
  iVar1 = (*pcVar2)();
  return iVar1 != 0;
}

