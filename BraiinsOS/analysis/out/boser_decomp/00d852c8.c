// FUN_00d852c8 @ 00d852c8 size=36 calls_out=2 calls_in=2
// strings: 

void FUN_00d852c8(uint *param_1)

{
  if ((*param_1 & 7) == 3) {
    FUN_005f6588(param_1 + 2);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_00d860dc();
  return;
}

