// FUN_0004c4e4 @ 0004c4e4  size=64  callers=0
// program: bmminer


void FUN_0004c4e4(char *param_1)

{
  char acStack_18 [20];
  
  snprintf(acStack_18,0x10,"cg@%s",param_1);
  prctl(0xf,acStack_18,0,0,0);
  return;
}

