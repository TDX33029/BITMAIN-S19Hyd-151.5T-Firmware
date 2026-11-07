// FUN_00074c9c @ 00074c9c  size=204  callers=3
// program: bmminer


int FUN_00074c9c(undefined1 *param_1)

{
  char acStack_80c [2048];
  int local_c;
  
  local_c = 0;
  if ((DAT_009451f4 == 0) && (local_c = FUN_00074e08(), local_c < 0)) {
    snprintf(acStack_80c,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_power_is_calibrated");
    FUN_0004948c(0,acStack_80c,0);
    return local_c;
  }
  if (-1 < local_c) {
    if (param_1 != (undefined1 *)0x0) {
      *param_1 = DAT_00945200;
    }
    local_c = 0;
  }
  return local_c;
}

