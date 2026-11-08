// FUN_0001d998 @ 0001d998  size=188  callers=1
// program: bmminer


undefined4 FUN_0001d998(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char acStack_2008 [8192];
  
  if ((DAT_000c0410 == 0) || (*(char *)(DAT_000c0410 + 0x1c) == '\0')) {
    if (4 < DAT_000be63c) {
      snprintf(acStack_2008,0x2000,"No work mode hash rate, chain = %d, mode = %d.\n",param_1,
               param_2);
      FUN_0004948c(4,acStack_2008,0);
      return 0xffff;
    }
    uVar2 = 0xffff;
  }
  else if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)(DAT_000c0410 + param_1 * 4) + 0xd4))();
    uVar2 = 0;
    *param_3 = uVar1;
  }
  return uVar2;
}

