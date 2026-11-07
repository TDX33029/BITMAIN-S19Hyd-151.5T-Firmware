// FUN_0170bc0c @ 0170bc0c size=88 calls_out=3 calls_in=3
// strings: 

void FUN_0170bc0c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_01443048(*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  }
  piVar2 = *(int **)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x14));
  }
  FUN_01705050(param_1);
  return;
}

