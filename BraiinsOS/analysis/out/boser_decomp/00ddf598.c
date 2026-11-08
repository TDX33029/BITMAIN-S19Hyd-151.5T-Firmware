// FUN_00ddf598 @ 00ddf598 size=36 calls_out=2 calls_in=1
// strings: 

void FUN_00ddf598(uint *param_1)

{
  if ((*param_1 & 7) == 4) {
    return;
  }
  if (*param_1 == 3) {
    FUN_00d84ea4(param_1 + 2);
    return;
  }
  FUN_005f6588();
  return;
}

