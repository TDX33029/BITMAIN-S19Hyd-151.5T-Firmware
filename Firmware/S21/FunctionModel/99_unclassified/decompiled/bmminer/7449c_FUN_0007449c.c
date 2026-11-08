// FUN_0007449c @ 0007449c  size=296  callers=0
// program: bmminer


int FUN_0007449c(void)

{
  char cVar1;
  char acStack_80c [2048];
  int local_c;
  
  local_c = 0;
  if ((DAT_009451f4 == 0) && (local_c = FUN_00074e08(), local_c < 0)) {
    snprintf(acStack_80c,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_get_history_power_status");
    FUN_0004948c(0,acStack_80c,0);
    return local_c;
  }
  cVar1 = FUN_0006f958();
  if (cVar1 == '\x01') {
    local_c = FUN_00072ff8(DAT_009451f0);
    if (local_c == -0x7ffffd00) {
      snprintf(acStack_80c,0x800,"can nont get history power status; ret = 0x%x\n",0x80000300);
      FUN_0004948c(0,acStack_80c,0);
      local_c = -1;
    }
  }
  else {
    local_c = -1;
  }
  return local_c;
}

