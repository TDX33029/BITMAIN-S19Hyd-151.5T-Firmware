// FUN_0001f400 @ 0001f400  size=52  callers=0
// program: bmminer


undefined4 FUN_0001f400(int param_1,void *param_2,uint *param_3)

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

