// FUN_0001f1dc @ 0001f1dc  size=48  callers=0
// program: bmminer


undefined4 FUN_0001f1dc(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (0x17 < __n) {
    __n = 0x18;
  }
  memcpy((void *)(*(int *)(param_1 + 300) + 0x47),param_2,__n);
  *param_3 = __n;
  return 0;
}

