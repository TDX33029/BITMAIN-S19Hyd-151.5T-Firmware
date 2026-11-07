// FUN_0001c800 @ 0001c800  size=152  callers=1
// program: bmminer


undefined2 FUN_0001c800(int param_1)

{
  undefined2 uVar1;
  char acStack_2008 [8196];
  
  if ((DAT_000c0410 == 0) || (*(char *)(DAT_000c0410 + 0x1c) == '\0')) {
    if (4 < DAT_000be63c) {
      snprintf(acStack_2008,0x2000,"No bom version, chain = %d.\n",param_1);
      FUN_0004948c(4,acStack_2008,0);
      return 0xffff;
    }
    uVar1 = 0xffff;
  }
  else {
    uVar1 = (**(code **)(*(int *)(DAT_000c0410 + param_1 * 4) + 0x8c))();
  }
  return uVar1;
}

