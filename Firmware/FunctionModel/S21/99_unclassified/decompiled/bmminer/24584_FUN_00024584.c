// FUN_00024584 @ 00024584  size=120  callers=8
// program: bmminer


void FUN_00024584(void)

{
  char local_2008 [8196];
  
  if (3 < DAT_000be63c) {
    builtin_strncpy(local_2008,"power off\n",0xb);
    FUN_0004948c(3,local_2008,0);
  }
  FUN_00064e24();
  sleep(1);
  DAT_000c0418 = 0;
  return;
}

