// FUN_0191f100 @ 0191f100 size=152 calls_out=5 calls_in=1
// strings: 

void FUN_0191f100(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x30);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(*(undefined4 *)(param_1 + 0x30));
  }
  piVar2 = *(int **)(param_1 + 0x34);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
  }
  if ((*(char *)(param_1 + 0x1c) == '\0') && (*(int *)(param_1 + 0x20) != -0x80000000)) {
    FUN_0134bd64(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  FUN_01902274(param_1);
  FUN_0191f214(param_1 + 0x40);
  return;
}

