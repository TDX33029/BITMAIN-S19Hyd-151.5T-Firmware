// FUN_00042270 @ 00042270  size=44  callers=0
// program: bmminer


char * FUN_00042270(undefined4 param_1,uint *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0005e678();
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  pcVar1 = (char *)0x0;
  if (100 < *param_2) {
    pcVar1 = "Value out of range";
  }
  return pcVar1;
}

