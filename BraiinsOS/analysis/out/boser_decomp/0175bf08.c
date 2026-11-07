// FUN_0175bf08 @ 0175bf08 size=148 calls_out=6 calls_in=2
// strings: 

void FUN_0175bf08(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x128);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_017045b0(*(undefined4 *)(param_1 + 0x128));
    }
  }
  FUN_0177266c(param_1 + 0xb8);
  FUN_0175cb0c(param_1 + 0x70);
  FUN_01706d0c(param_1 + 0xfc);
  FUN_017044f0(param_1);
  piVar2 = *(int **)(param_1 + 0xd0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4));
    return;
  }
  return;
}

