// FUN_0001c4f4 @ 0001c4f4  size=168  callers=3
// program: bmminer


void FUN_0001c4f4(undefined4 param_1,uint param_2,int param_3)

{
  char local_808 [2052];
  
  if ((param_2 & 3) == 0) {
    if (param_3 == 0) {
      FUN_0001c444();
      return;
    }
    FUN_0001c394(param_1,param_2,1);
    return;
  }
  if (DAT_00087bbc < 4) {
    return;
  }
  builtin_strncpy(local_808,"EEPROM write data is not 32-bit aligned, FAIL ENC/DEC!\n",0x38);
  FUN_00032218(3,local_808,0);
  return;
}

