// FUN_0165541c @ 0165541c size=52 calls_out=1 calls_in=1
// strings: 

void FUN_0165541c(undefined4 *param_1)

{
  switch(*param_1) {
  case 1:
  case 3:
    return;
  }
  if (param_1[1] == -0x80000000) {
    return;
  }
  FUN_0134bd64(param_1[1],param_1[2]);
  return;
}

