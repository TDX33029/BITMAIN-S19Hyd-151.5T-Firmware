// FUN_00f862b8 @ 00f862b8 size=92 calls_out=3 calls_in=1
// strings: 

void FUN_00f862b8(undefined4 *param_1)

{
  switch(*param_1) {
  case 1:
    FUN_019bb7e0(param_1[1],param_1[2]);
    FUN_00f86328(param_1 + 4);
    return;
  case 2:
    FUN_019bb7e0(param_1[1],param_1[2]);
    return;
  case 3:
    return;
  }
  if (*(char *)(param_1 + 2) == '\x06') {
    return;
  }
  FUN_00e0febc(param_1 + 2);
  return;
}

