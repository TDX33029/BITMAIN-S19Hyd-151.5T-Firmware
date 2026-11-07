// FUN_01655520 @ 01655520 size=52 calls_out=1 calls_in=1
// strings: 

void FUN_01655520(undefined4 *param_1)

{
  switch(*param_1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    return;
  }
  if (param_1[1] == -0x80000000) {
    return;
  }
  FUN_0134bd64(param_1[1],param_1[2]);
  return;
}

