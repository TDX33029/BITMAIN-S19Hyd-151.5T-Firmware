// FUN_000742c0 @ 000742c0  size=476  callers=0
// program: bmminer


int FUN_000742c0(void)

{
  int iVar1;
  char local_80c [2048];
  int local_c;
  
  local_c = 0;
  if ((DAT_009451f4 == 0) && (local_c = FUN_00074e08(), local_c < 0)) {
    snprintf(local_80c,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_get_power_status_1");
    FUN_0004948c(0,local_80c,0);
    return local_c;
  }
  iVar1 = FUN_0006f8d0();
  if (iVar1 == 0) {
    iVar1 = FUN_0006f958();
    if (iVar1 == 0) {
      local_c = FUN_00072c38(DAT_009451f0);
    }
    else {
      local_c = FUN_00072e08(DAT_009451f0);
    }
  }
  else {
    local_c = FUN_00071f1c(DAT_009451f0);
    if (local_c != 0) {
      builtin_strncpy(local_80c,"can nont get power status\n",0x1b);
      FUN_0004948c(0,local_80c,0);
      return local_c;
    }
  }
  if (local_c == -0x7ffffd00) {
    builtin_strncpy(local_80c,"can nont get power status\n",0x1b);
    FUN_0004948c(0,local_80c,0);
  }
  return local_c;
}

