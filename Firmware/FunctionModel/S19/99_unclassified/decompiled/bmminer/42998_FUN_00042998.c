// FUN_00042998 @ 00042998  size=96  callers=0
// program: bmminer


void FUN_00042998(undefined1 *param_1,undefined4 *param_2)

{
  size_t __n;
  
  __n = strlen((char *)*param_2);
  *param_1 = 0x22;
  if (0x4e < __n) {
    strncpy(param_1 + 1,(char *)*param_2,0x4e);
    param_1[0x4f] = 0x22;
    return;
  }
  strncpy(param_1 + 1,(char *)*param_2,__n);
  param_1[__n + 1] = 0x22;
  if (__n != 0x4e) {
    param_1[__n + 2] = 0;
  }
  return;
}

