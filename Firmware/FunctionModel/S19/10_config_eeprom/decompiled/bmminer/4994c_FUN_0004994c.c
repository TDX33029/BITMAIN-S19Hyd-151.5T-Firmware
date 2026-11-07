// FUN_0004994c @ 0004994c  size=80  callers=1
// program: bmminer


undefined4 FUN_0004994c(int param_1)

{
  char acStack_808 [2052];
  
  snprintf(acStack_808,0x800,"%s: Bad eeprom param, input chain is %d\n","eeprom_open",param_1);
  FUN_00032218(0,acStack_808);
  return 0x80000101;
}

