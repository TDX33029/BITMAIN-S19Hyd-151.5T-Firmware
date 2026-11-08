// FUN_00042958 @ 00042958  size=132  callers=1
// program: bmminer


undefined4 FUN_00042958(void)

{
  int iVar1;
  void *__ptr;
  
  DAT_000c8edc = (char *)FUN_0004ae70(0x1000,"bmminer.c","load_default_config",999);
  FUN_0004285c();
  iVar1 = access(DAT_000c8edc,4);
  if (iVar1 != 0) {
    free(DAT_000c8edc);
    DAT_000c8edc = (char *)0x0;
    return 0;
  }
  __ptr = (void *)FUN_00041d5c(DAT_000c8edc,&DAT_000be000,0);
  if (__ptr == (void *)0x0) {
    return 1;
  }
  free(__ptr);
  return 0;
}

