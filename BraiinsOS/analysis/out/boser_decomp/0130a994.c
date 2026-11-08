// FUN_0130a994 @ 0130a994 size=156 calls_out=1 calls_in=1
// strings: 

void FUN_0130a994(int *param_1)

{
  if (*param_1 != 0) {
    FUN_0130f9ac(param_1 + 1);
  }
  if (param_1[4] != 0) {
    FUN_0130f9ac(param_1 + 5);
  }
  if (param_1[8] != 0) {
    FUN_0130f9ac(param_1 + 9);
  }
  if (param_1[0xc] != 0) {
    FUN_0130f9ac(param_1 + 0xd);
  }
  if (param_1[0x10] != 0) {
    FUN_0130f9ac(param_1 + 0x11);
  }
  if (param_1[0x14] != 0) {
    FUN_0130f9ac(param_1 + 0x15);
  }
  if (param_1[0x18] == 0) {
    return;
  }
  FUN_0130f9ac(param_1 + 0x19);
  return;
}

