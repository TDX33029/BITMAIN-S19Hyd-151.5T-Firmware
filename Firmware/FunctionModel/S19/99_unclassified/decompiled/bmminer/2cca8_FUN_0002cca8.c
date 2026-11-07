// FUN_0002cca8 @ 0002cca8  size=76  callers=0
// program: bmminer


char * FUN_0002cca8(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_00042810();
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  pcVar1 = (char *)0x0;
  if (param_4 < *param_2 || *param_2 < param_3) {
    pcVar1 = "Value out of range";
  }
  return pcVar1;
}

