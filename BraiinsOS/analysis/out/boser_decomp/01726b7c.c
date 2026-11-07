// FUN_01726b7c @ 01726b7c size=80 calls_out=2 calls_in=1
// strings: 

void FUN_01726b7c(int *param_1)

{
  if (*param_1 != 5) {
    switch(*param_1) {
    case 0:
    case 1:
    case 2:
      FUN_019bb7e0(param_1[1],param_1[2]);
      return;
    case 3:
      FUN_0187266c((char)param_1[1],param_1[2]);
      return;
    default:
      return;
    }
  }
  if (param_1[1] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[1],param_1[2]);
  return;
}

