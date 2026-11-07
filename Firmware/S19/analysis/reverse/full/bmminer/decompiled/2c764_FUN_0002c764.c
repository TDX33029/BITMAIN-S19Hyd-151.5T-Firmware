// FUN_0002c764 @ 0002c764  size=52  callers=0
// program: bmminer


char * FUN_0002c764(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_00042810();
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  pcVar1 = (char *)0x0;
  if (0xfffe < *param_2 - 1U) {
    pcVar1 = "Value out of range";
  }
  return pcVar1;
}

