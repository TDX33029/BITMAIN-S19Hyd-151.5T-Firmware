// FUN_000498b4 @ 000498b4  size=64  callers=7
// program: bmminer


undefined4 FUN_000498b4(undefined4 *param_1,undefined4 *param_2)

{
  void *__dest;
  size_t __size;
  
  __size = param_1[1];
  __dest = malloc(__size);
  *param_2 = __dest;
  if (__dest == (void *)0x0) {
    return 3;
  }
  memcpy(__dest,(void *)*param_1,__size);
  return 0;
}

