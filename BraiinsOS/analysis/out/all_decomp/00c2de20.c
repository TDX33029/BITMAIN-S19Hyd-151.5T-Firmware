// FUN_00c2de20 @ 00c2de20 size=92 calls_out=2 calls_in=1
// strings: 

void FUN_00c2de20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0xcc);
  iVar4 = *(int *)(param_1 + 0xd0);
  for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
    iVar1 = iVar3 + iVar2 * 0x20;
    if (*(int *)(iVar1 + 8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 0xc));
    }
  }
  if (*(int *)(param_1 + 200) != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  FUN_00c2db98(param_1);
  return;
}

