// FUN_0003db58 @ 0003db58  size=184  callers=0
// program: bmminer


undefined4 FUN_0003db58(int *param_1)

{
  char acStack_810 [2052];
  
  if (4 < DAT_00087bbc) {
    snprintf(acStack_810,0x800,"[DEBUG] Send work one chain, chain = %d.\n",*param_1);
    FUN_00032218(4,acStack_810,0);
  }
  if ((DAT_0050748c == 0) || (*(int *)(DAT_0050748c + 4) == 0)) {
    if (3 < DAT_00087bbc) {
      FUN_0003db14();
      return 0;
    }
  }
  else {
    (**(code **)(*(int *)(DAT_0050748c + 4) + 0x1c))(*param_1,param_1[2]);
    param_1[1] = 1;
  }
  return 0;
}

