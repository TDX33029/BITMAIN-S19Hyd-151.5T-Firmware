// FUN_00021064 @ 00021064  size=52  callers=0
// program: bmminer


undefined4 FUN_00021064(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (0xd < __n) {
    __n = 0xe;
  }
  memcpy(param_2,(void *)(*(int *)(param_1 + 300) + 0x17),__n);
  *param_3 = __n;
  return 0;
}

