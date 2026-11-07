// FUN_018a860c @ 018a860c size=60 calls_out=3 calls_in=1
// strings: 

void FUN_018a860c(undefined2 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_0134aee0(*(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 4),1,2);
    return;
  case 1:
  case 2:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xd:
    return;
  default:
    FUN_0134bd64(*(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 4));
    return;
  case 4:
  case 9:
    FUN_018a8274(param_1 + 2);
    return;
  }
}

