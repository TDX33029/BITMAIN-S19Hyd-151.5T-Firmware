// FUN_01560278 @ 01560278 size=152 calls_out=5 calls_in=2
// strings: 

void FUN_01560278(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (*(char *)(iVar4 + 0x58) != '\x06') {
    FUN_00e0febc();
  }
  FUN_015603a8(iVar4 + 0x20);
  piVar2 = *(int **)(iVar4 + 0x70);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(iVar4 + 0x70),*(undefined4 *)(iVar4 + 0x74));
  }
  piVar2 = *(int **)(iVar4 + 0x78);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(iVar4 + 0x78),*(undefined4 *)(iVar4 + 0x7c));
  }
  FUN_0126e254(iVar4);
  thunk_FUN_01be4678(iVar4);
  return;
}

