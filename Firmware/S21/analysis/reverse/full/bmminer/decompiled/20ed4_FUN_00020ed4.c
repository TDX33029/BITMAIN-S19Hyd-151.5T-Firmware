// FUN_00020ed4 @ 00020ed4  size=52  callers=0
// program: bmminer


undefined4 FUN_00020ed4(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (8 < __n) {
    __n = 9;
  }
  memcpy(param_2,(void *)(*(int *)(param_1 + 300) + 0x3e),__n);
  *param_3 = __n;
  return 0;
}

