// FUN_0004229c @ 0004229c  size=52  callers=0
// program: bmminer


char * FUN_0004229c(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0005e678();
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  pcVar1 = (char *)0x0;
  if (0xfffe < *param_2 - 1U) {
    pcVar1 = "Value out of range";
  }
  return pcVar1;
}

