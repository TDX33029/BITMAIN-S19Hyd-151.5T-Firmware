// FUN_0007ba68 @ 0007ba68  size=132  callers=1
// program: bmminer


void FUN_0007ba68(int param_1)

{
  while (*(char *)(param_1 + *(int *)(param_1 + 0x10) + 8) != '\0') {
    FUN_0007b910(param_1,*(undefined1 *)(param_1 + *(int *)(param_1 + 0x10) + 8));
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  return;
}

