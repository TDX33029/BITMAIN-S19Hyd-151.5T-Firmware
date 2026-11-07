// FUN_00020c94 @ 00020c94  size=32  callers=1
// program: cgminer


undefined4 FUN_00020c94(int param_1)

{
  undefined4 uVar1;
  
  if (**(char **)(param_1 + 0x260) == '\0') {
    uVar1 = FUN_0001f2cc(*(undefined4 *)(param_1 + 0x24c));
    return uVar1;
  }
  return 1;
}

