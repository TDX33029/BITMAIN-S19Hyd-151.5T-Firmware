// FUN_00a59668 @ 00a59668 size=112 calls_out=4 calls_in=2
// strings: 

void FUN_00a59668(int param_1)

{
  if (*(char *)(param_1 + 0x7ac) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0xb0) == '\x04') {
    FUN_00a59444(param_1 + 0xe8);
    if (*(int *)(param_1 + 0xb8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbc));
    }
  }
  else if (*(char *)(param_1 + 0xb0) == '\x03') {
    FUN_00a58ae8(param_1 + 0xb8);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
  }
  FUN_00a3f9f0(param_1 + 8);
  return;
}

