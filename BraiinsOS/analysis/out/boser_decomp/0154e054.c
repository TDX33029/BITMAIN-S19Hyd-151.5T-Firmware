// FUN_0154e054 @ 0154e054 size=212 calls_out=8 calls_in=5
// strings: 

void FUN_0154e054(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0141fb8c();
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_014fdb74();
  }
  FUN_0154f974(param_1 + 0x68);
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_014fdb74();
  }
  FUN_0154f9c4(param_1 + 0x74);
  FUN_0154f9c4(param_1 + 0x80);
  FUN_0154f9c4(param_1 + 0x8c);
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_0154fa14();
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_0154fa44();
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_0154fa44();
  }
  piVar2 = *(int **)(param_1 + 100);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155b5cc();
    }
  }
  FUN_014fd8cc(param_1 + 0x98);
  return;
}

