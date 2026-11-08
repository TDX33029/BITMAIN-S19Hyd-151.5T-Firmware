// FUN_0001bde0 @ 0001bde0  size=164  callers=1
// program: bmminer


undefined4 FUN_0001bde0(int param_1,uint *param_2)

{
  char acStack_808 [2052];
  
  if ((DAT_00089088 == 0) || (*(char *)(DAT_00089088 + 0x1c) == '\0')) {
    if (DAT_00087bbc < 5) {
      return 0xffffffff;
    }
    snprintf(acStack_808,0x800,"No chip bin, chain = %d\n",param_1);
    FUN_00032218(4,acStack_808,0);
    return 0xffffffff;
  }
  if (param_2 == (uint *)0x0) {
    return 0xfffffffe;
  }
  *param_2 = (uint)*(byte *)(*(int *)(DAT_00089088 + param_1 * 4) + 0xf);
  return 0;
}

