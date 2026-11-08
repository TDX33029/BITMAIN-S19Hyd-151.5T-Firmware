// FUN_00d5020c @ 00d5020c size=160 calls_out=1 calls_in=5
// strings: 

void FUN_00d5020c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x130) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x134));
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa4));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
  }
  if ((*(uint *)(param_1 + 0x20) & 0x7fffffff) == 0) {
    iVar1 = *(int *)(param_1 + 0x120);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
    iVar1 = *(int *)(param_1 + 0x120);
  }
  if (iVar1 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x124));
  }
  if (*(ushort *)(param_1 + 0x198) < 5) {
    return;
  }
  *(undefined2 *)(param_1 + 0x19a) = 0;
  return;
}

