// FUN_00d43034 @ 00d43034 size=80 calls_out=2 calls_in=2
// strings: 

void FUN_00d43034(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
  case 1:
  case 7:
    if (*(int *)(param_1 + 4) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      return;
    }
switchD_00d43050_caseD_2:
    return;
  case 2:
  case 3:
  case 6:
  case 8:
    goto switchD_00d43050_caseD_2;
  case 4:
  case 5:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  case 9:
    FUN_01443048(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  default:
    return;
  }
}

