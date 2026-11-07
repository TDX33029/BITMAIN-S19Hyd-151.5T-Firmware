// FUN_0006a180 @ 0006a180  size=240  callers=0
// program: bmminer


void FUN_0006a180(uint param_1)

{
  char acStack_808 [2048];
  
  if (param_1 < 0x10) {
    if ((*(int *)(&DAT_009450f8 + param_1 * 8) != 0) || (*(int *)(&DAT_009450fc + param_1 * 8) != 0)
       ) {
      FUN_00062814(*(undefined4 *)(&DAT_009450f8 + param_1 * 8));
      *(undefined4 *)(&DAT_009450f8 + param_1 * 8) = 0;
      *(undefined4 *)(&DAT_009450fc + param_1 * 8) = 0;
    }
  }
  else {
    snprintf(acStack_808,0x800,"%s: Bad eeprom param, input chain is %d\n","eeprom_close",param_1);
    FUN_0004948c(0,acStack_808,0);
  }
  return;
}

