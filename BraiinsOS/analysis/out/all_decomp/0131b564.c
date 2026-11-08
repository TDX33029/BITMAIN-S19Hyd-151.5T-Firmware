// FUN_0131b564 @ 0131b564 size=108 calls_out=3 calls_in=0
// strings: 

void FUN_0131b564(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  FUN_0131b81c(&local_20);
  if (local_20 == 4) {
    FUN_0130ff78(param_2);
    FUN_01310d1c(&local_20,param_2,param_3);
    if (local_20 == 4) {
      *param_1 = 4;
      return;
    }
  }
  *param_1 = local_20;
  param_1[1] = iStack_1c;
  param_1[2] = iStack_18;
  return;
}

