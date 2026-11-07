// FUN_0004d320 @ 0004d320  size=176  callers=2
// program: bmminer


undefined4 FUN_0004d320(undefined1 param_1,undefined1 param_2)

{
  int iVar1;
  char *__src;
  undefined1 local_1c;
  undefined1 local_1b;
  
  FUN_0004d1d4(&DAT_00a6c850);
  iVar1 = access(&DAT_00a6c850,0);
  if (iVar1 == 0) {
    unlink(&DAT_00a6c850);
  }
  DAT_00a6c89c = mkstemp(s__tmp_stable_test_XXXXXX_000be884);
  __src = (char *)__strdup(s__tmp_stable_test_XXXXXX_000be884);
  local_1c = param_1;
  local_1b = param_2;
  write(DAT_00a6c89c,&local_1c,2);
  close(DAT_00a6c89c);
  strcpy(&DAT_00a6c850,__src);
  free(__src);
  FUN_0004d1d4(&DAT_00a6c850);
  return 1;
}

