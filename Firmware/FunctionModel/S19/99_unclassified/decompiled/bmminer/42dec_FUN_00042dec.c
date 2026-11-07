// FUN_00042dec @ 00042dec  size=88  callers=1
// program: bmminer


char * FUN_00042dec(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_00042a74();
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
    if (*pcVar1 == '-') break;
    pcVar1 = (char *)FUN_00042b5c(pcVar1,param_1,param_2);
  }
  *param_2 = *param_2 + -1;
  return pcVar1 + 1;
}

