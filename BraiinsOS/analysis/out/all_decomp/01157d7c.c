// FUN_01157d7c @ 01157d7c size=140 calls_out=4 calls_in=80
// strings: 

void FUN_01157d7c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x58) != '\x06') {
    FUN_01157e90();
  }
  FUN_01157f54(param_1 + 0x20);
  piVar2 = *(int **)(param_1 + 0x70);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
  }
  piVar2 = *(int **)(param_1 + 0x78);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
  }
  FUN_0115842c(param_1);
  return;
}

