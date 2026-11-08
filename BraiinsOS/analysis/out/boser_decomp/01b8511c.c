// FUN_01b8511c @ 01b8511c size=84 calls_out=0 calls_in=2
// strings: 

bool FUN_01b8511c(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 1) {
    if (*(int *)(param_1 + 0x40) == 2) {
      return true;
    }
    if (*(int *)(param_1 + 0x1c) == 1) {
      return *(int *)(param_1 + 0x18) != 0;
    }
  }
  return false;
}

