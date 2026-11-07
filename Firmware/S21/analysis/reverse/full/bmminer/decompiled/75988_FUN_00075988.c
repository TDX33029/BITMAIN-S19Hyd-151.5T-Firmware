// FUN_00075988 @ 00075988  size=216  callers=0
// program: bmminer


int FUN_00075988(void)

{
  char acStack_80c [2048];
  int local_c;
  
  local_c = 0;
  if (DAT_009451fc == 0) {
    if ((DAT_009451f4 == 0) && (local_c = FUN_00074e08(), local_c < 0)) {
      snprintf(acStack_80c,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
               "bitmain_get_fw_version");
      FUN_0004948c(0,acStack_80c,0);
      return local_c;
    }
    local_c = FUN_0007127c(DAT_009451f0);
  }
  else {
    local_c = DAT_009451fc;
  }
  return local_c;
}

