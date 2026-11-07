// FUN_00de4154 @ 00de4154 size=36 calls_out=2 calls_in=1
// strings: 

void FUN_00de4154(uint *param_1)

{
  if ((*param_1 & 7) == 4) {
    return;
  }
  if (*param_1 == 3) {
    FUN_00d87608(param_1 + 2);
    return;
  }
  FUN_005f6588();
  return;
}

