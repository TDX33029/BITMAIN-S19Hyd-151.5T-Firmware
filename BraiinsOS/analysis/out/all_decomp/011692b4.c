// FUN_011692b4 @ 011692b4 size=92 calls_out=5 calls_in=0
// strings: 

void FUN_011692b4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0115ccf0(param_1 + 0x60);
  FUN_011a4518(param_1);
  iVar3 = *(int *)(param_1 + 0x78);
  iVar2 = *(int *)(param_1 + 0x7c) + 1;
  iVar1 = iVar3;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_0115eb14(iVar1);
    iVar1 = iVar1 + 0x28;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  FUN_011a39dc(param_1 + 0x30);
  return;
}

