// FUN_00e82e8c @ 00e82e8c size=364 calls_out=3 calls_in=2
// strings: 

void FUN_00e82e8c(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x186)) {
  case 3:
    FUN_00e83070(param_1 + 0x188);
    goto LAB_00e82fa8;
  case 4:
    if ((*(char *)(param_1 + 0x194) == '\x03') && (*(int *)(param_1 + 0x18c) != 0)) {
      FUN_00e43e74(*(int *)(param_1 + 0x18c),*(undefined4 *)(param_1 + 400),1);
    }
    goto LAB_00e82f68;
  case 5:
    if ((*(char *)(param_1 + 0x194) == '\x03') && (*(int *)(param_1 + 0x18c) != 0)) {
      FUN_00e43e74(*(int *)(param_1 + 0x18c),*(undefined4 *)(param_1 + 400),1);
    }
    break;
  case 6:
    if ((*(char *)(param_1 + 0x198) == '\x03') && (*(int *)(param_1 + 400) != 0)) {
      FUN_00e43e74(*(int *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194),1);
    }
    if (*(int *)(param_1 + 0x150) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x154));
    }
    break;
  default:
    goto switchD_00e82eac_default;
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x11c));
  }
LAB_00e82f68:
  if (*(int *)(param_1 + 0x68) == -0x80000000 || *(int *)(param_1 + 0x68) == 0) {
    if (*(int *)(param_1 + 0x90) == -0x80000000 || *(int *)(param_1 + 0x90) == 0) goto LAB_00e82f88;
LAB_00e82fcc:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x94));
    if (*(int *)(param_1 + 0xb8) != -0x80000000 && *(int *)(param_1 + 0xb8) != 0) goto LAB_00e82fe4;
LAB_00e82f98:
    if (*(int *)(param_1 + 0xe0) != -0x80000000 && *(int *)(param_1 + 0xe0) != 0) {
LAB_00e82ffc:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe4));
    }
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x6c));
    if (*(int *)(param_1 + 0x90) != -0x80000000 && *(int *)(param_1 + 0x90) != 0) goto LAB_00e82fcc;
LAB_00e82f88:
    if (*(int *)(param_1 + 0xb8) == -0x80000000 || *(int *)(param_1 + 0xb8) == 0) goto LAB_00e82f98;
LAB_00e82fe4:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbc));
    if (*(int *)(param_1 + 0xe0) != -0x80000000 && *(int *)(param_1 + 0xe0) != 0) goto LAB_00e82ffc;
  }
LAB_00e82fa8:
  *(undefined1 *)(param_1 + 0x185) = 0;
switchD_00e82eac_default:
  return;
}

