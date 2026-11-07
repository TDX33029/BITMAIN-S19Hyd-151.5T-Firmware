// FUN_000745c4 @ 000745c4  size=336  callers=0
// program: bmminer


longlong FUN_000745c4(void)

{
  char cVar1;
  char acStack_810 [2048];
  undefined8 local_10;
  
  local_10._0_4_ = 0;
  local_10._4_4_ = 0;
  if (DAT_009451f4 == 0) {
    local_10._0_4_ = FUN_00074e08();
    local_10._4_4_ = (int)local_10 >> 0x1f;
    if (local_10._4_4_ < 0) {
      snprintf(acStack_810,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
               "bitmain_clear_power_status");
      FUN_0004948c(0,acStack_810,0);
      return CONCAT44(local_10._4_4_,(int)local_10);
    }
  }
  cVar1 = FUN_0006f958();
  if (cVar1 == '\x01') {
    local_10 = FUN_0007238c(DAT_009451f0);
    if (local_10 == 0x80000300) {
      snprintf(acStack_810,0x800,"can nont clear power status; ret = 0x%x\n",0x80000300);
      FUN_0004948c(0,acStack_810,0);
      local_10 = -1;
    }
  }
  else {
    local_10 = -1;
  }
  return local_10;
}

