// FUN_00075bb0 @ 00075bb0  size=332  callers=1
// program: bmminer


int FUN_00075bb0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_s1;
  char acStack_810 [2048];
  uint local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = FUN_0006f8d0();
  if (iVar1 == 0) {
    local_10 = 0;
    if ((DAT_009451f4 == 0) && (local_c = FUN_00074e08(), local_c < 0)) {
      snprintf(acStack_810,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
               "bitmain_set_voltage");
      FUN_0004948c(0,acStack_810,0);
      return local_c;
    }
    local_10 = FUN_00076330(param_1);
    if (((int)local_10 < 0) || (0xff < (int)local_10)) {
      return -0x7ffffcff;
    }
    local_c = FUN_00072174(DAT_009451f0,local_10 & 0xff);
    uVar2 = FUN_00076960(local_10);
    DAT_0094538c = (float)(double)CONCAT44(extraout_s1,uVar2);
  }
  else {
    local_c = FUN_00070220(param_1);
  }
  return local_c;
}

