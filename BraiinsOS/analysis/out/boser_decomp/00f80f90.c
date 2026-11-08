// FUN_00f80f90 @ 00f80f90 size=64 calls_out=2 calls_in=2
// strings: 

void FUN_00f80f90(int param_1)

{
  if (*(char *)(param_1 + 0x4a0) == '\0') {
    FUN_00ebabdc(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x4a0) == '\x03') {
    FUN_00f84d1c(param_1 + 0x148);
    *(undefined2 *)(param_1 + 0x4a1) = 0;
    return;
  }
  return;
}

