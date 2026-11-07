// FUN_000685ac @ 000685ac  size=164  callers=0
// program: bmminer


undefined4 FUN_000685ac(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = FUN_0006856c(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x14) = uVar1;
  }
  else {
    uVar1 = FUN_000698f0(**(undefined4 **)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = uVar1;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14);
  }
  return uVar1;
}

