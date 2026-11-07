// FUN_00022260 @ 00022260  size=48  callers=0
// program: bmminer


undefined4 FUN_00022260(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (9 < __n) {
    __n = 10;
  }
  memcpy((void *)(*(int *)(param_1 + 300) + 0x26),param_2,__n);
  *param_3 = __n;
  return 0;
}

