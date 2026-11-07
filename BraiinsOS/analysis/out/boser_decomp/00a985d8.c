// FUN_00a985d8 @ 00a985d8 size=68 calls_out=3 calls_in=0
// strings: 

void FUN_00a985d8(int param_1)

{
  if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
  }
  if (*(undefined1 **)(param_1 + 0x1c) == &DAT_80000004) {
    FUN_0185401c(*(undefined1 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    return;
  }
  FUN_009200d0();
  return;
}

