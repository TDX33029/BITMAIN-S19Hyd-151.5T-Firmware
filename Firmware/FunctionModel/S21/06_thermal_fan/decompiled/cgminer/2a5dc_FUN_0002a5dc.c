// FUN_0002a5dc @ 0002a5dc  size=60  callers=0
// program: cgminer


char * FUN_0002a5dc(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = strtol(param_1,(char **)0x0,10);
  if (uVar1 < 0xc9) {
    DAT_00068af8 = param_4;
    return (char *)0x0;
  }
  return "Invalid value passed to set temp cutoff";
}

