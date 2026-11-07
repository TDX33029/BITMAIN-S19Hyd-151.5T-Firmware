// FUN_0006a034 @ 0006a034  size=332  callers=3
// program: bmminer


int FUN_0006a034(uint param_1)

{
  int iVar1;
  char acStack_814 [2048];
  uint local_14;
  undefined2 local_10;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  
  local_c = 0;
  if (param_1 < 0x10) {
    if ((*(int *)(&DAT_009450f8 + param_1 * 8) == 0) || (*(int *)(&DAT_009450fc + param_1 * 8) == 0)
       ) {
      local_10 = 0;
      local_e = 10;
      local_d = (undefined1)param_1;
      local_14 = param_1;
      iVar1 = FUN_0006256c(&local_14);
      if (-1 < iVar1) {
        *(int *)(&DAT_009450f8 + param_1 * 8) = iVar1;
        *(undefined4 *)(&DAT_009450fc + param_1 * 8) = 1;
      }
    }
    else {
      iVar1 = *(int *)(&DAT_009450f8 + param_1 * 8);
    }
  }
  else {
    snprintf(acStack_814,0x800,"%s: Bad eeprom param, input chain is %d\n","eeprom_open",param_1);
    FUN_0004948c(0,acStack_814,0);
    iVar1 = -0x7ffffeff;
  }
  return iVar1;
}

