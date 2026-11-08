// FUN_01b48454 @ 01b48454 size=180 calls_out=1 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

undefined4 FUN_01b48454(int *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (((param_1 == (int *)0x0) || (iVar1 = *param_1, iVar1 == 0)) ||
     ((*(int *)(iVar1 + 0x24) == 0 && (*(int *)(iVar1 + 0x28) == 0)))) {
    FUN_01b053d4(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0xd8);
  }
  else {
    pcVar2 = *(code **)(iVar1 + 0x20);
    param_1[4] = 0x10;
    if ((pcVar2 == (code *)0x0) || (iVar1 = (*pcVar2)(param_1), iVar1 != 0)) {
      return 1;
    }
    param_1[4] = 0;
  }
  return 0;
}

