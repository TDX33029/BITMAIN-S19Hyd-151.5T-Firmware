// FUN_00d864e8 @ 00d864e8 size=36 calls_out=2 calls_in=2
// strings: 

void FUN_00d864e8(uint *param_1)

{
  if ((*param_1 & 7) == 3) {
    FUN_00d87608(param_1 + 2);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_005f6588();
  return;
}

