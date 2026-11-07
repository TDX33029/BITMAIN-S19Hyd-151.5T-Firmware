// FUN_0173b7a0 @ 0173b7a0 size=212 calls_out=1 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

undefined8 FUN_0173b7a0(int *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (((param_1 == (int *)0x0) || (iVar1 = *param_1, iVar1 == 0)) ||
     ((*(int *)(iVar1 + 0x24) == 0 && (*(int *)(iVar1 + 0x28) == 0)))) {
    FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0xd8);
    return 0;
  }
  pcVar2 = *(code **)(iVar1 + 0x20);
  param_1[4] = 0x10;
  if ((pcVar2 == (code *)0x0) || (iVar1 = (*pcVar2)(param_1), iVar1 != 0)) {
    return 1;
  }
  param_1[4] = 0;
  return 0;
}

