// FUN_0003c16c @ 0003c16c  size=64  callers=0
// program: bmminer


void FUN_0003c16c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_10 [8];
  
  iVar2 = *(int *)(param_1 + 8);
  read(*(int *)(iVar2 + 4),auStack_10,8);
  iVar1 = *(int *)(iVar2 + 100) + -1;
  *(int *)(iVar2 + 100) = iVar1;
  if (iVar1 == 0) {
    FUN_0003c13c(iVar2 + -4);
  }
  return;
}

