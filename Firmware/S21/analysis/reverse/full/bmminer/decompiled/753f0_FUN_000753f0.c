// FUN_000753f0 @ 000753f0  size=176  callers=0
// program: bmminer


int FUN_000753f0(void)

{
  int iVar1;
  char acStack_80c [2048];
  int local_c;
  
  local_c = 0;
  if ((DAT_009451f4 == 0) && (local_c = FUN_00074e08(), local_c < 0)) {
    snprintf(acStack_80c,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_power_release_date");
    FUN_0004948c(0,acStack_80c,0);
    return local_c;
  }
  iVar1 = FUN_0007270c(DAT_009451f0);
  return iVar1;
}

