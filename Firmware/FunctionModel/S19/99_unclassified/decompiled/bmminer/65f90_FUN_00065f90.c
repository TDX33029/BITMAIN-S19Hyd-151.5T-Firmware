// FUN_00065f90 @ 00065f90  size=36  callers=5
// program: bmminer


void FUN_00065f90(undefined4 *param_1)

{
  void *__dest;
  
  __dest = (void *)(param_1[1] - param_1[0x108]);
  if (__dest < (void *)*param_1) {
    __dest = (void *)*param_1;
  }
  memcpy(__dest,param_1 + 7,param_1[1] - (int)__dest);
  return;
}

