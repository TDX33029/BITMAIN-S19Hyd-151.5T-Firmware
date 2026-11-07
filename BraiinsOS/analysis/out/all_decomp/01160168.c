// FUN_01160168 @ 01160168 size=104 calls_out=2 calls_in=2
// strings: 

void FUN_01160168(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  while (iVar5 != param_2) {
    puVar4 = (undefined4 *)(param_1 + iVar5 * 0x18);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011e0b70(*puVar4);
    }
    FUN_0115ccf0(puVar4 + 1);
    iVar5 = iVar5 + 1;
  }
  return;
}

