// FUN_011e9ecc @ 011e9ecc size=68 calls_out=2 calls_in=2
// strings: 

void FUN_011e9ecc(int param_1)

{
  FUN_011e4f30(param_1 + 0x150);
  FUN_011e792c(param_1);
  if (*(int *)(param_1 + 0x70) != 2) {
    FUN_011e792c();
  }
  if (*(int *)(param_1 + 0xe0) == 2) {
    return;
  }
  FUN_011e792c((int *)(param_1 + 0xe0));
  return;
}

