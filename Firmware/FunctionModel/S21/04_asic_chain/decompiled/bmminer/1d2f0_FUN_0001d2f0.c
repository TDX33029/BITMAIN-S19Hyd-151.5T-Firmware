// FUN_0001d2f0 @ 0001d2f0  size=188  callers=2
// program: bmminer


undefined4 FUN_0001d2f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char acStack_2008 [8192];
  
  if ((DAT_000c0410 == 0) || (*(char *)(DAT_000c0410 + 0x1c) == '\0')) {
    if (4 < DAT_000be63c) {
      snprintf(acStack_2008,0x2000,"No chip bin, chain = %d\n",param_1);
      FUN_0004948c(4,acStack_2008,0);
      return 0xffffffff;
    }
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      uVar1 = (**(code **)(*(int *)(DAT_000c0410 + param_1 * 4) + 0x54))();
      *param_2 = uVar1;
      return 0;
    }
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

