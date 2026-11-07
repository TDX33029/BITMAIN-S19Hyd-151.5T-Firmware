// FUN_00047288 @ 00047288  size=96  callers=1
// program: bmminer


undefined4 FUN_00047288(void)

{
  char local_808 [2048];
  
  if (DAT_0050f5e0 == 0) {
    builtin_strncpy(local_808,"please init platform first!!\n",0x1e);
    FUN_00032218(0,local_808,0);
    return 0xffffffff;
  }
  return 0;
}

