// FUN_011ae014 @ 011ae014 size=132 calls_out=3 calls_in=2
// strings: 

void FUN_011ae014(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = *(int **)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013532e4(*(undefined4 *)(param_1 + 4));
  }
  piVar4 = (int *)(param_1 + 8);
  FUN_01351c48(piVar4);
  piVar2 = (int *)*piVar4;
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01353090(piVar4);
    return;
  }
  return;
}

