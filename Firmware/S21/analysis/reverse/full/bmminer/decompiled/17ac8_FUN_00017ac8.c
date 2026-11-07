// FUN_00017ac8 @ 00017ac8  size=260  callers=1
// program: bmminer


int FUN_00017ac8(int param_1,uint param_2)

{
  int iVar1;
  undefined1 local_2014;
  byte local_2013;
  char acStack_2010 [8192];
  
  iVar1 = FUN_00017a34();
  if (0 < iVar1) {
    local_2014 = (undefined1)(1 << (param_2 & 0xff));
    local_2013 = 0;
    FUN_0006295c(*(undefined4 *)(&DAT_000bfb18 + param_1 * 8),&local_2014);
    if (4 < DAT_000be63c) {
      snprintf(acStack_2010,0x2000,"chain %d switch sel channel %d read back sel data 0x%0x",param_1
               ,param_2,(uint)local_2013);
      FUN_0004948c(4,acStack_2010,0);
    }
    return 0;
  }
  if (DAT_000be63c < 5) {
    return iVar1;
  }
  snprintf(acStack_2010,0x2000,"open switch fail on chain %d",param_1);
  FUN_0004948c(4,acStack_2010,0);
  return iVar1;
}

