// FUN_0079df64 @ 0079df64 size=136 calls_out=2 calls_in=0
// strings: 

void FUN_0079df64(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 300) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x130));
  }
  if ((*(uint *)(param_1 + 0x114) & 0x7fffffff) == 0) {
    iVar1 = *(int *)(param_1 + 0x138);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x118));
    iVar1 = *(int *)(param_1 + 0x138);
  }
  if (iVar1 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x13c));
  }
  if ((*(uint *)(param_1 + 0x120) & 0x7fffffff) == 0) {
    FUN_0076ee14(param_1);
    return;
  }
  thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x124));
  FUN_0076ee14(param_1);
  return;
}

