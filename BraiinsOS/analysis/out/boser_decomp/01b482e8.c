// FUN_01b482e8 @ 01b482e8 size=180 calls_out=1 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

undefined4 FUN_01b482e8(int *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (((param_1 == (int *)0x0) || (iVar1 = *param_1, iVar1 == 0)) ||
     ((*(int *)(iVar1 + 0x18) == 0 && (*(int *)(iVar1 + 0x1c) == 0)))) {
    FUN_01b053d4(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0xba);
  }
  else {
    pcVar2 = *(code **)(iVar1 + 0x14);
    param_1[4] = 8;
    if ((pcVar2 == (code *)0x0) || (iVar1 = (*pcVar2)(param_1), iVar1 != 0)) {
      return 1;
    }
    param_1[4] = 0;
  }
  return 0;
}

