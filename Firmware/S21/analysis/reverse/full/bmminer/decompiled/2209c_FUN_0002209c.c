// FUN_0002209c @ 0002209c  size=52  callers=0
// program: bmminer


undefined4 FUN_0002209c(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (0x7f < __n) {
    __n = 0x80;
  }
  memcpy(param_2,(void *)(*(int *)(param_1 + 300) + 0x77),__n);
  *param_3 = __n;
  return 0;
}

