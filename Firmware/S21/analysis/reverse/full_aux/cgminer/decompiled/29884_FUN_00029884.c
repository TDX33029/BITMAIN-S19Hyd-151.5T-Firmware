// FUN_00029884 @ 00029884  size=80  callers=0
// program: cgminer


char * FUN_00029884(undefined4 param_1,float *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0003e628();
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  if (125.0 <= *param_2) {
    pcVar1 = (char *)0x0;
    if (500.0 < *param_2) {
      pcVar1 = "Value out of range";
    }
    return pcVar1;
  }
  return "Value out of range";
}

