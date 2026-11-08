// FUN_0002982c @ 0002982c  size=80  callers=0
// program: cgminer


char * FUN_0002982c(undefined4 param_1,float *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0003e628();
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  if (100.0 <= *param_2) {
    pcVar1 = (char *)0x0;
    if (250.0 < *param_2) {
      pcVar1 = "Value out of range";
    }
    return pcVar1;
  }
  return "Value out of range";
}

