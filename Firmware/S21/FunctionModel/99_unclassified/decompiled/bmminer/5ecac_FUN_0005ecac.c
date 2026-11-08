// FUN_0005ecac @ 0005ecac  size=88  callers=1
// program: bmminer


char * FUN_0005ecac(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0005e9c4();
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
    if (*pcVar1 == '-') break;
    pcVar1 = (char *)FUN_0005e9c4(pcVar1,param_2,param_3);
  }
  *param_3 = *param_3 + -1;
  return pcVar1 + 1;
}

