// FUN_0003ed6c @ 0003ed6c  size=88  callers=1
// program: cgminer


char * FUN_0003ed6c(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0003ea84();
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
    if (*pcVar1 == '-') break;
    pcVar1 = (char *)FUN_0003ea84(pcVar1,param_2,param_3);
  }
  *param_3 = *param_3 + -1;
  return pcVar1 + 1;
}

