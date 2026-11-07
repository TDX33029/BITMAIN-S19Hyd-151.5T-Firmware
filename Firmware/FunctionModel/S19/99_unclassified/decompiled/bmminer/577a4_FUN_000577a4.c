// FUN_000577a4 @ 000577a4  size=72  callers=0
// program: bmminer


undefined4 FUN_000577a4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      FUN_000576b0(param_1,iVar2);
      iVar1 = iVar1 + 1;
      usleep(10000);
      iVar2 = iVar2 + param_2;
    } while (param_3 != iVar1);
  }
  return 0;
}

