// FUN_00d79ec8 @ 00d79ec8 size=136 calls_out=2 calls_in=0
// strings: 

void FUN_00d79ec8(int param_1)

{
  if (*(int *)(param_1 + 0x158) == -0x80000000 || *(int *)(param_1 + 0x158) == 0) {
    if (*(int *)(param_1 + 0x164) != -0x80000000 && *(int *)(param_1 + 0x164) != 0) {
LAB_00d79f24:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x168));
      if (*(int *)(param_1 + 0x170) != -0x80000000 && *(int *)(param_1 + 0x170) != 0)
      goto LAB_00d79f3c;
      goto LAB_00d79f00;
    }
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x15c));
    if (*(int *)(param_1 + 0x164) != -0x80000000 && *(int *)(param_1 + 0x164) != 0)
    goto LAB_00d79f24;
  }
  if (*(int *)(param_1 + 0x170) != -0x80000000 && *(int *)(param_1 + 0x170) != 0) {
LAB_00d79f3c:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x174));
    FUN_00d81034(param_1);
    return;
  }
LAB_00d79f00:
  FUN_00d81034(param_1);
  return;
}

