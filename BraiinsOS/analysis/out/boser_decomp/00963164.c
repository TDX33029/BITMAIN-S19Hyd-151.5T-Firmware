// FUN_00963164 @ 00963164 size=44 calls_out=2 calls_in=15
// strings: 

void FUN_00963164(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    return;
  case 1:
    FUN_006a41c0(param_1 + 4);
    return;
  default:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  }
}

