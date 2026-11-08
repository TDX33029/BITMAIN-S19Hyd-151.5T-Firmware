// FUN_00d66570 @ 00d66570 size=36 calls_out=2 calls_in=2
// strings: 

void FUN_00d66570(uint *param_1)

{
  if ((*param_1 & 7) == 3) {
    FUN_00d66698(param_1 + 2);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_005f6588();
  return;
}

