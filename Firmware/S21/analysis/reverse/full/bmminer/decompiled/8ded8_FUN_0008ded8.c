// FUN_0008ded8 @ 0008ded8  size=180  callers=1
// program: bmminer


void FUN_0008ded8(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  *(undefined4 *)(param_1 + 0x434) = 0;
  *(undefined4 *)(param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 0x430) = 0;
  memset((void *)(param_1 + 0x28),0,0x401);
  if (*(int *)(param_1 + 0x440) != 0) {
    FUN_000947ac(*(undefined4 *)(param_1 + 0x440));
  }
  *(undefined4 *)(param_1 + 0x440) = 0;
  return;
}

