// FUN_00057754 @ 00057754  size=80  callers=1
// program: bmminer


undefined4 FUN_00057754(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00067190(0x100);
  if (iVar1 != 0) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      FUN_000576b0(param_1,iVar3);
      iVar2 = iVar2 + 1;
      usleep(10000);
      iVar3 = iVar3 + param_2;
    } while (iVar2 != iVar1);
  }
  return 0;
}

