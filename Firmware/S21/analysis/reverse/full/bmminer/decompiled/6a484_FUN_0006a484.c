// FUN_0006a484 @ 0006a484  size=536  callers=1
// program: bmminer


int FUN_0006a484(uint param_1,char param_2,int param_3,uint param_4)

{
  int iVar1;
  char acStack_814 [2051];
  byte local_11;
  int local_10;
  uint local_c;
  
  local_10 = 0;
  local_c = 0;
  if (param_1 < 0x10) {
    if ((*(int *)(&DAT_009450fc + param_1 * 8) == 0) &&
       (local_10 = FUN_0006a034(param_1), local_10 < 0)) {
      snprintf(acStack_814,0x800,"%s: auto exec eeprom_open, but chain %d open eeprom failed\n",
               "eeprom_read",param_1);
      FUN_0004948c(0,acStack_814,0);
      return local_10;
    }
    for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
      local_11 = (char)local_c + param_2;
      local_10 = FUN_00062a08(*(undefined4 *)(&DAT_009450f8 + param_1 * 8),&local_11,1,
                              param_3 + local_c,1,1);
      if (local_10 != 1) {
        snprintf(acStack_814,0x800,"fail to read eeprom by iic, chain: %d, addr: %d\n",param_1,
                 (uint)local_11);
        FUN_0004948c(0,acStack_814,0);
        return -0x7fffff00;
      }
      local_10 = 1;
    }
    usleep(500000);
    iVar1 = 0;
  }
  else {
    snprintf(acStack_814,0x800,"%s: Bad eeprom param, input chain is %d\n","eeprom_read",param_1);
    FUN_0004948c(0,acStack_814,0);
    iVar1 = -0x7ffffeff;
  }
  return iVar1;
}

