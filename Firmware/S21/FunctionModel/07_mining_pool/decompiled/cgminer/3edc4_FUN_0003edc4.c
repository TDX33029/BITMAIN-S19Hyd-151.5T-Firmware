// FUN_0003edc4 @ 0003edc4  size=96  callers=2
// program: cgminer


char * FUN_0003edc4(undefined4 param_1)

{
  char *pcVar1;
  undefined4 local_14 [2];
  
  local_14[0] = 0;
  pcVar1 = (char *)FUN_0003e99c(param_1,local_14);
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
    if (*pcVar1 != '-') break;
    pcVar1 = (char *)FUN_0003ea84(pcVar1,param_1,local_14);
  }
  return pcVar1;
}

