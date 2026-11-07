// FUN_007aabe4 @ 007aabe4 size=280 calls_out=3 calls_in=5
// strings: 

undefined1 FUN_007aabe4(int param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 8) != 2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar1 = iVar1 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x30))(iVar1,param_1);
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    if ((*(uint *)(param_1 + 0x20) & 3) == 2) {
      FUN_007a8040(param_1 + 0x28);
    }
    else if (*(uint *)(param_1 + 0x20) == 0) {
      FUN_006472c4(param_1 + 0x30);
    }
    else {
      if (*(char *)(param_1 + 0x28) != '\x06') {
        FUN_006472c4();
      }
      if (*(int *)(param_1 + 0x40) != -0x80000000) {
        if (*(int *)(param_1 + 0x40) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
        }
        if ((*(uint *)(param_1 + 0x4c) & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x50));
        }
      }
    }
  }
  if (*(uint *)(param_1 + 8) != 2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar1 = iVar1 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x34))(iVar1,param_1);
  }
  return DAT_018dd947;
}

