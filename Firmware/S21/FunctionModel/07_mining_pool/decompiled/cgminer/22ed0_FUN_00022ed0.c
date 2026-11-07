// FUN_00022ed0 @ 00022ed0  size=64  callers=6
// program: cgminer


void FUN_00022ed0(char *param_1)

{
  char acStack_18 [20];
  
  snprintf(acStack_18,0x10,"cg@%s",param_1);
  prctl(0xf,acStack_18,0,0,0);
  return;
}

