// FUN_00eecae8 @ 00eecae8 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_00eecae8(uint *param_1)

{
  if ((*param_1 & 7) == 4) {
    return;
  }
  if (*param_1 != 3) {
    FUN_005f6588();
    return;
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_0165d624(param_1 + 3);
  return;
}

