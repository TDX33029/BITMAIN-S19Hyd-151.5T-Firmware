// FUN_012ee848 @ 012ee848 size=92 calls_out=5 calls_in=2
// strings: 

void FUN_012ee848(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x1d) == '\0') {
    FUN_012ea64c(*param_1,param_1[1]);
    FUN_005faf6c(param_1 + 2);
    return;
  }
  if (*(char *)(param_1 + 0x1d) == '\x03') {
    FUN_012c7f64(param_1 + 0x11);
    FUN_012e12ac(param_1 + 9);
    FUN_012e1310(param_1 + 4);
    FUN_005faf6c(param_1 + 3);
    *(undefined1 *)((int)param_1 + 0x76) = 0;
    return;
  }
  return;
}

