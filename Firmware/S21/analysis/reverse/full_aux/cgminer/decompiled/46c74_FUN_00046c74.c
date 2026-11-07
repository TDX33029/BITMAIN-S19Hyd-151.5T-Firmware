// FUN_00046c74 @ 00046c74  size=64  callers=4
// program: cgminer


void FUN_00046c74(int param_1)

{
  if (*(int *)(param_1 + 0x3c) == 0x100) {
    FUN_00048310(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    FUN_00048400(param_1 + 0x28);
    return;
  }
  FUN_00048400(param_1 + 0x28);
  return;
}

