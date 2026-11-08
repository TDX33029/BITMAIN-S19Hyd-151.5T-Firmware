// FUN_0001f308 @ 0001f308  size=48  callers=0
// program: bmminer


undefined4 FUN_0001f308(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (2 < __n) {
    __n = 3;
  }
  memcpy((void *)(*(int *)(param_1 + 300) + 0x3b),param_2,__n);
  *param_3 = __n;
  return 0;
}

