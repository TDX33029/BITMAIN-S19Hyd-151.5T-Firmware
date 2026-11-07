// FUN_0002b7dc @ 0002b7dc  size=32  callers=1
// program: cgminer


bool FUN_0002b7dc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  FUN_00028c90();
  return *(int *)(param_1 + 0xdc) == 0;
}

