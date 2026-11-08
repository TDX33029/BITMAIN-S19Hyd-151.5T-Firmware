// FUN_00042e9c @ 00042e9c  size=96  callers=2
// program: bmminer


char * FUN_00042e9c(undefined4 param_1)

{
  char *pcVar1;
  undefined4 local_14 [2];
  
  local_14[0] = 0;
  pcVar1 = (char *)FUN_00042a74(param_1,local_14);
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
    if (*pcVar1 != '-') break;
    pcVar1 = (char *)FUN_00042b5c(pcVar1,param_1,local_14);
  }
  return pcVar1;
}

