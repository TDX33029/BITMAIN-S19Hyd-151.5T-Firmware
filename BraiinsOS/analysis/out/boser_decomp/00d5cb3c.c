// FUN_00d5cb3c @ 00d5cb3c size=112 calls_out=3 calls_in=0
// strings: 

void FUN_00d5cb3c(int *param_1)

{
  if (param_1[0x1a] != 5 || param_1[0x1b] != 0) {
    FUN_00d5cac0(param_1 + 0x1a);
  }
  FUN_012840cc(param_1 + 0x38);
  FUN_012840cc(param_1 + 0x3c);
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_005f6588(param_1);
  }
  if (param_1[0x42] == 3 && param_1[0x43] == 0) {
    return;
  }
  FUN_005f6588(param_1 + 0x42);
  return;
}

