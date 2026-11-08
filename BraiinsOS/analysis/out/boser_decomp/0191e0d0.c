// FUN_0191e0d0 @ 0191e0d0 size=84 calls_out=2 calls_in=1
// strings: 

void FUN_0191e0d0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    FUN_01918228(param_1 + 2);
    return;
  }
  if (param_1[1] == -0x7ffffffe) {
    return;
  }
  iVar2 = 0;
  do {
    iVar1 = *(int *)((int)param_1 + iVar2 + 4);
    if (-0x7fffffff < iVar1) {
      FUN_0134bd64(iVar1,*(undefined4 *)((int)param_1 + iVar2 + 8));
    }
    iVar2 = iVar2 + 0x7c;
  } while (iVar2 != 0x2e8);
  return;
}

