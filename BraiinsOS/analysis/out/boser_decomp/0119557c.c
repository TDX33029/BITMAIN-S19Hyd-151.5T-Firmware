// FUN_0119557c @ 0119557c size=100 calls_out=3 calls_in=2
// strings: 

void FUN_0119557c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_1 + 0x40) == 2) {
    return;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  puVar6 = *(undefined4 **)(param_1 + 0x34);
  pcVar4 = (code *)*puVar6;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar5);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_01be4678(uVar5);
  }
  FUN_01195624(param_1);
  FUN_01195664((int *)(param_1 + 0x40));
  piVar2 = *(int **)(param_1 + 0x184);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x184));
  }
  piVar2 = *(int **)(param_1 + 0x188);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x18c));
    return;
  }
  return;
}

