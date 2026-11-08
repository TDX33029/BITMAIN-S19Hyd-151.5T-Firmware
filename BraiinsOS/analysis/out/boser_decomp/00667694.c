// FUN_00667694 @ 00667694 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_00667694(int param_1)

{
  if (*(int *)(param_1 + 0x20) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0134bd64(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
    return;
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),2,2);
  return;
}

