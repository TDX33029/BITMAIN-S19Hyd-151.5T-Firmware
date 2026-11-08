// FUN_016526a4 @ 016526a4 size=112 calls_out=3 calls_in=0
// strings: 

void FUN_016526a4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_005c643c(param_1 + 0x18);
  FUN_01652784(param_1 + 0x30);
  if (*(int *)(param_1 + 0x68) != 0) {
    (**(code **)(*(int *)(param_1 + 0x68) + 0xc))(*(undefined4 *)(param_1 + 0x6c));
  }
  piVar2 = *(int **)(param_1 + 0x70);
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
    FUN_015614d8(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
    return;
  }
  return;
}

