// FUN_006453a0 @ 006453a0 size=280 calls_out=6 calls_in=2
// strings: 

void FUN_006453a0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xb0) != '\0') {
    return;
  }
  if ((9 < *(byte *)(param_1 + 0x6c)) && (*(int *)(param_1 + 0x74) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x70));
  }
  if (1 < *(byte *)(param_1 + 0x40)) {
    piVar2 = *(int **)(param_1 + 0x44);
    (**(code **)(*piVar2 + 0x10))(piVar2 + 3,piVar2[1],piVar2[2]);
    thunk_FUN_016d3fb4(piVar2);
  }
  (**(code **)(*(int *)(param_1 + 0x48) + 0x10))
            (param_1 + 0x54,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  (**(code **)(*(int *)(param_1 + 0x58) + 0x10))
            (param_1 + 100,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  FUN_01015c1c(param_1);
  iVar3 = *(int *)(param_1 + 0x80);
  if (iVar3 != 0) {
    FUN_0148eea4(iVar3);
    thunk_FUN_016d3fb4(iVar3);
  }
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

