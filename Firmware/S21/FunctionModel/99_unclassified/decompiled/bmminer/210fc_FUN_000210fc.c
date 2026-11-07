// FUN_000210fc @ 000210fc  size=48  callers=0
// program: bmminer


undefined4 FUN_000210fc(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (0x11 < __n) {
    __n = 0x12;
  }
  memcpy((void *)(*(int *)(param_1 + 300) + 2),param_2,__n);
  *param_3 = __n;
  return 0;
}

