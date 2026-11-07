// FUN_00fbc188 @ 00fbc188 size=80 calls_out=2 calls_in=2
// strings: 

void FUN_00fbc188(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
  case 1:
  case 7:
    break;
  default:
    return;
  case 4:
  case 5:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  case 9:
    FUN_00f80320(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  }
  if (*(int *)(param_1 + 4) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  return;
}

