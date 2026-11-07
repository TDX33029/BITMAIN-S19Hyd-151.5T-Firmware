// FUN_01675310 @ 01675310 size=100 calls_out=1 calls_in=1
// strings: 

void FUN_01675310(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return;
  }
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    puVar2 = (undefined4 *)(param_1 + iVar4 * 0xc);
    piVar3 = (int *)*puVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670d04(*puVar2);
    }
    iVar4 = iVar5;
  } while (iVar5 != param_2);
  return;
}

