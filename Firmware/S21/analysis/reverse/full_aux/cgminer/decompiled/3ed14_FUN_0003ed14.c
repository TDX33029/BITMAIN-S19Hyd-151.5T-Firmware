// FUN_0003ed14 @ 0003ed14  size=88  callers=1
// program: cgminer


char * FUN_0003ed14(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0003e99c();
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
    if (*pcVar1 == '-') break;
    pcVar1 = (char *)FUN_0003ea84(pcVar1,param_1,param_2);
  }
  *param_2 = *param_2 + -1;
  return pcVar1 + 1;
}

