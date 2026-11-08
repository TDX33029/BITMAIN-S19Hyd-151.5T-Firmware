// FUN_006878dc @ 006878dc size=140 calls_out=4 calls_in=4
// strings: 

void FUN_006878dc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xb0) != '\0') {
    return;
  }
  FUN_00687a50(param_1);
  FUN_00645768(param_1 + 0x88);
  piVar2 = *(int **)(param_1 + 0xa8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078f120(*(undefined4 *)(param_1 + 0xa8));
  }
  piVar2 = *(int **)(param_1 + 0xac);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0f04(*(undefined4 *)(param_1 + 0xac));
    return;
  }
  return;
}

