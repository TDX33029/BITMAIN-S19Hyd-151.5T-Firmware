// FUN_018e39f0 @ 018e39f0 size=84 calls_out=3 calls_in=1
// strings: 

void FUN_018e39f0(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_0134aee0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1,2);
    return;
  case 1:
  case 2:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
    return;
  case 3:
  case 4:
  case 5:
  case 0xc:
  case 0xd:
    FUN_0134bd64(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  case 0xf:
    FUN_018e3a84(param_1 + 4);
    return;
  }
  if (*(int *)(param_1 + 4) == -0x80000000) {
    return;
  }
  FUN_0134bd64(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  return;
}

