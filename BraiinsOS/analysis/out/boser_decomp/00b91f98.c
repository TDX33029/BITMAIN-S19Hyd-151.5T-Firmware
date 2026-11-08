// FUN_00b91f98 @ 00b91f98 size=108 calls_out=3 calls_in=0
// strings: 

void FUN_00b91f98(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    }
  }
  if ((*(int *)(param_1 + 0x28) == 1) &&
     (*(int *)(param_1 + 0x30) != 0 || *(int *)(param_1 + 0x34) != 0)) {
    FUN_00b91e68(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  }
  FUN_014b1410(param_1 + 0x40);
  return;
}

