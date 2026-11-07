// FUN_010e7350 @ 010e7350 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_010e7350(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
  case 1:
  case 7:
    if (*(int *)(param_1 + 4) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      return;
    }
switchD_010e736c_caseD_2:
    return;
  case 2:
  case 3:
  case 6:
  case 8:
    goto switchD_010e736c_caseD_2;
  case 4:
  case 5:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  case 9:
    FUN_00f80320(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  default:
    return;
  }
}

