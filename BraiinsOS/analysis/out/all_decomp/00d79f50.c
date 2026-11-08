// FUN_00d79f50 @ 00d79f50 size=364 calls_out=4 calls_in=1
// strings: 

void FUN_00d79f50(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x418)) {
  case 0:
    if (*(int *)(param_1 + 0x158) == -0x80000000 || *(int *)(param_1 + 0x158) == 0) {
      if (*(int *)(param_1 + 0x164) == -0x80000000 || *(int *)(param_1 + 0x164) == 0)
      goto LAB_00d79fac;
LAB_00d7a0b4:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x168));
      if (*(int *)(param_1 + 0x170) == -0x80000000 || *(int *)(param_1 + 0x170) == 0)
      goto LAB_00d79fbc;
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x15c));
      if (*(int *)(param_1 + 0x164) != -0x80000000 && *(int *)(param_1 + 0x164) != 0)
      goto LAB_00d7a0b4;
LAB_00d79fac:
      if (*(int *)(param_1 + 0x170) == -0x80000000 || *(int *)(param_1 + 0x170) == 0)
      goto LAB_00d79fbc;
    }
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x174));
LAB_00d79fbc:
    FUN_00d81034(param_1);
    FUN_00d7fdfc(param_1 + 0x180);
    return;
  default:
    return;
  case 3:
    FUN_00d7a194(param_1 + 0x420);
    break;
  case 4:
    FUN_00d7fdfc(param_1 + 0x420);
    break;
  case 5:
    FUN_00d7fdfc(param_1 + 0x420);
    break;
  case 6:
    FUN_00d7fdfc(param_1 + 0x420);
  }
  if (*(char *)(param_1 + 0x419) != '\0') {
    FUN_00d7fdfc(param_1 + 0xa08);
  }
  *(undefined1 *)(param_1 + 0x419) = 0;
  if (*(int *)(param_1 + 1000) == -0x80000000 || *(int *)(param_1 + 1000) == 0) {
    if (*(int *)(param_1 + 0x3f4) == -0x80000000 || *(int *)(param_1 + 0x3f4) == 0)
    goto LAB_00d7a040;
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3ec));
    if (*(int *)(param_1 + 0x3f4) == -0x80000000 || *(int *)(param_1 + 0x3f4) == 0)
    goto LAB_00d7a040;
  }
  thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3f8));
LAB_00d7a040:
  if (*(int *)(param_1 + 0x400) == -0x80000000 || *(int *)(param_1 + 0x400) == 0) {
    FUN_00d81034(param_1 + 0x290);
    return;
  }
  thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x404));
  FUN_00d81034(param_1 + 0x290);
  return;
}

