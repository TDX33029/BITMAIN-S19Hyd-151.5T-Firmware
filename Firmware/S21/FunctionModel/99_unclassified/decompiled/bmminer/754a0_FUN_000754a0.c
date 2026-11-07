// FUN_000754a0 @ 000754a0  size=184  callers=0
// program: bmminer


int FUN_000754a0(void)

{
  char acStack_80c [2048];
  int local_c;
  
  DAT_009451f4 = 0;
  local_c = 0;
  local_c = FUN_00074e08();
  if (local_c < 0) {
    snprintf(acStack_80c,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "power_need_open");
    FUN_0004948c(0,acStack_80c,0);
  }
  else {
    local_c = DAT_009451f8;
  }
  return local_c;
}

