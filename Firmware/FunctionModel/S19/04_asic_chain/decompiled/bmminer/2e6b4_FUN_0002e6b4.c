// FUN_0002e6b4 @ 0002e6b4  size=180  callers=1
// program: bmminer


undefined4 FUN_0002e6b4(void)

{
  void *__ptr;
  int iVar1;
  undefined4 local_80c;
  char local_808 [2048];
  
  __ptr = (void *)FUN_0002e510(&local_80c);
  iVar1 = FUN_0002bb9c(__ptr,local_80c);
  if ((iVar1 != 0) && (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)))) {
    builtin_strncpy(local_808,"cgminer return err for this nonce!\n",0x24);
    FUN_00032218(3,local_808,0);
  }
  free(__ptr);
  return 1;
}

