// FUN_0002433c @ 0002433c  size=180  callers=1
// program: bmminer


void FUN_0002433c(uint param_1)

{
  uint param4;
  char acStack_2010 [8192];
  
  if (3 < DAT_000be63c) {
    snprintf(acStack_2010,0x2000,"chain[%d] PIC jump to app\n",param_1);
    FUN_0004948c(3,acStack_2010,0);
  }
  FUN_0006e83c(param_1 & 0xff);
  usleep(500000);
  param4 = FUN_0006e5c4(param_1 & 0xff);
  if (3 < DAT_000be63c) {
    snprintf(acStack_2010,0x2000,"Check chain[%d] PIC fw version=0x%02x\n",param_1,param4);
    FUN_0004948c(3,acStack_2010,0);
  }
  return;
}

