// FUN_00029c98 @ 00029c98  size=72  callers=0
// program: cgminer


char * FUN_00029c98(undefined4 param_1)

{
  char *pcVar1;
  
  DAT_00068af4 = 2;
  pcVar1 = (char *)FUN_0003e738(param_1,&DAT_00073f2c);
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  pcVar1 = (char *)0x0;
  if (9999 < DAT_00073f2c) {
    pcVar1 = "Value out of range";
  }
  return pcVar1;
}

