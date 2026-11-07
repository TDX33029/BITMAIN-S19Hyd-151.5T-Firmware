// FUN_00d79d28 @ 00d79d28 size=256 calls_out=7 calls_in=3
// strings: 

void FUN_00d79d28(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x23c)) {
  case 0:
    FUN_00d824a4(param_1 + 0x180);
    if (*(int *)(param_1 + 0x158) == -0x80000000 || *(int *)(param_1 + 0x158) == 0) {
      if (*(int *)(param_1 + 0x164) == -0x80000000 || *(int *)(param_1 + 0x164) == 0)
      goto LAB_00d79d8c;
LAB_00d79e20:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x168));
      if (*(int *)(param_1 + 0x170) == -0x80000000 || *(int *)(param_1 + 0x170) == 0)
      goto LAB_00d79d9c;
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x15c));
      if (*(int *)(param_1 + 0x164) != -0x80000000 && *(int *)(param_1 + 0x164) != 0)
      goto LAB_00d79e20;
LAB_00d79d8c:
      if (*(int *)(param_1 + 0x170) == -0x80000000 || *(int *)(param_1 + 0x170) == 0)
      goto LAB_00d79d9c;
    }
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x174));
LAB_00d79d9c:
    FUN_00d81034(param_1);
    FUN_00d8256c(param_1 + 0x1c8);
    return;
  default:
    goto switchD_00d79d44_caseD_1;
  case 3:
    FUN_00d79f50(param_1 + 0x248);
    break;
  case 4:
    FUN_00d8109c(param_1 + 0x248);
    break;
  case 5:
    FUN_00d81464(param_1 + 0x248);
    break;
  case 6:
    FUN_00d8109c(param_1 + 0x248);
  }
  if (*(char *)(param_1 + 0x23d) != '\0') {
    FUN_00d824a4(param_1 + 500);
    FUN_00d8256c(param_1 + 0x1e0);
  }
  *(undefined4 *)(param_1 + 0x23d) = 0;
switchD_00d79d44_caseD_1:
  return;
}

