// FUN_00029e00 @ 00029e00  size=48  callers=0
// program: cgminer


char * FUN_00029e00(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0003e738();
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  pcVar1 = (char *)0x0;
  if (0x35 < *param_2 - 0x16U) {
    pcVar1 = "Value out of range";
  }
  return pcVar1;
}

