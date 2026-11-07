// FUN_01b48aa0 @ 01b48aa0 size=144 calls_out=1 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

bool FUN_01b48aa0(int *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) ||
     (pcVar2 = *(code **)(*param_1 + 0x50), pcVar2 == (code *)0x0)) {
    FUN_01b053d4(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x233);
    bVar3 = false;
  }
  else {
    iVar1 = (*pcVar2)();
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

