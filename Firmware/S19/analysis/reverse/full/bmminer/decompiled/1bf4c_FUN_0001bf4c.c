// FUN_0001bf4c @ 0001bf4c  size=168  callers=1
// program: bmminer


undefined4 FUN_0001bf4c(int param_1,int param_2,uint *param_3)

{
  char acStack_808 [2052];
  
  if ((DAT_00089088 == 0) || (*(char *)(DAT_00089088 + 0x1c) == '\0')) {
    if (DAT_00087bbc < 4) {
      return 0xffff;
    }
    snprintf(acStack_808,0x800,"No work mode hash rate, chain = %d, mode = %d.\n",param_1,param_2);
    FUN_00032218(3,acStack_808,0);
    return 0xffff;
  }
  if (param_3 == (uint *)0x0) {
    return 0;
  }
  *param_3 = (uint)*(ushort *)(*(int *)(DAT_00089088 + param_1 * 4) + 0x39);
  return 0;
}

