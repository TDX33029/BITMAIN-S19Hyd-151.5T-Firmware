// FUN_01ad3410 @ 01ad3410 size=52 calls_out=3 calls_in=9
// strings: 

void FUN_01ad3410(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
  case 1:
  case 2:
  case 6:
    return;
  case 3:
    FUN_0134bd64(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  case 4:
    FUN_00949b70(param_1 + 4);
    return;
  default:
    FUN_0196afa8(param_1 + 4);
    return;
  }
}

