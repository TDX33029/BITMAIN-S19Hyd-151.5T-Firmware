// FUN_00668de4 @ 00668de4 size=68 calls_out=2 calls_in=3
// strings: 

void FUN_00668de4(int param_1)

{
  FUN_0067e460(param_1 + 0x60);
  if (*(undefined1 **)(param_1 + 8) != &DAT_3b9aca00) {
    FUN_00668c84(*(undefined4 *)(param_1 + 0x10));
  }
  if (*(undefined1 **)(param_1 + 0x30) == &DAT_3b9aca00) {
    return;
  }
  FUN_00668c84(*(undefined4 *)(param_1 + 0x38));
  return;
}

