// FUN_014fb344 @ 014fb344 size=56 calls_out=1 calls_in=2
// strings: 

void FUN_014fb344(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_01139b38(*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_01139b38(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  return;
}

