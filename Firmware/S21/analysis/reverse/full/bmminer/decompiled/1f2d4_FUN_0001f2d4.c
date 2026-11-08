// FUN_0001f2d4 @ 0001f2d4  size=52  callers=0
// program: bmminer


undefined4 FUN_0001f2d4(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (3 < __n) {
    __n = 4;
  }
  memcpy(param_2,(void *)(*(int *)(param_1 + 300) + 0x35),__n);
  *param_3 = __n;
  return 0;
}

