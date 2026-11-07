// FUN_000498f4 @ 000498f4  size=52  callers=1
// program: bmminer


void FUN_000498f4(undefined4 *param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  free((void *)*param_1);
  __dest = malloc(param_3);
  *param_1 = __dest;
  memcpy(__dest,param_2,param_3);
  return;
}

