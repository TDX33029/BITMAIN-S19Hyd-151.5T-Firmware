// FUN_0173b954 @ 0173b954 size=152 calls_out=1 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

undefined8 FUN_0173b954(int *param_1)

{
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || (*(int *)(*param_1 + 0x38) == 0)) {
    FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x13b);
    return 0;
  }
  param_1[4] = 0x100;
  return 1;
}

