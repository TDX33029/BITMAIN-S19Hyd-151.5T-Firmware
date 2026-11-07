// FUN_0003c408 @ 0003c408  size=168  callers=0
// program: bmminer


void FUN_0003c408(void)

{
  char local_2008 [8196];
  
  if (DAT_00a4f7a8 != (void *)0x0) {
    free(DAT_00a4f7a8);
  }
  if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 5)) {
    return;
  }
  builtin_strncpy(local_2008,"httpserver6060 quit!\n",0x16);
  FUN_0004948c(5,local_2008,0);
  return;
}

