// FUN_00075a60 @ 00075a60  size=328  callers=1
// program: bmminer


int FUN_00075a60(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_s1;
  double dVar3;
  char local_80c [2048];
  int local_c;
  
  local_c = 0;
  iVar1 = FUN_0006f8d0();
  if (iVar1 == 0) {
    if ((DAT_009451f4 == 0) && (local_c = FUN_00074e08(), local_c < 0)) {
      snprintf(local_80c,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
               "bitmain_get_voltage");
      FUN_0004948c(0,local_80c,0);
      return local_c;
    }
    local_c = FUN_00071fa8(DAT_009451f0);
    if (local_c < 0) {
      builtin_strncpy(local_80c,"can nont get voltage\n",0x16);
      FUN_0004948c(0,local_80c,0);
    }
    else {
      uVar2 = FUN_00076900(local_c);
      dVar3 = (double)CONCAT44(extraout_s1,uVar2) * 100.0;
      local_c = (uint)(0.0 < dVar3) * (int)(longlong)dVar3;
    }
  }
  else {
    local_c = FUN_000703f8();
  }
  return local_c;
}

