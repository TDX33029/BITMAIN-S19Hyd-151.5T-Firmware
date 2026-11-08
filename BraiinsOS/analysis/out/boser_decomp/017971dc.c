// FUN_017971dc @ 017971dc size=88 calls_out=4 calls_in=2
// strings: 

void FUN_017971dc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01816d84();
  FUN_0178e1c4(param_1);
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_017844e8(*(undefined4 *)(param_1 + 0x18));
    }
  }
  FUN_01797b64(param_1 + 0x1c);
  return;
}

