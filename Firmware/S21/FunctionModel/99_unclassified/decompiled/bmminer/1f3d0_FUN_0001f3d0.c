// FUN_0001f3d0 @ 0001f3d0  size=48  callers=0
// program: bmminer


undefined4 FUN_0001f3d0(int param_1,void *param_2,uint *param_3)

{
  size_t __n;
  
  __n = *param_3;
  if (0xd < __n) {
    __n = 0xe;
  }
  memcpy((void *)(*(int *)(param_1 + 300) + 0x17),param_2,__n);
  *param_3 = __n;
  return 0;
}

