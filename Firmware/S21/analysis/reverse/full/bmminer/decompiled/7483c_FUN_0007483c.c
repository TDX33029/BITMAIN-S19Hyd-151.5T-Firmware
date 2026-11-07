// FUN_0007483c @ 0007483c  size=264  callers=0
// program: bmminer


int FUN_0007483c(void)

{
  char acStack_80c [2048];
  int local_c;
  
  local_c = 0;
  if ((DAT_009451f4 == 0) && (local_c = FUN_00074e08(), local_c < 0)) {
    snprintf(acStack_80c,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_get_power_enable_status");
    FUN_0004948c(0,acStack_80c,0);
    return local_c;
  }
  local_c = FUN_000733e8(DAT_009451f0);
  if (local_c == -0x7ffffd00) {
    snprintf(acStack_80c,0x800,"can nont get power enable status; ret = 0x%x\n",0x80000300);
    FUN_0004948c(0,acStack_80c,0);
    local_c = -1;
  }
  return local_c;
}

