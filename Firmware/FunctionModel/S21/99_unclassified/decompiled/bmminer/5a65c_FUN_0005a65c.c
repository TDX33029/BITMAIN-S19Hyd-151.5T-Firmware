// FUN_0005a65c @ 0005a65c  size=152  callers=1
// program: bmminer


void FUN_0005a65c(void)

{
  char local_2008 [8192];
  
  if (4 < DAT_000be63c) {
    builtin_strncpy(local_2008,"[DEBUG] Clear stats.\n",0x16);
    FUN_0004948c(4,local_2008,0);
  }
  if ((DAT_00944b84 == 0) || (*(int *)(DAT_00944b84 + 4) == 0)) {
    if (3 < DAT_000be63c) {
      FUN_00059598();
      return;
    }
  }
  else {
    (**(code **)(*(int *)(DAT_00944b84 + 4) + 0xc))();
  }
  return;
}

