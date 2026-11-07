// FUN_00ad16b8 @ 00ad16b8 size=128 calls_out=3 calls_in=3
// strings: 

void FUN_00ad16b8(int param_1)

{
  if (*(int *)(param_1 + 0x330) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x334));
  }
  if (*(int *)(param_1 + 0x33c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x340));
  }
  if (*(int *)(param_1 + 0x348) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34c));
  }
  if (*(int *)(param_1 + 0x2e0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2e4));
  }
  if (*(int *)(param_1 + 0x288) != 5 || *(int *)(param_1 + 0x28c) != 0) {
    FUN_00c48708(param_1 + 0x2cc);
  }
  FUN_00acd988(param_1);
  return;
}

