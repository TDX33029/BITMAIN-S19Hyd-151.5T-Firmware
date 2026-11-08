// FUN_0001f2a4 @ 0001f2a4  size=48  callers=0
// program: bmminer


undefined4 FUN_0001f2a4(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (3 < __n) {
    __n = 4;
  }
  memcpy((void *)(*(int *)(param_1 + 300) + 0x35),param_2,__n);
  *param_3 = __n;
  return 0;
}

