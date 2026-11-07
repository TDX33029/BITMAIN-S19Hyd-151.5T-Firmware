// FUN_00017754 @ 00017754  size=64  callers=1
// program: bmminer


int FUN_00017754(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    iVar1 = FUN_000462cc(0xff,param_1,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
    usleep(1000);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

