// FUN_0004e788 @ 0004e788  size=116  callers=2
// program: bmminer


void FUN_0004e788(char *param_1)

{
  char acStack_2008 [8196];
  
  if (1 < DAT_000be63c) {
    snprintf(acStack_2008,0x2000,"%s: %s\n","stop_mining",param_1);
    FUN_0004948c(1,acStack_2008,0);
  }
  FUN_0004e6b0();
  FUN_0004e6e8();
  FUN_00065af4();
  FUN_00065b8c();
  FUN_0002ff68(1);
  return;
}

