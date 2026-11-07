// FUN_01b488f0 @ 01b488f0 size=152 calls_out=1 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

undefined8 FUN_01b488f0(int *param_1)

{
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || (*(int *)(*param_1 + 0x10) == 0)) {
    FUN_01b053d4(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",399);
    return 0;
  }
  param_1[4] = 4;
  return 1;
}

