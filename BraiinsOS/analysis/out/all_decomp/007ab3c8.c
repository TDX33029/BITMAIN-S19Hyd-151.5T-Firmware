// FUN_007ab3c8 @ 007ab3c8 size=252 calls_out=1 calls_in=4
// strings: 

undefined1 FUN_007ab3c8(int param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 8) != 2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar1 = iVar1 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x30))(iVar1,param_1);
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    if (*(int *)(param_1 + 0x24) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x30));
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x38));
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x40));
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

