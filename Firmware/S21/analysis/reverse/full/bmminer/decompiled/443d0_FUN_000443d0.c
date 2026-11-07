// FUN_000443d0 @ 000443d0  size=180  callers=1
// program: bmminer


undefined4 FUN_000443d0(void)

{
  void *__ptr;
  int iVar1;
  undefined4 local_200c;
  char local_2008 [8192];
  
  __ptr = (void *)FUN_0004422c(&local_200c);
  iVar1 = FUN_00041478(__ptr,local_200c);
  if ((iVar1 != 0) && (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (2 < DAT_000be644)))) {
    builtin_strncpy(local_2008,"cgminer return err for this nonce!\n",0x24);
    FUN_0004948c(3,local_2008,0);
  }
  free(__ptr);
  return 1;
}

