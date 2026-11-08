// FUN_00021000 @ 00021000  size=52  callers=0
// program: bmminer


undefined4 FUN_00021000(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (9 < __n) {
    __n = 10;
  }
  memcpy(param_2,(void *)(*(int *)(param_1 + 300) + 0x26),__n);
  *param_3 = __n;
  return 0;
}

