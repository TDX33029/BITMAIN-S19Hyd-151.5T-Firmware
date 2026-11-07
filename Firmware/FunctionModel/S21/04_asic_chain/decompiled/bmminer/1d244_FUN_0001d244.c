// FUN_0001d244 @ 0001d244  size=172  callers=1
// program: bmminer


undefined4 FUN_0001d244(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char acStack_2008 [8192];
  
  if ((DAT_000c0410 == 0) || (*(char *)(DAT_000c0410 + 0x1c) == '\0')) {
    if (4 < DAT_000be63c) {
      snprintf(acStack_2008,0x2000,"No test standard, chain = %d.\n",param_1);
      FUN_0004948c(4,acStack_2008,0);
      return 0xffffffff;
    }
    uVar2 = 0xffffffff;
  }
  else if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar1 = (**(code **)(*(int *)(DAT_000c0410 + param_1 * 4) + 0xf4))();
    uVar2 = 0;
    *param_2 = uVar1;
  }
  return uVar2;
}

