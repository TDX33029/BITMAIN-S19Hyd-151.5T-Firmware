// FUN_000114a8 @ 000114a8  size=148  callers=0
// program: monitor-ipsig


undefined4 FUN_000114a8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 5;
  iVar3 = 0;
  do {
    iVar1 = FUN_00010e1c();
    if (iVar1 == 0) {
      iVar3 = iVar3 + 1;
      usleep(20000);
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (iVar3 != 5) {
    return 0;
  }
  FUN_00010da0(0);
  while (iVar2 = FUN_00010e1c(), iVar2 == 0) {
    usleep(1000);
  }
  iVar2 = 5;
  do {
    FUN_00010da0(1);
    usleep(100000);
    FUN_00010da0(0);
    usleep(100000);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 1;
}

