// FUN_0001c8c0 @ 0001c8c0  size=180  callers=1
// program: bmminer


void FUN_0001c8c0(uint param_1)

{
  uint param4;
  char acStack_810 [2048];
  
  if (3 < DAT_00087bbc) {
    snprintf(acStack_810,0x800,"chain[%d] PIC jump to app\n",param_1);
    FUN_00032218(3,acStack_810,0);
  }
  FUN_0004be78(param_1 & 0xff);
  usleep(500000);
  param4 = FUN_0004bad0(param_1 & 0xff);
  if (3 < DAT_00087bbc) {
    snprintf(acStack_810,0x800,"Check chain[%d] PIC fw version=0x%02x\n",param_1,param4);
    FUN_00032218(3,acStack_810,0);
  }
  return;
}

