// FUN_0005ed04 @ 0005ed04  size=96  callers=2
// program: bmminer


char * FUN_0005ed04(undefined4 param_1)

{
  char *pcVar1;
  undefined4 local_14 [2];
  
  local_14[0] = 0;
  pcVar1 = (char *)FUN_0005e8dc(param_1,local_14);
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
    if (*pcVar1 != '-') break;
    pcVar1 = (char *)FUN_0005e9c4(pcVar1,param_1,local_14);
  }
  return pcVar1;
}

