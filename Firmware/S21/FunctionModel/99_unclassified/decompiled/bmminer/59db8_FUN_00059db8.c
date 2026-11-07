// FUN_00059db8 @ 00059db8  size=152  callers=0
// program: bmminer


void FUN_00059db8(void)

{
  char local_2008 [8196];
  
  if ((DAT_00944b84 == 0) || (*(int *)(DAT_00944b84 + 4) == 0)) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2008,"Handle is NULL.\n",0x11);
      FUN_0004948c(3,local_2008,0);
      return;
    }
  }
  else if (*(int *)(DAT_00944b84 + 0x40) != 0) {
    (**(code **)(*(int *)(DAT_00944b84 + 4) + 0x14))();
  }
  return;
}

