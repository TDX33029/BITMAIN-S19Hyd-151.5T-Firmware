// FUN_00077d6c @ 00077d6c  size=432  callers=0
// program: bmminer


int FUN_00077d6c(void)

{
  int iVar1;
  char local_80c [2048];
  int local_c;
  
  local_c = 0;
  if ((DAT_009451f4 == 0) && (local_c = FUN_00074e08(), local_c < 0)) {
    snprintf(local_80c,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_get_power_temp_fanspeed");
    FUN_0004948c(0,local_80c,0);
    return local_c;
  }
  iVar1 = FUN_0006f8d0();
  if ((iVar1 != 0) && (local_c = FUN_00071ce0(DAT_009451f0), local_c != 0)) {
    builtin_strncpy(local_80c,"can nont get power temp and fan speed\n",0x27);
    FUN_0004948c(0,local_80c,0);
    return local_c;
  }
  if (local_c == -0x7ffffd00) {
    builtin_strncpy(local_80c,"can nont get power temp and fan speed\n",0x27);
    FUN_0004948c(0,local_80c,0);
  }
  return local_c;
}

