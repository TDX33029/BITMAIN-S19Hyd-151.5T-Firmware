// FUN_000595dc @ 000595dc  size=184  callers=0
// program: bmminer


undefined4 FUN_000595dc(int *param_1)

{
  char acStack_2010 [8196];
  
  if (4 < DAT_000be63c) {
    snprintf(acStack_2010,0x2000,"[DEBUG] Send work one chain, chain = %d.\n",*param_1);
    FUN_0004948c(4,acStack_2010,0);
  }
  if ((DAT_00944b84 == 0) || (*(int *)(DAT_00944b84 + 4) == 0)) {
    if (3 < DAT_000be63c) {
      FUN_00059598();
      return 0;
    }
  }
  else {
    (**(code **)(*(int *)(DAT_00944b84 + 4) + 0x1c))(*param_1,param_1[2]);
    param_1[1] = 1;
  }
  return 0;
}

