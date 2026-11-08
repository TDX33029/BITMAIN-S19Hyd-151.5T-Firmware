// FUN_00657494 @ 00657494 size=112 calls_out=3 calls_in=0
// strings: 

void FUN_00657494(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_005c643c(param_1 + 0x18);
  FUN_00657574(param_1 + 0x30);
  if (*(int *)(param_1 + 0x50) != 0) {
    (**(code **)(*(int *)(param_1 + 0x50) + 0xc))(*(undefined4 *)(param_1 + 0x54));
  }
  piVar2 = *(int **)(param_1 + 0x58);
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
    FUN_015614d8(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
    return;
  }
  return;
}

