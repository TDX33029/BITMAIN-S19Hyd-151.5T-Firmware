// FUN_000221cc @ 000221cc  size=48  callers=0
// program: bmminer


undefined4 FUN_000221cc(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (5 < __n) {
    __n = 6;
  }
  memcpy((void *)(*(int *)(param_1 + 300) + 0x35),param_2,__n);
  *param_3 = __n;
  return 0;
}

