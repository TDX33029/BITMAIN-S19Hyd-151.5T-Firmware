// FUN_0173b5ec @ 0173b5ec size=212 calls_out=1 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

undefined8 FUN_0173b5ec(int *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (((param_1 == (int *)0x0) || (iVar1 = *param_1, iVar1 == 0)) ||
     ((*(int *)(iVar1 + 0x18) == 0 && (*(int *)(iVar1 + 0x1c) == 0)))) {
    FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0xba);
    return 0;
  }
  pcVar2 = *(code **)(iVar1 + 0x14);
  param_1[4] = 8;
  if ((pcVar2 == (code *)0x0) || (iVar1 = (*pcVar2)(param_1), iVar1 != 0)) {
    return 1;
  }
  param_1[4] = 0;
  return 0;
}

