// FUN_00d6f0a4 @ 00d6f0a4 size=52 calls_out=2 calls_in=2
// strings: 

void FUN_00d6f0a4(uint *param_1)

{
  if ((*param_1 & 7) == 3) {
    if (param_1[2] == 0) {
      return;
    }
    FUN_0165d624(param_1 + 3);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_005f6588();
  return;
}

