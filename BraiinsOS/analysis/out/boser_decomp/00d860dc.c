// FUN_00d860dc @ 00d860dc size=60 calls_out=1 calls_in=3
// strings: 

void FUN_00d860dc(int *param_1)

{
  if (*param_1 != 2 || param_1[1] != 0) {
    FUN_019bb7e0(param_1[0x12],param_1[0x13]);
  }
  if (param_1[0x16] == 2 && param_1[0x17] == 0) {
    return;
  }
  FUN_019bb7e0(param_1[0x48],param_1[0x49]);
  return;
}

