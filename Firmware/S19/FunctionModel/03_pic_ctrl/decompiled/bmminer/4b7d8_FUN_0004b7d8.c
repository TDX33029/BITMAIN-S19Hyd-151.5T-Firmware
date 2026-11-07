// FUN_0004b7d8 @ 0004b7d8  size=80  callers=1
// program: bmminer


undefined4 FUN_0004b7d8(int param_1)

{
  char acStack_808 [2052];
  
  snprintf(acStack_808,0x800,"%s: Bad pic param, input chain is %d\n","open_pic",param_1);
  FUN_00032218(0,acStack_808);
  return 0x80000201;
}

