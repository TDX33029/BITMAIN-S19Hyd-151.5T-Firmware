// FUN_00d6a3b8 @ 00d6a3b8 size=36 calls_out=2 calls_in=2
// strings: 

void FUN_00d6a3b8(uint *param_1)

{
  if ((*param_1 & 7) == 3) {
    FUN_00d6b0f4(param_1 + 2);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_005f6588();
  return;
}

