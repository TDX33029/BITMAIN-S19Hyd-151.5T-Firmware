// FUN_00022198 @ 00022198  size=52  callers=0
// program: bmminer


undefined4 FUN_00022198(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (5 < __n) {
    __n = 6;
  }
  memcpy(param_2,(void *)(*(int *)(param_1 + 300) + 0x35),__n);
  *param_3 = __n;
  return 0;
}

