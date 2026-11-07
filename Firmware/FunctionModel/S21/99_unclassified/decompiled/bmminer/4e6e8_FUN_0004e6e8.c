// FUN_0004e6e8 @ 0004e6e8  size=160  callers=3
// program: bmminer


void FUN_0004e6e8(void)

{
  char local_2008 [8196];
  
  if (3 < DAT_000be63c) {
    builtin_strncpy(local_2008,"****power off hashboard****\n",0x1d);
    FUN_0004948c(3,local_2008,0);
  }
  if (DAT_000bfb48 == 0) {
    FUN_0002a6f0();
    FUN_0002a6f0(1);
    FUN_0002a6f0(2);
    FUN_0002a6f0(3);
    FUN_0004bf68(1000);
  }
  FUN_00024584();
  FUN_0006b3e0();
  return;
}

