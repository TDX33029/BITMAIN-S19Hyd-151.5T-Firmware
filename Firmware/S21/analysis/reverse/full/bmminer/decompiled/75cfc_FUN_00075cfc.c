// FUN_00075cfc @ 00075cfc  size=192  callers=0
// program: bmminer


int FUN_00075cfc(undefined1 param_1)

{
  int iVar1;
  char acStack_80c [2048];
  int local_c;
  
  local_c = 0;
  if ((DAT_009451f4 == 0) && (local_c = FUN_00074e08(), local_c < 0)) {
    snprintf(acStack_80c,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_set_voltage_by_n");
    FUN_0004948c(0,acStack_80c,0);
    return local_c;
  }
  iVar1 = FUN_00072174(DAT_009451f0,param_1);
  return iVar1;
}

