// FUN_016254f8 @ 016254f8 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_016254f8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01626f40(*(undefined4 *)(param_1 + 0x20));
  }
  FUN_005c3320(param_1);
  return;
}

