// FUN_00ecfb14 @ 00ecfb14 size=84 calls_out=2 calls_in=1
// strings: chip_frequencies_mhz

void FUN_00ecfb14(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_14 [3];
  
  if (*param_1 == '\0') {
    FUN_00e60c64(param_1,"chip_frequencies_mhz",0x14,param_2,param_3);
    return;
  }
  local_14[0] = 10;
  FUN_0157c50c(local_14,0,0,param_2);
  return;
}

