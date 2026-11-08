// FUN_0002206c @ 0002206c  size=48  callers=0
// program: bmminer


undefined4 FUN_0002206c(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (0x7f < __n) {
    __n = 0x80;
  }
  memcpy((void *)(*(int *)(param_1 + 300) + 0x77),param_2,__n);
  *param_3 = __n;
  return 0;
}

