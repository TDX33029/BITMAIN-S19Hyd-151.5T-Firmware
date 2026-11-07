// FUN_0002c708 @ 0002c708  size=48  callers=0
// program: bmminer


char * FUN_0002c708(undefined4 param_1,uint *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_00042810();
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  pcVar1 = (char *)0x0;
  if (9999 < *param_2) {
    pcVar1 = "Value out of range";
  }
  return pcVar1;
}

