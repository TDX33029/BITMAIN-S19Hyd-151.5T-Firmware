// FUN_013e75f4 @ 013e75f4 size=72 calls_out=3 calls_in=3
// strings: 

void FUN_013e75f4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 4);
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      FUN_013e0514(iVar3);
      FUN_013e704c(iVar3);
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x18));
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 != iVar1);
  }
  return;
}

