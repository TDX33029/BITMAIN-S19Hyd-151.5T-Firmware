// FUN_00d8e39c @ 00d8e39c size=36 calls_out=2 calls_in=2
// strings: 

void FUN_00d8e39c(uint *param_1)

{
  if ((*param_1 & 3) == 2) {
    FUN_005f6588(param_1 + 2);
    return;
  }
  if (*param_1 == 3) {
    return;
  }
  FUN_00d8fd60();
  return;
}

