// FUN_011818f4 @ 011818f4 size=80 calls_out=1 calls_in=1
// strings: 

void FUN_011818f4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (piVar4 == (int *)0x0) {
    return;
  }
  FUN_0068ddcc(piVar4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar2 = *param_1;
  FUN_0068d48c(iVar2 + 0x20);
  if (*(int *)(iVar2 + 0x40) != 0) {
    (**(code **)(*(int *)(iVar2 + 0x40) + 0xc))(*(undefined4 *)(iVar2 + 0x44));
  }
  if (iVar2 == -1) {
    return;
  }
  piVar4 = (int *)(iVar2 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(iVar2);
    return;
  }
  return;
}

