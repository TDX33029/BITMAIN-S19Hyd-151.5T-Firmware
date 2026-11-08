// FUN_0087cad0 @ 0087cad0 size=188 calls_out=4 calls_in=0
// strings: 

void FUN_0087cad0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  piVar2 = *(int **)(param_1 + 0x150);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f305c(*(undefined4 *)(param_1 + 0x150));
  }
  puVar6 = *(undefined4 **)(param_1 + 0x14c);
  uVar5 = *(undefined4 *)(param_1 + 0x148);
  pcVar4 = (code *)*puVar6;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar5);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_016d3fb4(uVar5);
  }
  FUN_007c94ec(param_1 + 0x38);
  if (*(int *)(param_1 + 0x130) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x134));
  }
  piVar2 = *(int **)(param_1 + 0x154);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008d559c(*(undefined4 *)(param_1 + 0x154));
    return;
  }
  return;
}

