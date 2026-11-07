// FUN_00034fdc @ 00034fdc  size=64  callers=0
// program: bmminer


void FUN_00034fdc(char *param_1)

{
  char acStack_18 [20];
  
  snprintf(acStack_18,0x10,"cg@%s",param_1);
  prctl(0xf,acStack_18,0,0,0);
  return;
}

