// FUN_0002725c @ 0002725c  size=244  callers=1
// program: bmminer


void FUN_0002725c(int param_1,undefined4 param_2,int param_3)

{
  int param6;
  int param4;
  char acStack_2028 [8196];
  
  param6 = FUN_00018b30();
  param4 = 0;
  do {
    param4 = param4 + 1;
    FUN_0004bf68(1000);
    if (4 < DAT_000be63c) {
      snprintf(acStack_2028,0x2000,
               "inc_freq to %d timeout spend %ds, wait target temp:%d failed, real_temp=%d",param_1,
               param4,param_3,param6);
      FUN_0004948c(4,acStack_2028,0);
    }
  } while (param4 != 3 && (param4 < 2 || param6 < param_3));
  FUN_000261a8(DAT_000be614,DAT_008c7044,param_1,param_2,1000,0,0,0);
  FUN_0004bf68(2000);
  return;
}

