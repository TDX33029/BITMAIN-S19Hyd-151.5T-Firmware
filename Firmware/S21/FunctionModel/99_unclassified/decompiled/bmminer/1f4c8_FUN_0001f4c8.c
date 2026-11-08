// FUN_0001f4c8 @ 0001f4c8  size=52  callers=0
// program: bmminer


undefined4 FUN_0001f4c8(int param_1,void *param_2,uint *param_3)

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

