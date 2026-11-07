// FUN_000210c8 @ 000210c8  size=52  callers=0
// program: bmminer


undefined4 FUN_000210c8(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (2 < __n) {
    __n = 3;
  }
  memcpy(param_2,(void *)(*(int *)(param_1 + 300) + 0x14),__n);
  *param_3 = __n;
  return 0;
}

