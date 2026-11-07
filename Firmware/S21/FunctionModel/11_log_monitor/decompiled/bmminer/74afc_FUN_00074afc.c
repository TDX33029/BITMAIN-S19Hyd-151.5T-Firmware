// FUN_00074afc @ 00074afc  size=416  callers=2
// program: bmminer


int FUN_00074afc(char param_1)

{
  int iVar1;
  char local_80c [2048];
  int local_c;
  
  local_c = 0;
  if ((DAT_009451f4 == 0) && (local_c = FUN_00074e08(), local_c < 0)) {
    snprintf(local_80c,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_set_watchdog");
    FUN_0004948c(0,local_80c,0);
    return local_c;
  }
  iVar1 = FUN_0006f8d0();
  if (iVar1 == 0) {
    if (param_1 == '\x01') {
      local_c = FUN_00072a18(DAT_009451f0,1);
    }
    else {
      local_c = FUN_00072a18(DAT_009451f0,0);
    }
  }
  else if (param_1 == '\x01') {
    local_c = FUN_00071d60(DAT_009451f0,1);
  }
  else {
    local_c = FUN_00071d60(DAT_009451f0,0);
  }
  if (local_c < 0) {
    builtin_strncpy(local_80c,"can nont set power watchdog\n",0x1d);
    FUN_0004948c(0,local_80c,0);
  }
  return local_c;
}

