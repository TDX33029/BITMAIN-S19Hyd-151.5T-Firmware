// FUN_00074714 @ 00074714  size=296  callers=0
// program: bmminer


int FUN_00074714(void)

{
  char cVar1;
  char acStack_80c [2048];
  int local_c;
  
  local_c = 0;
  if ((DAT_009451f4 == 0) && (local_c = FUN_00074e08(), local_c < 0)) {
    snprintf(acStack_80c,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_get_power_input_status");
    FUN_0004948c(0,acStack_80c,0);
    return local_c;
  }
  cVar1 = FUN_0006f958();
  if (cVar1 == '\x01') {
    local_c = FUN_000731e8(DAT_009451f0);
    if (local_c == -0x7ffffd00) {
      snprintf(acStack_80c,0x800,"can nont get power input status; ret = 0x%x\n",0x80000300);
      FUN_0004948c(0,acStack_80c,0);
      local_c = -1;
    }
  }
  else {
    local_c = -1;
  }
  return local_c;
}

