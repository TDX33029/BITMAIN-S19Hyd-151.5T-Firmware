// FUN_01506be4 @ 01506be4 size=80 calls_out=4 calls_in=0
// strings: 

void FUN_01506be4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0152aae0();
  FUN_014ffdfc(param_1 + 0x68);
  FUN_0152a0b4(param_1 + 0x30);
  piVar2 = *(int **)(param_1 + 0x60);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    return;
  }
  return;
}

