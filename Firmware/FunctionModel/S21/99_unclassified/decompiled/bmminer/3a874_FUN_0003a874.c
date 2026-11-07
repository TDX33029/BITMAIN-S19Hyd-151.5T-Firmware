// FUN_0003a874 @ 0003a874  size=80  callers=1
// program: bmminer


bool FUN_0003a874(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = write(*(int *)(param_1 + 100),
                (void *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20)),
                *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x20));
  if (0 < (int)uVar1) {
    uVar3 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = uVar3 + uVar1;
    *(uint *)(param_1 + 0x24) =
         *(int *)(param_1 + 0x24) + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar3,uVar1);
  }
  piVar2 = __errno_location();
  return *piVar2 != 0x20;
}

