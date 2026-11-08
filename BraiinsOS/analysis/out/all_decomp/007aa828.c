// FUN_007aa828 @ 007aa828 size=204 calls_out=2 calls_in=5
// strings: 

undefined1 FUN_007aa828(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 8) != 2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar1 = iVar1 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x30))(iVar1,param_1);
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    iVar2 = *(int *)(param_1 + 0x30) + 1;
    iVar1 = *(int *)(param_1 + 0x2c);
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      FUN_007b3cd4(iVar1);
      iVar1 = iVar1 + 0x18;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
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

