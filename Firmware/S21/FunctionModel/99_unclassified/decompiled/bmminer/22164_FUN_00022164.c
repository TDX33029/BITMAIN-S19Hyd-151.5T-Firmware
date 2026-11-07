// FUN_00022164 @ 00022164  size=52  callers=0
// program: bmminer


undefined4 FUN_00022164(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (8 < __n) {
    __n = 9;
  }
  memcpy(param_2,(void *)(*(int *)(param_1 + 300) + 0x3e),__n);
  *param_3 = __n;
  return 0;
}

