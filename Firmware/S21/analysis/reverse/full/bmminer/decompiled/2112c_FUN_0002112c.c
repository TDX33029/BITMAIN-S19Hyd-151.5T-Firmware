// FUN_0002112c @ 0002112c  size=52  callers=0
// program: bmminer


undefined4 FUN_0002112c(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (0x11 < __n) {
    __n = 0x12;
  }
  memcpy(param_2,(void *)(*(int *)(param_1 + 300) + 2),__n);
  *param_3 = __n;
  return 0;
}

